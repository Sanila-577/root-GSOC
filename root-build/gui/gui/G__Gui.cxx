// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Gui
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
#include "HelpText.h"
#include "TG3DLine.h"
#include "TGApplication.h"
#include "TGButton.h"
#include "TGButtonGroup.h"
#include "TGCanvas.h"
#include "TGClient.h"
#include "TGColorDialog.h"
#include "TGColorSelect.h"
#include "TGComboBox.h"
#include "TGCommandPlugin.h"
#include "TGDNDManager.h"
#include "TGDimension.h"
#include "TGDockableFrame.h"
#include "TGDoubleSlider.h"
#include "TGEventHandler.h"
#include "TGFSComboBox.h"
#include "TGFSContainer.h"
#include "TGFileBrowser.h"
#include "TGFileDialog.h"
#include "TGFont.h"
#include "TGFontDialog.h"
#include "TGFrame.h"
#include "TGGC.h"
#include "TGIcon.h"
#include "TGIdleHandler.h"
#include "TGImageMap.h"
#include "TGInputDialog.h"
#include "TGLabel.h"
#include "TGLayout.h"
#include "TGListBox.h"
#include "TGListTree.h"
#include "TGListView.h"
#include "TGMdi.h"
#include "TGMdiDecorFrame.h"
#include "TGMdiFrame.h"
#include "TGMdiMainFrame.h"
#include "TGMdiMenu.h"
#include "TGMenu.h"
#include "TGMimeTypes.h"
#include "TGMsgBox.h"
#include "TGNumberEntry.h"
#include "TGObject.h"
#include "TGPack.h"
#include "TGPasswdDialog.h"
#include "TGPicture.h"
#include "TGProgressBar.h"
#include "TGRedirectOutputGuard.h"
#include "TGResourcePool.h"
#include "TGScrollBar.h"
#include "TGShapedFrame.h"
#include "TGShutter.h"
#include "TGSimpleTable.h"
#include "TGSimpleTableInterface.h"
#include "TGSlider.h"
#include "TGSpeedo.h"
#include "TGSplitFrame.h"
#include "TGSplitter.h"
#include "TGStatusBar.h"
#include "TGString.h"
#include "TGTab.h"
#include "TGTable.h"
#include "TGTableCell.h"
#include "TGTableContainer.h"
#include "TGTableHeader.h"
#include "TGTableLayout.h"
#include "TGText.h"
#include "TGTextBuffer.h"
#include "TGTextEdit.h"
#include "TGTextEditDialogs.h"
#include "TGTextEditor.h"
#include "TGTextEntry.h"
#include "TGTextView.h"
#include "TGTextViewStream.h"
#include "TGToolBar.h"
#include "TGToolTip.h"
#include "TGTripleSlider.h"
#include "TGView.h"
#include "TGWidget.h"
#include "TGWindow.h"
#include "TGXYLayout.h"
#include "TGuiBuilder.h"
#include "TRootApplication.h"
#include "TRootBrowser.h"
#include "TRootBrowserLite.h"
#include "TRootCanvas.h"
#include "TRootContextMenu.h"
#include "TRootControlBar.h"
#include "TRootDialog.h"
#include "TRootEmbeddedCanvas.h"
#include "TRootGuiFactory.h"
#include "TRootHelpDialog.h"
#include "TVirtualDragManager.h"
#include "WidgetMessageTypes.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TGObject(void *p = nullptr);
   static void *newArray_TGObject(Long_t size, void *p);
   static void delete_TGObject(void *p);
   static void deleteArray_TGObject(void *p);
   static void destruct_TGObject(void *p);
   static void streamer_TGObject(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGObject*)
   {
      ::TGObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGObject", ::TGObject::Class_Version(), "TGObject.h", 21,
                  typeid(::TGObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGObject::Dictionary, isa_proxy, 16,
                  sizeof(::TGObject) );
      instance.SetNew(&new_TGObject);
      instance.SetNewArray(&newArray_TGObject);
      instance.SetDelete(&delete_TGObject);
      instance.SetDeleteArray(&deleteArray_TGObject);
      instance.SetDestructor(&destruct_TGObject);
      instance.SetStreamerFunc(&streamer_TGObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGClient(void *p = nullptr);
   static void *newArray_TGClient(Long_t size, void *p);
   static void delete_TGClient(void *p);
   static void deleteArray_TGClient(void *p);
   static void destruct_TGClient(void *p);
   static void streamer_TGClient(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGClient*)
   {
      ::TGClient *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGClient >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGClient", ::TGClient::Class_Version(), "TGClient.h", 37,
                  typeid(::TGClient), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGClient::Dictionary, isa_proxy, 16,
                  sizeof(::TGClient) );
      instance.SetNew(&new_TGClient);
      instance.SetNewArray(&newArray_TGClient);
      instance.SetDelete(&delete_TGClient);
      instance.SetDeleteArray(&deleteArray_TGClient);
      instance.SetDestructor(&destruct_TGClient);
      instance.SetStreamerFunc(&streamer_TGClient);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGClient*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGClient*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGClient*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGWindow(void *p = nullptr);
   static void *newArray_TGWindow(Long_t size, void *p);
   static void delete_TGWindow(void *p);
   static void deleteArray_TGWindow(void *p);
   static void destruct_TGWindow(void *p);
   static void streamer_TGWindow(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGWindow*)
   {
      ::TGWindow *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGWindow >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGWindow", ::TGWindow::Class_Version(), "TGWindow.h", 23,
                  typeid(::TGWindow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGWindow::Dictionary, isa_proxy, 16,
                  sizeof(::TGWindow) );
      instance.SetNew(&new_TGWindow);
      instance.SetNewArray(&newArray_TGWindow);
      instance.SetDelete(&delete_TGWindow);
      instance.SetDeleteArray(&deleteArray_TGWindow);
      instance.SetDestructor(&destruct_TGWindow);
      instance.SetStreamerFunc(&streamer_TGWindow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGWindow*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGWindow*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGWindow*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGUnknownWindowHandler(void *p);
   static void deleteArray_TGUnknownWindowHandler(void *p);
   static void destruct_TGUnknownWindowHandler(void *p);
   static void streamer_TGUnknownWindowHandler(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGUnknownWindowHandler*)
   {
      ::TGUnknownWindowHandler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGUnknownWindowHandler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGUnknownWindowHandler", ::TGUnknownWindowHandler::Class_Version(), "TGWindow.h", 141,
                  typeid(::TGUnknownWindowHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGUnknownWindowHandler::Dictionary, isa_proxy, 16,
                  sizeof(::TGUnknownWindowHandler) );
      instance.SetDelete(&delete_TGUnknownWindowHandler);
      instance.SetDeleteArray(&deleteArray_TGUnknownWindowHandler);
      instance.SetDestructor(&destruct_TGUnknownWindowHandler);
      instance.SetStreamerFunc(&streamer_TGUnknownWindowHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGUnknownWindowHandler*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGUnknownWindowHandler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGUnknownWindowHandler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TGDimension_Dictionary();
   static void TGDimension_TClassManip(TClass*);
   static void *new_TGDimension(void *p = nullptr);
   static void *newArray_TGDimension(Long_t size, void *p);
   static void delete_TGDimension(void *p);
   static void deleteArray_TGDimension(void *p);
   static void destruct_TGDimension(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDimension*)
   {
      ::TGDimension *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGDimension));
      static ::ROOT::TGenericClassInfo 
         instance("TGDimension", "TGDimension.h", 18,
                  typeid(::TGDimension), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGDimension_Dictionary, isa_proxy, 0,
                  sizeof(::TGDimension) );
      instance.SetNew(&new_TGDimension);
      instance.SetNewArray(&newArray_TGDimension);
      instance.SetDelete(&delete_TGDimension);
      instance.SetDeleteArray(&deleteArray_TGDimension);
      instance.SetDestructor(&destruct_TGDimension);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDimension*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGDimension*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGDimension*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGDimension_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TGDimension*>(nullptr))->GetClass();
      TGDimension_TClassManip(theClass);
   return theClass;
   }

   static void TGDimension_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TGPosition_Dictionary();
   static void TGPosition_TClassManip(TClass*);
   static void *new_TGPosition(void *p = nullptr);
   static void *newArray_TGPosition(Long_t size, void *p);
   static void delete_TGPosition(void *p);
   static void deleteArray_TGPosition(void *p);
   static void destruct_TGPosition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGPosition*)
   {
      ::TGPosition *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGPosition));
      static ::ROOT::TGenericClassInfo 
         instance("TGPosition", "TGDimension.h", 36,
                  typeid(::TGPosition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGPosition_Dictionary, isa_proxy, 0,
                  sizeof(::TGPosition) );
      instance.SetNew(&new_TGPosition);
      instance.SetNewArray(&newArray_TGPosition);
      instance.SetDelete(&delete_TGPosition);
      instance.SetDeleteArray(&deleteArray_TGPosition);
      instance.SetDestructor(&destruct_TGPosition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGPosition*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGPosition*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGPosition*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGPosition_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TGPosition*>(nullptr))->GetClass();
      TGPosition_TClassManip(theClass);
   return theClass;
   }

   static void TGPosition_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TGLongPosition_Dictionary();
   static void TGLongPosition_TClassManip(TClass*);
   static void *new_TGLongPosition(void *p = nullptr);
   static void *newArray_TGLongPosition(Long_t size, void *p);
   static void delete_TGLongPosition(void *p);
   static void deleteArray_TGLongPosition(void *p);
   static void destruct_TGLongPosition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLongPosition*)
   {
      ::TGLongPosition *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGLongPosition));
      static ::ROOT::TGenericClassInfo 
         instance("TGLongPosition", "TGDimension.h", 54,
                  typeid(::TGLongPosition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGLongPosition_Dictionary, isa_proxy, 0,
                  sizeof(::TGLongPosition) );
      instance.SetNew(&new_TGLongPosition);
      instance.SetNewArray(&newArray_TGLongPosition);
      instance.SetDelete(&delete_TGLongPosition);
      instance.SetDeleteArray(&deleteArray_TGLongPosition);
      instance.SetDestructor(&destruct_TGLongPosition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLongPosition*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGLongPosition*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGLongPosition*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGLongPosition_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TGLongPosition*>(nullptr))->GetClass();
      TGLongPosition_TClassManip(theClass);
   return theClass;
   }

   static void TGLongPosition_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TGInsets_Dictionary();
   static void TGInsets_TClassManip(TClass*);
   static void *new_TGInsets(void *p = nullptr);
   static void *newArray_TGInsets(Long_t size, void *p);
   static void delete_TGInsets(void *p);
   static void deleteArray_TGInsets(void *p);
   static void destruct_TGInsets(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGInsets*)
   {
      ::TGInsets *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGInsets));
      static ::ROOT::TGenericClassInfo 
         instance("TGInsets", "TGDimension.h", 72,
                  typeid(::TGInsets), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGInsets_Dictionary, isa_proxy, 0,
                  sizeof(::TGInsets) );
      instance.SetNew(&new_TGInsets);
      instance.SetNewArray(&newArray_TGInsets);
      instance.SetDelete(&delete_TGInsets);
      instance.SetDeleteArray(&deleteArray_TGInsets);
      instance.SetDestructor(&destruct_TGInsets);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGInsets*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGInsets*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGInsets*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGInsets_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TGInsets*>(nullptr))->GetClass();
      TGInsets_TClassManip(theClass);
   return theClass;
   }

   static void TGInsets_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TGRectangle_Dictionary();
   static void TGRectangle_TClassManip(TClass*);
   static void *new_TGRectangle(void *p = nullptr);
   static void *newArray_TGRectangle(Long_t size, void *p);
   static void delete_TGRectangle(void *p);
   static void deleteArray_TGRectangle(void *p);
   static void destruct_TGRectangle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGRectangle*)
   {
      ::TGRectangle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGRectangle));
      static ::ROOT::TGenericClassInfo 
         instance("TGRectangle", "TGDimension.h", 89,
                  typeid(::TGRectangle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGRectangle_Dictionary, isa_proxy, 0,
                  sizeof(::TGRectangle) );
      instance.SetNew(&new_TGRectangle);
      instance.SetNewArray(&newArray_TGRectangle);
      instance.SetDelete(&delete_TGRectangle);
      instance.SetDeleteArray(&deleteArray_TGRectangle);
      instance.SetDestructor(&destruct_TGRectangle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGRectangle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGRectangle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGRectangle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGRectangle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TGRectangle*>(nullptr))->GetClass();
      TGRectangle_TClassManip(theClass);
   return theClass;
   }

   static void TGRectangle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TGGC(void *p = nullptr);
   static void *newArray_TGGC(Long_t size, void *p);
   static void delete_TGGC(void *p);
   static void deleteArray_TGGC(void *p);
   static void destruct_TGGC(void *p);
   static void streamer_TGGC(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGGC*)
   {
      ::TGGC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGGC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGGC", ::TGGC::Class_Version(), "TGGC.h", 22,
                  typeid(::TGGC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGGC::Dictionary, isa_proxy, 16,
                  sizeof(::TGGC) );
      instance.SetNew(&new_TGGC);
      instance.SetNewArray(&newArray_TGGC);
      instance.SetDelete(&delete_TGGC);
      instance.SetDeleteArray(&deleteArray_TGGC);
      instance.SetDestructor(&destruct_TGGC);
      instance.SetStreamerFunc(&streamer_TGGC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGGC*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGGC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGGC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGGCPool(void *p);
   static void deleteArray_TGGCPool(void *p);
   static void destruct_TGGCPool(void *p);
   static void streamer_TGGCPool(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGGCPool*)
   {
      ::TGGCPool *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGGCPool >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGGCPool", ::TGGCPool::Class_Version(), "TGGC.h", 103,
                  typeid(::TGGCPool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGGCPool::Dictionary, isa_proxy, 16,
                  sizeof(::TGGCPool) );
      instance.SetDelete(&delete_TGGCPool);
      instance.SetDeleteArray(&deleteArray_TGGCPool);
      instance.SetDestructor(&destruct_TGGCPool);
      instance.SetStreamerFunc(&streamer_TGGCPool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGGCPool*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGGCPool*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGGCPool*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *FontMetrics_t_Dictionary();
   static void FontMetrics_t_TClassManip(TClass*);
   static void *new_FontMetrics_t(void *p = nullptr);
   static void *newArray_FontMetrics_t(Long_t size, void *p);
   static void delete_FontMetrics_t(void *p);
   static void deleteArray_FontMetrics_t(void *p);
   static void destruct_FontMetrics_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FontMetrics_t*)
   {
      ::FontMetrics_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::FontMetrics_t));
      static ::ROOT::TGenericClassInfo 
         instance("FontMetrics_t", "TGFont.h", 52,
                  typeid(::FontMetrics_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &FontMetrics_t_Dictionary, isa_proxy, 0,
                  sizeof(::FontMetrics_t) );
      instance.SetNew(&new_FontMetrics_t);
      instance.SetNewArray(&newArray_FontMetrics_t);
      instance.SetDelete(&delete_FontMetrics_t);
      instance.SetDeleteArray(&deleteArray_FontMetrics_t);
      instance.SetDestructor(&destruct_FontMetrics_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FontMetrics_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::FontMetrics_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::FontMetrics_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *FontMetrics_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::FontMetrics_t*>(nullptr))->GetClass();
      FontMetrics_t_TClassManip(theClass);
   return theClass;
   }

   static void FontMetrics_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *FontAttributes_t_Dictionary();
   static void FontAttributes_t_TClassManip(TClass*);
   static void *new_FontAttributes_t(void *p = nullptr);
   static void *newArray_FontAttributes_t(Long_t size, void *p);
   static void delete_FontAttributes_t(void *p);
   static void deleteArray_FontAttributes_t(void *p);
   static void destruct_FontAttributes_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FontAttributes_t*)
   {
      ::FontAttributes_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::FontAttributes_t));
      static ::ROOT::TGenericClassInfo 
         instance("FontAttributes_t", "TGFont.h", 61,
                  typeid(::FontAttributes_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &FontAttributes_t_Dictionary, isa_proxy, 0,
                  sizeof(::FontAttributes_t) );
      instance.SetNew(&new_FontAttributes_t);
      instance.SetNewArray(&newArray_FontAttributes_t);
      instance.SetDelete(&delete_FontAttributes_t);
      instance.SetDeleteArray(&deleteArray_FontAttributes_t);
      instance.SetDestructor(&destruct_FontAttributes_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FontAttributes_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::FontAttributes_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::FontAttributes_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *FontAttributes_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::FontAttributes_t*>(nullptr))->GetClass();
      FontAttributes_t_TClassManip(theClass);
   return theClass;
   }

   static void FontAttributes_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTextLayout(void *p = nullptr);
   static void *newArray_TGTextLayout(Long_t size, void *p);
   static void delete_TGTextLayout(void *p);
   static void deleteArray_TGTextLayout(void *p);
   static void destruct_TGTextLayout(void *p);
   static void streamer_TGTextLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTextLayout*)
   {
      ::TGTextLayout *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTextLayout >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTextLayout", ::TGTextLayout::Class_Version(), "TGFont.h", 106,
                  typeid(::TGTextLayout), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTextLayout::Dictionary, isa_proxy, 16,
                  sizeof(::TGTextLayout) );
      instance.SetNew(&new_TGTextLayout);
      instance.SetNewArray(&newArray_TGTextLayout);
      instance.SetDelete(&delete_TGTextLayout);
      instance.SetDeleteArray(&deleteArray_TGTextLayout);
      instance.SetDestructor(&destruct_TGTextLayout);
      instance.SetStreamerFunc(&streamer_TGTextLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTextLayout*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTextLayout*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTextLayout*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGFont(void *p);
   static void deleteArray_TGFont(void *p);
   static void destruct_TGFont(void *p);
   static void streamer_TGFont(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFont*)
   {
      ::TGFont *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGFont >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGFont", ::TGFont::Class_Version(), "TGFont.h", 140,
                  typeid(::TGFont), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGFont::Dictionary, isa_proxy, 16,
                  sizeof(::TGFont) );
      instance.SetDelete(&delete_TGFont);
      instance.SetDeleteArray(&deleteArray_TGFont);
      instance.SetDestructor(&destruct_TGFont);
      instance.SetStreamerFunc(&streamer_TGFont);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFont*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFont*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFont*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGFontPool(void *p);
   static void deleteArray_TGFontPool(void *p);
   static void destruct_TGFontPool(void *p);
   static void streamer_TGFontPool(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFontPool*)
   {
      ::TGFontPool *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGFontPool >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGFontPool", ::TGFontPool::Class_Version(), "TGFont.h", 217,
                  typeid(::TGFontPool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGFontPool::Dictionary, isa_proxy, 16,
                  sizeof(::TGFontPool) );
      instance.SetDelete(&delete_TGFontPool);
      instance.SetDeleteArray(&deleteArray_TGFontPool);
      instance.SetDestructor(&destruct_TGFontPool);
      instance.SetStreamerFunc(&streamer_TGFontPool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFontPool*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFontPool*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFontPool*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLayoutHints(void *p = nullptr);
   static void *newArray_TGLayoutHints(Long_t size, void *p);
   static void delete_TGLayoutHints(void *p);
   static void deleteArray_TGLayoutHints(void *p);
   static void destruct_TGLayoutHints(void *p);
   static void streamer_TGLayoutHints(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLayoutHints*)
   {
      ::TGLayoutHints *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLayoutHints >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGLayoutHints", ::TGLayoutHints::Class_Version(), "TGLayout.h", 50,
                  typeid(::TGLayoutHints), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLayoutHints::Dictionary, isa_proxy, 16,
                  sizeof(::TGLayoutHints) );
      instance.SetNew(&new_TGLayoutHints);
      instance.SetNewArray(&newArray_TGLayoutHints);
      instance.SetDelete(&delete_TGLayoutHints);
      instance.SetDeleteArray(&deleteArray_TGLayoutHints);
      instance.SetDestructor(&destruct_TGLayoutHints);
      instance.SetStreamerFunc(&streamer_TGLayoutHints);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLayoutHints*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGLayoutHints*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGLayoutHints*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGFrameElement(void *p = nullptr);
   static void *newArray_TGFrameElement(Long_t size, void *p);
   static void delete_TGFrameElement(void *p);
   static void deleteArray_TGFrameElement(void *p);
   static void destruct_TGFrameElement(void *p);
   static void streamer_TGFrameElement(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFrameElement*)
   {
      ::TGFrameElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGFrameElement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGFrameElement", ::TGFrameElement::Class_Version(), "TGLayout.h", 105,
                  typeid(::TGFrameElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGFrameElement::Dictionary, isa_proxy, 16,
                  sizeof(::TGFrameElement) );
      instance.SetNew(&new_TGFrameElement);
      instance.SetNewArray(&newArray_TGFrameElement);
      instance.SetDelete(&delete_TGFrameElement);
      instance.SetDeleteArray(&deleteArray_TGFrameElement);
      instance.SetDestructor(&destruct_TGFrameElement);
      instance.SetStreamerFunc(&streamer_TGFrameElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFrameElement*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFrameElement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFrameElement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLayoutManager(void *p);
   static void deleteArray_TGLayoutManager(void *p);
   static void destruct_TGLayoutManager(void *p);
   static void streamer_TGLayoutManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLayoutManager*)
   {
      ::TGLayoutManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLayoutManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGLayoutManager", ::TGLayoutManager::Class_Version(), "TGLayout.h", 135,
                  typeid(::TGLayoutManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLayoutManager::Dictionary, isa_proxy, 16,
                  sizeof(::TGLayoutManager) );
      instance.SetDelete(&delete_TGLayoutManager);
      instance.SetDeleteArray(&deleteArray_TGLayoutManager);
      instance.SetDestructor(&destruct_TGLayoutManager);
      instance.SetStreamerFunc(&streamer_TGLayoutManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLayoutManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGLayoutManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGLayoutManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGVerticalLayout(void *p);
   static void deleteArray_TGVerticalLayout(void *p);
   static void destruct_TGVerticalLayout(void *p);
   static void streamer_TGVerticalLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGVerticalLayout*)
   {
      ::TGVerticalLayout *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGVerticalLayout >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGVerticalLayout", ::TGVerticalLayout::Class_Version(), "TGLayout.h", 159,
                  typeid(::TGVerticalLayout), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGVerticalLayout::Dictionary, isa_proxy, 16,
                  sizeof(::TGVerticalLayout) );
      instance.SetDelete(&delete_TGVerticalLayout);
      instance.SetDeleteArray(&deleteArray_TGVerticalLayout);
      instance.SetDestructor(&destruct_TGVerticalLayout);
      instance.SetStreamerFunc(&streamer_TGVerticalLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGVerticalLayout*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGVerticalLayout*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGVerticalLayout*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGHorizontalLayout(void *p);
   static void deleteArray_TGHorizontalLayout(void *p);
   static void destruct_TGHorizontalLayout(void *p);
   static void streamer_TGHorizontalLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHorizontalLayout*)
   {
      ::TGHorizontalLayout *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHorizontalLayout >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGHorizontalLayout", ::TGHorizontalLayout::Class_Version(), "TGLayout.h", 187,
                  typeid(::TGHorizontalLayout), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHorizontalLayout::Dictionary, isa_proxy, 16,
                  sizeof(::TGHorizontalLayout) );
      instance.SetDelete(&delete_TGHorizontalLayout);
      instance.SetDeleteArray(&deleteArray_TGHorizontalLayout);
      instance.SetDestructor(&destruct_TGHorizontalLayout);
      instance.SetStreamerFunc(&streamer_TGHorizontalLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHorizontalLayout*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGHorizontalLayout*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGHorizontalLayout*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGRowLayout(void *p);
   static void deleteArray_TGRowLayout(void *p);
   static void destruct_TGRowLayout(void *p);
   static void streamer_TGRowLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGRowLayout*)
   {
      ::TGRowLayout *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGRowLayout >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGRowLayout", ::TGRowLayout::Class_Version(), "TGLayout.h", 207,
                  typeid(::TGRowLayout), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGRowLayout::Dictionary, isa_proxy, 16,
                  sizeof(::TGRowLayout) );
      instance.SetDelete(&delete_TGRowLayout);
      instance.SetDeleteArray(&deleteArray_TGRowLayout);
      instance.SetDestructor(&destruct_TGRowLayout);
      instance.SetStreamerFunc(&streamer_TGRowLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGRowLayout*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGRowLayout*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGRowLayout*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGColumnLayout(void *p);
   static void deleteArray_TGColumnLayout(void *p);
   static void destruct_TGColumnLayout(void *p);
   static void streamer_TGColumnLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGColumnLayout*)
   {
      ::TGColumnLayout *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGColumnLayout >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGColumnLayout", ::TGColumnLayout::Class_Version(), "TGLayout.h", 229,
                  typeid(::TGColumnLayout), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGColumnLayout::Dictionary, isa_proxy, 16,
                  sizeof(::TGColumnLayout) );
      instance.SetDelete(&delete_TGColumnLayout);
      instance.SetDeleteArray(&deleteArray_TGColumnLayout);
      instance.SetDestructor(&destruct_TGColumnLayout);
      instance.SetStreamerFunc(&streamer_TGColumnLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGColumnLayout*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGColumnLayout*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGColumnLayout*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMatrixLayout(void *p);
   static void deleteArray_TGMatrixLayout(void *p);
   static void destruct_TGMatrixLayout(void *p);
   static void streamer_TGMatrixLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMatrixLayout*)
   {
      ::TGMatrixLayout *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMatrixLayout >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMatrixLayout", ::TGMatrixLayout::Class_Version(), "TGLayout.h", 269,
                  typeid(::TGMatrixLayout), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMatrixLayout::Dictionary, isa_proxy, 16,
                  sizeof(::TGMatrixLayout) );
      instance.SetDelete(&delete_TGMatrixLayout);
      instance.SetDeleteArray(&deleteArray_TGMatrixLayout);
      instance.SetDestructor(&destruct_TGMatrixLayout);
      instance.SetStreamerFunc(&streamer_TGMatrixLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMatrixLayout*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMatrixLayout*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMatrixLayout*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGTileLayout(void *p);
   static void deleteArray_TGTileLayout(void *p);
   static void destruct_TGTileLayout(void *p);
   static void streamer_TGTileLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTileLayout*)
   {
      ::TGTileLayout *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTileLayout >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTileLayout", ::TGTileLayout::Class_Version(), "TGLayout.h", 303,
                  typeid(::TGTileLayout), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTileLayout::Dictionary, isa_proxy, 16,
                  sizeof(::TGTileLayout) );
      instance.SetDelete(&delete_TGTileLayout);
      instance.SetDeleteArray(&deleteArray_TGTileLayout);
      instance.SetDestructor(&destruct_TGTileLayout);
      instance.SetStreamerFunc(&streamer_TGTileLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTileLayout*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTileLayout*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTileLayout*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGListLayout(void *p);
   static void deleteArray_TGListLayout(void *p);
   static void destruct_TGListLayout(void *p);
   static void streamer_TGListLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGListLayout*)
   {
      ::TGListLayout *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGListLayout >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGListLayout", ::TGListLayout::Class_Version(), "TGLayout.h", 335,
                  typeid(::TGListLayout), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGListLayout::Dictionary, isa_proxy, 16,
                  sizeof(::TGListLayout) );
      instance.SetDelete(&delete_TGListLayout);
      instance.SetDeleteArray(&deleteArray_TGListLayout);
      instance.SetDestructor(&destruct_TGListLayout);
      instance.SetStreamerFunc(&streamer_TGListLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGListLayout*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGListLayout*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGListLayout*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGListDetailsLayout(void *p);
   static void deleteArray_TGListDetailsLayout(void *p);
   static void destruct_TGListDetailsLayout(void *p);
   static void streamer_TGListDetailsLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGListDetailsLayout*)
   {
      ::TGListDetailsLayout *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGListDetailsLayout >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGListDetailsLayout", ::TGListDetailsLayout::Class_Version(), "TGLayout.h", 355,
                  typeid(::TGListDetailsLayout), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGListDetailsLayout::Dictionary, isa_proxy, 16,
                  sizeof(::TGListDetailsLayout) );
      instance.SetDelete(&delete_TGListDetailsLayout);
      instance.SetDeleteArray(&deleteArray_TGListDetailsLayout);
      instance.SetDestructor(&destruct_TGListDetailsLayout);
      instance.SetStreamerFunc(&streamer_TGListDetailsLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGListDetailsLayout*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGListDetailsLayout*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGListDetailsLayout*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGString(void *p = nullptr);
   static void *newArray_TGString(Long_t size, void *p);
   static void delete_TGString(void *p);
   static void deleteArray_TGString(void *p);
   static void destruct_TGString(void *p);
   static void streamer_TGString(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGString*)
   {
      ::TGString *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGString >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGString", ::TGString::Class_Version(), "TGString.h", 20,
                  typeid(::TGString), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGString::Dictionary, isa_proxy, 16,
                  sizeof(::TGString) );
      instance.SetNew(&new_TGString);
      instance.SetNewArray(&newArray_TGString);
      instance.SetDelete(&delete_TGString);
      instance.SetDeleteArray(&deleteArray_TGString);
      instance.SetDestructor(&destruct_TGString);
      instance.SetStreamerFunc(&streamer_TGString);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGString*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGString*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGString*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGHotString(void *p);
   static void deleteArray_TGHotString(void *p);
   static void destruct_TGHotString(void *p);
   static void streamer_TGHotString(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHotString*)
   {
      ::TGHotString *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHotString >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGHotString", ::TGHotString::Class_Version(), "TGString.h", 42,
                  typeid(::TGHotString), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHotString::Dictionary, isa_proxy, 16,
                  sizeof(::TGHotString) );
      instance.SetDelete(&delete_TGHotString);
      instance.SetDeleteArray(&deleteArray_TGHotString);
      instance.SetDestructor(&destruct_TGHotString);
      instance.SetStreamerFunc(&streamer_TGHotString);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHotString*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGHotString*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGHotString*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGFrame(void *p = nullptr);
   static void *newArray_TGFrame(Long_t size, void *p);
   static void delete_TGFrame(void *p);
   static void deleteArray_TGFrame(void *p);
   static void destruct_TGFrame(void *p);
   static void streamer_TGFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFrame*)
   {
      ::TGFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGFrame", ::TGFrame::Class_Version(), "TGFrame.h", 80,
                  typeid(::TGFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGFrame) );
      instance.SetNew(&new_TGFrame);
      instance.SetNewArray(&newArray_TGFrame);
      instance.SetDelete(&delete_TGFrame);
      instance.SetDeleteArray(&deleteArray_TGFrame);
      instance.SetDestructor(&destruct_TGFrame);
      instance.SetStreamerFunc(&streamer_TGFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGCompositeFrame(void *p = nullptr);
   static void *newArray_TGCompositeFrame(Long_t size, void *p);
   static void delete_TGCompositeFrame(void *p);
   static void deleteArray_TGCompositeFrame(void *p);
   static void destruct_TGCompositeFrame(void *p);
   static void streamer_TGCompositeFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGCompositeFrame*)
   {
      ::TGCompositeFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGCompositeFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGCompositeFrame", ::TGCompositeFrame::Class_Version(), "TGFrame.h", 289,
                  typeid(::TGCompositeFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGCompositeFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGCompositeFrame) );
      instance.SetNew(&new_TGCompositeFrame);
      instance.SetNewArray(&newArray_TGCompositeFrame);
      instance.SetDelete(&delete_TGCompositeFrame);
      instance.SetDeleteArray(&deleteArray_TGCompositeFrame);
      instance.SetDestructor(&destruct_TGCompositeFrame);
      instance.SetStreamerFunc(&streamer_TGCompositeFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGCompositeFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGCompositeFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGCompositeFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGVerticalFrame(void *p = nullptr);
   static void *newArray_TGVerticalFrame(Long_t size, void *p);
   static void delete_TGVerticalFrame(void *p);
   static void deleteArray_TGVerticalFrame(void *p);
   static void destruct_TGVerticalFrame(void *p);
   static void streamer_TGVerticalFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGVerticalFrame*)
   {
      ::TGVerticalFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGVerticalFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGVerticalFrame", ::TGVerticalFrame::Class_Version(), "TGFrame.h", 376,
                  typeid(::TGVerticalFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGVerticalFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGVerticalFrame) );
      instance.SetNew(&new_TGVerticalFrame);
      instance.SetNewArray(&newArray_TGVerticalFrame);
      instance.SetDelete(&delete_TGVerticalFrame);
      instance.SetDeleteArray(&deleteArray_TGVerticalFrame);
      instance.SetDestructor(&destruct_TGVerticalFrame);
      instance.SetStreamerFunc(&streamer_TGVerticalFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGVerticalFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGVerticalFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGVerticalFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGHorizontalFrame(void *p = nullptr);
   static void *newArray_TGHorizontalFrame(Long_t size, void *p);
   static void delete_TGHorizontalFrame(void *p);
   static void deleteArray_TGHorizontalFrame(void *p);
   static void destruct_TGHorizontalFrame(void *p);
   static void streamer_TGHorizontalFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHorizontalFrame*)
   {
      ::TGHorizontalFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHorizontalFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGHorizontalFrame", ::TGHorizontalFrame::Class_Version(), "TGFrame.h", 387,
                  typeid(::TGHorizontalFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHorizontalFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGHorizontalFrame) );
      instance.SetNew(&new_TGHorizontalFrame);
      instance.SetNewArray(&newArray_TGHorizontalFrame);
      instance.SetDelete(&delete_TGHorizontalFrame);
      instance.SetDeleteArray(&deleteArray_TGHorizontalFrame);
      instance.SetDestructor(&destruct_TGHorizontalFrame);
      instance.SetStreamerFunc(&streamer_TGHorizontalFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHorizontalFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGHorizontalFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGHorizontalFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGMainFrame(void *p = nullptr);
   static void *newArray_TGMainFrame(Long_t size, void *p);
   static void delete_TGMainFrame(void *p);
   static void deleteArray_TGMainFrame(void *p);
   static void destruct_TGMainFrame(void *p);
   static void streamer_TGMainFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMainFrame*)
   {
      ::TGMainFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMainFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMainFrame", ::TGMainFrame::Class_Version(), "TGFrame.h", 399,
                  typeid(::TGMainFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMainFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGMainFrame) );
      instance.SetNew(&new_TGMainFrame);
      instance.SetNewArray(&newArray_TGMainFrame);
      instance.SetDelete(&delete_TGMainFrame);
      instance.SetDeleteArray(&deleteArray_TGMainFrame);
      instance.SetDestructor(&destruct_TGMainFrame);
      instance.SetStreamerFunc(&streamer_TGMainFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMainFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMainFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMainFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTransientFrame(void *p = nullptr);
   static void *newArray_TGTransientFrame(Long_t size, void *p);
   static void delete_TGTransientFrame(void *p);
   static void deleteArray_TGTransientFrame(void *p);
   static void destruct_TGTransientFrame(void *p);
   static void streamer_TGTransientFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTransientFrame*)
   {
      ::TGTransientFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTransientFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTransientFrame", ::TGTransientFrame::Class_Version(), "TGFrame.h", 500,
                  typeid(::TGTransientFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTransientFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGTransientFrame) );
      instance.SetNew(&new_TGTransientFrame);
      instance.SetNewArray(&newArray_TGTransientFrame);
      instance.SetDelete(&delete_TGTransientFrame);
      instance.SetDeleteArray(&deleteArray_TGTransientFrame);
      instance.SetDestructor(&destruct_TGTransientFrame);
      instance.SetStreamerFunc(&streamer_TGTransientFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTransientFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTransientFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTransientFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGGroupFrame(void *p = nullptr);
   static void *newArray_TGGroupFrame(Long_t size, void *p);
   static void delete_TGGroupFrame(void *p);
   static void deleteArray_TGGroupFrame(void *p);
   static void destruct_TGGroupFrame(void *p);
   static void streamer_TGGroupFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGGroupFrame*)
   {
      ::TGGroupFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGGroupFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGGroupFrame", ::TGGroupFrame::Class_Version(), "TGFrame.h", 532,
                  typeid(::TGGroupFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGGroupFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGGroupFrame) );
      instance.SetNew(&new_TGGroupFrame);
      instance.SetNewArray(&newArray_TGGroupFrame);
      instance.SetDelete(&delete_TGGroupFrame);
      instance.SetDeleteArray(&deleteArray_TGGroupFrame);
      instance.SetDestructor(&destruct_TGGroupFrame);
      instance.SetStreamerFunc(&streamer_TGGroupFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGGroupFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGGroupFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGGroupFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGHeaderFrame(void *p = nullptr);
   static void *newArray_TGHeaderFrame(Long_t size, void *p);
   static void delete_TGHeaderFrame(void *p);
   static void deleteArray_TGHeaderFrame(void *p);
   static void destruct_TGHeaderFrame(void *p);
   static void streamer_TGHeaderFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHeaderFrame*)
   {
      ::TGHeaderFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHeaderFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGHeaderFrame", ::TGHeaderFrame::Class_Version(), "TGFrame.h", 590,
                  typeid(::TGHeaderFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHeaderFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGHeaderFrame) );
      instance.SetNew(&new_TGHeaderFrame);
      instance.SetNewArray(&newArray_TGHeaderFrame);
      instance.SetDelete(&delete_TGHeaderFrame);
      instance.SetDeleteArray(&deleteArray_TGHeaderFrame);
      instance.SetDestructor(&destruct_TGHeaderFrame);
      instance.SetStreamerFunc(&streamer_TGHeaderFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHeaderFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGHeaderFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGHeaderFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGHorizontal3DLine(void *p = nullptr);
   static void *newArray_TGHorizontal3DLine(Long_t size, void *p);
   static void delete_TGHorizontal3DLine(void *p);
   static void deleteArray_TGHorizontal3DLine(void *p);
   static void destruct_TGHorizontal3DLine(void *p);
   static void streamer_TGHorizontal3DLine(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHorizontal3DLine*)
   {
      ::TGHorizontal3DLine *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHorizontal3DLine >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGHorizontal3DLine", ::TGHorizontal3DLine::Class_Version(), "TG3DLine.h", 18,
                  typeid(::TGHorizontal3DLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHorizontal3DLine::Dictionary, isa_proxy, 16,
                  sizeof(::TGHorizontal3DLine) );
      instance.SetNew(&new_TGHorizontal3DLine);
      instance.SetNewArray(&newArray_TGHorizontal3DLine);
      instance.SetDelete(&delete_TGHorizontal3DLine);
      instance.SetDeleteArray(&deleteArray_TGHorizontal3DLine);
      instance.SetDestructor(&destruct_TGHorizontal3DLine);
      instance.SetStreamerFunc(&streamer_TGHorizontal3DLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHorizontal3DLine*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGHorizontal3DLine*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGHorizontal3DLine*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGVertical3DLine(void *p = nullptr);
   static void *newArray_TGVertical3DLine(Long_t size, void *p);
   static void delete_TGVertical3DLine(void *p);
   static void deleteArray_TGVertical3DLine(void *p);
   static void destruct_TGVertical3DLine(void *p);
   static void streamer_TGVertical3DLine(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGVertical3DLine*)
   {
      ::TGVertical3DLine *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGVertical3DLine >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGVertical3DLine", ::TGVertical3DLine::Class_Version(), "TG3DLine.h", 33,
                  typeid(::TGVertical3DLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGVertical3DLine::Dictionary, isa_proxy, 16,
                  sizeof(::TGVertical3DLine) );
      instance.SetNew(&new_TGVertical3DLine);
      instance.SetNewArray(&newArray_TGVertical3DLine);
      instance.SetDelete(&delete_TGVertical3DLine);
      instance.SetDeleteArray(&deleteArray_TGVertical3DLine);
      instance.SetDestructor(&destruct_TGVertical3DLine);
      instance.SetStreamerFunc(&streamer_TGVertical3DLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGVertical3DLine*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGVertical3DLine*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGVertical3DLine*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGApplication(void *p);
   static void deleteArray_TGApplication(void *p);
   static void destruct_TGApplication(void *p);
   static void streamer_TGApplication(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGApplication*)
   {
      ::TGApplication *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGApplication >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGApplication", ::TGApplication::Class_Version(), "TGApplication.h", 21,
                  typeid(::TGApplication), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGApplication::Dictionary, isa_proxy, 16,
                  sizeof(::TGApplication) );
      instance.SetDelete(&delete_TGApplication);
      instance.SetDeleteArray(&deleteArray_TGApplication);
      instance.SetDestructor(&destruct_TGApplication);
      instance.SetStreamerFunc(&streamer_TGApplication);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGApplication*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGApplication*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGApplication*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGWidget(void *p = nullptr);
   static void *newArray_TGWidget(Long_t size, void *p);
   static void delete_TGWidget(void *p);
   static void deleteArray_TGWidget(void *p);
   static void destruct_TGWidget(void *p);
   static void streamer_TGWidget(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGWidget*)
   {
      ::TGWidget *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGWidget >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGWidget", ::TGWidget::Class_Version(), "TGWidget.h", 43,
                  typeid(::TGWidget), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGWidget::Dictionary, isa_proxy, 16,
                  sizeof(::TGWidget) );
      instance.SetNew(&new_TGWidget);
      instance.SetNewArray(&newArray_TGWidget);
      instance.SetDelete(&delete_TGWidget);
      instance.SetDeleteArray(&deleteArray_TGWidget);
      instance.SetDestructor(&destruct_TGWidget);
      instance.SetStreamerFunc(&streamer_TGWidget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGWidget*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGWidget*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGWidget*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGButton(void *p = nullptr);
   static void *newArray_TGButton(Long_t size, void *p);
   static void delete_TGButton(void *p);
   static void deleteArray_TGButton(void *p);
   static void destruct_TGButton(void *p);
   static void streamer_TGButton(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGButton*)
   {
      ::TGButton *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGButton >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGButton", ::TGButton::Class_Version(), "TGButton.h", 68,
                  typeid(::TGButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGButton::Dictionary, isa_proxy, 16,
                  sizeof(::TGButton) );
      instance.SetNew(&new_TGButton);
      instance.SetNewArray(&newArray_TGButton);
      instance.SetDelete(&delete_TGButton);
      instance.SetDeleteArray(&deleteArray_TGButton);
      instance.SetDestructor(&destruct_TGButton);
      instance.SetStreamerFunc(&streamer_TGButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGButton*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGButton*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGButton*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTextButton(void *p = nullptr);
   static void *newArray_TGTextButton(Long_t size, void *p);
   static void delete_TGTextButton(void *p);
   static void deleteArray_TGTextButton(void *p);
   static void destruct_TGTextButton(void *p);
   static void streamer_TGTextButton(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTextButton*)
   {
      ::TGTextButton *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTextButton >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTextButton", ::TGTextButton::Class_Version(), "TGButton.h", 142,
                  typeid(::TGTextButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTextButton::Dictionary, isa_proxy, 16,
                  sizeof(::TGTextButton) );
      instance.SetNew(&new_TGTextButton);
      instance.SetNewArray(&newArray_TGTextButton);
      instance.SetDelete(&delete_TGTextButton);
      instance.SetDeleteArray(&deleteArray_TGTextButton);
      instance.SetDestructor(&destruct_TGTextButton);
      instance.SetStreamerFunc(&streamer_TGTextButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTextButton*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTextButton*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTextButton*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGPictureButton(void *p = nullptr);
   static void *newArray_TGPictureButton(Long_t size, void *p);
   static void delete_TGPictureButton(void *p);
   static void deleteArray_TGPictureButton(void *p);
   static void destruct_TGPictureButton(void *p);
   static void streamer_TGPictureButton(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGPictureButton*)
   {
      ::TGPictureButton *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGPictureButton >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGPictureButton", ::TGPictureButton::Class_Version(), "TGButton.h", 228,
                  typeid(::TGPictureButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGPictureButton::Dictionary, isa_proxy, 16,
                  sizeof(::TGPictureButton) );
      instance.SetNew(&new_TGPictureButton);
      instance.SetNewArray(&newArray_TGPictureButton);
      instance.SetDelete(&delete_TGPictureButton);
      instance.SetDeleteArray(&deleteArray_TGPictureButton);
      instance.SetDestructor(&destruct_TGPictureButton);
      instance.SetStreamerFunc(&streamer_TGPictureButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGPictureButton*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGPictureButton*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGPictureButton*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGCheckButton(void *p = nullptr);
   static void *newArray_TGCheckButton(Long_t size, void *p);
   static void delete_TGCheckButton(void *p);
   static void deleteArray_TGCheckButton(void *p);
   static void destruct_TGCheckButton(void *p);
   static void streamer_TGCheckButton(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGCheckButton*)
   {
      ::TGCheckButton *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGCheckButton >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGCheckButton", ::TGCheckButton::Class_Version(), "TGButton.h", 264,
                  typeid(::TGCheckButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGCheckButton::Dictionary, isa_proxy, 16,
                  sizeof(::TGCheckButton) );
      instance.SetNew(&new_TGCheckButton);
      instance.SetNewArray(&newArray_TGCheckButton);
      instance.SetDelete(&delete_TGCheckButton);
      instance.SetDeleteArray(&deleteArray_TGCheckButton);
      instance.SetDestructor(&destruct_TGCheckButton);
      instance.SetStreamerFunc(&streamer_TGCheckButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGCheckButton*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGCheckButton*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGCheckButton*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGRadioButton(void *p = nullptr);
   static void *newArray_TGRadioButton(Long_t size, void *p);
   static void delete_TGRadioButton(void *p);
   static void deleteArray_TGRadioButton(void *p);
   static void destruct_TGRadioButton(void *p);
   static void streamer_TGRadioButton(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGRadioButton*)
   {
      ::TGRadioButton *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGRadioButton >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGRadioButton", ::TGRadioButton::Class_Version(), "TGButton.h", 321,
                  typeid(::TGRadioButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGRadioButton::Dictionary, isa_proxy, 16,
                  sizeof(::TGRadioButton) );
      instance.SetNew(&new_TGRadioButton);
      instance.SetNewArray(&newArray_TGRadioButton);
      instance.SetDelete(&delete_TGRadioButton);
      instance.SetDeleteArray(&deleteArray_TGRadioButton);
      instance.SetDestructor(&destruct_TGRadioButton);
      instance.SetStreamerFunc(&streamer_TGRadioButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGRadioButton*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGRadioButton*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGRadioButton*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGSplitButton(void *p);
   static void deleteArray_TGSplitButton(void *p);
   static void destruct_TGSplitButton(void *p);
   static void streamer_TGSplitButton(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGSplitButton*)
   {
      ::TGSplitButton *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGSplitButton >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGSplitButton", ::TGSplitButton::Class_Version(), "TGButton.h", 378,
                  typeid(::TGSplitButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGSplitButton::Dictionary, isa_proxy, 16,
                  sizeof(::TGSplitButton) );
      instance.SetDelete(&delete_TGSplitButton);
      instance.SetDeleteArray(&deleteArray_TGSplitButton);
      instance.SetDestructor(&destruct_TGSplitButton);
      instance.SetStreamerFunc(&streamer_TGSplitButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGSplitButton*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGSplitButton*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGSplitButton*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGButtonGroup(void *p = nullptr);
   static void *newArray_TGButtonGroup(Long_t size, void *p);
   static void delete_TGButtonGroup(void *p);
   static void deleteArray_TGButtonGroup(void *p);
   static void destruct_TGButtonGroup(void *p);
   static void streamer_TGButtonGroup(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGButtonGroup*)
   {
      ::TGButtonGroup *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGButtonGroup >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGButtonGroup", ::TGButtonGroup::Class_Version(), "TGButtonGroup.h", 21,
                  typeid(::TGButtonGroup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGButtonGroup::Dictionary, isa_proxy, 16,
                  sizeof(::TGButtonGroup) );
      instance.SetNew(&new_TGButtonGroup);
      instance.SetNewArray(&newArray_TGButtonGroup);
      instance.SetDelete(&delete_TGButtonGroup);
      instance.SetDeleteArray(&deleteArray_TGButtonGroup);
      instance.SetDestructor(&destruct_TGButtonGroup);
      instance.SetStreamerFunc(&streamer_TGButtonGroup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGButtonGroup*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGButtonGroup*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGButtonGroup*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGVButtonGroup(void *p);
   static void deleteArray_TGVButtonGroup(void *p);
   static void destruct_TGVButtonGroup(void *p);
   static void streamer_TGVButtonGroup(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGVButtonGroup*)
   {
      ::TGVButtonGroup *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGVButtonGroup >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGVButtonGroup", ::TGVButtonGroup::Class_Version(), "TGButtonGroup.h", 94,
                  typeid(::TGVButtonGroup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGVButtonGroup::Dictionary, isa_proxy, 16,
                  sizeof(::TGVButtonGroup) );
      instance.SetDelete(&delete_TGVButtonGroup);
      instance.SetDeleteArray(&deleteArray_TGVButtonGroup);
      instance.SetDestructor(&destruct_TGVButtonGroup);
      instance.SetStreamerFunc(&streamer_TGVButtonGroup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGVButtonGroup*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGVButtonGroup*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGVButtonGroup*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGHButtonGroup(void *p);
   static void deleteArray_TGHButtonGroup(void *p);
   static void destruct_TGHButtonGroup(void *p);
   static void streamer_TGHButtonGroup(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHButtonGroup*)
   {
      ::TGHButtonGroup *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHButtonGroup >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGHButtonGroup", ::TGHButtonGroup::Class_Version(), "TGButtonGroup.h", 112,
                  typeid(::TGHButtonGroup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHButtonGroup::Dictionary, isa_proxy, 16,
                  sizeof(::TGHButtonGroup) );
      instance.SetDelete(&delete_TGHButtonGroup);
      instance.SetDeleteArray(&deleteArray_TGHButtonGroup);
      instance.SetDestructor(&destruct_TGHButtonGroup);
      instance.SetStreamerFunc(&streamer_TGHButtonGroup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHButtonGroup*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGHButtonGroup*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGHButtonGroup*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGContainer(void *p = nullptr);
   static void *newArray_TGContainer(Long_t size, void *p);
   static void delete_TGContainer(void *p);
   static void deleteArray_TGContainer(void *p);
   static void destruct_TGContainer(void *p);
   static void streamer_TGContainer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGContainer*)
   {
      ::TGContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGContainer", ::TGContainer::Class_Version(), "TGCanvas.h", 31,
                  typeid(::TGContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGContainer::Dictionary, isa_proxy, 16,
                  sizeof(::TGContainer) );
      instance.SetNew(&new_TGContainer);
      instance.SetNewArray(&newArray_TGContainer);
      instance.SetDelete(&delete_TGContainer);
      instance.SetDeleteArray(&deleteArray_TGContainer);
      instance.SetDestructor(&destruct_TGContainer);
      instance.SetStreamerFunc(&streamer_TGContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGViewPort(void *p = nullptr);
   static void *newArray_TGViewPort(Long_t size, void *p);
   static void delete_TGViewPort(void *p);
   static void deleteArray_TGViewPort(void *p);
   static void destruct_TGViewPort(void *p);
   static void streamer_TGViewPort(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGViewPort*)
   {
      ::TGViewPort *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGViewPort >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGViewPort", ::TGViewPort::Class_Version(), "TGCanvas.h", 158,
                  typeid(::TGViewPort), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGViewPort::Dictionary, isa_proxy, 16,
                  sizeof(::TGViewPort) );
      instance.SetNew(&new_TGViewPort);
      instance.SetNewArray(&newArray_TGViewPort);
      instance.SetDelete(&delete_TGViewPort);
      instance.SetDeleteArray(&deleteArray_TGViewPort);
      instance.SetDestructor(&destruct_TGViewPort);
      instance.SetStreamerFunc(&streamer_TGViewPort);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGViewPort*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGViewPort*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGViewPort*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGCanvas(void *p = nullptr);
   static void *newArray_TGCanvas(Long_t size, void *p);
   static void delete_TGCanvas(void *p);
   static void deleteArray_TGCanvas(void *p);
   static void destruct_TGCanvas(void *p);
   static void streamer_TGCanvas(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGCanvas*)
   {
      ::TGCanvas *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGCanvas >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGCanvas", ::TGCanvas::Class_Version(), "TGCanvas.h", 192,
                  typeid(::TGCanvas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGCanvas::Dictionary, isa_proxy, 16,
                  sizeof(::TGCanvas) );
      instance.SetNew(&new_TGCanvas);
      instance.SetNewArray(&newArray_TGCanvas);
      instance.SetDelete(&delete_TGCanvas);
      instance.SetDeleteArray(&deleteArray_TGCanvas);
      instance.SetDestructor(&destruct_TGCanvas);
      instance.SetStreamerFunc(&streamer_TGCanvas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGCanvas*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGCanvas*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGCanvas*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGColorPalette(void *p = nullptr);
   static void *newArray_TGColorPalette(Long_t size, void *p);
   static void delete_TGColorPalette(void *p);
   static void deleteArray_TGColorPalette(void *p);
   static void destruct_TGColorPalette(void *p);
   static void streamer_TGColorPalette(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGColorPalette*)
   {
      ::TGColorPalette *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGColorPalette >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGColorPalette", ::TGColorPalette::Class_Version(), "TGColorDialog.h", 32,
                  typeid(::TGColorPalette), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGColorPalette::Dictionary, isa_proxy, 16,
                  sizeof(::TGColorPalette) );
      instance.SetNew(&new_TGColorPalette);
      instance.SetNewArray(&newArray_TGColorPalette);
      instance.SetDelete(&delete_TGColorPalette);
      instance.SetDeleteArray(&deleteArray_TGColorPalette);
      instance.SetDestructor(&destruct_TGColorPalette);
      instance.SetStreamerFunc(&streamer_TGColorPalette);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGColorPalette*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGColorPalette*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGColorPalette*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGColorPick(void *p = nullptr);
   static void *newArray_TGColorPick(Long_t size, void *p);
   static void delete_TGColorPick(void *p);
   static void deleteArray_TGColorPick(void *p);
   static void destruct_TGColorPick(void *p);
   static void streamer_TGColorPick(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGColorPick*)
   {
      ::TGColorPick *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGColorPick >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGColorPick", ::TGColorPick::Class_Version(), "TGColorDialog.h", 83,
                  typeid(::TGColorPick), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGColorPick::Dictionary, isa_proxy, 16,
                  sizeof(::TGColorPick) );
      instance.SetNew(&new_TGColorPick);
      instance.SetNewArray(&newArray_TGColorPick);
      instance.SetDelete(&delete_TGColorPick);
      instance.SetDeleteArray(&deleteArray_TGColorPick);
      instance.SetDestructor(&destruct_TGColorPick);
      instance.SetStreamerFunc(&streamer_TGColorPick);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGColorPick*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGColorPick*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGColorPick*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGColorDialog(void *p = nullptr);
   static void *newArray_TGColorDialog(Long_t size, void *p);
   static void delete_TGColorDialog(void *p);
   static void deleteArray_TGColorDialog(void *p);
   static void destruct_TGColorDialog(void *p);
   static void streamer_TGColorDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGColorDialog*)
   {
      ::TGColorDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGColorDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGColorDialog", ::TGColorDialog::Class_Version(), "TGColorDialog.h", 136,
                  typeid(::TGColorDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGColorDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGColorDialog) );
      instance.SetNew(&new_TGColorDialog);
      instance.SetNewArray(&newArray_TGColorDialog);
      instance.SetDelete(&delete_TGColorDialog);
      instance.SetDeleteArray(&deleteArray_TGColorDialog);
      instance.SetDestructor(&destruct_TGColorDialog);
      instance.SetStreamerFunc(&streamer_TGColorDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGColorDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGColorDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGColorDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGColorFrame(void *p = nullptr);
   static void *newArray_TGColorFrame(Long_t size, void *p);
   static void delete_TGColorFrame(void *p);
   static void deleteArray_TGColorFrame(void *p);
   static void destruct_TGColorFrame(void *p);
   static void streamer_TGColorFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGColorFrame*)
   {
      ::TGColorFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGColorFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGColorFrame", ::TGColorFrame::Class_Version(), "TGColorSelect.h", 22,
                  typeid(::TGColorFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGColorFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGColorFrame) );
      instance.SetNew(&new_TGColorFrame);
      instance.SetNewArray(&newArray_TGColorFrame);
      instance.SetDelete(&delete_TGColorFrame);
      instance.SetDeleteArray(&deleteArray_TGColorFrame);
      instance.SetDestructor(&destruct_TGColorFrame);
      instance.SetStreamerFunc(&streamer_TGColorFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGColorFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGColorFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGColorFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TG16ColorSelector(void *p = nullptr);
   static void *newArray_TG16ColorSelector(Long_t size, void *p);
   static void delete_TG16ColorSelector(void *p);
   static void deleteArray_TG16ColorSelector(void *p);
   static void destruct_TG16ColorSelector(void *p);
   static void streamer_TG16ColorSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TG16ColorSelector*)
   {
      ::TG16ColorSelector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TG16ColorSelector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TG16ColorSelector", ::TG16ColorSelector::Class_Version(), "TGColorSelect.h", 50,
                  typeid(::TG16ColorSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TG16ColorSelector::Dictionary, isa_proxy, 16,
                  sizeof(::TG16ColorSelector) );
      instance.SetNew(&new_TG16ColorSelector);
      instance.SetNewArray(&newArray_TG16ColorSelector);
      instance.SetDelete(&delete_TG16ColorSelector);
      instance.SetDeleteArray(&deleteArray_TG16ColorSelector);
      instance.SetDestructor(&destruct_TG16ColorSelector);
      instance.SetStreamerFunc(&streamer_TG16ColorSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TG16ColorSelector*)
   {
      return GenerateInitInstanceLocal(static_cast<::TG16ColorSelector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TG16ColorSelector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGColorPopup(void *p = nullptr);
   static void *newArray_TGColorPopup(Long_t size, void *p);
   static void delete_TGColorPopup(void *p);
   static void deleteArray_TGColorPopup(void *p);
   static void destruct_TGColorPopup(void *p);
   static void streamer_TGColorPopup(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGColorPopup*)
   {
      ::TGColorPopup *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGColorPopup >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGColorPopup", ::TGColorPopup::Class_Version(), "TGColorSelect.h", 75,
                  typeid(::TGColorPopup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGColorPopup::Dictionary, isa_proxy, 16,
                  sizeof(::TGColorPopup) );
      instance.SetNew(&new_TGColorPopup);
      instance.SetNewArray(&newArray_TGColorPopup);
      instance.SetDelete(&delete_TGColorPopup);
      instance.SetDeleteArray(&deleteArray_TGColorPopup);
      instance.SetDestructor(&destruct_TGColorPopup);
      instance.SetStreamerFunc(&streamer_TGColorPopup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGColorPopup*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGColorPopup*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGColorPopup*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGColorSelect(void *p = nullptr);
   static void *newArray_TGColorSelect(Long_t size, void *p);
   static void delete_TGColorSelect(void *p);
   static void deleteArray_TGColorSelect(void *p);
   static void destruct_TGColorSelect(void *p);
   static void streamer_TGColorSelect(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGColorSelect*)
   {
      ::TGColorSelect *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGColorSelect >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGColorSelect", ::TGColorSelect::Class_Version(), "TGColorSelect.h", 104,
                  typeid(::TGColorSelect), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGColorSelect::Dictionary, isa_proxy, 16,
                  sizeof(::TGColorSelect) );
      instance.SetNew(&new_TGColorSelect);
      instance.SetNewArray(&newArray_TGColorSelect);
      instance.SetDelete(&delete_TGColorSelect);
      instance.SetDeleteArray(&deleteArray_TGColorSelect);
      instance.SetDestructor(&destruct_TGColorSelect);
      instance.SetStreamerFunc(&streamer_TGColorSelect);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGColorSelect*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGColorSelect*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGColorSelect*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGScrollBarElement(void *p = nullptr);
   static void *newArray_TGScrollBarElement(Long_t size, void *p);
   static void delete_TGScrollBarElement(void *p);
   static void deleteArray_TGScrollBarElement(void *p);
   static void destruct_TGScrollBarElement(void *p);
   static void streamer_TGScrollBarElement(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGScrollBarElement*)
   {
      ::TGScrollBarElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGScrollBarElement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGScrollBarElement", ::TGScrollBarElement::Class_Version(), "TGScrollBar.h", 29,
                  typeid(::TGScrollBarElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGScrollBarElement::Dictionary, isa_proxy, 16,
                  sizeof(::TGScrollBarElement) );
      instance.SetNew(&new_TGScrollBarElement);
      instance.SetNewArray(&newArray_TGScrollBarElement);
      instance.SetDelete(&delete_TGScrollBarElement);
      instance.SetDeleteArray(&deleteArray_TGScrollBarElement);
      instance.SetDestructor(&destruct_TGScrollBarElement);
      instance.SetStreamerFunc(&streamer_TGScrollBarElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGScrollBarElement*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGScrollBarElement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGScrollBarElement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGScrollBar(void *p);
   static void deleteArray_TGScrollBar(void *p);
   static void destruct_TGScrollBar(void *p);
   static void streamer_TGScrollBar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGScrollBar*)
   {
      ::TGScrollBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGScrollBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGScrollBar", ::TGScrollBar::Class_Version(), "TGScrollBar.h", 61,
                  typeid(::TGScrollBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGScrollBar::Dictionary, isa_proxy, 16,
                  sizeof(::TGScrollBar) );
      instance.SetDelete(&delete_TGScrollBar);
      instance.SetDeleteArray(&deleteArray_TGScrollBar);
      instance.SetDestructor(&destruct_TGScrollBar);
      instance.SetStreamerFunc(&streamer_TGScrollBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGScrollBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGScrollBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGScrollBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGHScrollBar(void *p = nullptr);
   static void *newArray_TGHScrollBar(Long_t size, void *p);
   static void delete_TGHScrollBar(void *p);
   static void deleteArray_TGHScrollBar(void *p);
   static void destruct_TGHScrollBar(void *p);
   static void streamer_TGHScrollBar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHScrollBar*)
   {
      ::TGHScrollBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHScrollBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGHScrollBar", ::TGHScrollBar::Class_Version(), "TGScrollBar.h", 143,
                  typeid(::TGHScrollBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHScrollBar::Dictionary, isa_proxy, 16,
                  sizeof(::TGHScrollBar) );
      instance.SetNew(&new_TGHScrollBar);
      instance.SetNewArray(&newArray_TGHScrollBar);
      instance.SetDelete(&delete_TGHScrollBar);
      instance.SetDeleteArray(&deleteArray_TGHScrollBar);
      instance.SetDestructor(&destruct_TGHScrollBar);
      instance.SetStreamerFunc(&streamer_TGHScrollBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHScrollBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGHScrollBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGHScrollBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGVScrollBar(void *p = nullptr);
   static void *newArray_TGVScrollBar(Long_t size, void *p);
   static void delete_TGVScrollBar(void *p);
   static void deleteArray_TGVScrollBar(void *p);
   static void destruct_TGVScrollBar(void *p);
   static void streamer_TGVScrollBar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGVScrollBar*)
   {
      ::TGVScrollBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGVScrollBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGVScrollBar", ::TGVScrollBar::Class_Version(), "TGScrollBar.h", 166,
                  typeid(::TGVScrollBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGVScrollBar::Dictionary, isa_proxy, 16,
                  sizeof(::TGVScrollBar) );
      instance.SetNew(&new_TGVScrollBar);
      instance.SetNewArray(&newArray_TGVScrollBar);
      instance.SetDelete(&delete_TGVScrollBar);
      instance.SetDeleteArray(&deleteArray_TGVScrollBar);
      instance.SetDestructor(&destruct_TGVScrollBar);
      instance.SetStreamerFunc(&streamer_TGVScrollBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGVScrollBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGVScrollBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGVScrollBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLBEntry(void *p = nullptr);
   static void *newArray_TGLBEntry(Long_t size, void *p);
   static void delete_TGLBEntry(void *p);
   static void deleteArray_TGLBEntry(void *p);
   static void destruct_TGLBEntry(void *p);
   static void streamer_TGLBEntry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLBEntry*)
   {
      ::TGLBEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLBEntry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGLBEntry", ::TGLBEntry::Class_Version(), "TGListBox.h", 24,
                  typeid(::TGLBEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLBEntry::Dictionary, isa_proxy, 16,
                  sizeof(::TGLBEntry) );
      instance.SetNew(&new_TGLBEntry);
      instance.SetNewArray(&newArray_TGLBEntry);
      instance.SetDelete(&delete_TGLBEntry);
      instance.SetDeleteArray(&deleteArray_TGLBEntry);
      instance.SetDestructor(&destruct_TGLBEntry);
      instance.SetStreamerFunc(&streamer_TGLBEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLBEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGLBEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGLBEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTextLBEntry(void *p = nullptr);
   static void *newArray_TGTextLBEntry(Long_t size, void *p);
   static void delete_TGTextLBEntry(void *p);
   static void deleteArray_TGTextLBEntry(void *p);
   static void destruct_TGTextLBEntry(void *p);
   static void streamer_TGTextLBEntry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTextLBEntry*)
   {
      ::TGTextLBEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTextLBEntry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTextLBEntry", ::TGTextLBEntry::Class_Version(), "TGListBox.h", 48,
                  typeid(::TGTextLBEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTextLBEntry::Dictionary, isa_proxy, 16,
                  sizeof(::TGTextLBEntry) );
      instance.SetNew(&new_TGTextLBEntry);
      instance.SetNewArray(&newArray_TGTextLBEntry);
      instance.SetDelete(&delete_TGTextLBEntry);
      instance.SetDeleteArray(&deleteArray_TGTextLBEntry);
      instance.SetDestructor(&destruct_TGTextLBEntry);
      instance.SetStreamerFunc(&streamer_TGTextLBEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTextLBEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTextLBEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTextLBEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLineLBEntry(void *p = nullptr);
   static void *newArray_TGLineLBEntry(Long_t size, void *p);
   static void delete_TGLineLBEntry(void *p);
   static void deleteArray_TGLineLBEntry(void *p);
   static void destruct_TGLineLBEntry(void *p);
   static void streamer_TGLineLBEntry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLineLBEntry*)
   {
      ::TGLineLBEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLineLBEntry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGLineLBEntry", ::TGLineLBEntry::Class_Version(), "TGListBox.h", 97,
                  typeid(::TGLineLBEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLineLBEntry::Dictionary, isa_proxy, 16,
                  sizeof(::TGLineLBEntry) );
      instance.SetNew(&new_TGLineLBEntry);
      instance.SetNewArray(&newArray_TGLineLBEntry);
      instance.SetDelete(&delete_TGLineLBEntry);
      instance.SetDeleteArray(&deleteArray_TGLineLBEntry);
      instance.SetDestructor(&destruct_TGLineLBEntry);
      instance.SetStreamerFunc(&streamer_TGLineLBEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLineLBEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGLineLBEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGLineLBEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGIconLBEntry(void *p = nullptr);
   static void *newArray_TGIconLBEntry(Long_t size, void *p);
   static void delete_TGIconLBEntry(void *p);
   static void deleteArray_TGIconLBEntry(void *p);
   static void destruct_TGIconLBEntry(void *p);
   static void streamer_TGIconLBEntry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGIconLBEntry*)
   {
      ::TGIconLBEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGIconLBEntry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGIconLBEntry", ::TGIconLBEntry::Class_Version(), "TGListBox.h", 132,
                  typeid(::TGIconLBEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGIconLBEntry::Dictionary, isa_proxy, 16,
                  sizeof(::TGIconLBEntry) );
      instance.SetNew(&new_TGIconLBEntry);
      instance.SetNewArray(&newArray_TGIconLBEntry);
      instance.SetDelete(&delete_TGIconLBEntry);
      instance.SetDeleteArray(&deleteArray_TGIconLBEntry);
      instance.SetDestructor(&destruct_TGIconLBEntry);
      instance.SetStreamerFunc(&streamer_TGIconLBEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGIconLBEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGIconLBEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGIconLBEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLBContainer(void *p = nullptr);
   static void *newArray_TGLBContainer(Long_t size, void *p);
   static void delete_TGLBContainer(void *p);
   static void deleteArray_TGLBContainer(void *p);
   static void destruct_TGLBContainer(void *p);
   static void streamer_TGLBContainer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLBContainer*)
   {
      ::TGLBContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLBContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGLBContainer", ::TGLBContainer::Class_Version(), "TGListBox.h", 163,
                  typeid(::TGLBContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLBContainer::Dictionary, isa_proxy, 16,
                  sizeof(::TGLBContainer) );
      instance.SetNew(&new_TGLBContainer);
      instance.SetNewArray(&newArray_TGLBContainer);
      instance.SetDelete(&delete_TGLBContainer);
      instance.SetDeleteArray(&deleteArray_TGLBContainer);
      instance.SetDestructor(&destruct_TGLBContainer);
      instance.SetStreamerFunc(&streamer_TGLBContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLBContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGLBContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGLBContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGListBox(void *p = nullptr);
   static void *newArray_TGListBox(Long_t size, void *p);
   static void delete_TGListBox(void *p);
   static void deleteArray_TGListBox(void *p);
   static void destruct_TGListBox(void *p);
   static void streamer_TGListBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGListBox*)
   {
      ::TGListBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGListBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGListBox", ::TGListBox::Class_Version(), "TGListBox.h", 221,
                  typeid(::TGListBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGListBox::Dictionary, isa_proxy, 16,
                  sizeof(::TGListBox) );
      instance.SetNew(&new_TGListBox);
      instance.SetNewArray(&newArray_TGListBox);
      instance.SetDelete(&delete_TGListBox);
      instance.SetDeleteArray(&deleteArray_TGListBox);
      instance.SetDestructor(&destruct_TGListBox);
      instance.SetStreamerFunc(&streamer_TGListBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGListBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGListBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGListBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGComboBoxPopup(void *p = nullptr);
   static void *newArray_TGComboBoxPopup(Long_t size, void *p);
   static void delete_TGComboBoxPopup(void *p);
   static void deleteArray_TGComboBoxPopup(void *p);
   static void destruct_TGComboBoxPopup(void *p);
   static void streamer_TGComboBoxPopup(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGComboBoxPopup*)
   {
      ::TGComboBoxPopup *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGComboBoxPopup >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGComboBoxPopup", ::TGComboBoxPopup::Class_Version(), "TGComboBox.h", 21,
                  typeid(::TGComboBoxPopup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGComboBoxPopup::Dictionary, isa_proxy, 16,
                  sizeof(::TGComboBoxPopup) );
      instance.SetNew(&new_TGComboBoxPopup);
      instance.SetNewArray(&newArray_TGComboBoxPopup);
      instance.SetDelete(&delete_TGComboBoxPopup);
      instance.SetDeleteArray(&deleteArray_TGComboBoxPopup);
      instance.SetDestructor(&destruct_TGComboBoxPopup);
      instance.SetStreamerFunc(&streamer_TGComboBoxPopup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGComboBoxPopup*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGComboBoxPopup*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGComboBoxPopup*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGComboBox(void *p = nullptr);
   static void *newArray_TGComboBox(Long_t size, void *p);
   static void delete_TGComboBox(void *p);
   static void deleteArray_TGComboBox(void *p);
   static void destruct_TGComboBox(void *p);
   static void streamer_TGComboBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGComboBox*)
   {
      ::TGComboBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGComboBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGComboBox", ::TGComboBox::Class_Version(), "TGComboBox.h", 47,
                  typeid(::TGComboBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGComboBox::Dictionary, isa_proxy, 16,
                  sizeof(::TGComboBox) );
      instance.SetNew(&new_TGComboBox);
      instance.SetNewArray(&newArray_TGComboBox);
      instance.SetDelete(&delete_TGComboBox);
      instance.SetDeleteArray(&deleteArray_TGComboBox);
      instance.SetDestructor(&destruct_TGComboBox);
      instance.SetStreamerFunc(&streamer_TGComboBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGComboBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGComboBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGComboBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLineStyleComboBox(void *p = nullptr);
   static void *newArray_TGLineStyleComboBox(Long_t size, void *p);
   static void delete_TGLineStyleComboBox(void *p);
   static void deleteArray_TGLineStyleComboBox(void *p);
   static void destruct_TGLineStyleComboBox(void *p);
   static void streamer_TGLineStyleComboBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLineStyleComboBox*)
   {
      ::TGLineStyleComboBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLineStyleComboBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGLineStyleComboBox", ::TGLineStyleComboBox::Class_Version(), "TGComboBox.h", 140,
                  typeid(::TGLineStyleComboBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLineStyleComboBox::Dictionary, isa_proxy, 16,
                  sizeof(::TGLineStyleComboBox) );
      instance.SetNew(&new_TGLineStyleComboBox);
      instance.SetNewArray(&newArray_TGLineStyleComboBox);
      instance.SetDelete(&delete_TGLineStyleComboBox);
      instance.SetDeleteArray(&deleteArray_TGLineStyleComboBox);
      instance.SetDestructor(&destruct_TGLineStyleComboBox);
      instance.SetStreamerFunc(&streamer_TGLineStyleComboBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLineStyleComboBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGLineStyleComboBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGLineStyleComboBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLineWidthComboBox(void *p = nullptr);
   static void *newArray_TGLineWidthComboBox(Long_t size, void *p);
   static void delete_TGLineWidthComboBox(void *p);
   static void deleteArray_TGLineWidthComboBox(void *p);
   static void destruct_TGLineWidthComboBox(void *p);
   static void streamer_TGLineWidthComboBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLineWidthComboBox*)
   {
      ::TGLineWidthComboBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLineWidthComboBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGLineWidthComboBox", ::TGLineWidthComboBox::Class_Version(), "TGComboBox.h", 158,
                  typeid(::TGLineWidthComboBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLineWidthComboBox::Dictionary, isa_proxy, 16,
                  sizeof(::TGLineWidthComboBox) );
      instance.SetNew(&new_TGLineWidthComboBox);
      instance.SetNewArray(&newArray_TGLineWidthComboBox);
      instance.SetDelete(&delete_TGLineWidthComboBox);
      instance.SetDeleteArray(&deleteArray_TGLineWidthComboBox);
      instance.SetDestructor(&destruct_TGLineWidthComboBox);
      instance.SetStreamerFunc(&streamer_TGLineWidthComboBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLineWidthComboBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGLineWidthComboBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGLineWidthComboBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGFontTypeComboBox(void *p = nullptr);
   static void *newArray_TGFontTypeComboBox(Long_t size, void *p);
   static void delete_TGFontTypeComboBox(void *p);
   static void deleteArray_TGFontTypeComboBox(void *p);
   static void destruct_TGFontTypeComboBox(void *p);
   static void streamer_TGFontTypeComboBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFontTypeComboBox*)
   {
      ::TGFontTypeComboBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGFontTypeComboBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGFontTypeComboBox", ::TGFontTypeComboBox::Class_Version(), "TGComboBox.h", 178,
                  typeid(::TGFontTypeComboBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGFontTypeComboBox::Dictionary, isa_proxy, 16,
                  sizeof(::TGFontTypeComboBox) );
      instance.SetNew(&new_TGFontTypeComboBox);
      instance.SetNewArray(&newArray_TGFontTypeComboBox);
      instance.SetDelete(&delete_TGFontTypeComboBox);
      instance.SetDeleteArray(&deleteArray_TGFontTypeComboBox);
      instance.SetDestructor(&destruct_TGFontTypeComboBox);
      instance.SetStreamerFunc(&streamer_TGFontTypeComboBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFontTypeComboBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFontTypeComboBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFontTypeComboBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGCommandPlugin(void *p);
   static void deleteArray_TGCommandPlugin(void *p);
   static void destruct_TGCommandPlugin(void *p);
   static void streamer_TGCommandPlugin(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGCommandPlugin*)
   {
      ::TGCommandPlugin *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGCommandPlugin >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGCommandPlugin", ::TGCommandPlugin::Class_Version(), "TGCommandPlugin.h", 25,
                  typeid(::TGCommandPlugin), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGCommandPlugin::Dictionary, isa_proxy, 16,
                  sizeof(::TGCommandPlugin) );
      instance.SetDelete(&delete_TGCommandPlugin);
      instance.SetDeleteArray(&deleteArray_TGCommandPlugin);
      instance.SetDestructor(&destruct_TGCommandPlugin);
      instance.SetStreamerFunc(&streamer_TGCommandPlugin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGCommandPlugin*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGCommandPlugin*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGCommandPlugin*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGDragWindow(void *p);
   static void deleteArray_TGDragWindow(void *p);
   static void destruct_TGDragWindow(void *p);
   static void streamer_TGDragWindow(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDragWindow*)
   {
      ::TGDragWindow *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDragWindow >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGDragWindow", ::TGDragWindow::Class_Version(), "TGDNDManager.h", 22,
                  typeid(::TGDragWindow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDragWindow::Dictionary, isa_proxy, 16,
                  sizeof(::TGDragWindow) );
      instance.SetDelete(&delete_TGDragWindow);
      instance.SetDeleteArray(&deleteArray_TGDragWindow);
      instance.SetDestructor(&destruct_TGDragWindow);
      instance.SetStreamerFunc(&streamer_TGDragWindow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDragWindow*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGDragWindow*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGDragWindow*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDNDData(void *p = nullptr);
   static void *newArray_TDNDData(Long_t size, void *p);
   static void delete_TDNDData(void *p);
   static void deleteArray_TDNDData(void *p);
   static void destruct_TDNDData(void *p);
   static void streamer_TDNDData(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDNDData*)
   {
      ::TDNDData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDNDData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDNDData", ::TDNDData::Class_Version(), "TGDNDManager.h", 64,
                  typeid(::TDNDData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDNDData::Dictionary, isa_proxy, 16,
                  sizeof(::TDNDData) );
      instance.SetNew(&new_TDNDData);
      instance.SetNewArray(&newArray_TDNDData);
      instance.SetDelete(&delete_TDNDData);
      instance.SetDeleteArray(&deleteArray_TDNDData);
      instance.SetDestructor(&destruct_TDNDData);
      instance.SetStreamerFunc(&streamer_TDNDData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDNDData*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDNDData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDNDData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGDNDManager(void *p);
   static void deleteArray_TGDNDManager(void *p);
   static void destruct_TGDNDManager(void *p);
   static void streamer_TGDNDManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDNDManager*)
   {
      ::TGDNDManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDNDManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGDNDManager", ::TGDNDManager::Class_Version(), "TGDNDManager.h", 83,
                  typeid(::TGDNDManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDNDManager::Dictionary, isa_proxy, 16,
                  sizeof(::TGDNDManager) );
      instance.SetDelete(&delete_TGDNDManager);
      instance.SetDeleteArray(&deleteArray_TGDNDManager);
      instance.SetDestructor(&destruct_TGDNDManager);
      instance.SetStreamerFunc(&streamer_TGDNDManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDNDManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGDNDManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGDNDManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGDockButton(void *p = nullptr);
   static void *newArray_TGDockButton(Long_t size, void *p);
   static void delete_TGDockButton(void *p);
   static void deleteArray_TGDockButton(void *p);
   static void destruct_TGDockButton(void *p);
   static void streamer_TGDockButton(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDockButton*)
   {
      ::TGDockButton *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDockButton >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGDockButton", ::TGDockButton::Class_Version(), "TGDockableFrame.h", 28,
                  typeid(::TGDockButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDockButton::Dictionary, isa_proxy, 16,
                  sizeof(::TGDockButton) );
      instance.SetNew(&new_TGDockButton);
      instance.SetNewArray(&newArray_TGDockButton);
      instance.SetDelete(&delete_TGDockButton);
      instance.SetDeleteArray(&deleteArray_TGDockButton);
      instance.SetDestructor(&destruct_TGDockButton);
      instance.SetStreamerFunc(&streamer_TGDockButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDockButton*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGDockButton*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGDockButton*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGDockHideButton(void *p = nullptr);
   static void *newArray_TGDockHideButton(Long_t size, void *p);
   static void delete_TGDockHideButton(void *p);
   static void deleteArray_TGDockHideButton(void *p);
   static void destruct_TGDockHideButton(void *p);
   static void streamer_TGDockHideButton(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDockHideButton*)
   {
      ::TGDockHideButton *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDockHideButton >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGDockHideButton", ::TGDockHideButton::Class_Version(), "TGDockableFrame.h", 47,
                  typeid(::TGDockHideButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDockHideButton::Dictionary, isa_proxy, 16,
                  sizeof(::TGDockHideButton) );
      instance.SetNew(&new_TGDockHideButton);
      instance.SetNewArray(&newArray_TGDockHideButton);
      instance.SetDelete(&delete_TGDockHideButton);
      instance.SetDeleteArray(&deleteArray_TGDockHideButton);
      instance.SetDestructor(&destruct_TGDockHideButton);
      instance.SetStreamerFunc(&streamer_TGDockHideButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDockHideButton*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGDockHideButton*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGDockHideButton*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGUndockedFrame(void *p = nullptr);
   static void *newArray_TGUndockedFrame(Long_t size, void *p);
   static void delete_TGUndockedFrame(void *p);
   static void deleteArray_TGUndockedFrame(void *p);
   static void destruct_TGUndockedFrame(void *p);
   static void streamer_TGUndockedFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGUndockedFrame*)
   {
      ::TGUndockedFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGUndockedFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGUndockedFrame", ::TGUndockedFrame::Class_Version(), "TGDockableFrame.h", 62,
                  typeid(::TGUndockedFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGUndockedFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGUndockedFrame) );
      instance.SetNew(&new_TGUndockedFrame);
      instance.SetNewArray(&newArray_TGUndockedFrame);
      instance.SetDelete(&delete_TGUndockedFrame);
      instance.SetDeleteArray(&deleteArray_TGUndockedFrame);
      instance.SetDestructor(&destruct_TGUndockedFrame);
      instance.SetStreamerFunc(&streamer_TGUndockedFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGUndockedFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGUndockedFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGUndockedFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGDockableFrame(void *p = nullptr);
   static void *newArray_TGDockableFrame(Long_t size, void *p);
   static void delete_TGDockableFrame(void *p);
   static void deleteArray_TGDockableFrame(void *p);
   static void destruct_TGDockableFrame(void *p);
   static void streamer_TGDockableFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDockableFrame*)
   {
      ::TGDockableFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDockableFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGDockableFrame", ::TGDockableFrame::Class_Version(), "TGDockableFrame.h", 82,
                  typeid(::TGDockableFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDockableFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGDockableFrame) );
      instance.SetNew(&new_TGDockableFrame);
      instance.SetNewArray(&newArray_TGDockableFrame);
      instance.SetDelete(&delete_TGDockableFrame);
      instance.SetDeleteArray(&deleteArray_TGDockableFrame);
      instance.SetDestructor(&destruct_TGDockableFrame);
      instance.SetStreamerFunc(&streamer_TGDockableFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDockableFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGDockableFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGDockableFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGDoubleSlider(void *p);
   static void deleteArray_TGDoubleSlider(void *p);
   static void destruct_TGDoubleSlider(void *p);
   static void streamer_TGDoubleSlider(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDoubleSlider*)
   {
      ::TGDoubleSlider *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDoubleSlider >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGDoubleSlider", ::TGDoubleSlider::Class_Version(), "TGDoubleSlider.h", 36,
                  typeid(::TGDoubleSlider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDoubleSlider::Dictionary, isa_proxy, 16,
                  sizeof(::TGDoubleSlider) );
      instance.SetDelete(&delete_TGDoubleSlider);
      instance.SetDeleteArray(&deleteArray_TGDoubleSlider);
      instance.SetDestructor(&destruct_TGDoubleSlider);
      instance.SetStreamerFunc(&streamer_TGDoubleSlider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDoubleSlider*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGDoubleSlider*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGDoubleSlider*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGDoubleVSlider(void *p = nullptr);
   static void *newArray_TGDoubleVSlider(Long_t size, void *p);
   static void delete_TGDoubleVSlider(void *p);
   static void deleteArray_TGDoubleVSlider(void *p);
   static void destruct_TGDoubleVSlider(void *p);
   static void streamer_TGDoubleVSlider(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDoubleVSlider*)
   {
      ::TGDoubleVSlider *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDoubleVSlider >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGDoubleVSlider", ::TGDoubleVSlider::Class_Version(), "TGDoubleSlider.h", 170,
                  typeid(::TGDoubleVSlider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDoubleVSlider::Dictionary, isa_proxy, 16,
                  sizeof(::TGDoubleVSlider) );
      instance.SetNew(&new_TGDoubleVSlider);
      instance.SetNewArray(&newArray_TGDoubleVSlider);
      instance.SetDelete(&delete_TGDoubleVSlider);
      instance.SetDeleteArray(&deleteArray_TGDoubleVSlider);
      instance.SetDestructor(&destruct_TGDoubleVSlider);
      instance.SetStreamerFunc(&streamer_TGDoubleVSlider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDoubleVSlider*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGDoubleVSlider*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGDoubleVSlider*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGDoubleHSlider(void *p = nullptr);
   static void *newArray_TGDoubleHSlider(Long_t size, void *p);
   static void delete_TGDoubleHSlider(void *p);
   static void deleteArray_TGDoubleHSlider(void *p);
   static void destruct_TGDoubleHSlider(void *p);
   static void streamer_TGDoubleHSlider(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDoubleHSlider*)
   {
      ::TGDoubleHSlider *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDoubleHSlider >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGDoubleHSlider", ::TGDoubleHSlider::Class_Version(), "TGDoubleSlider.h", 196,
                  typeid(::TGDoubleHSlider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDoubleHSlider::Dictionary, isa_proxy, 16,
                  sizeof(::TGDoubleHSlider) );
      instance.SetNew(&new_TGDoubleHSlider);
      instance.SetNewArray(&newArray_TGDoubleHSlider);
      instance.SetDelete(&delete_TGDoubleHSlider);
      instance.SetDeleteArray(&deleteArray_TGDoubleHSlider);
      instance.SetDestructor(&destruct_TGDoubleHSlider);
      instance.SetStreamerFunc(&streamer_TGDoubleHSlider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDoubleHSlider*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGDoubleHSlider*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGDoubleHSlider*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGEventHandler(void *p);
   static void deleteArray_TGEventHandler(void *p);
   static void destruct_TGEventHandler(void *p);
   static void streamer_TGEventHandler(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGEventHandler*)
   {
      ::TGEventHandler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGEventHandler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGEventHandler", ::TGEventHandler::Class_Version(), "TGEventHandler.h", 22,
                  typeid(::TGEventHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGEventHandler::Dictionary, isa_proxy, 16,
                  sizeof(::TGEventHandler) );
      instance.SetDelete(&delete_TGEventHandler);
      instance.SetDeleteArray(&deleteArray_TGEventHandler);
      instance.SetDestructor(&destruct_TGEventHandler);
      instance.SetStreamerFunc(&streamer_TGEventHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGEventHandler*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGEventHandler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGEventHandler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTreeLBEntry(void *p = nullptr);
   static void *newArray_TGTreeLBEntry(Long_t size, void *p);
   static void delete_TGTreeLBEntry(void *p);
   static void deleteArray_TGTreeLBEntry(void *p);
   static void destruct_TGTreeLBEntry(void *p);
   static void streamer_TGTreeLBEntry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTreeLBEntry*)
   {
      ::TGTreeLBEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTreeLBEntry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTreeLBEntry", ::TGTreeLBEntry::Class_Version(), "TGFSComboBox.h", 25,
                  typeid(::TGTreeLBEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTreeLBEntry::Dictionary, isa_proxy, 16,
                  sizeof(::TGTreeLBEntry) );
      instance.SetNew(&new_TGTreeLBEntry);
      instance.SetNewArray(&newArray_TGTreeLBEntry);
      instance.SetDelete(&delete_TGTreeLBEntry);
      instance.SetDeleteArray(&deleteArray_TGTreeLBEntry);
      instance.SetDestructor(&destruct_TGTreeLBEntry);
      instance.SetStreamerFunc(&streamer_TGTreeLBEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTreeLBEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTreeLBEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTreeLBEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGFSComboBox(void *p = nullptr);
   static void *newArray_TGFSComboBox(Long_t size, void *p);
   static void delete_TGFSComboBox(void *p);
   static void deleteArray_TGFSComboBox(void *p);
   static void destruct_TGFSComboBox(void *p);
   static void streamer_TGFSComboBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFSComboBox*)
   {
      ::TGFSComboBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGFSComboBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGFSComboBox", ::TGFSComboBox::Class_Version(), "TGFSComboBox.h", 67,
                  typeid(::TGFSComboBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGFSComboBox::Dictionary, isa_proxy, 16,
                  sizeof(::TGFSComboBox) );
      instance.SetNew(&new_TGFSComboBox);
      instance.SetNewArray(&newArray_TGFSComboBox);
      instance.SetDelete(&delete_TGFSComboBox);
      instance.SetDeleteArray(&deleteArray_TGFSComboBox);
      instance.SetDestructor(&destruct_TGFSComboBox);
      instance.SetStreamerFunc(&streamer_TGFSComboBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFSComboBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFSComboBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFSComboBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGSplitter(void *p);
   static void deleteArray_TGSplitter(void *p);
   static void destruct_TGSplitter(void *p);
   static void streamer_TGSplitter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGSplitter*)
   {
      ::TGSplitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGSplitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGSplitter", ::TGSplitter::Class_Version(), "TGSplitter.h", 19,
                  typeid(::TGSplitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGSplitter::Dictionary, isa_proxy, 16,
                  sizeof(::TGSplitter) );
      instance.SetDelete(&delete_TGSplitter);
      instance.SetDeleteArray(&deleteArray_TGSplitter);
      instance.SetDestructor(&destruct_TGSplitter);
      instance.SetStreamerFunc(&streamer_TGSplitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGSplitter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGSplitter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGSplitter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGVSplitter(void *p = nullptr);
   static void *newArray_TGVSplitter(Long_t size, void *p);
   static void delete_TGVSplitter(void *p);
   static void deleteArray_TGVSplitter(void *p);
   static void destruct_TGVSplitter(void *p);
   static void streamer_TGVSplitter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGVSplitter*)
   {
      ::TGVSplitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGVSplitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGVSplitter", ::TGVSplitter::Class_Version(), "TGSplitter.h", 53,
                  typeid(::TGVSplitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGVSplitter::Dictionary, isa_proxy, 16,
                  sizeof(::TGVSplitter) );
      instance.SetNew(&new_TGVSplitter);
      instance.SetNewArray(&newArray_TGVSplitter);
      instance.SetDelete(&delete_TGVSplitter);
      instance.SetDeleteArray(&deleteArray_TGVSplitter);
      instance.SetDestructor(&destruct_TGVSplitter);
      instance.SetStreamerFunc(&streamer_TGVSplitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGVSplitter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGVSplitter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGVSplitter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGHSplitter(void *p = nullptr);
   static void *newArray_TGHSplitter(Long_t size, void *p);
   static void delete_TGHSplitter(void *p);
   static void deleteArray_TGHSplitter(void *p);
   static void destruct_TGHSplitter(void *p);
   static void streamer_TGHSplitter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHSplitter*)
   {
      ::TGHSplitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHSplitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGHSplitter", ::TGHSplitter::Class_Version(), "TGSplitter.h", 90,
                  typeid(::TGHSplitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHSplitter::Dictionary, isa_proxy, 16,
                  sizeof(::TGHSplitter) );
      instance.SetNew(&new_TGHSplitter);
      instance.SetNewArray(&newArray_TGHSplitter);
      instance.SetDelete(&delete_TGHSplitter);
      instance.SetDeleteArray(&deleteArray_TGHSplitter);
      instance.SetDestructor(&destruct_TGHSplitter);
      instance.SetStreamerFunc(&streamer_TGHSplitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHSplitter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGHSplitter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGHSplitter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGVFileSplitter(void *p = nullptr);
   static void *newArray_TGVFileSplitter(Long_t size, void *p);
   static void delete_TGVFileSplitter(void *p);
   static void deleteArray_TGVFileSplitter(void *p);
   static void destruct_TGVFileSplitter(void *p);
   static void streamer_TGVFileSplitter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGVFileSplitter*)
   {
      ::TGVFileSplitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGVFileSplitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGVFileSplitter", ::TGVFileSplitter::Class_Version(), "TGSplitter.h", 126,
                  typeid(::TGVFileSplitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGVFileSplitter::Dictionary, isa_proxy, 16,
                  sizeof(::TGVFileSplitter) );
      instance.SetNew(&new_TGVFileSplitter);
      instance.SetNewArray(&newArray_TGVFileSplitter);
      instance.SetDelete(&delete_TGVFileSplitter);
      instance.SetDeleteArray(&deleteArray_TGVFileSplitter);
      instance.SetDestructor(&destruct_TGVFileSplitter);
      instance.SetStreamerFunc(&streamer_TGVFileSplitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGVFileSplitter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGVFileSplitter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGVFileSplitter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLVEntry(void *p = nullptr);
   static void *newArray_TGLVEntry(Long_t size, void *p);
   static void delete_TGLVEntry(void *p);
   static void deleteArray_TGLVEntry(void *p);
   static void destruct_TGLVEntry(void *p);
   static void streamer_TGLVEntry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLVEntry*)
   {
      ::TGLVEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLVEntry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGLVEntry", ::TGLVEntry::Class_Version(), "TGListView.h", 36,
                  typeid(::TGLVEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLVEntry::Dictionary, isa_proxy, 16,
                  sizeof(::TGLVEntry) );
      instance.SetNew(&new_TGLVEntry);
      instance.SetNewArray(&newArray_TGLVEntry);
      instance.SetDelete(&delete_TGLVEntry);
      instance.SetDeleteArray(&deleteArray_TGLVEntry);
      instance.SetDestructor(&destruct_TGLVEntry);
      instance.SetStreamerFunc(&streamer_TGLVEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLVEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGLVEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGLVEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGListView(void *p);
   static void deleteArray_TGListView(void *p);
   static void destruct_TGListView(void *p);
   static void streamer_TGListView(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGListView*)
   {
      ::TGListView *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGListView >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGListView", ::TGListView::Class_Version(), "TGListView.h", 115,
                  typeid(::TGListView), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGListView::Dictionary, isa_proxy, 16,
                  sizeof(::TGListView) );
      instance.SetDelete(&delete_TGListView);
      instance.SetDeleteArray(&deleteArray_TGListView);
      instance.SetDestructor(&destruct_TGListView);
      instance.SetStreamerFunc(&streamer_TGListView);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGListView*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGListView*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGListView*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLVContainer(void *p);
   static void deleteArray_TGLVContainer(void *p);
   static void destruct_TGLVContainer(void *p);
   static void streamer_TGLVContainer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLVContainer*)
   {
      ::TGLVContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLVContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGLVContainer", ::TGLVContainer::Class_Version(), "TGListView.h", 178,
                  typeid(::TGLVContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLVContainer::Dictionary, isa_proxy, 16,
                  sizeof(::TGLVContainer) );
      instance.SetDelete(&delete_TGLVContainer);
      instance.SetDeleteArray(&deleteArray_TGLVContainer);
      instance.SetDestructor(&destruct_TGLVContainer);
      instance.SetStreamerFunc(&streamer_TGLVContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLVContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGLVContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGLVContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGFileItem(void *p = nullptr);
   static void *newArray_TGFileItem(Long_t size, void *p);
   static void delete_TGFileItem(void *p);
   static void deleteArray_TGFileItem(void *p);
   static void destruct_TGFileItem(void *p);
   static void streamer_TGFileItem(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFileItem*)
   {
      ::TGFileItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGFileItem >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGFileItem", ::TGFileItem::Class_Version(), "TGFSContainer.h", 42,
                  typeid(::TGFileItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGFileItem::Dictionary, isa_proxy, 16,
                  sizeof(::TGFileItem) );
      instance.SetNew(&new_TGFileItem);
      instance.SetNewArray(&newArray_TGFileItem);
      instance.SetDelete(&delete_TGFileItem);
      instance.SetDeleteArray(&deleteArray_TGFileItem);
      instance.SetDestructor(&destruct_TGFileItem);
      instance.SetStreamerFunc(&streamer_TGFileItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFileItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFileItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFileItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGFileContainer(void *p = nullptr);
   static void *newArray_TGFileContainer(Long_t size, void *p);
   static void delete_TGFileContainer(void *p);
   static void deleteArray_TGFileContainer(void *p);
   static void destruct_TGFileContainer(void *p);
   static void streamer_TGFileContainer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFileContainer*)
   {
      ::TGFileContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGFileContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGFileContainer", ::TGFileContainer::Class_Version(), "TGFSContainer.h", 115,
                  typeid(::TGFileContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGFileContainer::Dictionary, isa_proxy, 16,
                  sizeof(::TGFileContainer) );
      instance.SetNew(&new_TGFileContainer);
      instance.SetNewArray(&newArray_TGFileContainer);
      instance.SetDelete(&delete_TGFileContainer);
      instance.SetDeleteArray(&deleteArray_TGFileContainer);
      instance.SetDestructor(&destruct_TGFileContainer);
      instance.SetStreamerFunc(&streamer_TGFileContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFileContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFileContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFileContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGFileBrowser(void *p);
   static void deleteArray_TGFileBrowser(void *p);
   static void destruct_TGFileBrowser(void *p);
   static void streamer_TGFileBrowser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFileBrowser*)
   {
      ::TGFileBrowser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGFileBrowser >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGFileBrowser", ::TGFileBrowser::Class_Version(), "TGFileBrowser.h", 36,
                  typeid(::TGFileBrowser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGFileBrowser::Dictionary, isa_proxy, 16,
                  sizeof(::TGFileBrowser) );
      instance.SetDelete(&delete_TGFileBrowser);
      instance.SetDeleteArray(&deleteArray_TGFileBrowser);
      instance.SetDestructor(&destruct_TGFileBrowser);
      instance.SetStreamerFunc(&streamer_TGFileBrowser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFileBrowser*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFileBrowser*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFileBrowser*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TGFileInfo_Dictionary();
   static void TGFileInfo_TClassManip(TClass*);
   static void *new_TGFileInfo(void *p = nullptr);
   static void *newArray_TGFileInfo(Long_t size, void *p);
   static void delete_TGFileInfo(void *p);
   static void deleteArray_TGFileInfo(void *p);
   static void destruct_TGFileInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFileInfo*)
   {
      ::TGFileInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGFileInfo));
      static ::ROOT::TGenericClassInfo 
         instance("TGFileInfo", "TGFileDialog.h", 39,
                  typeid(::TGFileInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGFileInfo_Dictionary, isa_proxy, 0,
                  sizeof(::TGFileInfo) );
      instance.SetNew(&new_TGFileInfo);
      instance.SetNewArray(&newArray_TGFileInfo);
      instance.SetDelete(&delete_TGFileInfo);
      instance.SetDeleteArray(&deleteArray_TGFileInfo);
      instance.SetDestructor(&destruct_TGFileInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFileInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFileInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFileInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGFileInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TGFileInfo*>(nullptr))->GetClass();
      TGFileInfo_TClassManip(theClass);
   return theClass;
   }

   static void TGFileInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TGFileDialog(void *p = nullptr);
   static void *newArray_TGFileDialog(Long_t size, void *p);
   static void delete_TGFileDialog(void *p);
   static void deleteArray_TGFileDialog(void *p);
   static void destruct_TGFileDialog(void *p);
   static void streamer_TGFileDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFileDialog*)
   {
      ::TGFileDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGFileDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGFileDialog", ::TGFileDialog::Class_Version(), "TGFileDialog.h", 65,
                  typeid(::TGFileDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGFileDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGFileDialog) );
      instance.SetNew(&new_TGFileDialog);
      instance.SetNewArray(&newArray_TGFileDialog);
      instance.SetDelete(&delete_TGFileDialog);
      instance.SetDeleteArray(&deleteArray_TGFileDialog);
      instance.SetDestructor(&destruct_TGFileDialog);
      instance.SetStreamerFunc(&streamer_TGFileDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFileDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFileDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFileDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGFontDialog(void *p = nullptr);
   static void *newArray_TGFontDialog(Long_t size, void *p);
   static void delete_TGFontDialog(void *p);
   static void deleteArray_TGFontDialog(void *p);
   static void destruct_TGFontDialog(void *p);
   static void streamer_TGFontDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFontDialog*)
   {
      ::TGFontDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGFontDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGFontDialog", ::TGFontDialog::Class_Version(), "TGFontDialog.h", 24,
                  typeid(::TGFontDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGFontDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGFontDialog) );
      instance.SetNew(&new_TGFontDialog);
      instance.SetNewArray(&newArray_TGFontDialog);
      instance.SetDelete(&delete_TGFontDialog);
      instance.SetDeleteArray(&deleteArray_TGFontDialog);
      instance.SetDestructor(&destruct_TGFontDialog);
      instance.SetStreamerFunc(&streamer_TGFontDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFontDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFontDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFontDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TGFontDialogcLcLFontProp_t_Dictionary();
   static void TGFontDialogcLcLFontProp_t_TClassManip(TClass*);
   static void *new_TGFontDialogcLcLFontProp_t(void *p = nullptr);
   static void *newArray_TGFontDialogcLcLFontProp_t(Long_t size, void *p);
   static void delete_TGFontDialogcLcLFontProp_t(void *p);
   static void deleteArray_TGFontDialogcLcLFontProp_t(void *p);
   static void destruct_TGFontDialogcLcLFontProp_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFontDialog::FontProp_t*)
   {
      ::TGFontDialog::FontProp_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGFontDialog::FontProp_t));
      static ::ROOT::TGenericClassInfo 
         instance("TGFontDialog::FontProp_t", "TGFontDialog.h", 27,
                  typeid(::TGFontDialog::FontProp_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGFontDialogcLcLFontProp_t_Dictionary, isa_proxy, 0,
                  sizeof(::TGFontDialog::FontProp_t) );
      instance.SetNew(&new_TGFontDialogcLcLFontProp_t);
      instance.SetNewArray(&newArray_TGFontDialogcLcLFontProp_t);
      instance.SetDelete(&delete_TGFontDialogcLcLFontProp_t);
      instance.SetDeleteArray(&deleteArray_TGFontDialogcLcLFontProp_t);
      instance.SetDestructor(&destruct_TGFontDialogcLcLFontProp_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFontDialog::FontProp_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFontDialog::FontProp_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFontDialog::FontProp_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGFontDialogcLcLFontProp_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TGFontDialog::FontProp_t*>(nullptr))->GetClass();
      TGFontDialogcLcLFontProp_t_TClassManip(theClass);
   return theClass;
   }

   static void TGFontDialogcLcLFontProp_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TGIcon(void *p = nullptr);
   static void *newArray_TGIcon(Long_t size, void *p);
   static void delete_TGIcon(void *p);
   static void deleteArray_TGIcon(void *p);
   static void destruct_TGIcon(void *p);
   static void streamer_TGIcon(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGIcon*)
   {
      ::TGIcon *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGIcon >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGIcon", ::TGIcon::Class_Version(), "TGIcon.h", 22,
                  typeid(::TGIcon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGIcon::Dictionary, isa_proxy, 16,
                  sizeof(::TGIcon) );
      instance.SetNew(&new_TGIcon);
      instance.SetNewArray(&newArray_TGIcon);
      instance.SetDelete(&delete_TGIcon);
      instance.SetDeleteArray(&deleteArray_TGIcon);
      instance.SetDestructor(&destruct_TGIcon);
      instance.SetStreamerFunc(&streamer_TGIcon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGIcon*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGIcon*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGIcon*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGIdleHandler(void *p);
   static void deleteArray_TGIdleHandler(void *p);
   static void destruct_TGIdleHandler(void *p);
   static void streamer_TGIdleHandler(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGIdleHandler*)
   {
      ::TGIdleHandler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGIdleHandler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGIdleHandler", ::TGIdleHandler::Class_Version(), "TGIdleHandler.h", 19,
                  typeid(::TGIdleHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGIdleHandler::Dictionary, isa_proxy, 16,
                  sizeof(::TGIdleHandler) );
      instance.SetDelete(&delete_TGIdleHandler);
      instance.SetDeleteArray(&deleteArray_TGIdleHandler);
      instance.SetDestructor(&destruct_TGIdleHandler);
      instance.SetStreamerFunc(&streamer_TGIdleHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGIdleHandler*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGIdleHandler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGIdleHandler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGRegion(void *p = nullptr);
   static void *newArray_TGRegion(Long_t size, void *p);
   static void delete_TGRegion(void *p);
   static void deleteArray_TGRegion(void *p);
   static void destruct_TGRegion(void *p);
   static void streamer_TGRegion(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGRegion*)
   {
      ::TGRegion *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGRegion >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGRegion", ::TGRegion::Class_Version(), "TGImageMap.h", 27,
                  typeid(::TGRegion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGRegion::Dictionary, isa_proxy, 16,
                  sizeof(::TGRegion) );
      instance.SetNew(&new_TGRegion);
      instance.SetNewArray(&newArray_TGRegion);
      instance.SetDelete(&delete_TGRegion);
      instance.SetDeleteArray(&deleteArray_TGRegion);
      instance.SetDestructor(&destruct_TGRegion);
      instance.SetStreamerFunc(&streamer_TGRegion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGRegion*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGRegion*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGRegion*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGRegionWithId(void *p = nullptr);
   static void *newArray_TGRegionWithId(Long_t size, void *p);
   static void delete_TGRegionWithId(void *p);
   static void deleteArray_TGRegionWithId(void *p);
   static void destruct_TGRegionWithId(void *p);
   static void streamer_TGRegionWithId(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGRegionWithId*)
   {
      ::TGRegionWithId *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGRegionWithId >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGRegionWithId", ::TGRegionWithId::Class_Version(), "TGImageMap.h", 84,
                  typeid(::TGRegionWithId), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGRegionWithId::Dictionary, isa_proxy, 16,
                  sizeof(::TGRegionWithId) );
      instance.SetNew(&new_TGRegionWithId);
      instance.SetNewArray(&newArray_TGRegionWithId);
      instance.SetDelete(&delete_TGRegionWithId);
      instance.SetDeleteArray(&deleteArray_TGRegionWithId);
      instance.SetDestructor(&destruct_TGRegionWithId);
      instance.SetStreamerFunc(&streamer_TGRegionWithId);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGRegionWithId*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGRegionWithId*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGRegionWithId*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGImageMap(void *p = nullptr);
   static void *newArray_TGImageMap(Long_t size, void *p);
   static void delete_TGImageMap(void *p);
   static void deleteArray_TGImageMap(void *p);
   static void destruct_TGImageMap(void *p);
   static void streamer_TGImageMap(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGImageMap*)
   {
      ::TGImageMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGImageMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGImageMap", ::TGImageMap::Class_Version(), "TGImageMap.h", 116,
                  typeid(::TGImageMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGImageMap::Dictionary, isa_proxy, 16,
                  sizeof(::TGImageMap) );
      instance.SetNew(&new_TGImageMap);
      instance.SetNewArray(&newArray_TGImageMap);
      instance.SetDelete(&delete_TGImageMap);
      instance.SetDeleteArray(&deleteArray_TGImageMap);
      instance.SetDestructor(&destruct_TGImageMap);
      instance.SetStreamerFunc(&streamer_TGImageMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGImageMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGImageMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGImageMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGInputDialog(void *p = nullptr);
   static void *newArray_TGInputDialog(Long_t size, void *p);
   static void delete_TGInputDialog(void *p);
   static void deleteArray_TGInputDialog(void *p);
   static void destruct_TGInputDialog(void *p);
   static void streamer_TGInputDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGInputDialog*)
   {
      ::TGInputDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGInputDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGInputDialog", ::TGInputDialog::Class_Version(), "TGInputDialog.h", 22,
                  typeid(::TGInputDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGInputDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGInputDialog) );
      instance.SetNew(&new_TGInputDialog);
      instance.SetNewArray(&newArray_TGInputDialog);
      instance.SetDelete(&delete_TGInputDialog);
      instance.SetDeleteArray(&deleteArray_TGInputDialog);
      instance.SetDestructor(&destruct_TGInputDialog);
      instance.SetStreamerFunc(&streamer_TGInputDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGInputDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGInputDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGInputDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLabel(void *p = nullptr);
   static void *newArray_TGLabel(Long_t size, void *p);
   static void delete_TGLabel(void *p);
   static void deleteArray_TGLabel(void *p);
   static void destruct_TGLabel(void *p);
   static void streamer_TGLabel(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLabel*)
   {
      ::TGLabel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLabel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGLabel", ::TGLabel::Class_Version(), "TGLabel.h", 24,
                  typeid(::TGLabel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLabel::Dictionary, isa_proxy, 16,
                  sizeof(::TGLabel) );
      instance.SetNew(&new_TGLabel);
      instance.SetNewArray(&newArray_TGLabel);
      instance.SetDelete(&delete_TGLabel);
      instance.SetDeleteArray(&deleteArray_TGLabel);
      instance.SetDestructor(&destruct_TGLabel);
      instance.SetStreamerFunc(&streamer_TGLabel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLabel*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGLabel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGLabel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGListTreeItem(void *p);
   static void deleteArray_TGListTreeItem(void *p);
   static void destruct_TGListTreeItem(void *p);
   static void streamer_TGListTreeItem(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGListTreeItem*)
   {
      ::TGListTreeItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGListTreeItem >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGListTreeItem", ::TGListTreeItem::Class_Version(), "TGListTree.h", 26,
                  typeid(::TGListTreeItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGListTreeItem::Dictionary, isa_proxy, 16,
                  sizeof(::TGListTreeItem) );
      instance.SetDelete(&delete_TGListTreeItem);
      instance.SetDeleteArray(&deleteArray_TGListTreeItem);
      instance.SetDestructor(&destruct_TGListTreeItem);
      instance.SetStreamerFunc(&streamer_TGListTreeItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGListTreeItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGListTreeItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGListTreeItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGListTreeItemStd(void *p = nullptr);
   static void *newArray_TGListTreeItemStd(Long_t size, void *p);
   static void delete_TGListTreeItemStd(void *p);
   static void deleteArray_TGListTreeItemStd(void *p);
   static void destruct_TGListTreeItemStd(void *p);
   static void streamer_TGListTreeItemStd(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGListTreeItemStd*)
   {
      ::TGListTreeItemStd *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGListTreeItemStd >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGListTreeItemStd", ::TGListTreeItemStd::Class_Version(), "TGListTree.h", 126,
                  typeid(::TGListTreeItemStd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGListTreeItemStd::Dictionary, isa_proxy, 16,
                  sizeof(::TGListTreeItemStd) );
      instance.SetNew(&new_TGListTreeItemStd);
      instance.SetNewArray(&newArray_TGListTreeItemStd);
      instance.SetDelete(&delete_TGListTreeItemStd);
      instance.SetDeleteArray(&deleteArray_TGListTreeItemStd);
      instance.SetDestructor(&destruct_TGListTreeItemStd);
      instance.SetStreamerFunc(&streamer_TGListTreeItemStd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGListTreeItemStd*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGListTreeItemStd*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGListTreeItemStd*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGListTree(void *p = nullptr);
   static void *newArray_TGListTree(Long_t size, void *p);
   static void delete_TGListTree(void *p);
   static void deleteArray_TGListTree(void *p);
   static void destruct_TGListTree(void *p);
   static void streamer_TGListTree(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGListTree*)
   {
      ::TGListTree *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGListTree >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGListTree", ::TGListTree::Class_Version(), "TGListTree.h", 197,
                  typeid(::TGListTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGListTree::Dictionary, isa_proxy, 16,
                  sizeof(::TGListTree) );
      instance.SetNew(&new_TGListTree);
      instance.SetNewArray(&newArray_TGListTree);
      instance.SetDelete(&delete_TGListTree);
      instance.SetDeleteArray(&deleteArray_TGListTree);
      instance.SetDestructor(&destruct_TGListTree);
      instance.SetStreamerFunc(&streamer_TGListTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGListTree*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGListTree*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGListTree*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGPicture(void *p);
   static void deleteArray_TGPicture(void *p);
   static void destruct_TGPicture(void *p);
   static void streamer_TGPicture(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGPicture*)
   {
      ::TGPicture *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGPicture >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGPicture", ::TGPicture::Class_Version(), "TGPicture.h", 25,
                  typeid(::TGPicture), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGPicture::Dictionary, isa_proxy, 16,
                  sizeof(::TGPicture) );
      instance.SetDelete(&delete_TGPicture);
      instance.SetDeleteArray(&deleteArray_TGPicture);
      instance.SetDestructor(&destruct_TGPicture);
      instance.SetStreamerFunc(&streamer_TGPicture);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGPicture*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGPicture*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGPicture*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGSelectedPicture(void *p);
   static void deleteArray_TGSelectedPicture(void *p);
   static void destruct_TGSelectedPicture(void *p);
   static void streamer_TGSelectedPicture(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGSelectedPicture*)
   {
      ::TGSelectedPicture *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGSelectedPicture >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGSelectedPicture", ::TGSelectedPicture::Class_Version(), "TGPicture.h", 67,
                  typeid(::TGSelectedPicture), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGSelectedPicture::Dictionary, isa_proxy, 16,
                  sizeof(::TGSelectedPicture) );
      instance.SetDelete(&delete_TGSelectedPicture);
      instance.SetDeleteArray(&deleteArray_TGSelectedPicture);
      instance.SetDestructor(&destruct_TGSelectedPicture);
      instance.SetStreamerFunc(&streamer_TGSelectedPicture);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGSelectedPicture*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGSelectedPicture*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGSelectedPicture*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGPicturePool(void *p);
   static void deleteArray_TGPicturePool(void *p);
   static void destruct_TGPicturePool(void *p);
   static void streamer_TGPicturePool(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGPicturePool*)
   {
      ::TGPicturePool *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGPicturePool >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGPicturePool", ::TGPicturePool::Class_Version(), "TGPicture.h", 89,
                  typeid(::TGPicturePool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGPicturePool::Dictionary, isa_proxy, 16,
                  sizeof(::TGPicturePool) );
      instance.SetDelete(&delete_TGPicturePool);
      instance.SetDeleteArray(&deleteArray_TGPicturePool);
      instance.SetDestructor(&destruct_TGPicturePool);
      instance.SetStreamerFunc(&streamer_TGPicturePool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGPicturePool*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGPicturePool*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGPicturePool*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGMenuEntry(void *p = nullptr);
   static void *newArray_TGMenuEntry(Long_t size, void *p);
   static void delete_TGMenuEntry(void *p);
   static void deleteArray_TGMenuEntry(void *p);
   static void destruct_TGMenuEntry(void *p);
   static void streamer_TGMenuEntry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMenuEntry*)
   {
      ::TGMenuEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMenuEntry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMenuEntry", ::TGMenuEntry::Class_Version(), "TGMenu.h", 57,
                  typeid(::TGMenuEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMenuEntry::Dictionary, isa_proxy, 16,
                  sizeof(::TGMenuEntry) );
      instance.SetNew(&new_TGMenuEntry);
      instance.SetNewArray(&newArray_TGMenuEntry);
      instance.SetDelete(&delete_TGMenuEntry);
      instance.SetDeleteArray(&deleteArray_TGMenuEntry);
      instance.SetDestructor(&destruct_TGMenuEntry);
      instance.SetStreamerFunc(&streamer_TGMenuEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMenuEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMenuEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMenuEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGPopupMenu(void *p = nullptr);
   static void *newArray_TGPopupMenu(Long_t size, void *p);
   static void delete_TGPopupMenu(void *p);
   static void deleteArray_TGPopupMenu(void *p);
   static void destruct_TGPopupMenu(void *p);
   static void streamer_TGPopupMenu(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGPopupMenu*)
   {
      ::TGPopupMenu *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGPopupMenu >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGPopupMenu", ::TGPopupMenu::Class_Version(), "TGMenu.h", 110,
                  typeid(::TGPopupMenu), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGPopupMenu::Dictionary, isa_proxy, 16,
                  sizeof(::TGPopupMenu) );
      instance.SetNew(&new_TGPopupMenu);
      instance.SetNewArray(&newArray_TGPopupMenu);
      instance.SetDelete(&delete_TGPopupMenu);
      instance.SetDeleteArray(&deleteArray_TGPopupMenu);
      instance.SetDestructor(&destruct_TGPopupMenu);
      instance.SetStreamerFunc(&streamer_TGPopupMenu);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGPopupMenu*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGPopupMenu*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGPopupMenu*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGMenuTitle(void *p = nullptr);
   static void *newArray_TGMenuTitle(Long_t size, void *p);
   static void delete_TGMenuTitle(void *p);
   static void deleteArray_TGMenuTitle(void *p);
   static void destruct_TGMenuTitle(void *p);
   static void streamer_TGMenuTitle(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMenuTitle*)
   {
      ::TGMenuTitle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMenuTitle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMenuTitle", ::TGMenuTitle::Class_Version(), "TGMenu.h", 234,
                  typeid(::TGMenuTitle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMenuTitle::Dictionary, isa_proxy, 16,
                  sizeof(::TGMenuTitle) );
      instance.SetNew(&new_TGMenuTitle);
      instance.SetNewArray(&newArray_TGMenuTitle);
      instance.SetDelete(&delete_TGMenuTitle);
      instance.SetDeleteArray(&deleteArray_TGMenuTitle);
      instance.SetDestructor(&destruct_TGMenuTitle);
      instance.SetStreamerFunc(&streamer_TGMenuTitle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMenuTitle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMenuTitle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMenuTitle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGMenuBar(void *p = nullptr);
   static void *newArray_TGMenuBar(Long_t size, void *p);
   static void delete_TGMenuBar(void *p);
   static void deleteArray_TGMenuBar(void *p);
   static void destruct_TGMenuBar(void *p);
   static void streamer_TGMenuBar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMenuBar*)
   {
      ::TGMenuBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMenuBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMenuBar", ::TGMenuBar::Class_Version(), "TGMenu.h", 282,
                  typeid(::TGMenuBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMenuBar::Dictionary, isa_proxy, 16,
                  sizeof(::TGMenuBar) );
      instance.SetNew(&new_TGMenuBar);
      instance.SetNewArray(&newArray_TGMenuBar);
      instance.SetDelete(&delete_TGMenuBar);
      instance.SetDeleteArray(&deleteArray_TGMenuBar);
      instance.SetDestructor(&destruct_TGMenuBar);
      instance.SetStreamerFunc(&streamer_TGMenuBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMenuBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMenuBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMenuBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGMdiFrameList(void *p = nullptr);
   static void *newArray_TGMdiFrameList(Long_t size, void *p);
   static void delete_TGMdiFrameList(void *p);
   static void deleteArray_TGMdiFrameList(void *p);
   static void destruct_TGMdiFrameList(void *p);
   static void streamer_TGMdiFrameList(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiFrameList*)
   {
      ::TGMdiFrameList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiFrameList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiFrameList", ::TGMdiFrameList::Class_Version(), "TGMdiMainFrame.h", 86,
                  typeid(::TGMdiFrameList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiFrameList::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiFrameList) );
      instance.SetNew(&new_TGMdiFrameList);
      instance.SetNewArray(&newArray_TGMdiFrameList);
      instance.SetDelete(&delete_TGMdiFrameList);
      instance.SetDeleteArray(&deleteArray_TGMdiFrameList);
      instance.SetDestructor(&destruct_TGMdiFrameList);
      instance.SetStreamerFunc(&streamer_TGMdiFrameList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiFrameList*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiFrameList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiFrameList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGMdiGeometry(void *p = nullptr);
   static void *newArray_TGMdiGeometry(Long_t size, void *p);
   static void delete_TGMdiGeometry(void *p);
   static void deleteArray_TGMdiGeometry(void *p);
   static void destruct_TGMdiGeometry(void *p);
   static void streamer_TGMdiGeometry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiGeometry*)
   {
      ::TGMdiGeometry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiGeometry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiGeometry", ::TGMdiGeometry::Class_Version(), "TGMdiMainFrame.h", 117,
                  typeid(::TGMdiGeometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiGeometry::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiGeometry) );
      instance.SetNew(&new_TGMdiGeometry);
      instance.SetNewArray(&newArray_TGMdiGeometry);
      instance.SetDelete(&delete_TGMdiGeometry);
      instance.SetDeleteArray(&deleteArray_TGMdiGeometry);
      instance.SetDestructor(&destruct_TGMdiGeometry);
      instance.SetStreamerFunc(&streamer_TGMdiGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiGeometry*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiGeometry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiGeometry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMdiMainFrame(void *p);
   static void deleteArray_TGMdiMainFrame(void *p);
   static void destruct_TGMdiMainFrame(void *p);
   static void streamer_TGMdiMainFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiMainFrame*)
   {
      ::TGMdiMainFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiMainFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiMainFrame", ::TGMdiMainFrame::Class_Version(), "TGMdiMainFrame.h", 131,
                  typeid(::TGMdiMainFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiMainFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiMainFrame) );
      instance.SetDelete(&delete_TGMdiMainFrame);
      instance.SetDeleteArray(&deleteArray_TGMdiMainFrame);
      instance.SetDestructor(&destruct_TGMdiMainFrame);
      instance.SetStreamerFunc(&streamer_TGMdiMainFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiMainFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiMainFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiMainFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMdiContainer(void *p);
   static void deleteArray_TGMdiContainer(void *p);
   static void destruct_TGMdiContainer(void *p);
   static void streamer_TGMdiContainer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiContainer*)
   {
      ::TGMdiContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiContainer", ::TGMdiContainer::Class_Version(), "TGMdiMainFrame.h", 235,
                  typeid(::TGMdiContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiContainer::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiContainer) );
      instance.SetDelete(&delete_TGMdiContainer);
      instance.SetDeleteArray(&deleteArray_TGMdiContainer);
      instance.SetDestructor(&destruct_TGMdiContainer);
      instance.SetStreamerFunc(&streamer_TGMdiContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMdiMenuBar(void *p);
   static void deleteArray_TGMdiMenuBar(void *p);
   static void destruct_TGMdiMenuBar(void *p);
   static void streamer_TGMdiMenuBar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiMenuBar*)
   {
      ::TGMdiMenuBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiMenuBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiMenuBar", ::TGMdiMenuBar::Class_Version(), "TGMdiMenu.h", 46,
                  typeid(::TGMdiMenuBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiMenuBar::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiMenuBar) );
      instance.SetDelete(&delete_TGMdiMenuBar);
      instance.SetDeleteArray(&deleteArray_TGMdiMenuBar);
      instance.SetDestructor(&destruct_TGMdiMenuBar);
      instance.SetStreamerFunc(&streamer_TGMdiMenuBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiMenuBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiMenuBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiMenuBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMdiFrame(void *p);
   static void deleteArray_TGMdiFrame(void *p);
   static void destruct_TGMdiFrame(void *p);
   static void streamer_TGMdiFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiFrame*)
   {
      ::TGMdiFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiFrame", ::TGMdiFrame::Class_Version(), "TGMdiFrame.h", 42,
                  typeid(::TGMdiFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiFrame) );
      instance.SetDelete(&delete_TGMdiFrame);
      instance.SetDeleteArray(&deleteArray_TGMdiFrame);
      instance.SetDestructor(&destruct_TGMdiFrame);
      instance.SetStreamerFunc(&streamer_TGMdiFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMdiWinResizer(void *p);
   static void deleteArray_TGMdiWinResizer(void *p);
   static void destruct_TGMdiWinResizer(void *p);
   static void streamer_TGMdiWinResizer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiWinResizer*)
   {
      ::TGMdiWinResizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiWinResizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiWinResizer", ::TGMdiWinResizer::Class_Version(), "TGMdiDecorFrame.h", 45,
                  typeid(::TGMdiWinResizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiWinResizer::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiWinResizer) );
      instance.SetDelete(&delete_TGMdiWinResizer);
      instance.SetDeleteArray(&deleteArray_TGMdiWinResizer);
      instance.SetDestructor(&destruct_TGMdiWinResizer);
      instance.SetStreamerFunc(&streamer_TGMdiWinResizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiWinResizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiWinResizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiWinResizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMdiVerticalWinResizer(void *p);
   static void deleteArray_TGMdiVerticalWinResizer(void *p);
   static void destruct_TGMdiVerticalWinResizer(void *p);
   static void streamer_TGMdiVerticalWinResizer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiVerticalWinResizer*)
   {
      ::TGMdiVerticalWinResizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiVerticalWinResizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiVerticalWinResizer", ::TGMdiVerticalWinResizer::Class_Version(), "TGMdiDecorFrame.h", 82,
                  typeid(::TGMdiVerticalWinResizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiVerticalWinResizer::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiVerticalWinResizer) );
      instance.SetDelete(&delete_TGMdiVerticalWinResizer);
      instance.SetDeleteArray(&deleteArray_TGMdiVerticalWinResizer);
      instance.SetDestructor(&destruct_TGMdiVerticalWinResizer);
      instance.SetStreamerFunc(&streamer_TGMdiVerticalWinResizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiVerticalWinResizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiVerticalWinResizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiVerticalWinResizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMdiHorizontalWinResizer(void *p);
   static void deleteArray_TGMdiHorizontalWinResizer(void *p);
   static void destruct_TGMdiHorizontalWinResizer(void *p);
   static void streamer_TGMdiHorizontalWinResizer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiHorizontalWinResizer*)
   {
      ::TGMdiHorizontalWinResizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiHorizontalWinResizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiHorizontalWinResizer", ::TGMdiHorizontalWinResizer::Class_Version(), "TGMdiDecorFrame.h", 97,
                  typeid(::TGMdiHorizontalWinResizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiHorizontalWinResizer::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiHorizontalWinResizer) );
      instance.SetDelete(&delete_TGMdiHorizontalWinResizer);
      instance.SetDeleteArray(&deleteArray_TGMdiHorizontalWinResizer);
      instance.SetDestructor(&destruct_TGMdiHorizontalWinResizer);
      instance.SetStreamerFunc(&streamer_TGMdiHorizontalWinResizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiHorizontalWinResizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiHorizontalWinResizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiHorizontalWinResizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMdiCornerWinResizer(void *p);
   static void deleteArray_TGMdiCornerWinResizer(void *p);
   static void destruct_TGMdiCornerWinResizer(void *p);
   static void streamer_TGMdiCornerWinResizer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiCornerWinResizer*)
   {
      ::TGMdiCornerWinResizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiCornerWinResizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiCornerWinResizer", ::TGMdiCornerWinResizer::Class_Version(), "TGMdiDecorFrame.h", 112,
                  typeid(::TGMdiCornerWinResizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiCornerWinResizer::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiCornerWinResizer) );
      instance.SetDelete(&delete_TGMdiCornerWinResizer);
      instance.SetDeleteArray(&deleteArray_TGMdiCornerWinResizer);
      instance.SetDestructor(&destruct_TGMdiCornerWinResizer);
      instance.SetStreamerFunc(&streamer_TGMdiCornerWinResizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiCornerWinResizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiCornerWinResizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiCornerWinResizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMdiButtons(void *p);
   static void deleteArray_TGMdiButtons(void *p);
   static void destruct_TGMdiButtons(void *p);
   static void streamer_TGMdiButtons(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiButtons*)
   {
      ::TGMdiButtons *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiButtons >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiButtons", ::TGMdiButtons::Class_Version(), "TGMdiDecorFrame.h", 129,
                  typeid(::TGMdiButtons), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiButtons::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiButtons) );
      instance.SetDelete(&delete_TGMdiButtons);
      instance.SetDeleteArray(&deleteArray_TGMdiButtons);
      instance.SetDestructor(&destruct_TGMdiButtons);
      instance.SetStreamerFunc(&streamer_TGMdiButtons);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiButtons*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiButtons*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiButtons*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMdiTitleIcon(void *p);
   static void deleteArray_TGMdiTitleIcon(void *p);
   static void destruct_TGMdiTitleIcon(void *p);
   static void streamer_TGMdiTitleIcon(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiTitleIcon*)
   {
      ::TGMdiTitleIcon *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiTitleIcon >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiTitleIcon", ::TGMdiTitleIcon::Class_Version(), "TGMdiDecorFrame.h", 150,
                  typeid(::TGMdiTitleIcon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiTitleIcon::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiTitleIcon) );
      instance.SetDelete(&delete_TGMdiTitleIcon);
      instance.SetDeleteArray(&deleteArray_TGMdiTitleIcon);
      instance.SetDestructor(&destruct_TGMdiTitleIcon);
      instance.SetStreamerFunc(&streamer_TGMdiTitleIcon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiTitleIcon*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiTitleIcon*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiTitleIcon*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMdiTitleBar(void *p);
   static void deleteArray_TGMdiTitleBar(void *p);
   static void destruct_TGMdiTitleBar(void *p);
   static void streamer_TGMdiTitleBar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiTitleBar*)
   {
      ::TGMdiTitleBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiTitleBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiTitleBar", ::TGMdiTitleBar::Class_Version(), "TGMdiDecorFrame.h", 176,
                  typeid(::TGMdiTitleBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiTitleBar::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiTitleBar) );
      instance.SetDelete(&delete_TGMdiTitleBar);
      instance.SetDeleteArray(&deleteArray_TGMdiTitleBar);
      instance.SetDestructor(&destruct_TGMdiTitleBar);
      instance.SetStreamerFunc(&streamer_TGMdiTitleBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiTitleBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiTitleBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiTitleBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMdiDecorFrame(void *p);
   static void deleteArray_TGMdiDecorFrame(void *p);
   static void destruct_TGMdiDecorFrame(void *p);
   static void streamer_TGMdiDecorFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMdiDecorFrame*)
   {
      ::TGMdiDecorFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMdiDecorFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMdiDecorFrame", ::TGMdiDecorFrame::Class_Version(), "TGMdiDecorFrame.h", 229,
                  typeid(::TGMdiDecorFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMdiDecorFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGMdiDecorFrame) );
      instance.SetDelete(&delete_TGMdiDecorFrame);
      instance.SetDeleteArray(&deleteArray_TGMdiDecorFrame);
      instance.SetDestructor(&destruct_TGMdiDecorFrame);
      instance.SetStreamerFunc(&streamer_TGMdiDecorFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMdiDecorFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMdiDecorFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMdiDecorFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGMimeTypes(void *p);
   static void deleteArray_TGMimeTypes(void *p);
   static void destruct_TGMimeTypes(void *p);
   static void streamer_TGMimeTypes(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMimeTypes*)
   {
      ::TGMimeTypes *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMimeTypes >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMimeTypes", ::TGMimeTypes::Class_Version(), "TGMimeTypes.h", 47,
                  typeid(::TGMimeTypes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMimeTypes::Dictionary, isa_proxy, 16,
                  sizeof(::TGMimeTypes) );
      instance.SetDelete(&delete_TGMimeTypes);
      instance.SetDeleteArray(&deleteArray_TGMimeTypes);
      instance.SetDestructor(&destruct_TGMimeTypes);
      instance.SetStreamerFunc(&streamer_TGMimeTypes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMimeTypes*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMimeTypes*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMimeTypes*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGMsgBox(void *p = nullptr);
   static void *newArray_TGMsgBox(Long_t size, void *p);
   static void delete_TGMsgBox(void *p);
   static void deleteArray_TGMsgBox(void *p);
   static void destruct_TGMsgBox(void *p);
   static void streamer_TGMsgBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMsgBox*)
   {
      ::TGMsgBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMsgBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMsgBox", ::TGMsgBox::Class_Version(), "TGMsgBox.h", 52,
                  typeid(::TGMsgBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMsgBox::Dictionary, isa_proxy, 16,
                  sizeof(::TGMsgBox) );
      instance.SetNew(&new_TGMsgBox);
      instance.SetNewArray(&newArray_TGMsgBox);
      instance.SetDelete(&delete_TGMsgBox);
      instance.SetDeleteArray(&deleteArray_TGMsgBox);
      instance.SetDestructor(&destruct_TGMsgBox);
      instance.SetStreamerFunc(&streamer_TGMsgBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMsgBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMsgBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMsgBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTextBuffer(void *p = nullptr);
   static void *newArray_TGTextBuffer(Long_t size, void *p);
   static void delete_TGTextBuffer(void *p);
   static void deleteArray_TGTextBuffer(void *p);
   static void destruct_TGTextBuffer(void *p);
   static void streamer_TGTextBuffer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTextBuffer*)
   {
      ::TGTextBuffer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTextBuffer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTextBuffer", ::TGTextBuffer::Class_Version(), "TGTextBuffer.h", 17,
                  typeid(::TGTextBuffer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTextBuffer::Dictionary, isa_proxy, 16,
                  sizeof(::TGTextBuffer) );
      instance.SetNew(&new_TGTextBuffer);
      instance.SetNewArray(&newArray_TGTextBuffer);
      instance.SetDelete(&delete_TGTextBuffer);
      instance.SetDeleteArray(&deleteArray_TGTextBuffer);
      instance.SetDestructor(&destruct_TGTextBuffer);
      instance.SetStreamerFunc(&streamer_TGTextBuffer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTextBuffer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTextBuffer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTextBuffer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTextEntry(void *p = nullptr);
   static void *newArray_TGTextEntry(Long_t size, void *p);
   static void delete_TGTextEntry(void *p);
   static void deleteArray_TGTextEntry(void *p);
   static void destruct_TGTextEntry(void *p);
   static void streamer_TGTextEntry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTextEntry*)
   {
      ::TGTextEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTextEntry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTextEntry", ::TGTextEntry::Class_Version(), "TGTextEntry.h", 24,
                  typeid(::TGTextEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTextEntry::Dictionary, isa_proxy, 16,
                  sizeof(::TGTextEntry) );
      instance.SetNew(&new_TGTextEntry);
      instance.SetNewArray(&newArray_TGTextEntry);
      instance.SetDelete(&delete_TGTextEntry);
      instance.SetDeleteArray(&deleteArray_TGTextEntry);
      instance.SetDestructor(&destruct_TGTextEntry);
      instance.SetStreamerFunc(&streamer_TGTextEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTextEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTextEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTextEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGNumberFormat(void *p = nullptr);
   static void *newArray_TGNumberFormat(Long_t size, void *p);
   static void delete_TGNumberFormat(void *p);
   static void deleteArray_TGNumberFormat(void *p);
   static void destruct_TGNumberFormat(void *p);
   static void streamer_TGNumberFormat(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGNumberFormat*)
   {
      ::TGNumberFormat *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGNumberFormat >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGNumberFormat", ::TGNumberFormat::Class_Version(), "TGNumberEntry.h", 22,
                  typeid(::TGNumberFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGNumberFormat::Dictionary, isa_proxy, 16,
                  sizeof(::TGNumberFormat) );
      instance.SetNew(&new_TGNumberFormat);
      instance.SetNewArray(&newArray_TGNumberFormat);
      instance.SetDelete(&delete_TGNumberFormat);
      instance.SetDeleteArray(&deleteArray_TGNumberFormat);
      instance.SetDestructor(&destruct_TGNumberFormat);
      instance.SetStreamerFunc(&streamer_TGNumberFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGNumberFormat*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGNumberFormat*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGNumberFormat*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGNumberEntryField(void *p = nullptr);
   static void *newArray_TGNumberEntryField(Long_t size, void *p);
   static void delete_TGNumberEntryField(void *p);
   static void deleteArray_TGNumberEntryField(void *p);
   static void destruct_TGNumberEntryField(void *p);
   static void streamer_TGNumberEntryField(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGNumberEntryField*)
   {
      ::TGNumberEntryField *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGNumberEntryField >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGNumberEntryField", ::TGNumberEntryField::Class_Version(), "TGNumberEntry.h", 66,
                  typeid(::TGNumberEntryField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGNumberEntryField::Dictionary, isa_proxy, 16,
                  sizeof(::TGNumberEntryField) );
      instance.SetNew(&new_TGNumberEntryField);
      instance.SetNewArray(&newArray_TGNumberEntryField);
      instance.SetDelete(&delete_TGNumberEntryField);
      instance.SetDeleteArray(&deleteArray_TGNumberEntryField);
      instance.SetDestructor(&destruct_TGNumberEntryField);
      instance.SetStreamerFunc(&streamer_TGNumberEntryField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGNumberEntryField*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGNumberEntryField*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGNumberEntryField*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGNumberEntry(void *p = nullptr);
   static void *newArray_TGNumberEntry(Long_t size, void *p);
   static void delete_TGNumberEntry(void *p);
   static void deleteArray_TGNumberEntry(void *p);
   static void destruct_TGNumberEntry(void *p);
   static void streamer_TGNumberEntry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGNumberEntry*)
   {
      ::TGNumberEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGNumberEntry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGNumberEntry", ::TGNumberEntry::Class_Version(), "TGNumberEntry.h", 147,
                  typeid(::TGNumberEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGNumberEntry::Dictionary, isa_proxy, 16,
                  sizeof(::TGNumberEntry) );
      instance.SetNew(&new_TGNumberEntry);
      instance.SetNewArray(&newArray_TGNumberEntry);
      instance.SetDelete(&delete_TGNumberEntry);
      instance.SetDeleteArray(&deleteArray_TGNumberEntry);
      instance.SetDestructor(&destruct_TGNumberEntry);
      instance.SetStreamerFunc(&streamer_TGNumberEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGNumberEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGNumberEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGNumberEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGNumberEntryLayout(void *p);
   static void deleteArray_TGNumberEntryLayout(void *p);
   static void destruct_TGNumberEntryLayout(void *p);
   static void streamer_TGNumberEntryLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGNumberEntryLayout*)
   {
      ::TGNumberEntryLayout *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGNumberEntryLayout >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGNumberEntryLayout", ::TGNumberEntryLayout::Class_Version(), "TGNumberEntry.h", 277,
                  typeid(::TGNumberEntryLayout), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGNumberEntryLayout::Dictionary, isa_proxy, 16,
                  sizeof(::TGNumberEntryLayout) );
      instance.SetDelete(&delete_TGNumberEntryLayout);
      instance.SetDeleteArray(&deleteArray_TGNumberEntryLayout);
      instance.SetDestructor(&destruct_TGNumberEntryLayout);
      instance.SetStreamerFunc(&streamer_TGNumberEntryLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGNumberEntryLayout*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGNumberEntryLayout*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGNumberEntryLayout*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGFrameElementPack(void *p);
   static void deleteArray_TGFrameElementPack(void *p);
   static void destruct_TGFrameElementPack(void *p);
   static void streamer_TGFrameElementPack(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGFrameElementPack*)
   {
      ::TGFrameElementPack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGFrameElementPack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGFrameElementPack", ::TGFrameElementPack::Class_Version(), "TGPack.h", 21,
                  typeid(::TGFrameElementPack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGFrameElementPack::Dictionary, isa_proxy, 16,
                  sizeof(::TGFrameElementPack) );
      instance.SetDelete(&delete_TGFrameElementPack);
      instance.SetDeleteArray(&deleteArray_TGFrameElementPack);
      instance.SetDestructor(&destruct_TGFrameElementPack);
      instance.SetStreamerFunc(&streamer_TGFrameElementPack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGFrameElementPack*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGFrameElementPack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGFrameElementPack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGPack(void *p = nullptr);
   static void *newArray_TGPack(Long_t size, void *p);
   static void delete_TGPack(void *p);
   static void deleteArray_TGPack(void *p);
   static void destruct_TGPack(void *p);
   static void streamer_TGPack(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGPack*)
   {
      ::TGPack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGPack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGPack", ::TGPack::Class_Version(), "TGPack.h", 39,
                  typeid(::TGPack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGPack::Dictionary, isa_proxy, 16,
                  sizeof(::TGPack) );
      instance.SetNew(&new_TGPack);
      instance.SetNewArray(&newArray_TGPack);
      instance.SetDelete(&delete_TGPack);
      instance.SetDeleteArray(&deleteArray_TGPack);
      instance.SetDestructor(&destruct_TGPack);
      instance.SetStreamerFunc(&streamer_TGPack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGPack*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGPack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGPack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGPasswdDialog(void *p);
   static void deleteArray_TGPasswdDialog(void *p);
   static void destruct_TGPasswdDialog(void *p);
   static void streamer_TGPasswdDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGPasswdDialog*)
   {
      ::TGPasswdDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGPasswdDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGPasswdDialog", ::TGPasswdDialog::Class_Version(), "TGPasswdDialog.h", 24,
                  typeid(::TGPasswdDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGPasswdDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGPasswdDialog) );
      instance.SetDelete(&delete_TGPasswdDialog);
      instance.SetDeleteArray(&deleteArray_TGPasswdDialog);
      instance.SetDestructor(&destruct_TGPasswdDialog);
      instance.SetStreamerFunc(&streamer_TGPasswdDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGPasswdDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGPasswdDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGPasswdDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGProgressBar(void *p);
   static void deleteArray_TGProgressBar(void *p);
   static void destruct_TGProgressBar(void *p);
   static void streamer_TGProgressBar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGProgressBar*)
   {
      ::TGProgressBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGProgressBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGProgressBar", ::TGProgressBar::Class_Version(), "TGProgressBar.h", 19,
                  typeid(::TGProgressBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGProgressBar::Dictionary, isa_proxy, 16,
                  sizeof(::TGProgressBar) );
      instance.SetDelete(&delete_TGProgressBar);
      instance.SetDeleteArray(&deleteArray_TGProgressBar);
      instance.SetDestructor(&destruct_TGProgressBar);
      instance.SetStreamerFunc(&streamer_TGProgressBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGProgressBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGProgressBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGProgressBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGHProgressBar(void *p = nullptr);
   static void *newArray_TGHProgressBar(Long_t size, void *p);
   static void delete_TGHProgressBar(void *p);
   static void deleteArray_TGHProgressBar(void *p);
   static void destruct_TGHProgressBar(void *p);
   static void streamer_TGHProgressBar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHProgressBar*)
   {
      ::TGHProgressBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHProgressBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGHProgressBar", ::TGHProgressBar::Class_Version(), "TGProgressBar.h", 94,
                  typeid(::TGHProgressBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHProgressBar::Dictionary, isa_proxy, 16,
                  sizeof(::TGHProgressBar) );
      instance.SetNew(&new_TGHProgressBar);
      instance.SetNewArray(&newArray_TGHProgressBar);
      instance.SetDelete(&delete_TGHProgressBar);
      instance.SetDeleteArray(&deleteArray_TGHProgressBar);
      instance.SetDestructor(&destruct_TGHProgressBar);
      instance.SetStreamerFunc(&streamer_TGHProgressBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHProgressBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGHProgressBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGHProgressBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGVProgressBar(void *p = nullptr);
   static void *newArray_TGVProgressBar(Long_t size, void *p);
   static void delete_TGVProgressBar(void *p);
   static void deleteArray_TGVProgressBar(void *p);
   static void destruct_TGVProgressBar(void *p);
   static void streamer_TGVProgressBar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGVProgressBar*)
   {
      ::TGVProgressBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGVProgressBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGVProgressBar", ::TGVProgressBar::Class_Version(), "TGProgressBar.h", 122,
                  typeid(::TGVProgressBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGVProgressBar::Dictionary, isa_proxy, 16,
                  sizeof(::TGVProgressBar) );
      instance.SetNew(&new_TGVProgressBar);
      instance.SetNewArray(&newArray_TGVProgressBar);
      instance.SetDelete(&delete_TGVProgressBar);
      instance.SetDeleteArray(&deleteArray_TGVProgressBar);
      instance.SetDestructor(&destruct_TGVProgressBar);
      instance.SetStreamerFunc(&streamer_TGVProgressBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGVProgressBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGVProgressBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGVProgressBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGRedirectOutputGuard(void *p);
   static void deleteArray_TGRedirectOutputGuard(void *p);
   static void destruct_TGRedirectOutputGuard(void *p);
   static void streamer_TGRedirectOutputGuard(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGRedirectOutputGuard*)
   {
      ::TGRedirectOutputGuard *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGRedirectOutputGuard >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGRedirectOutputGuard", ::TGRedirectOutputGuard::Class_Version(), "TGRedirectOutputGuard.h", 20,
                  typeid(::TGRedirectOutputGuard), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGRedirectOutputGuard::Dictionary, isa_proxy, 16,
                  sizeof(::TGRedirectOutputGuard) );
      instance.SetDelete(&delete_TGRedirectOutputGuard);
      instance.SetDeleteArray(&deleteArray_TGRedirectOutputGuard);
      instance.SetDestructor(&destruct_TGRedirectOutputGuard);
      instance.SetStreamerFunc(&streamer_TGRedirectOutputGuard);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGRedirectOutputGuard*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGRedirectOutputGuard*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGRedirectOutputGuard*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGResourcePool(void *p);
   static void deleteArray_TGResourcePool(void *p);
   static void destruct_TGResourcePool(void *p);
   static void streamer_TGResourcePool(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGResourcePool*)
   {
      ::TGResourcePool *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGResourcePool >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGResourcePool", ::TGResourcePool::Class_Version(), "TGResourcePool.h", 28,
                  typeid(::TGResourcePool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGResourcePool::Dictionary, isa_proxy, 16,
                  sizeof(::TGResourcePool) );
      instance.SetDelete(&delete_TGResourcePool);
      instance.SetDeleteArray(&deleteArray_TGResourcePool);
      instance.SetDestructor(&destruct_TGResourcePool);
      instance.SetStreamerFunc(&streamer_TGResourcePool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGResourcePool*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGResourcePool*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGResourcePool*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGShapedFrame(void *p = nullptr);
   static void *newArray_TGShapedFrame(Long_t size, void *p);
   static void delete_TGShapedFrame(void *p);
   static void deleteArray_TGShapedFrame(void *p);
   static void destruct_TGShapedFrame(void *p);
   static void streamer_TGShapedFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGShapedFrame*)
   {
      ::TGShapedFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGShapedFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGShapedFrame", ::TGShapedFrame::Class_Version(), "TGShapedFrame.h", 21,
                  typeid(::TGShapedFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGShapedFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGShapedFrame) );
      instance.SetNew(&new_TGShapedFrame);
      instance.SetNewArray(&newArray_TGShapedFrame);
      instance.SetDelete(&delete_TGShapedFrame);
      instance.SetDeleteArray(&deleteArray_TGShapedFrame);
      instance.SetDestructor(&destruct_TGShapedFrame);
      instance.SetStreamerFunc(&streamer_TGShapedFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGShapedFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGShapedFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGShapedFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGShutterItem(void *p = nullptr);
   static void *newArray_TGShutterItem(Long_t size, void *p);
   static void delete_TGShutterItem(void *p);
   static void deleteArray_TGShutterItem(void *p);
   static void destruct_TGShutterItem(void *p);
   static void streamer_TGShutterItem(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGShutterItem*)
   {
      ::TGShutterItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGShutterItem >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGShutterItem", ::TGShutterItem::Class_Version(), "TGShutter.h", 25,
                  typeid(::TGShutterItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGShutterItem::Dictionary, isa_proxy, 16,
                  sizeof(::TGShutterItem) );
      instance.SetNew(&new_TGShutterItem);
      instance.SetNewArray(&newArray_TGShutterItem);
      instance.SetDelete(&delete_TGShutterItem);
      instance.SetDeleteArray(&deleteArray_TGShutterItem);
      instance.SetDestructor(&destruct_TGShutterItem);
      instance.SetStreamerFunc(&streamer_TGShutterItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGShutterItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGShutterItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGShutterItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGShutter(void *p = nullptr);
   static void *newArray_TGShutter(Long_t size, void *p);
   static void delete_TGShutter(void *p);
   static void deleteArray_TGShutter(void *p);
   static void destruct_TGShutter(void *p);
   static void streamer_TGShutter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGShutter*)
   {
      ::TGShutter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGShutter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGShutter", ::TGShutter::Class_Version(), "TGShutter.h", 55,
                  typeid(::TGShutter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGShutter::Dictionary, isa_proxy, 16,
                  sizeof(::TGShutter) );
      instance.SetNew(&new_TGShutter);
      instance.SetNewArray(&newArray_TGShutter);
      instance.SetDelete(&delete_TGShutter);
      instance.SetDeleteArray(&deleteArray_TGShutter);
      instance.SetDestructor(&destruct_TGShutter);
      instance.SetStreamerFunc(&streamer_TGShutter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGShutter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGShutter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGShutter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTableCell(void *p = nullptr);
   static void *newArray_TGTableCell(Long_t size, void *p);
   static void delete_TGTableCell(void *p);
   static void deleteArray_TGTableCell(void *p);
   static void destruct_TGTableCell(void *p);
   static void streamer_TGTableCell(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTableCell*)
   {
      ::TGTableCell *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTableCell >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTableCell", ::TGTableCell::Class_Version(), "TGTableCell.h", 24,
                  typeid(::TGTableCell), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTableCell::Dictionary, isa_proxy, 16,
                  sizeof(::TGTableCell) );
      instance.SetNew(&new_TGTableCell);
      instance.SetNewArray(&newArray_TGTableCell);
      instance.SetDelete(&delete_TGTableCell);
      instance.SetDeleteArray(&deleteArray_TGTableCell);
      instance.SetDestructor(&destruct_TGTableCell);
      instance.SetStreamerFunc(&streamer_TGTableCell);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTableCell*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTableCell*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTableCell*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTableHeader(void *p = nullptr);
   static void *newArray_TGTableHeader(Long_t size, void *p);
   static void delete_TGTableHeader(void *p);
   static void deleteArray_TGTableHeader(void *p);
   static void destruct_TGTableHeader(void *p);
   static void streamer_TGTableHeader(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTableHeader*)
   {
      ::TGTableHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTableHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTableHeader", ::TGTableHeader::Class_Version(), "TGTableHeader.h", 24,
                  typeid(::TGTableHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTableHeader::Dictionary, isa_proxy, 16,
                  sizeof(::TGTableHeader) );
      instance.SetNew(&new_TGTableHeader);
      instance.SetNewArray(&newArray_TGTableHeader);
      instance.SetDelete(&delete_TGTableHeader);
      instance.SetDeleteArray(&deleteArray_TGTableHeader);
      instance.SetDestructor(&destruct_TGTableHeader);
      instance.SetStreamerFunc(&streamer_TGTableHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTableHeader*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTableHeader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTableHeader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTable(void *p = nullptr);
   static void *newArray_TGTable(Long_t size, void *p);
   static void delete_TGTable(void *p);
   static void deleteArray_TGTable(void *p);
   static void destruct_TGTable(void *p);
   static void streamer_TGTable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTable*)
   {
      ::TGTable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTable >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTable", ::TGTable::Class_Version(), "TGTable.h", 34,
                  typeid(::TGTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTable::Dictionary, isa_proxy, 16,
                  sizeof(::TGTable) );
      instance.SetNew(&new_TGTable);
      instance.SetNewArray(&newArray_TGTable);
      instance.SetDelete(&delete_TGTable);
      instance.SetDeleteArray(&deleteArray_TGTable);
      instance.SetDestructor(&destruct_TGTable);
      instance.SetStreamerFunc(&streamer_TGTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTable*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTableRange(void *p = nullptr);
   static void *newArray_TTableRange(Long_t size, void *p);
   static void delete_TTableRange(void *p);
   static void deleteArray_TTableRange(void *p);
   static void destruct_TTableRange(void *p);
   static void streamer_TTableRange(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTableRange*)
   {
      ::TTableRange *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTableRange >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTableRange", ::TTableRange::Class_Version(), "TGTable.h", 235,
                  typeid(::TTableRange), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTableRange::Dictionary, isa_proxy, 16,
                  sizeof(::TTableRange) );
      instance.SetNew(&new_TTableRange);
      instance.SetNewArray(&newArray_TTableRange);
      instance.SetDelete(&delete_TTableRange);
      instance.SetDeleteArray(&deleteArray_TTableRange);
      instance.SetDestructor(&destruct_TTableRange);
      instance.SetStreamerFunc(&streamer_TTableRange);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTableRange*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTableRange*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTableRange*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGSimpleTable(void *p);
   static void deleteArray_TGSimpleTable(void *p);
   static void destruct_TGSimpleTable(void *p);
   static void streamer_TGSimpleTable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGSimpleTable*)
   {
      ::TGSimpleTable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGSimpleTable >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGSimpleTable", ::TGSimpleTable::Class_Version(), "TGSimpleTable.h", 16,
                  typeid(::TGSimpleTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGSimpleTable::Dictionary, isa_proxy, 16,
                  sizeof(::TGSimpleTable) );
      instance.SetDelete(&delete_TGSimpleTable);
      instance.SetDeleteArray(&deleteArray_TGSimpleTable);
      instance.SetDestructor(&destruct_TGSimpleTable);
      instance.SetStreamerFunc(&streamer_TGSimpleTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGSimpleTable*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGSimpleTable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGSimpleTable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGSimpleTableInterface(void *p);
   static void deleteArray_TGSimpleTableInterface(void *p);
   static void destruct_TGSimpleTableInterface(void *p);
   static void streamer_TGSimpleTableInterface(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGSimpleTableInterface*)
   {
      ::TGSimpleTableInterface *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGSimpleTableInterface >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGSimpleTableInterface", ::TGSimpleTableInterface::Class_Version(), "TGSimpleTableInterface.h", 18,
                  typeid(::TGSimpleTableInterface), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGSimpleTableInterface::Dictionary, isa_proxy, 16,
                  sizeof(::TGSimpleTableInterface) );
      instance.SetDelete(&delete_TGSimpleTableInterface);
      instance.SetDeleteArray(&deleteArray_TGSimpleTableInterface);
      instance.SetDestructor(&destruct_TGSimpleTableInterface);
      instance.SetStreamerFunc(&streamer_TGSimpleTableInterface);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGSimpleTableInterface*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGSimpleTableInterface*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGSimpleTableInterface*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGSlider(void *p);
   static void deleteArray_TGSlider(void *p);
   static void destruct_TGSlider(void *p);
   static void streamer_TGSlider(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGSlider*)
   {
      ::TGSlider *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGSlider >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGSlider", ::TGSlider::Class_Version(), "TGSlider.h", 40,
                  typeid(::TGSlider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGSlider::Dictionary, isa_proxy, 16,
                  sizeof(::TGSlider) );
      instance.SetDelete(&delete_TGSlider);
      instance.SetDeleteArray(&deleteArray_TGSlider);
      instance.SetDestructor(&destruct_TGSlider);
      instance.SetStreamerFunc(&streamer_TGSlider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGSlider*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGSlider*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGSlider*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGVSlider(void *p = nullptr);
   static void *newArray_TGVSlider(Long_t size, void *p);
   static void delete_TGVSlider(void *p);
   static void deleteArray_TGVSlider(void *p);
   static void destruct_TGVSlider(void *p);
   static void streamer_TGVSlider(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGVSlider*)
   {
      ::TGVSlider *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGVSlider >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGVSlider", ::TGVSlider::Class_Version(), "TGSlider.h", 92,
                  typeid(::TGVSlider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGVSlider::Dictionary, isa_proxy, 16,
                  sizeof(::TGVSlider) );
      instance.SetNew(&new_TGVSlider);
      instance.SetNewArray(&newArray_TGVSlider);
      instance.SetDelete(&delete_TGVSlider);
      instance.SetDeleteArray(&deleteArray_TGVSlider);
      instance.SetDestructor(&destruct_TGVSlider);
      instance.SetStreamerFunc(&streamer_TGVSlider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGVSlider*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGVSlider*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGVSlider*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGHSlider(void *p = nullptr);
   static void *newArray_TGHSlider(Long_t size, void *p);
   static void delete_TGHSlider(void *p);
   static void deleteArray_TGHSlider(void *p);
   static void destruct_TGHSlider(void *p);
   static void streamer_TGHSlider(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHSlider*)
   {
      ::TGHSlider *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHSlider >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGHSlider", ::TGHSlider::Class_Version(), "TGSlider.h", 119,
                  typeid(::TGHSlider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHSlider::Dictionary, isa_proxy, 16,
                  sizeof(::TGHSlider) );
      instance.SetNew(&new_TGHSlider);
      instance.SetNewArray(&newArray_TGHSlider);
      instance.SetDelete(&delete_TGHSlider);
      instance.SetDeleteArray(&deleteArray_TGHSlider);
      instance.SetDestructor(&destruct_TGHSlider);
      instance.SetStreamerFunc(&streamer_TGHSlider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHSlider*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGHSlider*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGHSlider*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGSpeedo(void *p = nullptr);
   static void *newArray_TGSpeedo(Long_t size, void *p);
   static void delete_TGSpeedo(void *p);
   static void deleteArray_TGSpeedo(void *p);
   static void destruct_TGSpeedo(void *p);
   static void streamer_TGSpeedo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGSpeedo*)
   {
      ::TGSpeedo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGSpeedo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGSpeedo", ::TGSpeedo::Class_Version(), "TGSpeedo.h", 22,
                  typeid(::TGSpeedo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGSpeedo::Dictionary, isa_proxy, 16,
                  sizeof(::TGSpeedo) );
      instance.SetNew(&new_TGSpeedo);
      instance.SetNewArray(&newArray_TGSpeedo);
      instance.SetDelete(&delete_TGSpeedo);
      instance.SetDeleteArray(&deleteArray_TGSpeedo);
      instance.SetDestructor(&destruct_TGSpeedo);
      instance.SetStreamerFunc(&streamer_TGSpeedo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGSpeedo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGSpeedo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGSpeedo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGRectMap(void *p);
   static void deleteArray_TGRectMap(void *p);
   static void destruct_TGRectMap(void *p);
   static void streamer_TGRectMap(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGRectMap*)
   {
      ::TGRectMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGRectMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGRectMap", ::TGRectMap::Class_Version(), "TGSplitFrame.h", 22,
                  typeid(::TGRectMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGRectMap::Dictionary, isa_proxy, 16,
                  sizeof(::TGRectMap) );
      instance.SetDelete(&delete_TGRectMap);
      instance.SetDeleteArray(&deleteArray_TGRectMap);
      instance.SetDestructor(&destruct_TGRectMap);
      instance.SetStreamerFunc(&streamer_TGRectMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGRectMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGRectMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGRectMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGSplitTool(void *p = nullptr);
   static void *newArray_TGSplitTool(Long_t size, void *p);
   static void delete_TGSplitTool(void *p);
   static void deleteArray_TGSplitTool(void *p);
   static void destruct_TGSplitTool(void *p);
   static void streamer_TGSplitTool(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGSplitTool*)
   {
      ::TGSplitTool *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGSplitTool >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGSplitTool", ::TGSplitTool::Class_Version(), "TGSplitFrame.h", 47,
                  typeid(::TGSplitTool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGSplitTool::Dictionary, isa_proxy, 16,
                  sizeof(::TGSplitTool) );
      instance.SetNew(&new_TGSplitTool);
      instance.SetNewArray(&newArray_TGSplitTool);
      instance.SetDelete(&delete_TGSplitTool);
      instance.SetDeleteArray(&deleteArray_TGSplitTool);
      instance.SetDestructor(&destruct_TGSplitTool);
      instance.SetStreamerFunc(&streamer_TGSplitTool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGSplitTool*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGSplitTool*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGSplitTool*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGSplitFrame(void *p = nullptr);
   static void *newArray_TGSplitFrame(Long_t size, void *p);
   static void delete_TGSplitFrame(void *p);
   static void deleteArray_TGSplitFrame(void *p);
   static void destruct_TGSplitFrame(void *p);
   static void streamer_TGSplitFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGSplitFrame*)
   {
      ::TGSplitFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGSplitFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGSplitFrame", ::TGSplitFrame::Class_Version(), "TGSplitFrame.h", 77,
                  typeid(::TGSplitFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGSplitFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGSplitFrame) );
      instance.SetNew(&new_TGSplitFrame);
      instance.SetNewArray(&newArray_TGSplitFrame);
      instance.SetDelete(&delete_TGSplitFrame);
      instance.SetDeleteArray(&deleteArray_TGSplitFrame);
      instance.SetDestructor(&destruct_TGSplitFrame);
      instance.SetStreamerFunc(&streamer_TGSplitFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGSplitFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGSplitFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGSplitFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGStatusBar(void *p = nullptr);
   static void *newArray_TGStatusBar(Long_t size, void *p);
   static void delete_TGStatusBar(void *p);
   static void deleteArray_TGStatusBar(void *p);
   static void destruct_TGStatusBar(void *p);
   static void streamer_TGStatusBar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGStatusBar*)
   {
      ::TGStatusBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGStatusBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGStatusBar", ::TGStatusBar::Class_Version(), "TGStatusBar.h", 21,
                  typeid(::TGStatusBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGStatusBar::Dictionary, isa_proxy, 16,
                  sizeof(::TGStatusBar) );
      instance.SetNew(&new_TGStatusBar);
      instance.SetNewArray(&newArray_TGStatusBar);
      instance.SetDelete(&delete_TGStatusBar);
      instance.SetDeleteArray(&deleteArray_TGStatusBar);
      instance.SetDestructor(&destruct_TGStatusBar);
      instance.SetStreamerFunc(&streamer_TGStatusBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGStatusBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGStatusBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGStatusBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGTabLayout(void *p);
   static void deleteArray_TGTabLayout(void *p);
   static void destruct_TGTabLayout(void *p);
   static void streamer_TGTabLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTabLayout*)
   {
      ::TGTabLayout *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTabLayout >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTabLayout", ::TGTabLayout::Class_Version(), "TGTab.h", 24,
                  typeid(::TGTabLayout), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTabLayout::Dictionary, isa_proxy, 16,
                  sizeof(::TGTabLayout) );
      instance.SetDelete(&delete_TGTabLayout);
      instance.SetDeleteArray(&deleteArray_TGTabLayout);
      instance.SetDestructor(&destruct_TGTabLayout);
      instance.SetStreamerFunc(&streamer_TGTabLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTabLayout*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTabLayout*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTabLayout*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTab(void *p = nullptr);
   static void *newArray_TGTab(Long_t size, void *p);
   static void delete_TGTab(void *p);
   static void deleteArray_TGTab(void *p);
   static void destruct_TGTab(void *p);
   static void streamer_TGTab(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTab*)
   {
      ::TGTab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTab >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTab", ::TGTab::Class_Version(), "TGTab.h", 46,
                  typeid(::TGTab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTab::Dictionary, isa_proxy, 16,
                  sizeof(::TGTab) );
      instance.SetNew(&new_TGTab);
      instance.SetNewArray(&newArray_TGTab);
      instance.SetDelete(&delete_TGTab);
      instance.SetDeleteArray(&deleteArray_TGTab);
      instance.SetDestructor(&destruct_TGTab);
      instance.SetStreamerFunc(&streamer_TGTab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTab*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTabElement(void *p = nullptr);
   static void *newArray_TGTabElement(Long_t size, void *p);
   static void delete_TGTabElement(void *p);
   static void deleteArray_TGTabElement(void *p);
   static void destruct_TGTabElement(void *p);
   static void streamer_TGTabElement(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTabElement*)
   {
      ::TGTabElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTabElement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTabElement", ::TGTabElement::Class_Version(), "TGTab.h", 117,
                  typeid(::TGTabElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTabElement::Dictionary, isa_proxy, 16,
                  sizeof(::TGTabElement) );
      instance.SetNew(&new_TGTabElement);
      instance.SetNewArray(&newArray_TGTabElement);
      instance.SetDelete(&delete_TGTabElement);
      instance.SetDeleteArray(&deleteArray_TGTabElement);
      instance.SetDestructor(&destruct_TGTabElement);
      instance.SetStreamerFunc(&streamer_TGTabElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTabElement*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTabElement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTabElement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGTableFrame(void *p);
   static void deleteArray_TGTableFrame(void *p);
   static void destruct_TGTableFrame(void *p);
   static void streamer_TGTableFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTableFrame*)
   {
      ::TGTableFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTableFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTableFrame", ::TGTableFrame::Class_Version(), "TGTableContainer.h", 17,
                  typeid(::TGTableFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTableFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGTableFrame) );
      instance.SetDelete(&delete_TGTableFrame);
      instance.SetDeleteArray(&deleteArray_TGTableFrame);
      instance.SetDestructor(&destruct_TGTableFrame);
      instance.SetStreamerFunc(&streamer_TGTableFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTableFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTableFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTableFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGTableHeaderFrame(void *p);
   static void deleteArray_TGTableHeaderFrame(void *p);
   static void destruct_TGTableHeaderFrame(void *p);
   static void streamer_TGTableHeaderFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTableHeaderFrame*)
   {
      ::TGTableHeaderFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTableHeaderFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTableHeaderFrame", ::TGTableHeaderFrame::Class_Version(), "TGTableContainer.h", 36,
                  typeid(::TGTableHeaderFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTableHeaderFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGTableHeaderFrame) );
      instance.SetDelete(&delete_TGTableHeaderFrame);
      instance.SetDeleteArray(&deleteArray_TGTableHeaderFrame);
      instance.SetDestructor(&destruct_TGTableHeaderFrame);
      instance.SetStreamerFunc(&streamer_TGTableHeaderFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTableHeaderFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTableHeaderFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTableHeaderFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGTableLayoutHints(void *p);
   static void deleteArray_TGTableLayoutHints(void *p);
   static void destruct_TGTableLayoutHints(void *p);
   static void streamer_TGTableLayoutHints(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTableLayoutHints*)
   {
      ::TGTableLayoutHints *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTableLayoutHints >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTableLayoutHints", ::TGTableLayoutHints::Class_Version(), "TGTableLayout.h", 26,
                  typeid(::TGTableLayoutHints), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTableLayoutHints::Dictionary, isa_proxy, 16,
                  sizeof(::TGTableLayoutHints) );
      instance.SetDelete(&delete_TGTableLayoutHints);
      instance.SetDeleteArray(&deleteArray_TGTableLayoutHints);
      instance.SetDestructor(&destruct_TGTableLayoutHints);
      instance.SetStreamerFunc(&streamer_TGTableLayoutHints);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTableLayoutHints*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTableLayoutHints*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTableLayoutHints*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGTableLayout(void *p);
   static void deleteArray_TGTableLayout(void *p);
   static void destruct_TGTableLayout(void *p);
   static void streamer_TGTableLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTableLayout*)
   {
      ::TGTableLayout *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTableLayout >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTableLayout", ::TGTableLayout::Class_Version(), "TGTableLayout.h", 61,
                  typeid(::TGTableLayout), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTableLayout::Dictionary, isa_proxy, 16,
                  sizeof(::TGTableLayout) );
      instance.SetDelete(&delete_TGTableLayout);
      instance.SetDeleteArray(&deleteArray_TGTableLayout);
      instance.SetDestructor(&destruct_TGTableLayout);
      instance.SetStreamerFunc(&streamer_TGTableLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTableLayout*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTableLayout*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTableLayout*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTextLine(void *p = nullptr);
   static void *newArray_TGTextLine(Long_t size, void *p);
   static void delete_TGTextLine(void *p);
   static void deleteArray_TGTextLine(void *p);
   static void destruct_TGTextLine(void *p);
   static void streamer_TGTextLine(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTextLine*)
   {
      ::TGTextLine *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTextLine >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTextLine", ::TGTextLine::Class_Version(), "TGText.h", 21,
                  typeid(::TGTextLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTextLine::Dictionary, isa_proxy, 16,
                  sizeof(::TGTextLine) );
      instance.SetNew(&new_TGTextLine);
      instance.SetNewArray(&newArray_TGTextLine);
      instance.SetDelete(&delete_TGTextLine);
      instance.SetDeleteArray(&deleteArray_TGTextLine);
      instance.SetDestructor(&destruct_TGTextLine);
      instance.SetStreamerFunc(&streamer_TGTextLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTextLine*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTextLine*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTextLine*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGText(void *p = nullptr);
   static void *newArray_TGText(Long_t size, void *p);
   static void delete_TGText(void *p);
   static void deleteArray_TGText(void *p);
   static void destruct_TGText(void *p);
   static void streamer_TGText(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGText*)
   {
      ::TGText *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGText >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGText", ::TGText::Class_Version(), "TGText.h", 57,
                  typeid(::TGText), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGText::Dictionary, isa_proxy, 16,
                  sizeof(::TGText) );
      instance.SetNew(&new_TGText);
      instance.SetNewArray(&newArray_TGText);
      instance.SetDelete(&delete_TGText);
      instance.SetDeleteArray(&deleteArray_TGText);
      instance.SetDestructor(&destruct_TGText);
      instance.SetStreamerFunc(&streamer_TGText);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGText*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGText*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGText*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGView(void *p = nullptr);
   static void *newArray_TGView(Long_t size, void *p);
   static void delete_TGView(void *p);
   static void deleteArray_TGView(void *p);
   static void destruct_TGView(void *p);
   static void streamer_TGView(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGView*)
   {
      ::TGView *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGView >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGView", ::TGView::Class_Version(), "TGView.h", 23,
                  typeid(::TGView), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGView::Dictionary, isa_proxy, 16,
                  sizeof(::TGView) );
      instance.SetNew(&new_TGView);
      instance.SetNewArray(&newArray_TGView);
      instance.SetDelete(&delete_TGView);
      instance.SetDeleteArray(&deleteArray_TGView);
      instance.SetDestructor(&destruct_TGView);
      instance.SetStreamerFunc(&streamer_TGView);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGView*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGView*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGView*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGViewFrame(void *p);
   static void deleteArray_TGViewFrame(void *p);
   static void destruct_TGViewFrame(void *p);
   static void streamer_TGViewFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGViewFrame*)
   {
      ::TGViewFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGViewFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGViewFrame", ::TGViewFrame::Class_Version(), "TGView.h", 109,
                  typeid(::TGViewFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGViewFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGViewFrame) );
      instance.SetDelete(&delete_TGViewFrame);
      instance.SetDeleteArray(&deleteArray_TGViewFrame);
      instance.SetDestructor(&destruct_TGViewFrame);
      instance.SetStreamerFunc(&streamer_TGViewFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGViewFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGViewFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGViewFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTextView(void *p = nullptr);
   static void *newArray_TGTextView(Long_t size, void *p);
   static void delete_TGTextView(void *p);
   static void deleteArray_TGTextView(void *p);
   static void destruct_TGTextView(void *p);
   static void streamer_TGTextView(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTextView*)
   {
      ::TGTextView *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTextView >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTextView", ::TGTextView::Class_Version(), "TGTextView.h", 22,
                  typeid(::TGTextView), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTextView::Dictionary, isa_proxy, 16,
                  sizeof(::TGTextView) );
      instance.SetNew(&new_TGTextView);
      instance.SetNewArray(&newArray_TGTextView);
      instance.SetDelete(&delete_TGTextView);
      instance.SetDeleteArray(&deleteArray_TGTextView);
      instance.SetDestructor(&destruct_TGTextView);
      instance.SetStreamerFunc(&streamer_TGTextView);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTextView*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTextView*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTextView*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTextEdit(void *p = nullptr);
   static void *newArray_TGTextEdit(Long_t size, void *p);
   static void delete_TGTextEdit(void *p);
   static void deleteArray_TGTextEdit(void *p);
   static void destruct_TGTextEdit(void *p);
   static void streamer_TGTextEdit(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTextEdit*)
   {
      ::TGTextEdit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTextEdit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTextEdit", ::TGTextEdit::Class_Version(), "TGTextEdit.h", 22,
                  typeid(::TGTextEdit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTextEdit::Dictionary, isa_proxy, 16,
                  sizeof(::TGTextEdit) );
      instance.SetNew(&new_TGTextEdit);
      instance.SetNewArray(&newArray_TGTextEdit);
      instance.SetDelete(&delete_TGTextEdit);
      instance.SetDeleteArray(&deleteArray_TGTextEdit);
      instance.SetDestructor(&destruct_TGTextEdit);
      instance.SetStreamerFunc(&streamer_TGTextEdit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTextEdit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTextEdit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTextEdit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TGSearchType_Dictionary();
   static void TGSearchType_TClassManip(TClass*);
   static void *new_TGSearchType(void *p = nullptr);
   static void *newArray_TGSearchType(Long_t size, void *p);
   static void delete_TGSearchType(void *p);
   static void deleteArray_TGSearchType(void *p);
   static void destruct_TGSearchType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGSearchType*)
   {
      ::TGSearchType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGSearchType));
      static ::ROOT::TGenericClassInfo 
         instance("TGSearchType", "TGTextEditDialogs.h", 19,
                  typeid(::TGSearchType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGSearchType_Dictionary, isa_proxy, 0,
                  sizeof(::TGSearchType) );
      instance.SetNew(&new_TGSearchType);
      instance.SetNewArray(&newArray_TGSearchType);
      instance.SetDelete(&delete_TGSearchType);
      instance.SetDeleteArray(&deleteArray_TGSearchType);
      instance.SetDestructor(&destruct_TGSearchType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGSearchType*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGSearchType*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGSearchType*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGSearchType_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TGSearchType*>(nullptr))->GetClass();
      TGSearchType_TClassManip(theClass);
   return theClass;
   }

   static void TGSearchType_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TGSearchDialog(void *p = nullptr);
   static void *newArray_TGSearchDialog(Long_t size, void *p);
   static void delete_TGSearchDialog(void *p);
   static void deleteArray_TGSearchDialog(void *p);
   static void destruct_TGSearchDialog(void *p);
   static void streamer_TGSearchDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGSearchDialog*)
   {
      ::TGSearchDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGSearchDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGSearchDialog", ::TGSearchDialog::Class_Version(), "TGTextEditDialogs.h", 38,
                  typeid(::TGSearchDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGSearchDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGSearchDialog) );
      instance.SetNew(&new_TGSearchDialog);
      instance.SetNewArray(&newArray_TGSearchDialog);
      instance.SetDelete(&delete_TGSearchDialog);
      instance.SetDeleteArray(&deleteArray_TGSearchDialog);
      instance.SetDestructor(&destruct_TGSearchDialog);
      instance.SetStreamerFunc(&streamer_TGSearchDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGSearchDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGSearchDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGSearchDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGPrintDialog(void *p = nullptr);
   static void *newArray_TGPrintDialog(Long_t size, void *p);
   static void delete_TGPrintDialog(void *p);
   static void deleteArray_TGPrintDialog(void *p);
   static void destruct_TGPrintDialog(void *p);
   static void streamer_TGPrintDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGPrintDialog*)
   {
      ::TGPrintDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGPrintDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGPrintDialog", ::TGPrintDialog::Class_Version(), "TGTextEditDialogs.h", 78,
                  typeid(::TGPrintDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGPrintDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGPrintDialog) );
      instance.SetNew(&new_TGPrintDialog);
      instance.SetNewArray(&newArray_TGPrintDialog);
      instance.SetDelete(&delete_TGPrintDialog);
      instance.SetDeleteArray(&deleteArray_TGPrintDialog);
      instance.SetDestructor(&destruct_TGPrintDialog);
      instance.SetStreamerFunc(&streamer_TGPrintDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGPrintDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGPrintDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGPrintDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGGotoDialog(void *p = nullptr);
   static void *newArray_TGGotoDialog(Long_t size, void *p);
   static void delete_TGGotoDialog(void *p);
   static void deleteArray_TGGotoDialog(void *p);
   static void destruct_TGGotoDialog(void *p);
   static void streamer_TGGotoDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGGotoDialog*)
   {
      ::TGGotoDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGGotoDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGGotoDialog", ::TGGotoDialog::Class_Version(), "TGTextEditDialogs.h", 109,
                  typeid(::TGGotoDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGGotoDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGGotoDialog) );
      instance.SetNew(&new_TGGotoDialog);
      instance.SetNewArray(&newArray_TGGotoDialog);
      instance.SetDelete(&delete_TGGotoDialog);
      instance.SetDeleteArray(&deleteArray_TGGotoDialog);
      instance.SetDestructor(&destruct_TGGotoDialog);
      instance.SetStreamerFunc(&streamer_TGGotoDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGGotoDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGGotoDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGGotoDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTextEditor(void *p = nullptr);
   static void *newArray_TGTextEditor(Long_t size, void *p);
   static void delete_TGTextEditor(void *p);
   static void deleteArray_TGTextEditor(void *p);
   static void destruct_TGTextEditor(void *p);
   static void streamer_TGTextEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTextEditor*)
   {
      ::TGTextEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTextEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTextEditor", ::TGTextEditor::Class_Version(), "TGTextEditor.h", 33,
                  typeid(::TGTextEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTextEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGTextEditor) );
      instance.SetNew(&new_TGTextEditor);
      instance.SetNewArray(&newArray_TGTextEditor);
      instance.SetDelete(&delete_TGTextEditor);
      instance.SetDeleteArray(&deleteArray_TGTextEditor);
      instance.SetDestructor(&destruct_TGTextEditor);
      instance.SetStreamerFunc(&streamer_TGTextEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTextEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTextEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTextEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGTextViewStreamBuf(void *p);
   static void deleteArray_TGTextViewStreamBuf(void *p);
   static void destruct_TGTextViewStreamBuf(void *p);
   static void streamer_TGTextViewStreamBuf(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTextViewStreamBuf*)
   {
      ::TGTextViewStreamBuf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTextViewStreamBuf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTextViewStreamBuf", ::TGTextViewStreamBuf::Class_Version(), "TGTextViewStream.h", 21,
                  typeid(::TGTextViewStreamBuf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTextViewStreamBuf::Dictionary, isa_proxy, 16,
                  sizeof(::TGTextViewStreamBuf) );
      instance.SetDelete(&delete_TGTextViewStreamBuf);
      instance.SetDeleteArray(&deleteArray_TGTextViewStreamBuf);
      instance.SetDestructor(&destruct_TGTextViewStreamBuf);
      instance.SetStreamerFunc(&streamer_TGTextViewStreamBuf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTextViewStreamBuf*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTextViewStreamBuf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTextViewStreamBuf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTextViewostream(void *p = nullptr);
   static void *newArray_TGTextViewostream(Long_t size, void *p);
   static void delete_TGTextViewostream(void *p);
   static void deleteArray_TGTextViewostream(void *p);
   static void destruct_TGTextViewostream(void *p);
   static void streamer_TGTextViewostream(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTextViewostream*)
   {
      ::TGTextViewostream *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTextViewostream >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTextViewostream", ::TGTextViewostream::Class_Version(), "TGTextViewStream.h", 40,
                  typeid(::TGTextViewostream), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTextViewostream::Dictionary, isa_proxy, 16,
                  sizeof(::TGTextViewostream) );
      instance.SetNew(&new_TGTextViewostream);
      instance.SetNewArray(&newArray_TGTextViewostream);
      instance.SetDelete(&delete_TGTextViewostream);
      instance.SetDeleteArray(&deleteArray_TGTextViewostream);
      instance.SetDestructor(&destruct_TGTextViewostream);
      instance.SetStreamerFunc(&streamer_TGTextViewostream);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTextViewostream*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTextViewostream*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTextViewostream*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ToolBarData_t_Dictionary();
   static void ToolBarData_t_TClassManip(TClass*);
   static void *new_ToolBarData_t(void *p = nullptr);
   static void *newArray_ToolBarData_t(Long_t size, void *p);
   static void delete_ToolBarData_t(void *p);
   static void deleteArray_ToolBarData_t(void *p);
   static void destruct_ToolBarData_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ToolBarData_t*)
   {
      ::ToolBarData_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ToolBarData_t));
      static ::ROOT::TGenericClassInfo 
         instance("ToolBarData_t", "TGToolBar.h", 23,
                  typeid(::ToolBarData_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ToolBarData_t_Dictionary, isa_proxy, 0,
                  sizeof(::ToolBarData_t) );
      instance.SetNew(&new_ToolBarData_t);
      instance.SetNewArray(&newArray_ToolBarData_t);
      instance.SetDelete(&delete_ToolBarData_t);
      instance.SetDeleteArray(&deleteArray_ToolBarData_t);
      instance.SetDestructor(&destruct_ToolBarData_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ToolBarData_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::ToolBarData_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ToolBarData_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ToolBarData_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ToolBarData_t*>(nullptr))->GetClass();
      ToolBarData_t_TClassManip(theClass);
   return theClass;
   }

   static void ToolBarData_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TGToolBar(void *p = nullptr);
   static void *newArray_TGToolBar(Long_t size, void *p);
   static void delete_TGToolBar(void *p);
   static void deleteArray_TGToolBar(void *p);
   static void destruct_TGToolBar(void *p);
   static void streamer_TGToolBar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGToolBar*)
   {
      ::TGToolBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGToolBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGToolBar", ::TGToolBar::Class_Version(), "TGToolBar.h", 33,
                  typeid(::TGToolBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGToolBar::Dictionary, isa_proxy, 16,
                  sizeof(::TGToolBar) );
      instance.SetNew(&new_TGToolBar);
      instance.SetNewArray(&newArray_TGToolBar);
      instance.SetDelete(&delete_TGToolBar);
      instance.SetDeleteArray(&deleteArray_TGToolBar);
      instance.SetDestructor(&destruct_TGToolBar);
      instance.SetStreamerFunc(&streamer_TGToolBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGToolBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGToolBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGToolBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGToolTip(void *p = nullptr);
   static void *newArray_TGToolTip(Long_t size, void *p);
   static void delete_TGToolTip(void *p);
   static void deleteArray_TGToolTip(void *p);
   static void destruct_TGToolTip(void *p);
   static void streamer_TGToolTip(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGToolTip*)
   {
      ::TGToolTip *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGToolTip >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGToolTip", ::TGToolTip::Class_Version(), "TGToolTip.h", 24,
                  typeid(::TGToolTip), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGToolTip::Dictionary, isa_proxy, 16,
                  sizeof(::TGToolTip) );
      instance.SetNew(&new_TGToolTip);
      instance.SetNewArray(&newArray_TGToolTip);
      instance.SetDelete(&delete_TGToolTip);
      instance.SetDeleteArray(&deleteArray_TGToolTip);
      instance.SetDestructor(&destruct_TGToolTip);
      instance.SetStreamerFunc(&streamer_TGToolTip);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGToolTip*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGToolTip*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGToolTip*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTripleVSlider(void *p = nullptr);
   static void *newArray_TGTripleVSlider(Long_t size, void *p);
   static void delete_TGTripleVSlider(void *p);
   static void deleteArray_TGTripleVSlider(void *p);
   static void destruct_TGTripleVSlider(void *p);
   static void streamer_TGTripleVSlider(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTripleVSlider*)
   {
      ::TGTripleVSlider *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTripleVSlider >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTripleVSlider", ::TGTripleVSlider::Class_Version(), "TGTripleSlider.h", 20,
                  typeid(::TGTripleVSlider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTripleVSlider::Dictionary, isa_proxy, 16,
                  sizeof(::TGTripleVSlider) );
      instance.SetNew(&new_TGTripleVSlider);
      instance.SetNewArray(&newArray_TGTripleVSlider);
      instance.SetDelete(&delete_TGTripleVSlider);
      instance.SetDeleteArray(&deleteArray_TGTripleVSlider);
      instance.SetDestructor(&destruct_TGTripleVSlider);
      instance.SetStreamerFunc(&streamer_TGTripleVSlider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTripleVSlider*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTripleVSlider*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTripleVSlider*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTripleHSlider(void *p = nullptr);
   static void *newArray_TGTripleHSlider(Long_t size, void *p);
   static void delete_TGTripleHSlider(void *p);
   static void deleteArray_TGTripleHSlider(void *p);
   static void destruct_TGTripleHSlider(void *p);
   static void streamer_TGTripleHSlider(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTripleHSlider*)
   {
      ::TGTripleHSlider *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTripleHSlider >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTripleHSlider", ::TGTripleHSlider::Class_Version(), "TGTripleSlider.h", 73,
                  typeid(::TGTripleHSlider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTripleHSlider::Dictionary, isa_proxy, 16,
                  sizeof(::TGTripleHSlider) );
      instance.SetNew(&new_TGTripleHSlider);
      instance.SetNewArray(&newArray_TGTripleHSlider);
      instance.SetDelete(&delete_TGTripleHSlider);
      instance.SetDeleteArray(&deleteArray_TGTripleHSlider);
      instance.SetDestructor(&destruct_TGTripleHSlider);
      instance.SetStreamerFunc(&streamer_TGTripleHSlider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTripleHSlider*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTripleHSlider*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTripleHSlider*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGXYLayoutHints(void *p);
   static void deleteArray_TGXYLayoutHints(void *p);
   static void destruct_TGXYLayoutHints(void *p);
   static void streamer_TGXYLayoutHints(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGXYLayoutHints*)
   {
      ::TGXYLayoutHints *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGXYLayoutHints >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGXYLayoutHints", ::TGXYLayoutHints::Class_Version(), "TGXYLayout.h", 19,
                  typeid(::TGXYLayoutHints), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGXYLayoutHints::Dictionary, isa_proxy, 16,
                  sizeof(::TGXYLayoutHints) );
      instance.SetDelete(&delete_TGXYLayoutHints);
      instance.SetDeleteArray(&deleteArray_TGXYLayoutHints);
      instance.SetDestructor(&destruct_TGXYLayoutHints);
      instance.SetStreamerFunc(&streamer_TGXYLayoutHints);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGXYLayoutHints*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGXYLayoutHints*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGXYLayoutHints*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGXYLayout(void *p);
   static void deleteArray_TGXYLayout(void *p);
   static void destruct_TGXYLayout(void *p);
   static void streamer_TGXYLayout(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGXYLayout*)
   {
      ::TGXYLayout *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGXYLayout >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGXYLayout", ::TGXYLayout::Class_Version(), "TGXYLayout.h", 58,
                  typeid(::TGXYLayout), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGXYLayout::Dictionary, isa_proxy, 16,
                  sizeof(::TGXYLayout) );
      instance.SetDelete(&delete_TGXYLayout);
      instance.SetDeleteArray(&deleteArray_TGXYLayout);
      instance.SetDestructor(&destruct_TGXYLayout);
      instance.SetStreamerFunc(&streamer_TGXYLayout);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGXYLayout*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGXYLayout*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGXYLayout*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGuiBldAction(void *p = nullptr);
   static void *newArray_TGuiBldAction(Long_t size, void *p);
   static void delete_TGuiBldAction(void *p);
   static void deleteArray_TGuiBldAction(void *p);
   static void destruct_TGuiBldAction(void *p);
   static void streamer_TGuiBldAction(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGuiBldAction*)
   {
      ::TGuiBldAction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGuiBldAction >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGuiBldAction", ::TGuiBldAction::Class_Version(), "TGuiBuilder.h", 25,
                  typeid(::TGuiBldAction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGuiBldAction::Dictionary, isa_proxy, 16,
                  sizeof(::TGuiBldAction) );
      instance.SetNew(&new_TGuiBldAction);
      instance.SetNewArray(&newArray_TGuiBldAction);
      instance.SetDelete(&delete_TGuiBldAction);
      instance.SetDeleteArray(&deleteArray_TGuiBldAction);
      instance.SetDestructor(&destruct_TGuiBldAction);
      instance.SetStreamerFunc(&streamer_TGuiBldAction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGuiBldAction*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGuiBldAction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGuiBldAction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGuiBuilder(void *p = nullptr);
   static void *newArray_TGuiBuilder(Long_t size, void *p);
   static void delete_TGuiBuilder(void *p);
   static void deleteArray_TGuiBuilder(void *p);
   static void destruct_TGuiBuilder(void *p);
   static void streamer_TGuiBuilder(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGuiBuilder*)
   {
      ::TGuiBuilder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGuiBuilder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGuiBuilder", ::TGuiBuilder::Class_Version(), "TGuiBuilder.h", 43,
                  typeid(::TGuiBuilder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGuiBuilder::Dictionary, isa_proxy, 16,
                  sizeof(::TGuiBuilder) );
      instance.SetNew(&new_TGuiBuilder);
      instance.SetNewArray(&newArray_TGuiBuilder);
      instance.SetDelete(&delete_TGuiBuilder);
      instance.SetDeleteArray(&deleteArray_TGuiBuilder);
      instance.SetDestructor(&destruct_TGuiBuilder);
      instance.SetStreamerFunc(&streamer_TGuiBuilder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGuiBuilder*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGuiBuilder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGuiBuilder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TRootApplication(void *p);
   static void deleteArray_TRootApplication(void *p);
   static void destruct_TRootApplication(void *p);
   static void streamer_TRootApplication(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootApplication*)
   {
      ::TRootApplication *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootApplication >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRootApplication", ::TRootApplication::Class_Version(), "TRootApplication.h", 23,
                  typeid(::TRootApplication), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootApplication::Dictionary, isa_proxy, 16,
                  sizeof(::TRootApplication) );
      instance.SetDelete(&delete_TRootApplication);
      instance.SetDeleteArray(&deleteArray_TRootApplication);
      instance.SetDestructor(&destruct_TRootApplication);
      instance.SetStreamerFunc(&streamer_TRootApplication);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootApplication*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRootApplication*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRootApplication*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TBrowserPlugin(void *p);
   static void deleteArray_TBrowserPlugin(void *p);
   static void destruct_TBrowserPlugin(void *p);
   static void streamer_TBrowserPlugin(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBrowserPlugin*)
   {
      ::TBrowserPlugin *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBrowserPlugin >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TBrowserPlugin", ::TBrowserPlugin::Class_Version(), "TRootBrowser.h", 35,
                  typeid(::TBrowserPlugin), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBrowserPlugin::Dictionary, isa_proxy, 16,
                  sizeof(::TBrowserPlugin) );
      instance.SetDelete(&delete_TBrowserPlugin);
      instance.SetDeleteArray(&deleteArray_TBrowserPlugin);
      instance.SetDestructor(&destruct_TBrowserPlugin);
      instance.SetStreamerFunc(&streamer_TBrowserPlugin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBrowserPlugin*)
   {
      return GenerateInitInstanceLocal(static_cast<::TBrowserPlugin*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TBrowserPlugin*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRootBrowser(void *p = nullptr);
   static void *newArray_TRootBrowser(Long_t size, void *p);
   static void delete_TRootBrowser(void *p);
   static void deleteArray_TRootBrowser(void *p);
   static void destruct_TRootBrowser(void *p);
   static void streamer_TRootBrowser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootBrowser*)
   {
      ::TRootBrowser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootBrowser >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRootBrowser", ::TRootBrowser::Class_Version(), "TRootBrowser.h", 54,
                  typeid(::TRootBrowser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootBrowser::Dictionary, isa_proxy, 16,
                  sizeof(::TRootBrowser) );
      instance.SetNew(&new_TRootBrowser);
      instance.SetNewArray(&newArray_TRootBrowser);
      instance.SetDelete(&delete_TRootBrowser);
      instance.SetDeleteArray(&deleteArray_TRootBrowser);
      instance.SetDestructor(&destruct_TRootBrowser);
      instance.SetStreamerFunc(&streamer_TRootBrowser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootBrowser*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRootBrowser*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRootBrowser*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRootBrowserLite(void *p = nullptr);
   static void *newArray_TRootBrowserLite(Long_t size, void *p);
   static void delete_TRootBrowserLite(void *p);
   static void deleteArray_TRootBrowserLite(void *p);
   static void destruct_TRootBrowserLite(void *p);
   static void streamer_TRootBrowserLite(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootBrowserLite*)
   {
      ::TRootBrowserLite *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootBrowserLite >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRootBrowserLite", ::TRootBrowserLite::Class_Version(), "TRootBrowserLite.h", 40,
                  typeid(::TRootBrowserLite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootBrowserLite::Dictionary, isa_proxy, 16,
                  sizeof(::TRootBrowserLite) );
      instance.SetNew(&new_TRootBrowserLite);
      instance.SetNewArray(&newArray_TRootBrowserLite);
      instance.SetDelete(&delete_TRootBrowserLite);
      instance.SetDeleteArray(&deleteArray_TRootBrowserLite);
      instance.SetDestructor(&destruct_TRootBrowserLite);
      instance.SetStreamerFunc(&streamer_TRootBrowserLite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootBrowserLite*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRootBrowserLite*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRootBrowserLite*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRootCanvas(void *p = nullptr);
   static void *newArray_TRootCanvas(Long_t size, void *p);
   static void delete_TRootCanvas(void *p);
   static void deleteArray_TRootCanvas(void *p);
   static void destruct_TRootCanvas(void *p);
   static void streamer_TRootCanvas(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootCanvas*)
   {
      ::TRootCanvas *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootCanvas >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRootCanvas", ::TRootCanvas::Class_Version(), "TRootCanvas.h", 34,
                  typeid(::TRootCanvas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootCanvas::Dictionary, isa_proxy, 16,
                  sizeof(::TRootCanvas) );
      instance.SetNew(&new_TRootCanvas);
      instance.SetNewArray(&newArray_TRootCanvas);
      instance.SetDelete(&delete_TRootCanvas);
      instance.SetDeleteArray(&deleteArray_TRootCanvas);
      instance.SetDestructor(&destruct_TRootCanvas);
      instance.SetStreamerFunc(&streamer_TRootCanvas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootCanvas*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRootCanvas*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRootCanvas*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRootContextMenu(void *p = nullptr);
   static void *newArray_TRootContextMenu(Long_t size, void *p);
   static void delete_TRootContextMenu(void *p);
   static void deleteArray_TRootContextMenu(void *p);
   static void destruct_TRootContextMenu(void *p);
   static void streamer_TRootContextMenu(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootContextMenu*)
   {
      ::TRootContextMenu *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootContextMenu >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRootContextMenu", ::TRootContextMenu::Class_Version(), "TRootContextMenu.h", 22,
                  typeid(::TRootContextMenu), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootContextMenu::Dictionary, isa_proxy, 16,
                  sizeof(::TRootContextMenu) );
      instance.SetNew(&new_TRootContextMenu);
      instance.SetNewArray(&newArray_TRootContextMenu);
      instance.SetDelete(&delete_TRootContextMenu);
      instance.SetDeleteArray(&deleteArray_TRootContextMenu);
      instance.SetDestructor(&destruct_TRootContextMenu);
      instance.SetStreamerFunc(&streamer_TRootContextMenu);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootContextMenu*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRootContextMenu*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRootContextMenu*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRootControlBar(void *p = nullptr);
   static void *newArray_TRootControlBar(Long_t size, void *p);
   static void delete_TRootControlBar(void *p);
   static void deleteArray_TRootControlBar(void *p);
   static void destruct_TRootControlBar(void *p);
   static void streamer_TRootControlBar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootControlBar*)
   {
      ::TRootControlBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootControlBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRootControlBar", ::TRootControlBar::Class_Version(), "TRootControlBar.h", 23,
                  typeid(::TRootControlBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootControlBar::Dictionary, isa_proxy, 16,
                  sizeof(::TRootControlBar) );
      instance.SetNew(&new_TRootControlBar);
      instance.SetNewArray(&newArray_TRootControlBar);
      instance.SetDelete(&delete_TRootControlBar);
      instance.SetDeleteArray(&deleteArray_TRootControlBar);
      instance.SetDestructor(&destruct_TRootControlBar);
      instance.SetStreamerFunc(&streamer_TRootControlBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootControlBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRootControlBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRootControlBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRootDialog(void *p = nullptr);
   static void *newArray_TRootDialog(Long_t size, void *p);
   static void delete_TRootDialog(void *p);
   static void deleteArray_TRootDialog(void *p);
   static void destruct_TRootDialog(void *p);
   static void streamer_TRootDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootDialog*)
   {
      ::TRootDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRootDialog", ::TRootDialog::Class_Version(), "TRootDialog.h", 21,
                  typeid(::TRootDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TRootDialog) );
      instance.SetNew(&new_TRootDialog);
      instance.SetNewArray(&newArray_TRootDialog);
      instance.SetDelete(&delete_TRootDialog);
      instance.SetDeleteArray(&deleteArray_TRootDialog);
      instance.SetDestructor(&destruct_TRootDialog);
      instance.SetStreamerFunc(&streamer_TRootDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRootDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRootDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRootEmbeddedCanvas(void *p = nullptr);
   static void *newArray_TRootEmbeddedCanvas(Long_t size, void *p);
   static void delete_TRootEmbeddedCanvas(void *p);
   static void deleteArray_TRootEmbeddedCanvas(void *p);
   static void destruct_TRootEmbeddedCanvas(void *p);
   static void streamer_TRootEmbeddedCanvas(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootEmbeddedCanvas*)
   {
      ::TRootEmbeddedCanvas *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootEmbeddedCanvas >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRootEmbeddedCanvas", ::TRootEmbeddedCanvas::Class_Version(), "TRootEmbeddedCanvas.h", 24,
                  typeid(::TRootEmbeddedCanvas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootEmbeddedCanvas::Dictionary, isa_proxy, 16,
                  sizeof(::TRootEmbeddedCanvas) );
      instance.SetNew(&new_TRootEmbeddedCanvas);
      instance.SetNewArray(&newArray_TRootEmbeddedCanvas);
      instance.SetDelete(&delete_TRootEmbeddedCanvas);
      instance.SetDeleteArray(&deleteArray_TRootEmbeddedCanvas);
      instance.SetDestructor(&destruct_TRootEmbeddedCanvas);
      instance.SetStreamerFunc(&streamer_TRootEmbeddedCanvas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootEmbeddedCanvas*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRootEmbeddedCanvas*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRootEmbeddedCanvas*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRootGuiFactory(void *p = nullptr);
   static void *newArray_TRootGuiFactory(Long_t size, void *p);
   static void delete_TRootGuiFactory(void *p);
   static void deleteArray_TRootGuiFactory(void *p);
   static void destruct_TRootGuiFactory(void *p);
   static void streamer_TRootGuiFactory(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootGuiFactory*)
   {
      ::TRootGuiFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootGuiFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRootGuiFactory", ::TRootGuiFactory::Class_Version(), "TRootGuiFactory.h", 27,
                  typeid(::TRootGuiFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootGuiFactory::Dictionary, isa_proxy, 16,
                  sizeof(::TRootGuiFactory) );
      instance.SetNew(&new_TRootGuiFactory);
      instance.SetNewArray(&newArray_TRootGuiFactory);
      instance.SetDelete(&delete_TRootGuiFactory);
      instance.SetDeleteArray(&deleteArray_TRootGuiFactory);
      instance.SetDestructor(&destruct_TRootGuiFactory);
      instance.SetStreamerFunc(&streamer_TRootGuiFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootGuiFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRootGuiFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRootGuiFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRootHelpDialog(void *p = nullptr);
   static void *newArray_TRootHelpDialog(Long_t size, void *p);
   static void delete_TRootHelpDialog(void *p);
   static void deleteArray_TRootHelpDialog(void *p);
   static void destruct_TRootHelpDialog(void *p);
   static void streamer_TRootHelpDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootHelpDialog*)
   {
      ::TRootHelpDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootHelpDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRootHelpDialog", ::TRootHelpDialog::Class_Version(), "TRootHelpDialog.h", 22,
                  typeid(::TRootHelpDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootHelpDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TRootHelpDialog) );
      instance.SetNew(&new_TRootHelpDialog);
      instance.SetNewArray(&newArray_TRootHelpDialog);
      instance.SetDelete(&delete_TRootHelpDialog);
      instance.SetDeleteArray(&deleteArray_TRootHelpDialog);
      instance.SetDestructor(&destruct_TRootHelpDialog);
      instance.SetStreamerFunc(&streamer_TRootHelpDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootHelpDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRootHelpDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRootHelpDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TVirtualDragManager(void *p = nullptr);
   static void *newArray_TVirtualDragManager(Long_t size, void *p);
   static void delete_TVirtualDragManager(void *p);
   static void deleteArray_TVirtualDragManager(void *p);
   static void destruct_TVirtualDragManager(void *p);
   static void streamer_TVirtualDragManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualDragManager*)
   {
      ::TVirtualDragManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualDragManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualDragManager", ::TVirtualDragManager::Class_Version(), "TVirtualDragManager.h", 22,
                  typeid(::TVirtualDragManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualDragManager::Dictionary, isa_proxy, 16,
                  sizeof(::TVirtualDragManager) );
      instance.SetNew(&new_TVirtualDragManager);
      instance.SetNewArray(&newArray_TVirtualDragManager);
      instance.SetDelete(&delete_TVirtualDragManager);
      instance.SetDeleteArray(&deleteArray_TVirtualDragManager);
      instance.SetDestructor(&destruct_TVirtualDragManager);
      instance.SetStreamerFunc(&streamer_TVirtualDragManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualDragManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVirtualDragManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVirtualDragManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGObject::Class_Name()
{
   return "TGObject";
}

//______________________________________________________________________________
const char *TGObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGObject*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGClient::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGClient::Class_Name()
{
   return "TGClient";
}

//______________________________________________________________________________
const char *TGClient::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGClient*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGClient::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGClient*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGClient::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGClient*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGClient::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGClient*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGWindow::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGWindow::Class_Name()
{
   return "TGWindow";
}

//______________________________________________________________________________
const char *TGWindow::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGWindow*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGWindow::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGWindow*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGWindow::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGWindow*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGWindow::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGWindow*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGUnknownWindowHandler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGUnknownWindowHandler::Class_Name()
{
   return "TGUnknownWindowHandler";
}

//______________________________________________________________________________
const char *TGUnknownWindowHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGUnknownWindowHandler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGUnknownWindowHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGUnknownWindowHandler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGUnknownWindowHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGUnknownWindowHandler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGUnknownWindowHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGUnknownWindowHandler*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGGC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGGC::Class_Name()
{
   return "TGGC";
}

//______________________________________________________________________________
const char *TGGC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGGC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGGC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGGC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGGC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGGC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGGC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGGC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGGCPool::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGGCPool::Class_Name()
{
   return "TGGCPool";
}

//______________________________________________________________________________
const char *TGGCPool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGGCPool*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGGCPool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGGCPool*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGGCPool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGGCPool*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGGCPool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGGCPool*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTextLayout::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTextLayout::Class_Name()
{
   return "TGTextLayout";
}

//______________________________________________________________________________
const char *TGTextLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextLayout*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTextLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextLayout*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTextLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextLayout*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTextLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextLayout*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGFont::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGFont::Class_Name()
{
   return "TGFont";
}

//______________________________________________________________________________
const char *TGFont::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFont*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGFont::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFont*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGFont::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFont*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGFont::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFont*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGFontPool::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGFontPool::Class_Name()
{
   return "TGFontPool";
}

//______________________________________________________________________________
const char *TGFontPool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFontPool*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGFontPool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFontPool*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGFontPool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFontPool*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGFontPool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFontPool*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLayoutHints::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLayoutHints::Class_Name()
{
   return "TGLayoutHints";
}

//______________________________________________________________________________
const char *TGLayoutHints::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLayoutHints*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGLayoutHints::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLayoutHints*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLayoutHints::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLayoutHints*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLayoutHints::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLayoutHints*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGFrameElement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGFrameElement::Class_Name()
{
   return "TGFrameElement";
}

//______________________________________________________________________________
const char *TGFrameElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFrameElement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGFrameElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFrameElement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGFrameElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFrameElement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGFrameElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFrameElement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLayoutManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLayoutManager::Class_Name()
{
   return "TGLayoutManager";
}

//______________________________________________________________________________
const char *TGLayoutManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLayoutManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGLayoutManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLayoutManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLayoutManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLayoutManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLayoutManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLayoutManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGVerticalLayout::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGVerticalLayout::Class_Name()
{
   return "TGVerticalLayout";
}

//______________________________________________________________________________
const char *TGVerticalLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVerticalLayout*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGVerticalLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVerticalLayout*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGVerticalLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVerticalLayout*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGVerticalLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVerticalLayout*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGHorizontalLayout::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHorizontalLayout::Class_Name()
{
   return "TGHorizontalLayout";
}

//______________________________________________________________________________
const char *TGHorizontalLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHorizontalLayout*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGHorizontalLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHorizontalLayout*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHorizontalLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHorizontalLayout*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHorizontalLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHorizontalLayout*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGRowLayout::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGRowLayout::Class_Name()
{
   return "TGRowLayout";
}

//______________________________________________________________________________
const char *TGRowLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRowLayout*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGRowLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRowLayout*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGRowLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRowLayout*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGRowLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRowLayout*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGColumnLayout::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGColumnLayout::Class_Name()
{
   return "TGColumnLayout";
}

//______________________________________________________________________________
const char *TGColumnLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColumnLayout*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGColumnLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColumnLayout*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGColumnLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColumnLayout*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGColumnLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColumnLayout*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMatrixLayout::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMatrixLayout::Class_Name()
{
   return "TGMatrixLayout";
}

//______________________________________________________________________________
const char *TGMatrixLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMatrixLayout*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMatrixLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMatrixLayout*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMatrixLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMatrixLayout*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMatrixLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMatrixLayout*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTileLayout::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTileLayout::Class_Name()
{
   return "TGTileLayout";
}

//______________________________________________________________________________
const char *TGTileLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTileLayout*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTileLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTileLayout*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTileLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTileLayout*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTileLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTileLayout*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGListLayout::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGListLayout::Class_Name()
{
   return "TGListLayout";
}

//______________________________________________________________________________
const char *TGListLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListLayout*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGListLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListLayout*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGListLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListLayout*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGListLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListLayout*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGListDetailsLayout::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGListDetailsLayout::Class_Name()
{
   return "TGListDetailsLayout";
}

//______________________________________________________________________________
const char *TGListDetailsLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListDetailsLayout*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGListDetailsLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListDetailsLayout*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGListDetailsLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListDetailsLayout*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGListDetailsLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListDetailsLayout*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGString::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGString::Class_Name()
{
   return "TGString";
}

//______________________________________________________________________________
const char *TGString::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGString*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGString::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGString*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGString::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGString*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGString::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGString*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGHotString::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHotString::Class_Name()
{
   return "TGHotString";
}

//______________________________________________________________________________
const char *TGHotString::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHotString*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGHotString::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHotString*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHotString::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHotString*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHotString::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHotString*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGFrame::Class_Name()
{
   return "TGFrame";
}

//______________________________________________________________________________
const char *TGFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGCompositeFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGCompositeFrame::Class_Name()
{
   return "TGCompositeFrame";
}

//______________________________________________________________________________
const char *TGCompositeFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGCompositeFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGCompositeFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGCompositeFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGCompositeFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGCompositeFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGCompositeFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGCompositeFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGVerticalFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGVerticalFrame::Class_Name()
{
   return "TGVerticalFrame";
}

//______________________________________________________________________________
const char *TGVerticalFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVerticalFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGVerticalFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVerticalFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGVerticalFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVerticalFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGVerticalFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVerticalFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGHorizontalFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHorizontalFrame::Class_Name()
{
   return "TGHorizontalFrame";
}

//______________________________________________________________________________
const char *TGHorizontalFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHorizontalFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGHorizontalFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHorizontalFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHorizontalFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHorizontalFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHorizontalFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHorizontalFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMainFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMainFrame::Class_Name()
{
   return "TGMainFrame";
}

//______________________________________________________________________________
const char *TGMainFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMainFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMainFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMainFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMainFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMainFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMainFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMainFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTransientFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTransientFrame::Class_Name()
{
   return "TGTransientFrame";
}

//______________________________________________________________________________
const char *TGTransientFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTransientFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTransientFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTransientFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTransientFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTransientFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTransientFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTransientFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGGroupFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGGroupFrame::Class_Name()
{
   return "TGGroupFrame";
}

//______________________________________________________________________________
const char *TGGroupFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGGroupFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGGroupFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGGroupFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGGroupFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGGroupFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGGroupFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGGroupFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGHeaderFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHeaderFrame::Class_Name()
{
   return "TGHeaderFrame";
}

//______________________________________________________________________________
const char *TGHeaderFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHeaderFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGHeaderFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHeaderFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHeaderFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHeaderFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHeaderFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHeaderFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGHorizontal3DLine::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHorizontal3DLine::Class_Name()
{
   return "TGHorizontal3DLine";
}

//______________________________________________________________________________
const char *TGHorizontal3DLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHorizontal3DLine*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGHorizontal3DLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHorizontal3DLine*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHorizontal3DLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHorizontal3DLine*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHorizontal3DLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHorizontal3DLine*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGVertical3DLine::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGVertical3DLine::Class_Name()
{
   return "TGVertical3DLine";
}

//______________________________________________________________________________
const char *TGVertical3DLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVertical3DLine*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGVertical3DLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVertical3DLine*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGVertical3DLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVertical3DLine*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGVertical3DLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVertical3DLine*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGApplication::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGApplication::Class_Name()
{
   return "TGApplication";
}

//______________________________________________________________________________
const char *TGApplication::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGApplication*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGApplication::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGApplication*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGApplication::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGApplication*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGApplication::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGApplication*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGWidget::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGWidget::Class_Name()
{
   return "TGWidget";
}

//______________________________________________________________________________
const char *TGWidget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGWidget*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGWidget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGWidget*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGWidget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGWidget*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGWidget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGWidget*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGButton::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGButton::Class_Name()
{
   return "TGButton";
}

//______________________________________________________________________________
const char *TGButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGButton*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGButton*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGButton*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGButton*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTextButton::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTextButton::Class_Name()
{
   return "TGTextButton";
}

//______________________________________________________________________________
const char *TGTextButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextButton*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTextButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextButton*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTextButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextButton*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTextButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextButton*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGPictureButton::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGPictureButton::Class_Name()
{
   return "TGPictureButton";
}

//______________________________________________________________________________
const char *TGPictureButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPictureButton*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGPictureButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPictureButton*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGPictureButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPictureButton*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGPictureButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPictureButton*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGCheckButton::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGCheckButton::Class_Name()
{
   return "TGCheckButton";
}

//______________________________________________________________________________
const char *TGCheckButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGCheckButton*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGCheckButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGCheckButton*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGCheckButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGCheckButton*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGCheckButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGCheckButton*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGRadioButton::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGRadioButton::Class_Name()
{
   return "TGRadioButton";
}

//______________________________________________________________________________
const char *TGRadioButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRadioButton*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGRadioButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRadioButton*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGRadioButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRadioButton*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGRadioButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRadioButton*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGSplitButton::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGSplitButton::Class_Name()
{
   return "TGSplitButton";
}

//______________________________________________________________________________
const char *TGSplitButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSplitButton*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGSplitButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSplitButton*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGSplitButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSplitButton*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGSplitButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSplitButton*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGButtonGroup::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGButtonGroup::Class_Name()
{
   return "TGButtonGroup";
}

//______________________________________________________________________________
const char *TGButtonGroup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGButtonGroup*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGButtonGroup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGButtonGroup*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGButtonGroup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGButtonGroup*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGButtonGroup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGButtonGroup*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGVButtonGroup::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGVButtonGroup::Class_Name()
{
   return "TGVButtonGroup";
}

//______________________________________________________________________________
const char *TGVButtonGroup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVButtonGroup*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGVButtonGroup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVButtonGroup*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGVButtonGroup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVButtonGroup*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGVButtonGroup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVButtonGroup*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGHButtonGroup::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHButtonGroup::Class_Name()
{
   return "TGHButtonGroup";
}

//______________________________________________________________________________
const char *TGHButtonGroup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHButtonGroup*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGHButtonGroup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHButtonGroup*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHButtonGroup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHButtonGroup*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHButtonGroup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHButtonGroup*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGContainer::Class_Name()
{
   return "TGContainer";
}

//______________________________________________________________________________
const char *TGContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGViewPort::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGViewPort::Class_Name()
{
   return "TGViewPort";
}

//______________________________________________________________________________
const char *TGViewPort::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGViewPort*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGViewPort::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGViewPort*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGViewPort::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGViewPort*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGViewPort::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGViewPort*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGCanvas::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGCanvas::Class_Name()
{
   return "TGCanvas";
}

//______________________________________________________________________________
const char *TGCanvas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGCanvas*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGCanvas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGCanvas*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGCanvas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGCanvas*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGCanvas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGCanvas*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGColorPalette::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGColorPalette::Class_Name()
{
   return "TGColorPalette";
}

//______________________________________________________________________________
const char *TGColorPalette::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColorPalette*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGColorPalette::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColorPalette*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGColorPalette::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColorPalette*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGColorPalette::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColorPalette*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGColorPick::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGColorPick::Class_Name()
{
   return "TGColorPick";
}

//______________________________________________________________________________
const char *TGColorPick::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColorPick*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGColorPick::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColorPick*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGColorPick::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColorPick*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGColorPick::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColorPick*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGColorDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGColorDialog::Class_Name()
{
   return "TGColorDialog";
}

//______________________________________________________________________________
const char *TGColorDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColorDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGColorDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColorDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGColorDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColorDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGColorDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColorDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGColorFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGColorFrame::Class_Name()
{
   return "TGColorFrame";
}

//______________________________________________________________________________
const char *TGColorFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColorFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGColorFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColorFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGColorFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColorFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGColorFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColorFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TG16ColorSelector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TG16ColorSelector::Class_Name()
{
   return "TG16ColorSelector";
}

//______________________________________________________________________________
const char *TG16ColorSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TG16ColorSelector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TG16ColorSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TG16ColorSelector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TG16ColorSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TG16ColorSelector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TG16ColorSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TG16ColorSelector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGColorPopup::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGColorPopup::Class_Name()
{
   return "TGColorPopup";
}

//______________________________________________________________________________
const char *TGColorPopup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColorPopup*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGColorPopup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColorPopup*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGColorPopup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColorPopup*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGColorPopup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColorPopup*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGColorSelect::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGColorSelect::Class_Name()
{
   return "TGColorSelect";
}

//______________________________________________________________________________
const char *TGColorSelect::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColorSelect*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGColorSelect::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGColorSelect*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGColorSelect::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColorSelect*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGColorSelect::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGColorSelect*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGScrollBarElement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGScrollBarElement::Class_Name()
{
   return "TGScrollBarElement";
}

//______________________________________________________________________________
const char *TGScrollBarElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGScrollBarElement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGScrollBarElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGScrollBarElement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGScrollBarElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGScrollBarElement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGScrollBarElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGScrollBarElement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGScrollBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGScrollBar::Class_Name()
{
   return "TGScrollBar";
}

//______________________________________________________________________________
const char *TGScrollBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGScrollBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGScrollBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGScrollBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGScrollBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGScrollBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGScrollBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGScrollBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGHScrollBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHScrollBar::Class_Name()
{
   return "TGHScrollBar";
}

//______________________________________________________________________________
const char *TGHScrollBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHScrollBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGHScrollBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHScrollBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHScrollBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHScrollBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHScrollBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHScrollBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGVScrollBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGVScrollBar::Class_Name()
{
   return "TGVScrollBar";
}

//______________________________________________________________________________
const char *TGVScrollBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVScrollBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGVScrollBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVScrollBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGVScrollBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVScrollBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGVScrollBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVScrollBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLBEntry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLBEntry::Class_Name()
{
   return "TGLBEntry";
}

//______________________________________________________________________________
const char *TGLBEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLBEntry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGLBEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLBEntry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLBEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLBEntry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLBEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLBEntry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTextLBEntry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTextLBEntry::Class_Name()
{
   return "TGTextLBEntry";
}

//______________________________________________________________________________
const char *TGTextLBEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextLBEntry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTextLBEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextLBEntry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTextLBEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextLBEntry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTextLBEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextLBEntry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLineLBEntry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLineLBEntry::Class_Name()
{
   return "TGLineLBEntry";
}

//______________________________________________________________________________
const char *TGLineLBEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLineLBEntry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGLineLBEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLineLBEntry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLineLBEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLineLBEntry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLineLBEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLineLBEntry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGIconLBEntry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGIconLBEntry::Class_Name()
{
   return "TGIconLBEntry";
}

//______________________________________________________________________________
const char *TGIconLBEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGIconLBEntry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGIconLBEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGIconLBEntry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGIconLBEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGIconLBEntry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGIconLBEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGIconLBEntry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLBContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLBContainer::Class_Name()
{
   return "TGLBContainer";
}

//______________________________________________________________________________
const char *TGLBContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLBContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGLBContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLBContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLBContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLBContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLBContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLBContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGListBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGListBox::Class_Name()
{
   return "TGListBox";
}

//______________________________________________________________________________
const char *TGListBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGListBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGListBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGListBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGComboBoxPopup::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGComboBoxPopup::Class_Name()
{
   return "TGComboBoxPopup";
}

//______________________________________________________________________________
const char *TGComboBoxPopup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGComboBoxPopup*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGComboBoxPopup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGComboBoxPopup*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGComboBoxPopup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGComboBoxPopup*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGComboBoxPopup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGComboBoxPopup*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGComboBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGComboBox::Class_Name()
{
   return "TGComboBox";
}

//______________________________________________________________________________
const char *TGComboBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGComboBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGComboBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGComboBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGComboBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGComboBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGComboBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGComboBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLineStyleComboBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLineStyleComboBox::Class_Name()
{
   return "TGLineStyleComboBox";
}

//______________________________________________________________________________
const char *TGLineStyleComboBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLineStyleComboBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGLineStyleComboBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLineStyleComboBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLineStyleComboBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLineStyleComboBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLineStyleComboBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLineStyleComboBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLineWidthComboBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLineWidthComboBox::Class_Name()
{
   return "TGLineWidthComboBox";
}

//______________________________________________________________________________
const char *TGLineWidthComboBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLineWidthComboBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGLineWidthComboBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLineWidthComboBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLineWidthComboBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLineWidthComboBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLineWidthComboBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLineWidthComboBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGFontTypeComboBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGFontTypeComboBox::Class_Name()
{
   return "TGFontTypeComboBox";
}

//______________________________________________________________________________
const char *TGFontTypeComboBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFontTypeComboBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGFontTypeComboBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFontTypeComboBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGFontTypeComboBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFontTypeComboBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGFontTypeComboBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFontTypeComboBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGCommandPlugin::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGCommandPlugin::Class_Name()
{
   return "TGCommandPlugin";
}

//______________________________________________________________________________
const char *TGCommandPlugin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGCommandPlugin*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGCommandPlugin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGCommandPlugin*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGCommandPlugin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGCommandPlugin*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGCommandPlugin::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGCommandPlugin*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGDragWindow::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDragWindow::Class_Name()
{
   return "TGDragWindow";
}

//______________________________________________________________________________
const char *TGDragWindow::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDragWindow*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGDragWindow::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDragWindow*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDragWindow::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDragWindow*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDragWindow::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDragWindow*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDNDData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDNDData::Class_Name()
{
   return "TDNDData";
}

//______________________________________________________________________________
const char *TDNDData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDNDData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDNDData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDNDData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDNDData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDNDData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDNDData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDNDData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGDNDManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDNDManager::Class_Name()
{
   return "TGDNDManager";
}

//______________________________________________________________________________
const char *TGDNDManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDNDManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGDNDManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDNDManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDNDManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDNDManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDNDManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDNDManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGDockButton::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDockButton::Class_Name()
{
   return "TGDockButton";
}

//______________________________________________________________________________
const char *TGDockButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDockButton*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGDockButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDockButton*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDockButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDockButton*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDockButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDockButton*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGDockHideButton::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDockHideButton::Class_Name()
{
   return "TGDockHideButton";
}

//______________________________________________________________________________
const char *TGDockHideButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDockHideButton*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGDockHideButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDockHideButton*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDockHideButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDockHideButton*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDockHideButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDockHideButton*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGUndockedFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGUndockedFrame::Class_Name()
{
   return "TGUndockedFrame";
}

//______________________________________________________________________________
const char *TGUndockedFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGUndockedFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGUndockedFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGUndockedFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGUndockedFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGUndockedFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGUndockedFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGUndockedFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGDockableFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDockableFrame::Class_Name()
{
   return "TGDockableFrame";
}

//______________________________________________________________________________
const char *TGDockableFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDockableFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGDockableFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDockableFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDockableFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDockableFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDockableFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDockableFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGDoubleSlider::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDoubleSlider::Class_Name()
{
   return "TGDoubleSlider";
}

//______________________________________________________________________________
const char *TGDoubleSlider::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDoubleSlider*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGDoubleSlider::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDoubleSlider*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDoubleSlider::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDoubleSlider*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDoubleSlider::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDoubleSlider*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGDoubleVSlider::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDoubleVSlider::Class_Name()
{
   return "TGDoubleVSlider";
}

//______________________________________________________________________________
const char *TGDoubleVSlider::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDoubleVSlider*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGDoubleVSlider::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDoubleVSlider*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDoubleVSlider::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDoubleVSlider*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDoubleVSlider::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDoubleVSlider*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGDoubleHSlider::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDoubleHSlider::Class_Name()
{
   return "TGDoubleHSlider";
}

//______________________________________________________________________________
const char *TGDoubleHSlider::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDoubleHSlider*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGDoubleHSlider::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDoubleHSlider*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDoubleHSlider::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDoubleHSlider*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDoubleHSlider::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDoubleHSlider*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGEventHandler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGEventHandler::Class_Name()
{
   return "TGEventHandler";
}

//______________________________________________________________________________
const char *TGEventHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGEventHandler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGEventHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGEventHandler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGEventHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGEventHandler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGEventHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGEventHandler*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTreeLBEntry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTreeLBEntry::Class_Name()
{
   return "TGTreeLBEntry";
}

//______________________________________________________________________________
const char *TGTreeLBEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTreeLBEntry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTreeLBEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTreeLBEntry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTreeLBEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTreeLBEntry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTreeLBEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTreeLBEntry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGFSComboBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGFSComboBox::Class_Name()
{
   return "TGFSComboBox";
}

//______________________________________________________________________________
const char *TGFSComboBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFSComboBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGFSComboBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFSComboBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGFSComboBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFSComboBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGFSComboBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFSComboBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGSplitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGSplitter::Class_Name()
{
   return "TGSplitter";
}

//______________________________________________________________________________
const char *TGSplitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSplitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGSplitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSplitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGSplitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSplitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGSplitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSplitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGVSplitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGVSplitter::Class_Name()
{
   return "TGVSplitter";
}

//______________________________________________________________________________
const char *TGVSplitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVSplitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGVSplitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVSplitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGVSplitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVSplitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGVSplitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVSplitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGHSplitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHSplitter::Class_Name()
{
   return "TGHSplitter";
}

//______________________________________________________________________________
const char *TGHSplitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHSplitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGHSplitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHSplitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHSplitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHSplitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHSplitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHSplitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGVFileSplitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGVFileSplitter::Class_Name()
{
   return "TGVFileSplitter";
}

//______________________________________________________________________________
const char *TGVFileSplitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVFileSplitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGVFileSplitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVFileSplitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGVFileSplitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVFileSplitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGVFileSplitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVFileSplitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLVEntry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLVEntry::Class_Name()
{
   return "TGLVEntry";
}

//______________________________________________________________________________
const char *TGLVEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLVEntry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGLVEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLVEntry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLVEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLVEntry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLVEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLVEntry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGListView::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGListView::Class_Name()
{
   return "TGListView";
}

//______________________________________________________________________________
const char *TGListView::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListView*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGListView::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListView*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGListView::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListView*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGListView::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListView*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLVContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLVContainer::Class_Name()
{
   return "TGLVContainer";
}

//______________________________________________________________________________
const char *TGLVContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLVContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGLVContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLVContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLVContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLVContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLVContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLVContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGFileItem::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGFileItem::Class_Name()
{
   return "TGFileItem";
}

//______________________________________________________________________________
const char *TGFileItem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFileItem*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGFileItem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFileItem*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGFileItem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFileItem*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGFileItem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFileItem*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGFileContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGFileContainer::Class_Name()
{
   return "TGFileContainer";
}

//______________________________________________________________________________
const char *TGFileContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFileContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGFileContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFileContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGFileContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFileContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGFileContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFileContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGFileBrowser::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGFileBrowser::Class_Name()
{
   return "TGFileBrowser";
}

//______________________________________________________________________________
const char *TGFileBrowser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFileBrowser*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGFileBrowser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFileBrowser*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGFileBrowser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFileBrowser*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGFileBrowser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFileBrowser*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGFileDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGFileDialog::Class_Name()
{
   return "TGFileDialog";
}

//______________________________________________________________________________
const char *TGFileDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFileDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGFileDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFileDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGFileDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFileDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGFileDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFileDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGFontDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGFontDialog::Class_Name()
{
   return "TGFontDialog";
}

//______________________________________________________________________________
const char *TGFontDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFontDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGFontDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFontDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGFontDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFontDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGFontDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFontDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGIcon::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGIcon::Class_Name()
{
   return "TGIcon";
}

//______________________________________________________________________________
const char *TGIcon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGIcon*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGIcon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGIcon*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGIcon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGIcon*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGIcon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGIcon*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGIdleHandler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGIdleHandler::Class_Name()
{
   return "TGIdleHandler";
}

//______________________________________________________________________________
const char *TGIdleHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGIdleHandler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGIdleHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGIdleHandler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGIdleHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGIdleHandler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGIdleHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGIdleHandler*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGRegion::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGRegion::Class_Name()
{
   return "TGRegion";
}

//______________________________________________________________________________
const char *TGRegion::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRegion*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGRegion::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRegion*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGRegion::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRegion*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGRegion::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRegion*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGRegionWithId::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGRegionWithId::Class_Name()
{
   return "TGRegionWithId";
}

//______________________________________________________________________________
const char *TGRegionWithId::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRegionWithId*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGRegionWithId::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRegionWithId*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGRegionWithId::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRegionWithId*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGRegionWithId::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRegionWithId*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGImageMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGImageMap::Class_Name()
{
   return "TGImageMap";
}

//______________________________________________________________________________
const char *TGImageMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGImageMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGImageMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGImageMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGImageMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGImageMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGImageMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGImageMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGInputDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGInputDialog::Class_Name()
{
   return "TGInputDialog";
}

//______________________________________________________________________________
const char *TGInputDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGInputDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGInputDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGInputDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGInputDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGInputDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGInputDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGInputDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLabel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLabel::Class_Name()
{
   return "TGLabel";
}

//______________________________________________________________________________
const char *TGLabel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLabel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGLabel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLabel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLabel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLabel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLabel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLabel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGListTreeItem::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGListTreeItem::Class_Name()
{
   return "TGListTreeItem";
}

//______________________________________________________________________________
const char *TGListTreeItem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListTreeItem*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGListTreeItem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListTreeItem*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGListTreeItem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListTreeItem*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGListTreeItem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListTreeItem*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGListTreeItemStd::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGListTreeItemStd::Class_Name()
{
   return "TGListTreeItemStd";
}

//______________________________________________________________________________
const char *TGListTreeItemStd::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListTreeItemStd*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGListTreeItemStd::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListTreeItemStd*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGListTreeItemStd::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListTreeItemStd*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGListTreeItemStd::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListTreeItemStd*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGListTree::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGListTree::Class_Name()
{
   return "TGListTree";
}

//______________________________________________________________________________
const char *TGListTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListTree*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGListTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGListTree*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGListTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListTree*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGListTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGListTree*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGPicture::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGPicture::Class_Name()
{
   return "TGPicture";
}

//______________________________________________________________________________
const char *TGPicture::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPicture*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGPicture::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPicture*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGPicture::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPicture*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGPicture::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPicture*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGSelectedPicture::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGSelectedPicture::Class_Name()
{
   return "TGSelectedPicture";
}

//______________________________________________________________________________
const char *TGSelectedPicture::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSelectedPicture*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGSelectedPicture::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSelectedPicture*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGSelectedPicture::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSelectedPicture*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGSelectedPicture::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSelectedPicture*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGPicturePool::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGPicturePool::Class_Name()
{
   return "TGPicturePool";
}

//______________________________________________________________________________
const char *TGPicturePool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPicturePool*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGPicturePool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPicturePool*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGPicturePool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPicturePool*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGPicturePool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPicturePool*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMenuEntry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMenuEntry::Class_Name()
{
   return "TGMenuEntry";
}

//______________________________________________________________________________
const char *TGMenuEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMenuEntry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMenuEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMenuEntry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMenuEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMenuEntry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMenuEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMenuEntry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGPopupMenu::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGPopupMenu::Class_Name()
{
   return "TGPopupMenu";
}

//______________________________________________________________________________
const char *TGPopupMenu::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPopupMenu*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGPopupMenu::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPopupMenu*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGPopupMenu::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPopupMenu*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGPopupMenu::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPopupMenu*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMenuTitle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMenuTitle::Class_Name()
{
   return "TGMenuTitle";
}

//______________________________________________________________________________
const char *TGMenuTitle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMenuTitle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMenuTitle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMenuTitle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMenuTitle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMenuTitle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMenuTitle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMenuTitle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMenuBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMenuBar::Class_Name()
{
   return "TGMenuBar";
}

//______________________________________________________________________________
const char *TGMenuBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMenuBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMenuBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMenuBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMenuBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMenuBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMenuBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMenuBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiFrameList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiFrameList::Class_Name()
{
   return "TGMdiFrameList";
}

//______________________________________________________________________________
const char *TGMdiFrameList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiFrameList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiFrameList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiFrameList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiFrameList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiFrameList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiFrameList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiFrameList*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiGeometry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiGeometry::Class_Name()
{
   return "TGMdiGeometry";
}

//______________________________________________________________________________
const char *TGMdiGeometry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiGeometry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiGeometry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiGeometry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiGeometry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiGeometry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiGeometry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiGeometry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiMainFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiMainFrame::Class_Name()
{
   return "TGMdiMainFrame";
}

//______________________________________________________________________________
const char *TGMdiMainFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiMainFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiMainFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiMainFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiMainFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiMainFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiMainFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiMainFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiContainer::Class_Name()
{
   return "TGMdiContainer";
}

//______________________________________________________________________________
const char *TGMdiContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiMenuBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiMenuBar::Class_Name()
{
   return "TGMdiMenuBar";
}

//______________________________________________________________________________
const char *TGMdiMenuBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiMenuBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiMenuBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiMenuBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiMenuBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiMenuBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiMenuBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiMenuBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiFrame::Class_Name()
{
   return "TGMdiFrame";
}

//______________________________________________________________________________
const char *TGMdiFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiWinResizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiWinResizer::Class_Name()
{
   return "TGMdiWinResizer";
}

//______________________________________________________________________________
const char *TGMdiWinResizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiWinResizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiWinResizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiWinResizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiWinResizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiWinResizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiWinResizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiWinResizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiVerticalWinResizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiVerticalWinResizer::Class_Name()
{
   return "TGMdiVerticalWinResizer";
}

//______________________________________________________________________________
const char *TGMdiVerticalWinResizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiVerticalWinResizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiVerticalWinResizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiVerticalWinResizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiVerticalWinResizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiVerticalWinResizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiVerticalWinResizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiVerticalWinResizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiHorizontalWinResizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiHorizontalWinResizer::Class_Name()
{
   return "TGMdiHorizontalWinResizer";
}

//______________________________________________________________________________
const char *TGMdiHorizontalWinResizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiHorizontalWinResizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiHorizontalWinResizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiHorizontalWinResizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiHorizontalWinResizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiHorizontalWinResizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiHorizontalWinResizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiHorizontalWinResizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiCornerWinResizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiCornerWinResizer::Class_Name()
{
   return "TGMdiCornerWinResizer";
}

//______________________________________________________________________________
const char *TGMdiCornerWinResizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiCornerWinResizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiCornerWinResizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiCornerWinResizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiCornerWinResizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiCornerWinResizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiCornerWinResizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiCornerWinResizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiButtons::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiButtons::Class_Name()
{
   return "TGMdiButtons";
}

//______________________________________________________________________________
const char *TGMdiButtons::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiButtons*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiButtons::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiButtons*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiButtons::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiButtons*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiButtons::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiButtons*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiTitleIcon::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiTitleIcon::Class_Name()
{
   return "TGMdiTitleIcon";
}

//______________________________________________________________________________
const char *TGMdiTitleIcon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiTitleIcon*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiTitleIcon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiTitleIcon*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiTitleIcon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiTitleIcon*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiTitleIcon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiTitleIcon*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiTitleBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiTitleBar::Class_Name()
{
   return "TGMdiTitleBar";
}

//______________________________________________________________________________
const char *TGMdiTitleBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiTitleBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiTitleBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiTitleBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiTitleBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiTitleBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiTitleBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiTitleBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMdiDecorFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMdiDecorFrame::Class_Name()
{
   return "TGMdiDecorFrame";
}

//______________________________________________________________________________
const char *TGMdiDecorFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiDecorFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMdiDecorFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMdiDecorFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMdiDecorFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiDecorFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMdiDecorFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMdiDecorFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMimeTypes::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMimeTypes::Class_Name()
{
   return "TGMimeTypes";
}

//______________________________________________________________________________
const char *TGMimeTypes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMimeTypes*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMimeTypes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMimeTypes*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMimeTypes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMimeTypes*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMimeTypes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMimeTypes*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGMsgBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMsgBox::Class_Name()
{
   return "TGMsgBox";
}

//______________________________________________________________________________
const char *TGMsgBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMsgBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMsgBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMsgBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMsgBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMsgBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMsgBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMsgBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTextBuffer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTextBuffer::Class_Name()
{
   return "TGTextBuffer";
}

//______________________________________________________________________________
const char *TGTextBuffer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextBuffer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTextBuffer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextBuffer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTextBuffer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextBuffer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTextBuffer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextBuffer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTextEntry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTextEntry::Class_Name()
{
   return "TGTextEntry";
}

//______________________________________________________________________________
const char *TGTextEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextEntry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTextEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextEntry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTextEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextEntry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTextEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextEntry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGNumberFormat::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGNumberFormat::Class_Name()
{
   return "TGNumberFormat";
}

//______________________________________________________________________________
const char *TGNumberFormat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGNumberFormat*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGNumberFormat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGNumberFormat*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGNumberFormat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGNumberFormat*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGNumberFormat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGNumberFormat*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGNumberEntryField::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGNumberEntryField::Class_Name()
{
   return "TGNumberEntryField";
}

//______________________________________________________________________________
const char *TGNumberEntryField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGNumberEntryField*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGNumberEntryField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGNumberEntryField*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGNumberEntryField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGNumberEntryField*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGNumberEntryField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGNumberEntryField*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGNumberEntry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGNumberEntry::Class_Name()
{
   return "TGNumberEntry";
}

//______________________________________________________________________________
const char *TGNumberEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGNumberEntry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGNumberEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGNumberEntry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGNumberEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGNumberEntry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGNumberEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGNumberEntry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGNumberEntryLayout::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGNumberEntryLayout::Class_Name()
{
   return "TGNumberEntryLayout";
}

//______________________________________________________________________________
const char *TGNumberEntryLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGNumberEntryLayout*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGNumberEntryLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGNumberEntryLayout*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGNumberEntryLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGNumberEntryLayout*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGNumberEntryLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGNumberEntryLayout*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGFrameElementPack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGFrameElementPack::Class_Name()
{
   return "TGFrameElementPack";
}

//______________________________________________________________________________
const char *TGFrameElementPack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFrameElementPack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGFrameElementPack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGFrameElementPack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGFrameElementPack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFrameElementPack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGFrameElementPack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGFrameElementPack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGPack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGPack::Class_Name()
{
   return "TGPack";
}

//______________________________________________________________________________
const char *TGPack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGPack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGPack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGPack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGPasswdDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGPasswdDialog::Class_Name()
{
   return "TGPasswdDialog";
}

//______________________________________________________________________________
const char *TGPasswdDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPasswdDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGPasswdDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPasswdDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGPasswdDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPasswdDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGPasswdDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPasswdDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGProgressBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGProgressBar::Class_Name()
{
   return "TGProgressBar";
}

//______________________________________________________________________________
const char *TGProgressBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGProgressBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGProgressBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGProgressBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGProgressBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGProgressBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGProgressBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGProgressBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGHProgressBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHProgressBar::Class_Name()
{
   return "TGHProgressBar";
}

//______________________________________________________________________________
const char *TGHProgressBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHProgressBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGHProgressBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHProgressBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHProgressBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHProgressBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHProgressBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHProgressBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGVProgressBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGVProgressBar::Class_Name()
{
   return "TGVProgressBar";
}

//______________________________________________________________________________
const char *TGVProgressBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVProgressBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGVProgressBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVProgressBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGVProgressBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVProgressBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGVProgressBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVProgressBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGRedirectOutputGuard::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGRedirectOutputGuard::Class_Name()
{
   return "TGRedirectOutputGuard";
}

//______________________________________________________________________________
const char *TGRedirectOutputGuard::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRedirectOutputGuard*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGRedirectOutputGuard::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRedirectOutputGuard*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGRedirectOutputGuard::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRedirectOutputGuard*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGRedirectOutputGuard::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRedirectOutputGuard*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGResourcePool::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGResourcePool::Class_Name()
{
   return "TGResourcePool";
}

//______________________________________________________________________________
const char *TGResourcePool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGResourcePool*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGResourcePool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGResourcePool*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGResourcePool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGResourcePool*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGResourcePool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGResourcePool*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGShapedFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGShapedFrame::Class_Name()
{
   return "TGShapedFrame";
}

//______________________________________________________________________________
const char *TGShapedFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGShapedFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGShapedFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGShapedFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGShapedFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGShapedFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGShapedFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGShapedFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGShutterItem::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGShutterItem::Class_Name()
{
   return "TGShutterItem";
}

//______________________________________________________________________________
const char *TGShutterItem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGShutterItem*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGShutterItem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGShutterItem*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGShutterItem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGShutterItem*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGShutterItem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGShutterItem*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGShutter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGShutter::Class_Name()
{
   return "TGShutter";
}

//______________________________________________________________________________
const char *TGShutter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGShutter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGShutter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGShutter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGShutter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGShutter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGShutter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGShutter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTableCell::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTableCell::Class_Name()
{
   return "TGTableCell";
}

//______________________________________________________________________________
const char *TGTableCell::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTableCell*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTableCell::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTableCell*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTableCell::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTableCell*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTableCell::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTableCell*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTableHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTableHeader::Class_Name()
{
   return "TGTableHeader";
}

//______________________________________________________________________________
const char *TGTableHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTableHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTableHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTableHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTableHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTableHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTableHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTableHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTable::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTable::Class_Name()
{
   return "TGTable";
}

//______________________________________________________________________________
const char *TGTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTable*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTable*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTable*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTable*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTableRange::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTableRange::Class_Name()
{
   return "TTableRange";
}

//______________________________________________________________________________
const char *TTableRange::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTableRange*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTableRange::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTableRange*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTableRange::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTableRange*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTableRange::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTableRange*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGSimpleTable::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGSimpleTable::Class_Name()
{
   return "TGSimpleTable";
}

//______________________________________________________________________________
const char *TGSimpleTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSimpleTable*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGSimpleTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSimpleTable*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGSimpleTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSimpleTable*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGSimpleTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSimpleTable*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGSimpleTableInterface::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGSimpleTableInterface::Class_Name()
{
   return "TGSimpleTableInterface";
}

//______________________________________________________________________________
const char *TGSimpleTableInterface::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSimpleTableInterface*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGSimpleTableInterface::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSimpleTableInterface*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGSimpleTableInterface::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSimpleTableInterface*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGSimpleTableInterface::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSimpleTableInterface*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGSlider::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGSlider::Class_Name()
{
   return "TGSlider";
}

//______________________________________________________________________________
const char *TGSlider::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSlider*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGSlider::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSlider*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGSlider::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSlider*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGSlider::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSlider*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGVSlider::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGVSlider::Class_Name()
{
   return "TGVSlider";
}

//______________________________________________________________________________
const char *TGVSlider::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVSlider*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGVSlider::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGVSlider*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGVSlider::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVSlider*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGVSlider::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGVSlider*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGHSlider::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHSlider::Class_Name()
{
   return "TGHSlider";
}

//______________________________________________________________________________
const char *TGHSlider::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHSlider*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGHSlider::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHSlider*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHSlider::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHSlider*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHSlider::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHSlider*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGSpeedo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGSpeedo::Class_Name()
{
   return "TGSpeedo";
}

//______________________________________________________________________________
const char *TGSpeedo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSpeedo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGSpeedo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSpeedo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGSpeedo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSpeedo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGSpeedo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSpeedo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGRectMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGRectMap::Class_Name()
{
   return "TGRectMap";
}

//______________________________________________________________________________
const char *TGRectMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRectMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGRectMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRectMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGRectMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRectMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGRectMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRectMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGSplitTool::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGSplitTool::Class_Name()
{
   return "TGSplitTool";
}

//______________________________________________________________________________
const char *TGSplitTool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSplitTool*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGSplitTool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSplitTool*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGSplitTool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSplitTool*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGSplitTool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSplitTool*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGSplitFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGSplitFrame::Class_Name()
{
   return "TGSplitFrame";
}

//______________________________________________________________________________
const char *TGSplitFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSplitFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGSplitFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSplitFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGSplitFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSplitFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGSplitFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSplitFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGStatusBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGStatusBar::Class_Name()
{
   return "TGStatusBar";
}

//______________________________________________________________________________
const char *TGStatusBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGStatusBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGStatusBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGStatusBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGStatusBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGStatusBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGStatusBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGStatusBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTabLayout::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTabLayout::Class_Name()
{
   return "TGTabLayout";
}

//______________________________________________________________________________
const char *TGTabLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTabLayout*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTabLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTabLayout*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTabLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTabLayout*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTabLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTabLayout*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTab::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTab::Class_Name()
{
   return "TGTab";
}

//______________________________________________________________________________
const char *TGTab::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTab*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTab::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTab*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTab::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTab*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTab::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTab*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTabElement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTabElement::Class_Name()
{
   return "TGTabElement";
}

//______________________________________________________________________________
const char *TGTabElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTabElement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTabElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTabElement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTabElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTabElement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTabElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTabElement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTableFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTableFrame::Class_Name()
{
   return "TGTableFrame";
}

//______________________________________________________________________________
const char *TGTableFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTableFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTableFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTableFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTableFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTableFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTableFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTableFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTableHeaderFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTableHeaderFrame::Class_Name()
{
   return "TGTableHeaderFrame";
}

//______________________________________________________________________________
const char *TGTableHeaderFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTableHeaderFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTableHeaderFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTableHeaderFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTableHeaderFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTableHeaderFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTableHeaderFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTableHeaderFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTableLayoutHints::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTableLayoutHints::Class_Name()
{
   return "TGTableLayoutHints";
}

//______________________________________________________________________________
const char *TGTableLayoutHints::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTableLayoutHints*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTableLayoutHints::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTableLayoutHints*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTableLayoutHints::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTableLayoutHints*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTableLayoutHints::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTableLayoutHints*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTableLayout::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTableLayout::Class_Name()
{
   return "TGTableLayout";
}

//______________________________________________________________________________
const char *TGTableLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTableLayout*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTableLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTableLayout*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTableLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTableLayout*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTableLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTableLayout*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTextLine::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTextLine::Class_Name()
{
   return "TGTextLine";
}

//______________________________________________________________________________
const char *TGTextLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextLine*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTextLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextLine*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTextLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextLine*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTextLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextLine*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGText::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGText::Class_Name()
{
   return "TGText";
}

//______________________________________________________________________________
const char *TGText::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGText*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGText::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGText*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGText::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGText*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGText::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGText*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGView::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGView::Class_Name()
{
   return "TGView";
}

//______________________________________________________________________________
const char *TGView::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGView*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGView::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGView*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGView::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGView*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGView::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGView*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGViewFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGViewFrame::Class_Name()
{
   return "TGViewFrame";
}

//______________________________________________________________________________
const char *TGViewFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGViewFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGViewFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGViewFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGViewFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGViewFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGViewFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGViewFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTextView::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTextView::Class_Name()
{
   return "TGTextView";
}

//______________________________________________________________________________
const char *TGTextView::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextView*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTextView::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextView*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTextView::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextView*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTextView::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextView*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTextEdit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTextEdit::Class_Name()
{
   return "TGTextEdit";
}

//______________________________________________________________________________
const char *TGTextEdit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextEdit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTextEdit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextEdit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTextEdit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextEdit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTextEdit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextEdit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGSearchDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGSearchDialog::Class_Name()
{
   return "TGSearchDialog";
}

//______________________________________________________________________________
const char *TGSearchDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSearchDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGSearchDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSearchDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGSearchDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSearchDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGSearchDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSearchDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGPrintDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGPrintDialog::Class_Name()
{
   return "TGPrintDialog";
}

//______________________________________________________________________________
const char *TGPrintDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPrintDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGPrintDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGPrintDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGPrintDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPrintDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGPrintDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGPrintDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGGotoDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGGotoDialog::Class_Name()
{
   return "TGGotoDialog";
}

//______________________________________________________________________________
const char *TGGotoDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGGotoDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGGotoDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGGotoDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGGotoDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGGotoDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGGotoDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGGotoDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTextEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTextEditor::Class_Name()
{
   return "TGTextEditor";
}

//______________________________________________________________________________
const char *TGTextEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTextEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTextEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTextEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTextViewStreamBuf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTextViewStreamBuf::Class_Name()
{
   return "TGTextViewStreamBuf";
}

//______________________________________________________________________________
const char *TGTextViewStreamBuf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextViewStreamBuf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTextViewStreamBuf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextViewStreamBuf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTextViewStreamBuf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextViewStreamBuf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTextViewStreamBuf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextViewStreamBuf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTextViewostream::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTextViewostream::Class_Name()
{
   return "TGTextViewostream";
}

//______________________________________________________________________________
const char *TGTextViewostream::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextViewostream*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTextViewostream::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTextViewostream*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTextViewostream::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextViewostream*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTextViewostream::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTextViewostream*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGToolBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGToolBar::Class_Name()
{
   return "TGToolBar";
}

//______________________________________________________________________________
const char *TGToolBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGToolBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGToolBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGToolBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGToolBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGToolBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGToolBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGToolBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGToolTip::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGToolTip::Class_Name()
{
   return "TGToolTip";
}

//______________________________________________________________________________
const char *TGToolTip::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGToolTip*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGToolTip::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGToolTip*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGToolTip::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGToolTip*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGToolTip::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGToolTip*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTripleVSlider::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTripleVSlider::Class_Name()
{
   return "TGTripleVSlider";
}

//______________________________________________________________________________
const char *TGTripleVSlider::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTripleVSlider*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTripleVSlider::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTripleVSlider*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTripleVSlider::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTripleVSlider*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTripleVSlider::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTripleVSlider*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTripleHSlider::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTripleHSlider::Class_Name()
{
   return "TGTripleHSlider";
}

//______________________________________________________________________________
const char *TGTripleHSlider::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTripleHSlider*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTripleHSlider::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTripleHSlider*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTripleHSlider::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTripleHSlider*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTripleHSlider::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTripleHSlider*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGXYLayoutHints::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGXYLayoutHints::Class_Name()
{
   return "TGXYLayoutHints";
}

//______________________________________________________________________________
const char *TGXYLayoutHints::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGXYLayoutHints*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGXYLayoutHints::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGXYLayoutHints*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGXYLayoutHints::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGXYLayoutHints*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGXYLayoutHints::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGXYLayoutHints*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGXYLayout::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGXYLayout::Class_Name()
{
   return "TGXYLayout";
}

//______________________________________________________________________________
const char *TGXYLayout::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGXYLayout*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGXYLayout::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGXYLayout*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGXYLayout::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGXYLayout*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGXYLayout::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGXYLayout*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGuiBldAction::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGuiBldAction::Class_Name()
{
   return "TGuiBldAction";
}

//______________________________________________________________________________
const char *TGuiBldAction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldAction*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGuiBldAction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldAction*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGuiBldAction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldAction*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGuiBldAction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldAction*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGuiBuilder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGuiBuilder::Class_Name()
{
   return "TGuiBuilder";
}

//______________________________________________________________________________
const char *TGuiBuilder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBuilder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGuiBuilder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBuilder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGuiBuilder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBuilder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGuiBuilder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBuilder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootApplication::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootApplication::Class_Name()
{
   return "TRootApplication";
}

//______________________________________________________________________________
const char *TRootApplication::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootApplication*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRootApplication::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootApplication*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootApplication::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootApplication*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootApplication::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootApplication*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBrowserPlugin::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TBrowserPlugin::Class_Name()
{
   return "TBrowserPlugin";
}

//______________________________________________________________________________
const char *TBrowserPlugin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBrowserPlugin*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TBrowserPlugin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBrowserPlugin*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBrowserPlugin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBrowserPlugin*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBrowserPlugin::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBrowserPlugin*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootBrowser::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootBrowser::Class_Name()
{
   return "TRootBrowser";
}

//______________________________________________________________________________
const char *TRootBrowser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootBrowser*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRootBrowser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootBrowser*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootBrowser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootBrowser*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootBrowser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootBrowser*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootBrowserLite::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootBrowserLite::Class_Name()
{
   return "TRootBrowserLite";
}

//______________________________________________________________________________
const char *TRootBrowserLite::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootBrowserLite*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRootBrowserLite::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootBrowserLite*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootBrowserLite::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootBrowserLite*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootBrowserLite::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootBrowserLite*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootCanvas::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootCanvas::Class_Name()
{
   return "TRootCanvas";
}

//______________________________________________________________________________
const char *TRootCanvas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootCanvas*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRootCanvas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootCanvas*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootCanvas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootCanvas*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootCanvas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootCanvas*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootContextMenu::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootContextMenu::Class_Name()
{
   return "TRootContextMenu";
}

//______________________________________________________________________________
const char *TRootContextMenu::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootContextMenu*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRootContextMenu::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootContextMenu*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootContextMenu::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootContextMenu*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootContextMenu::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootContextMenu*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootControlBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootControlBar::Class_Name()
{
   return "TRootControlBar";
}

//______________________________________________________________________________
const char *TRootControlBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootControlBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRootControlBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootControlBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootControlBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootControlBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootControlBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootControlBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootDialog::Class_Name()
{
   return "TRootDialog";
}

//______________________________________________________________________________
const char *TRootDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRootDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootEmbeddedCanvas::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootEmbeddedCanvas::Class_Name()
{
   return "TRootEmbeddedCanvas";
}

//______________________________________________________________________________
const char *TRootEmbeddedCanvas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootEmbeddedCanvas*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRootEmbeddedCanvas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootEmbeddedCanvas*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootEmbeddedCanvas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootEmbeddedCanvas*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootEmbeddedCanvas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootEmbeddedCanvas*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootGuiFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootGuiFactory::Class_Name()
{
   return "TRootGuiFactory";
}

//______________________________________________________________________________
const char *TRootGuiFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootGuiFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRootGuiFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootGuiFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootGuiFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootGuiFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootGuiFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootGuiFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootHelpDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootHelpDialog::Class_Name()
{
   return "TRootHelpDialog";
}

//______________________________________________________________________________
const char *TRootHelpDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootHelpDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRootHelpDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootHelpDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootHelpDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootHelpDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootHelpDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootHelpDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualDragManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualDragManager::Class_Name()
{
   return "TVirtualDragManager";
}

//______________________________________________________________________________
const char *TVirtualDragManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualDragManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualDragManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualDragManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualDragManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualDragManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualDragManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualDragManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGObject.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGObject(void *p) {
      return  p ? new(p) ::TGObject : new ::TGObject;
   }
   static void *newArray_TGObject(Long_t nElements, void *p) {
      return p ? new(p) ::TGObject[nElements] : new ::TGObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGObject(void *p) {
      delete (static_cast<::TGObject*>(p));
   }
   static void deleteArray_TGObject(void *p) {
      delete [] (static_cast<::TGObject*>(p));
   }
   static void destruct_TGObject(void *p) {
      typedef ::TGObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGObject(TBuffer &buf, void *obj) {
      ((::TGObject*)obj)->::TGObject::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGObject

//______________________________________________________________________________
void TGClient::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGClient.

   TObject::Streamer(R__b);
   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGClient(void *p) {
      return  p ? new(p) ::TGClient : new ::TGClient;
   }
   static void *newArray_TGClient(Long_t nElements, void *p) {
      return p ? new(p) ::TGClient[nElements] : new ::TGClient[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGClient(void *p) {
      delete (static_cast<::TGClient*>(p));
   }
   static void deleteArray_TGClient(void *p) {
      delete [] (static_cast<::TGClient*>(p));
   }
   static void destruct_TGClient(void *p) {
      typedef ::TGClient current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGClient(TBuffer &buf, void *obj) {
      ((::TGClient*)obj)->::TGClient::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGClient

//______________________________________________________________________________
void TGWindow::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGWindow.

   TGObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGWindow(void *p) {
      return  p ? new(p) ::TGWindow : new ::TGWindow;
   }
   static void *newArray_TGWindow(Long_t nElements, void *p) {
      return p ? new(p) ::TGWindow[nElements] : new ::TGWindow[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGWindow(void *p) {
      delete (static_cast<::TGWindow*>(p));
   }
   static void deleteArray_TGWindow(void *p) {
      delete [] (static_cast<::TGWindow*>(p));
   }
   static void destruct_TGWindow(void *p) {
      typedef ::TGWindow current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGWindow(TBuffer &buf, void *obj) {
      ((::TGWindow*)obj)->::TGWindow::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGWindow

//______________________________________________________________________________
void TGUnknownWindowHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGUnknownWindowHandler.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGUnknownWindowHandler(void *p) {
      delete (static_cast<::TGUnknownWindowHandler*>(p));
   }
   static void deleteArray_TGUnknownWindowHandler(void *p) {
      delete [] (static_cast<::TGUnknownWindowHandler*>(p));
   }
   static void destruct_TGUnknownWindowHandler(void *p) {
      typedef ::TGUnknownWindowHandler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGUnknownWindowHandler(TBuffer &buf, void *obj) {
      ((::TGUnknownWindowHandler*)obj)->::TGUnknownWindowHandler::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGUnknownWindowHandler

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGDimension(void *p) {
      return  p ? new(p) ::TGDimension : new ::TGDimension;
   }
   static void *newArray_TGDimension(Long_t nElements, void *p) {
      return p ? new(p) ::TGDimension[nElements] : new ::TGDimension[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGDimension(void *p) {
      delete (static_cast<::TGDimension*>(p));
   }
   static void deleteArray_TGDimension(void *p) {
      delete [] (static_cast<::TGDimension*>(p));
   }
   static void destruct_TGDimension(void *p) {
      typedef ::TGDimension current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGDimension

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGPosition(void *p) {
      return  p ? new(p) ::TGPosition : new ::TGPosition;
   }
   static void *newArray_TGPosition(Long_t nElements, void *p) {
      return p ? new(p) ::TGPosition[nElements] : new ::TGPosition[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGPosition(void *p) {
      delete (static_cast<::TGPosition*>(p));
   }
   static void deleteArray_TGPosition(void *p) {
      delete [] (static_cast<::TGPosition*>(p));
   }
   static void destruct_TGPosition(void *p) {
      typedef ::TGPosition current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGPosition

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLongPosition(void *p) {
      return  p ? new(p) ::TGLongPosition : new ::TGLongPosition;
   }
   static void *newArray_TGLongPosition(Long_t nElements, void *p) {
      return p ? new(p) ::TGLongPosition[nElements] : new ::TGLongPosition[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLongPosition(void *p) {
      delete (static_cast<::TGLongPosition*>(p));
   }
   static void deleteArray_TGLongPosition(void *p) {
      delete [] (static_cast<::TGLongPosition*>(p));
   }
   static void destruct_TGLongPosition(void *p) {
      typedef ::TGLongPosition current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGLongPosition

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGInsets(void *p) {
      return  p ? new(p) ::TGInsets : new ::TGInsets;
   }
   static void *newArray_TGInsets(Long_t nElements, void *p) {
      return p ? new(p) ::TGInsets[nElements] : new ::TGInsets[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGInsets(void *p) {
      delete (static_cast<::TGInsets*>(p));
   }
   static void deleteArray_TGInsets(void *p) {
      delete [] (static_cast<::TGInsets*>(p));
   }
   static void destruct_TGInsets(void *p) {
      typedef ::TGInsets current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGInsets

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGRectangle(void *p) {
      return  p ? new(p) ::TGRectangle : new ::TGRectangle;
   }
   static void *newArray_TGRectangle(Long_t nElements, void *p) {
      return p ? new(p) ::TGRectangle[nElements] : new ::TGRectangle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGRectangle(void *p) {
      delete (static_cast<::TGRectangle*>(p));
   }
   static void deleteArray_TGRectangle(void *p) {
      delete [] (static_cast<::TGRectangle*>(p));
   }
   static void destruct_TGRectangle(void *p) {
      typedef ::TGRectangle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGRectangle

//______________________________________________________________________________
void TGGC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGGC.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGGC(void *p) {
      return  p ? new(p) ::TGGC : new ::TGGC;
   }
   static void *newArray_TGGC(Long_t nElements, void *p) {
      return p ? new(p) ::TGGC[nElements] : new ::TGGC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGGC(void *p) {
      delete (static_cast<::TGGC*>(p));
   }
   static void deleteArray_TGGC(void *p) {
      delete [] (static_cast<::TGGC*>(p));
   }
   static void destruct_TGGC(void *p) {
      typedef ::TGGC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGGC(TBuffer &buf, void *obj) {
      ((::TGGC*)obj)->::TGGC::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGGC

//______________________________________________________________________________
void TGGCPool::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGGCPool.

   TGObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGGCPool(void *p) {
      delete (static_cast<::TGGCPool*>(p));
   }
   static void deleteArray_TGGCPool(void *p) {
      delete [] (static_cast<::TGGCPool*>(p));
   }
   static void destruct_TGGCPool(void *p) {
      typedef ::TGGCPool current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGGCPool(TBuffer &buf, void *obj) {
      ((::TGGCPool*)obj)->::TGGCPool::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGGCPool

namespace ROOT {
   // Wrappers around operator new
   static void *new_FontMetrics_t(void *p) {
      return  p ? new(p) ::FontMetrics_t : new ::FontMetrics_t;
   }
   static void *newArray_FontMetrics_t(Long_t nElements, void *p) {
      return p ? new(p) ::FontMetrics_t[nElements] : new ::FontMetrics_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_FontMetrics_t(void *p) {
      delete (static_cast<::FontMetrics_t*>(p));
   }
   static void deleteArray_FontMetrics_t(void *p) {
      delete [] (static_cast<::FontMetrics_t*>(p));
   }
   static void destruct_FontMetrics_t(void *p) {
      typedef ::FontMetrics_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::FontMetrics_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_FontAttributes_t(void *p) {
      return  p ? new(p) ::FontAttributes_t : new ::FontAttributes_t;
   }
   static void *newArray_FontAttributes_t(Long_t nElements, void *p) {
      return p ? new(p) ::FontAttributes_t[nElements] : new ::FontAttributes_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_FontAttributes_t(void *p) {
      delete (static_cast<::FontAttributes_t*>(p));
   }
   static void deleteArray_FontAttributes_t(void *p) {
      delete [] (static_cast<::FontAttributes_t*>(p));
   }
   static void destruct_FontAttributes_t(void *p) {
      typedef ::FontAttributes_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::FontAttributes_t

//______________________________________________________________________________
void TGTextLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextLayout.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTextLayout(void *p) {
      return  p ? new(p) ::TGTextLayout : new ::TGTextLayout;
   }
   static void *newArray_TGTextLayout(Long_t nElements, void *p) {
      return p ? new(p) ::TGTextLayout[nElements] : new ::TGTextLayout[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTextLayout(void *p) {
      delete (static_cast<::TGTextLayout*>(p));
   }
   static void deleteArray_TGTextLayout(void *p) {
      delete [] (static_cast<::TGTextLayout*>(p));
   }
   static void destruct_TGTextLayout(void *p) {
      typedef ::TGTextLayout current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTextLayout(TBuffer &buf, void *obj) {
      ((::TGTextLayout*)obj)->::TGTextLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTextLayout

//______________________________________________________________________________
void TGFont::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFont.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGFont(void *p) {
      delete (static_cast<::TGFont*>(p));
   }
   static void deleteArray_TGFont(void *p) {
      delete [] (static_cast<::TGFont*>(p));
   }
   static void destruct_TGFont(void *p) {
      typedef ::TGFont current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGFont(TBuffer &buf, void *obj) {
      ((::TGFont*)obj)->::TGFont::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGFont

//______________________________________________________________________________
void TGFontPool::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFontPool.

   TGObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGFontPool(void *p) {
      delete (static_cast<::TGFontPool*>(p));
   }
   static void deleteArray_TGFontPool(void *p) {
      delete [] (static_cast<::TGFontPool*>(p));
   }
   static void destruct_TGFontPool(void *p) {
      typedef ::TGFontPool current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGFontPool(TBuffer &buf, void *obj) {
      ((::TGFontPool*)obj)->::TGFontPool::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGFontPool

//______________________________________________________________________________
void TGLayoutHints::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLayoutHints.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLayoutHints(void *p) {
      return  p ? new(p) ::TGLayoutHints : new ::TGLayoutHints;
   }
   static void *newArray_TGLayoutHints(Long_t nElements, void *p) {
      return p ? new(p) ::TGLayoutHints[nElements] : new ::TGLayoutHints[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLayoutHints(void *p) {
      delete (static_cast<::TGLayoutHints*>(p));
   }
   static void deleteArray_TGLayoutHints(void *p) {
      delete [] (static_cast<::TGLayoutHints*>(p));
   }
   static void destruct_TGLayoutHints(void *p) {
      typedef ::TGLayoutHints current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLayoutHints(TBuffer &buf, void *obj) {
      ((::TGLayoutHints*)obj)->::TGLayoutHints::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLayoutHints

//______________________________________________________________________________
void TGFrameElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFrameElement.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGFrameElement(void *p) {
      return  p ? new(p) ::TGFrameElement : new ::TGFrameElement;
   }
   static void *newArray_TGFrameElement(Long_t nElements, void *p) {
      return p ? new(p) ::TGFrameElement[nElements] : new ::TGFrameElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGFrameElement(void *p) {
      delete (static_cast<::TGFrameElement*>(p));
   }
   static void deleteArray_TGFrameElement(void *p) {
      delete [] (static_cast<::TGFrameElement*>(p));
   }
   static void destruct_TGFrameElement(void *p) {
      typedef ::TGFrameElement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGFrameElement(TBuffer &buf, void *obj) {
      ((::TGFrameElement*)obj)->::TGFrameElement::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGFrameElement

//______________________________________________________________________________
void TGLayoutManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLayoutManager.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLayoutManager(void *p) {
      delete (static_cast<::TGLayoutManager*>(p));
   }
   static void deleteArray_TGLayoutManager(void *p) {
      delete [] (static_cast<::TGLayoutManager*>(p));
   }
   static void destruct_TGLayoutManager(void *p) {
      typedef ::TGLayoutManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLayoutManager(TBuffer &buf, void *obj) {
      ((::TGLayoutManager*)obj)->::TGLayoutManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLayoutManager

//______________________________________________________________________________
void TGVerticalLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGVerticalLayout.

   TGLayoutManager::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGVerticalLayout(void *p) {
      delete (static_cast<::TGVerticalLayout*>(p));
   }
   static void deleteArray_TGVerticalLayout(void *p) {
      delete [] (static_cast<::TGVerticalLayout*>(p));
   }
   static void destruct_TGVerticalLayout(void *p) {
      typedef ::TGVerticalLayout current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGVerticalLayout(TBuffer &buf, void *obj) {
      ((::TGVerticalLayout*)obj)->::TGVerticalLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGVerticalLayout

//______________________________________________________________________________
void TGHorizontalLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHorizontalLayout.

   TGVerticalLayout::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGHorizontalLayout(void *p) {
      delete (static_cast<::TGHorizontalLayout*>(p));
   }
   static void deleteArray_TGHorizontalLayout(void *p) {
      delete [] (static_cast<::TGHorizontalLayout*>(p));
   }
   static void destruct_TGHorizontalLayout(void *p) {
      typedef ::TGHorizontalLayout current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHorizontalLayout(TBuffer &buf, void *obj) {
      ((::TGHorizontalLayout*)obj)->::TGHorizontalLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHorizontalLayout

//______________________________________________________________________________
void TGRowLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGRowLayout.

   TGVerticalLayout::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGRowLayout(void *p) {
      delete (static_cast<::TGRowLayout*>(p));
   }
   static void deleteArray_TGRowLayout(void *p) {
      delete [] (static_cast<::TGRowLayout*>(p));
   }
   static void destruct_TGRowLayout(void *p) {
      typedef ::TGRowLayout current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGRowLayout(TBuffer &buf, void *obj) {
      ((::TGRowLayout*)obj)->::TGRowLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGRowLayout

//______________________________________________________________________________
void TGColumnLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGColumnLayout.

   TGRowLayout::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGColumnLayout(void *p) {
      delete (static_cast<::TGColumnLayout*>(p));
   }
   static void deleteArray_TGColumnLayout(void *p) {
      delete [] (static_cast<::TGColumnLayout*>(p));
   }
   static void destruct_TGColumnLayout(void *p) {
      typedef ::TGColumnLayout current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGColumnLayout(TBuffer &buf, void *obj) {
      ((::TGColumnLayout*)obj)->::TGColumnLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGColumnLayout

//______________________________________________________________________________
void TGMatrixLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMatrixLayout.

   TGLayoutManager::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMatrixLayout(void *p) {
      delete (static_cast<::TGMatrixLayout*>(p));
   }
   static void deleteArray_TGMatrixLayout(void *p) {
      delete [] (static_cast<::TGMatrixLayout*>(p));
   }
   static void destruct_TGMatrixLayout(void *p) {
      typedef ::TGMatrixLayout current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMatrixLayout(TBuffer &buf, void *obj) {
      ((::TGMatrixLayout*)obj)->::TGMatrixLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMatrixLayout

//______________________________________________________________________________
void TGTileLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTileLayout.

   TGLayoutManager::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGTileLayout(void *p) {
      delete (static_cast<::TGTileLayout*>(p));
   }
   static void deleteArray_TGTileLayout(void *p) {
      delete [] (static_cast<::TGTileLayout*>(p));
   }
   static void destruct_TGTileLayout(void *p) {
      typedef ::TGTileLayout current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTileLayout(TBuffer &buf, void *obj) {
      ((::TGTileLayout*)obj)->::TGTileLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTileLayout

//______________________________________________________________________________
void TGListLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGListLayout.

   TGTileLayout::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGListLayout(void *p) {
      delete (static_cast<::TGListLayout*>(p));
   }
   static void deleteArray_TGListLayout(void *p) {
      delete [] (static_cast<::TGListLayout*>(p));
   }
   static void destruct_TGListLayout(void *p) {
      typedef ::TGListLayout current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGListLayout(TBuffer &buf, void *obj) {
      ((::TGListLayout*)obj)->::TGListLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGListLayout

//______________________________________________________________________________
void TGListDetailsLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGListDetailsLayout.

   TGTileLayout::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGListDetailsLayout(void *p) {
      delete (static_cast<::TGListDetailsLayout*>(p));
   }
   static void deleteArray_TGListDetailsLayout(void *p) {
      delete [] (static_cast<::TGListDetailsLayout*>(p));
   }
   static void destruct_TGListDetailsLayout(void *p) {
      typedef ::TGListDetailsLayout current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGListDetailsLayout(TBuffer &buf, void *obj) {
      ((::TGListDetailsLayout*)obj)->::TGListDetailsLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGListDetailsLayout

//______________________________________________________________________________
void TGString::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGString.

   TString::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGString(void *p) {
      return  p ? new(p) ::TGString : new ::TGString;
   }
   static void *newArray_TGString(Long_t nElements, void *p) {
      return p ? new(p) ::TGString[nElements] : new ::TGString[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGString(void *p) {
      delete (static_cast<::TGString*>(p));
   }
   static void deleteArray_TGString(void *p) {
      delete [] (static_cast<::TGString*>(p));
   }
   static void destruct_TGString(void *p) {
      typedef ::TGString current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGString(TBuffer &buf, void *obj) {
      ((::TGString*)obj)->::TGString::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGString

//______________________________________________________________________________
void TGHotString::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHotString.

   TGString::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGHotString(void *p) {
      delete (static_cast<::TGHotString*>(p));
   }
   static void deleteArray_TGHotString(void *p) {
      delete [] (static_cast<::TGHotString*>(p));
   }
   static void destruct_TGHotString(void *p) {
      typedef ::TGHotString current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHotString(TBuffer &buf, void *obj) {
      ((::TGHotString*)obj)->::TGHotString::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHotString

//______________________________________________________________________________
void TGFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFrame.

   TGWindow::Streamer(R__b);
   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGFrame(void *p) {
      return  p ? new(p) ::TGFrame : new ::TGFrame;
   }
   static void *newArray_TGFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGFrame[nElements] : new ::TGFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGFrame(void *p) {
      delete (static_cast<::TGFrame*>(p));
   }
   static void deleteArray_TGFrame(void *p) {
      delete [] (static_cast<::TGFrame*>(p));
   }
   static void destruct_TGFrame(void *p) {
      typedef ::TGFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGFrame(TBuffer &buf, void *obj) {
      ((::TGFrame*)obj)->::TGFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGFrame

//______________________________________________________________________________
void TGCompositeFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGCompositeFrame.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGCompositeFrame(void *p) {
      return  p ? new(p) ::TGCompositeFrame : new ::TGCompositeFrame;
   }
   static void *newArray_TGCompositeFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGCompositeFrame[nElements] : new ::TGCompositeFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGCompositeFrame(void *p) {
      delete (static_cast<::TGCompositeFrame*>(p));
   }
   static void deleteArray_TGCompositeFrame(void *p) {
      delete [] (static_cast<::TGCompositeFrame*>(p));
   }
   static void destruct_TGCompositeFrame(void *p) {
      typedef ::TGCompositeFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGCompositeFrame(TBuffer &buf, void *obj) {
      ((::TGCompositeFrame*)obj)->::TGCompositeFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGCompositeFrame

//______________________________________________________________________________
void TGVerticalFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGVerticalFrame.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGVerticalFrame(void *p) {
      return  p ? new(p) ::TGVerticalFrame : new ::TGVerticalFrame;
   }
   static void *newArray_TGVerticalFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGVerticalFrame[nElements] : new ::TGVerticalFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGVerticalFrame(void *p) {
      delete (static_cast<::TGVerticalFrame*>(p));
   }
   static void deleteArray_TGVerticalFrame(void *p) {
      delete [] (static_cast<::TGVerticalFrame*>(p));
   }
   static void destruct_TGVerticalFrame(void *p) {
      typedef ::TGVerticalFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGVerticalFrame(TBuffer &buf, void *obj) {
      ((::TGVerticalFrame*)obj)->::TGVerticalFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGVerticalFrame

//______________________________________________________________________________
void TGHorizontalFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHorizontalFrame.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGHorizontalFrame(void *p) {
      return  p ? new(p) ::TGHorizontalFrame : new ::TGHorizontalFrame;
   }
   static void *newArray_TGHorizontalFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGHorizontalFrame[nElements] : new ::TGHorizontalFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGHorizontalFrame(void *p) {
      delete (static_cast<::TGHorizontalFrame*>(p));
   }
   static void deleteArray_TGHorizontalFrame(void *p) {
      delete [] (static_cast<::TGHorizontalFrame*>(p));
   }
   static void destruct_TGHorizontalFrame(void *p) {
      typedef ::TGHorizontalFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHorizontalFrame(TBuffer &buf, void *obj) {
      ((::TGHorizontalFrame*)obj)->::TGHorizontalFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHorizontalFrame

//______________________________________________________________________________
void TGMainFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMainFrame.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGMainFrame(void *p) {
      return  p ? new(p) ::TGMainFrame : new ::TGMainFrame;
   }
   static void *newArray_TGMainFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGMainFrame[nElements] : new ::TGMainFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGMainFrame(void *p) {
      delete (static_cast<::TGMainFrame*>(p));
   }
   static void deleteArray_TGMainFrame(void *p) {
      delete [] (static_cast<::TGMainFrame*>(p));
   }
   static void destruct_TGMainFrame(void *p) {
      typedef ::TGMainFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMainFrame(TBuffer &buf, void *obj) {
      ((::TGMainFrame*)obj)->::TGMainFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMainFrame

//______________________________________________________________________________
void TGTransientFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTransientFrame.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTransientFrame(void *p) {
      return  p ? new(p) ::TGTransientFrame : new ::TGTransientFrame;
   }
   static void *newArray_TGTransientFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGTransientFrame[nElements] : new ::TGTransientFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTransientFrame(void *p) {
      delete (static_cast<::TGTransientFrame*>(p));
   }
   static void deleteArray_TGTransientFrame(void *p) {
      delete [] (static_cast<::TGTransientFrame*>(p));
   }
   static void destruct_TGTransientFrame(void *p) {
      typedef ::TGTransientFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTransientFrame(TBuffer &buf, void *obj) {
      ((::TGTransientFrame*)obj)->::TGTransientFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTransientFrame

//______________________________________________________________________________
void TGGroupFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGGroupFrame.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGGroupFrame(void *p) {
      return  p ? new(p) ::TGGroupFrame : new ::TGGroupFrame;
   }
   static void *newArray_TGGroupFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGGroupFrame[nElements] : new ::TGGroupFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGGroupFrame(void *p) {
      delete (static_cast<::TGGroupFrame*>(p));
   }
   static void deleteArray_TGGroupFrame(void *p) {
      delete [] (static_cast<::TGGroupFrame*>(p));
   }
   static void destruct_TGGroupFrame(void *p) {
      typedef ::TGGroupFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGGroupFrame(TBuffer &buf, void *obj) {
      ((::TGGroupFrame*)obj)->::TGGroupFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGGroupFrame

//______________________________________________________________________________
void TGHeaderFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHeaderFrame.

   TGHorizontalFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGHeaderFrame(void *p) {
      return  p ? new(p) ::TGHeaderFrame : new ::TGHeaderFrame;
   }
   static void *newArray_TGHeaderFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGHeaderFrame[nElements] : new ::TGHeaderFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGHeaderFrame(void *p) {
      delete (static_cast<::TGHeaderFrame*>(p));
   }
   static void deleteArray_TGHeaderFrame(void *p) {
      delete [] (static_cast<::TGHeaderFrame*>(p));
   }
   static void destruct_TGHeaderFrame(void *p) {
      typedef ::TGHeaderFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHeaderFrame(TBuffer &buf, void *obj) {
      ((::TGHeaderFrame*)obj)->::TGHeaderFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHeaderFrame

//______________________________________________________________________________
void TGHorizontal3DLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHorizontal3DLine.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGHorizontal3DLine(void *p) {
      return  p ? new(p) ::TGHorizontal3DLine : new ::TGHorizontal3DLine;
   }
   static void *newArray_TGHorizontal3DLine(Long_t nElements, void *p) {
      return p ? new(p) ::TGHorizontal3DLine[nElements] : new ::TGHorizontal3DLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGHorizontal3DLine(void *p) {
      delete (static_cast<::TGHorizontal3DLine*>(p));
   }
   static void deleteArray_TGHorizontal3DLine(void *p) {
      delete [] (static_cast<::TGHorizontal3DLine*>(p));
   }
   static void destruct_TGHorizontal3DLine(void *p) {
      typedef ::TGHorizontal3DLine current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHorizontal3DLine(TBuffer &buf, void *obj) {
      ((::TGHorizontal3DLine*)obj)->::TGHorizontal3DLine::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHorizontal3DLine

//______________________________________________________________________________
void TGVertical3DLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGVertical3DLine.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGVertical3DLine(void *p) {
      return  p ? new(p) ::TGVertical3DLine : new ::TGVertical3DLine;
   }
   static void *newArray_TGVertical3DLine(Long_t nElements, void *p) {
      return p ? new(p) ::TGVertical3DLine[nElements] : new ::TGVertical3DLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGVertical3DLine(void *p) {
      delete (static_cast<::TGVertical3DLine*>(p));
   }
   static void deleteArray_TGVertical3DLine(void *p) {
      delete [] (static_cast<::TGVertical3DLine*>(p));
   }
   static void destruct_TGVertical3DLine(void *p) {
      typedef ::TGVertical3DLine current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGVertical3DLine(TBuffer &buf, void *obj) {
      ((::TGVertical3DLine*)obj)->::TGVertical3DLine::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGVertical3DLine

//______________________________________________________________________________
void TGApplication::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGApplication.

   TApplication::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGApplication(void *p) {
      delete (static_cast<::TGApplication*>(p));
   }
   static void deleteArray_TGApplication(void *p) {
      delete [] (static_cast<::TGApplication*>(p));
   }
   static void destruct_TGApplication(void *p) {
      typedef ::TGApplication current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGApplication(TBuffer &buf, void *obj) {
      ((::TGApplication*)obj)->::TGApplication::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGApplication

//______________________________________________________________________________
void TGWidget::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGWidget.

   ::Error("TGWidget::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGWidget(void *p) {
      return  p ? new(p) ::TGWidget : new ::TGWidget;
   }
   static void *newArray_TGWidget(Long_t nElements, void *p) {
      return p ? new(p) ::TGWidget[nElements] : new ::TGWidget[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGWidget(void *p) {
      delete (static_cast<::TGWidget*>(p));
   }
   static void deleteArray_TGWidget(void *p) {
      delete [] (static_cast<::TGWidget*>(p));
   }
   static void destruct_TGWidget(void *p) {
      typedef ::TGWidget current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGWidget(TBuffer &buf, void *obj) {
      ((::TGWidget*)obj)->::TGWidget::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGWidget

//______________________________________________________________________________
void TGButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGButton.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGButton(void *p) {
      return  p ? new(p) ::TGButton : new ::TGButton;
   }
   static void *newArray_TGButton(Long_t nElements, void *p) {
      return p ? new(p) ::TGButton[nElements] : new ::TGButton[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGButton(void *p) {
      delete (static_cast<::TGButton*>(p));
   }
   static void deleteArray_TGButton(void *p) {
      delete [] (static_cast<::TGButton*>(p));
   }
   static void destruct_TGButton(void *p) {
      typedef ::TGButton current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGButton(TBuffer &buf, void *obj) {
      ((::TGButton*)obj)->::TGButton::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGButton

//______________________________________________________________________________
void TGTextButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextButton.

   TGButton::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTextButton(void *p) {
      return  p ? new(p) ::TGTextButton : new ::TGTextButton;
   }
   static void *newArray_TGTextButton(Long_t nElements, void *p) {
      return p ? new(p) ::TGTextButton[nElements] : new ::TGTextButton[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTextButton(void *p) {
      delete (static_cast<::TGTextButton*>(p));
   }
   static void deleteArray_TGTextButton(void *p) {
      delete [] (static_cast<::TGTextButton*>(p));
   }
   static void destruct_TGTextButton(void *p) {
      typedef ::TGTextButton current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTextButton(TBuffer &buf, void *obj) {
      ((::TGTextButton*)obj)->::TGTextButton::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTextButton

//______________________________________________________________________________
void TGPictureButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGPictureButton.

   TGButton::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGPictureButton(void *p) {
      return  p ? new(p) ::TGPictureButton : new ::TGPictureButton;
   }
   static void *newArray_TGPictureButton(Long_t nElements, void *p) {
      return p ? new(p) ::TGPictureButton[nElements] : new ::TGPictureButton[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGPictureButton(void *p) {
      delete (static_cast<::TGPictureButton*>(p));
   }
   static void deleteArray_TGPictureButton(void *p) {
      delete [] (static_cast<::TGPictureButton*>(p));
   }
   static void destruct_TGPictureButton(void *p) {
      typedef ::TGPictureButton current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGPictureButton(TBuffer &buf, void *obj) {
      ((::TGPictureButton*)obj)->::TGPictureButton::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGPictureButton

//______________________________________________________________________________
void TGCheckButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGCheckButton.

   TGTextButton::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGCheckButton(void *p) {
      return  p ? new(p) ::TGCheckButton : new ::TGCheckButton;
   }
   static void *newArray_TGCheckButton(Long_t nElements, void *p) {
      return p ? new(p) ::TGCheckButton[nElements] : new ::TGCheckButton[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGCheckButton(void *p) {
      delete (static_cast<::TGCheckButton*>(p));
   }
   static void deleteArray_TGCheckButton(void *p) {
      delete [] (static_cast<::TGCheckButton*>(p));
   }
   static void destruct_TGCheckButton(void *p) {
      typedef ::TGCheckButton current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGCheckButton(TBuffer &buf, void *obj) {
      ((::TGCheckButton*)obj)->::TGCheckButton::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGCheckButton

//______________________________________________________________________________
void TGRadioButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGRadioButton.

   TGTextButton::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGRadioButton(void *p) {
      return  p ? new(p) ::TGRadioButton : new ::TGRadioButton;
   }
   static void *newArray_TGRadioButton(Long_t nElements, void *p) {
      return p ? new(p) ::TGRadioButton[nElements] : new ::TGRadioButton[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGRadioButton(void *p) {
      delete (static_cast<::TGRadioButton*>(p));
   }
   static void deleteArray_TGRadioButton(void *p) {
      delete [] (static_cast<::TGRadioButton*>(p));
   }
   static void destruct_TGRadioButton(void *p) {
      typedef ::TGRadioButton current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGRadioButton(TBuffer &buf, void *obj) {
      ((::TGRadioButton*)obj)->::TGRadioButton::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGRadioButton

//______________________________________________________________________________
void TGSplitButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSplitButton.

   TGTextButton::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGSplitButton(void *p) {
      delete (static_cast<::TGSplitButton*>(p));
   }
   static void deleteArray_TGSplitButton(void *p) {
      delete [] (static_cast<::TGSplitButton*>(p));
   }
   static void destruct_TGSplitButton(void *p) {
      typedef ::TGSplitButton current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGSplitButton(TBuffer &buf, void *obj) {
      ((::TGSplitButton*)obj)->::TGSplitButton::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGSplitButton

//______________________________________________________________________________
void TGButtonGroup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGButtonGroup.

   TGGroupFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGButtonGroup(void *p) {
      return  p ? new(p) ::TGButtonGroup : new ::TGButtonGroup;
   }
   static void *newArray_TGButtonGroup(Long_t nElements, void *p) {
      return p ? new(p) ::TGButtonGroup[nElements] : new ::TGButtonGroup[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGButtonGroup(void *p) {
      delete (static_cast<::TGButtonGroup*>(p));
   }
   static void deleteArray_TGButtonGroup(void *p) {
      delete [] (static_cast<::TGButtonGroup*>(p));
   }
   static void destruct_TGButtonGroup(void *p) {
      typedef ::TGButtonGroup current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGButtonGroup(TBuffer &buf, void *obj) {
      ((::TGButtonGroup*)obj)->::TGButtonGroup::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGButtonGroup

//______________________________________________________________________________
void TGVButtonGroup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGVButtonGroup.

   TGButtonGroup::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGVButtonGroup(void *p) {
      delete (static_cast<::TGVButtonGroup*>(p));
   }
   static void deleteArray_TGVButtonGroup(void *p) {
      delete [] (static_cast<::TGVButtonGroup*>(p));
   }
   static void destruct_TGVButtonGroup(void *p) {
      typedef ::TGVButtonGroup current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGVButtonGroup(TBuffer &buf, void *obj) {
      ((::TGVButtonGroup*)obj)->::TGVButtonGroup::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGVButtonGroup

//______________________________________________________________________________
void TGHButtonGroup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHButtonGroup.

   TGButtonGroup::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGHButtonGroup(void *p) {
      delete (static_cast<::TGHButtonGroup*>(p));
   }
   static void deleteArray_TGHButtonGroup(void *p) {
      delete [] (static_cast<::TGHButtonGroup*>(p));
   }
   static void destruct_TGHButtonGroup(void *p) {
      typedef ::TGHButtonGroup current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHButtonGroup(TBuffer &buf, void *obj) {
      ((::TGHButtonGroup*)obj)->::TGHButtonGroup::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHButtonGroup

//______________________________________________________________________________
void TGContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGContainer.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGContainer(void *p) {
      return  p ? new(p) ::TGContainer : new ::TGContainer;
   }
   static void *newArray_TGContainer(Long_t nElements, void *p) {
      return p ? new(p) ::TGContainer[nElements] : new ::TGContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGContainer(void *p) {
      delete (static_cast<::TGContainer*>(p));
   }
   static void deleteArray_TGContainer(void *p) {
      delete [] (static_cast<::TGContainer*>(p));
   }
   static void destruct_TGContainer(void *p) {
      typedef ::TGContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGContainer(TBuffer &buf, void *obj) {
      ((::TGContainer*)obj)->::TGContainer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGContainer

//______________________________________________________________________________
void TGViewPort::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGViewPort.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGViewPort(void *p) {
      return  p ? new(p) ::TGViewPort : new ::TGViewPort;
   }
   static void *newArray_TGViewPort(Long_t nElements, void *p) {
      return p ? new(p) ::TGViewPort[nElements] : new ::TGViewPort[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGViewPort(void *p) {
      delete (static_cast<::TGViewPort*>(p));
   }
   static void deleteArray_TGViewPort(void *p) {
      delete [] (static_cast<::TGViewPort*>(p));
   }
   static void destruct_TGViewPort(void *p) {
      typedef ::TGViewPort current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGViewPort(TBuffer &buf, void *obj) {
      ((::TGViewPort*)obj)->::TGViewPort::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGViewPort

//______________________________________________________________________________
void TGCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGCanvas.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGCanvas(void *p) {
      return  p ? new(p) ::TGCanvas : new ::TGCanvas;
   }
   static void *newArray_TGCanvas(Long_t nElements, void *p) {
      return p ? new(p) ::TGCanvas[nElements] : new ::TGCanvas[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGCanvas(void *p) {
      delete (static_cast<::TGCanvas*>(p));
   }
   static void deleteArray_TGCanvas(void *p) {
      delete [] (static_cast<::TGCanvas*>(p));
   }
   static void destruct_TGCanvas(void *p) {
      typedef ::TGCanvas current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGCanvas(TBuffer &buf, void *obj) {
      ((::TGCanvas*)obj)->::TGCanvas::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGCanvas

//______________________________________________________________________________
void TGColorPalette::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGColorPalette.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGColorPalette(void *p) {
      return  p ? new(p) ::TGColorPalette : new ::TGColorPalette;
   }
   static void *newArray_TGColorPalette(Long_t nElements, void *p) {
      return p ? new(p) ::TGColorPalette[nElements] : new ::TGColorPalette[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGColorPalette(void *p) {
      delete (static_cast<::TGColorPalette*>(p));
   }
   static void deleteArray_TGColorPalette(void *p) {
      delete [] (static_cast<::TGColorPalette*>(p));
   }
   static void destruct_TGColorPalette(void *p) {
      typedef ::TGColorPalette current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGColorPalette(TBuffer &buf, void *obj) {
      ((::TGColorPalette*)obj)->::TGColorPalette::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGColorPalette

//______________________________________________________________________________
void TGColorPick::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGColorPick.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGColorPick(void *p) {
      return  p ? new(p) ::TGColorPick : new ::TGColorPick;
   }
   static void *newArray_TGColorPick(Long_t nElements, void *p) {
      return p ? new(p) ::TGColorPick[nElements] : new ::TGColorPick[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGColorPick(void *p) {
      delete (static_cast<::TGColorPick*>(p));
   }
   static void deleteArray_TGColorPick(void *p) {
      delete [] (static_cast<::TGColorPick*>(p));
   }
   static void destruct_TGColorPick(void *p) {
      typedef ::TGColorPick current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGColorPick(TBuffer &buf, void *obj) {
      ((::TGColorPick*)obj)->::TGColorPick::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGColorPick

//______________________________________________________________________________
void TGColorDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGColorDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGColorDialog(void *p) {
      return  p ? new(p) ::TGColorDialog : new ::TGColorDialog;
   }
   static void *newArray_TGColorDialog(Long_t nElements, void *p) {
      return p ? new(p) ::TGColorDialog[nElements] : new ::TGColorDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGColorDialog(void *p) {
      delete (static_cast<::TGColorDialog*>(p));
   }
   static void deleteArray_TGColorDialog(void *p) {
      delete [] (static_cast<::TGColorDialog*>(p));
   }
   static void destruct_TGColorDialog(void *p) {
      typedef ::TGColorDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGColorDialog(TBuffer &buf, void *obj) {
      ((::TGColorDialog*)obj)->::TGColorDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGColorDialog

//______________________________________________________________________________
void TGColorFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGColorFrame.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGColorFrame(void *p) {
      return  p ? new(p) ::TGColorFrame : new ::TGColorFrame;
   }
   static void *newArray_TGColorFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGColorFrame[nElements] : new ::TGColorFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGColorFrame(void *p) {
      delete (static_cast<::TGColorFrame*>(p));
   }
   static void deleteArray_TGColorFrame(void *p) {
      delete [] (static_cast<::TGColorFrame*>(p));
   }
   static void destruct_TGColorFrame(void *p) {
      typedef ::TGColorFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGColorFrame(TBuffer &buf, void *obj) {
      ((::TGColorFrame*)obj)->::TGColorFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGColorFrame

//______________________________________________________________________________
void TG16ColorSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TG16ColorSelector.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TG16ColorSelector(void *p) {
      return  p ? new(p) ::TG16ColorSelector : new ::TG16ColorSelector;
   }
   static void *newArray_TG16ColorSelector(Long_t nElements, void *p) {
      return p ? new(p) ::TG16ColorSelector[nElements] : new ::TG16ColorSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_TG16ColorSelector(void *p) {
      delete (static_cast<::TG16ColorSelector*>(p));
   }
   static void deleteArray_TG16ColorSelector(void *p) {
      delete [] (static_cast<::TG16ColorSelector*>(p));
   }
   static void destruct_TG16ColorSelector(void *p) {
      typedef ::TG16ColorSelector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TG16ColorSelector(TBuffer &buf, void *obj) {
      ((::TG16ColorSelector*)obj)->::TG16ColorSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::TG16ColorSelector

//______________________________________________________________________________
void TGColorPopup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGColorPopup.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGColorPopup(void *p) {
      return  p ? new(p) ::TGColorPopup : new ::TGColorPopup;
   }
   static void *newArray_TGColorPopup(Long_t nElements, void *p) {
      return p ? new(p) ::TGColorPopup[nElements] : new ::TGColorPopup[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGColorPopup(void *p) {
      delete (static_cast<::TGColorPopup*>(p));
   }
   static void deleteArray_TGColorPopup(void *p) {
      delete [] (static_cast<::TGColorPopup*>(p));
   }
   static void destruct_TGColorPopup(void *p) {
      typedef ::TGColorPopup current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGColorPopup(TBuffer &buf, void *obj) {
      ((::TGColorPopup*)obj)->::TGColorPopup::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGColorPopup

//______________________________________________________________________________
void TGColorSelect::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGColorSelect.

   TGCheckButton::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGColorSelect(void *p) {
      return  p ? new(p) ::TGColorSelect : new ::TGColorSelect;
   }
   static void *newArray_TGColorSelect(Long_t nElements, void *p) {
      return p ? new(p) ::TGColorSelect[nElements] : new ::TGColorSelect[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGColorSelect(void *p) {
      delete (static_cast<::TGColorSelect*>(p));
   }
   static void deleteArray_TGColorSelect(void *p) {
      delete [] (static_cast<::TGColorSelect*>(p));
   }
   static void destruct_TGColorSelect(void *p) {
      typedef ::TGColorSelect current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGColorSelect(TBuffer &buf, void *obj) {
      ((::TGColorSelect*)obj)->::TGColorSelect::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGColorSelect

//______________________________________________________________________________
void TGScrollBarElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGScrollBarElement.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGScrollBarElement(void *p) {
      return  p ? new(p) ::TGScrollBarElement : new ::TGScrollBarElement;
   }
   static void *newArray_TGScrollBarElement(Long_t nElements, void *p) {
      return p ? new(p) ::TGScrollBarElement[nElements] : new ::TGScrollBarElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGScrollBarElement(void *p) {
      delete (static_cast<::TGScrollBarElement*>(p));
   }
   static void deleteArray_TGScrollBarElement(void *p) {
      delete [] (static_cast<::TGScrollBarElement*>(p));
   }
   static void destruct_TGScrollBarElement(void *p) {
      typedef ::TGScrollBarElement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGScrollBarElement(TBuffer &buf, void *obj) {
      ((::TGScrollBarElement*)obj)->::TGScrollBarElement::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGScrollBarElement

//______________________________________________________________________________
void TGScrollBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGScrollBar.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGScrollBar(void *p) {
      delete (static_cast<::TGScrollBar*>(p));
   }
   static void deleteArray_TGScrollBar(void *p) {
      delete [] (static_cast<::TGScrollBar*>(p));
   }
   static void destruct_TGScrollBar(void *p) {
      typedef ::TGScrollBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGScrollBar(TBuffer &buf, void *obj) {
      ((::TGScrollBar*)obj)->::TGScrollBar::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGScrollBar

//______________________________________________________________________________
void TGHScrollBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHScrollBar.

   TGScrollBar::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGHScrollBar(void *p) {
      return  p ? new(p) ::TGHScrollBar : new ::TGHScrollBar;
   }
   static void *newArray_TGHScrollBar(Long_t nElements, void *p) {
      return p ? new(p) ::TGHScrollBar[nElements] : new ::TGHScrollBar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGHScrollBar(void *p) {
      delete (static_cast<::TGHScrollBar*>(p));
   }
   static void deleteArray_TGHScrollBar(void *p) {
      delete [] (static_cast<::TGHScrollBar*>(p));
   }
   static void destruct_TGHScrollBar(void *p) {
      typedef ::TGHScrollBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHScrollBar(TBuffer &buf, void *obj) {
      ((::TGHScrollBar*)obj)->::TGHScrollBar::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHScrollBar

//______________________________________________________________________________
void TGVScrollBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGVScrollBar.

   TGScrollBar::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGVScrollBar(void *p) {
      return  p ? new(p) ::TGVScrollBar : new ::TGVScrollBar;
   }
   static void *newArray_TGVScrollBar(Long_t nElements, void *p) {
      return p ? new(p) ::TGVScrollBar[nElements] : new ::TGVScrollBar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGVScrollBar(void *p) {
      delete (static_cast<::TGVScrollBar*>(p));
   }
   static void deleteArray_TGVScrollBar(void *p) {
      delete [] (static_cast<::TGVScrollBar*>(p));
   }
   static void destruct_TGVScrollBar(void *p) {
      typedef ::TGVScrollBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGVScrollBar(TBuffer &buf, void *obj) {
      ((::TGVScrollBar*)obj)->::TGVScrollBar::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGVScrollBar

//______________________________________________________________________________
void TGLBEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLBEntry.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLBEntry(void *p) {
      return  p ? new(p) ::TGLBEntry : new ::TGLBEntry;
   }
   static void *newArray_TGLBEntry(Long_t nElements, void *p) {
      return p ? new(p) ::TGLBEntry[nElements] : new ::TGLBEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLBEntry(void *p) {
      delete (static_cast<::TGLBEntry*>(p));
   }
   static void deleteArray_TGLBEntry(void *p) {
      delete [] (static_cast<::TGLBEntry*>(p));
   }
   static void destruct_TGLBEntry(void *p) {
      typedef ::TGLBEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLBEntry(TBuffer &buf, void *obj) {
      ((::TGLBEntry*)obj)->::TGLBEntry::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLBEntry

//______________________________________________________________________________
void TGTextLBEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextLBEntry.

   TGLBEntry::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTextLBEntry(void *p) {
      return  p ? new(p) ::TGTextLBEntry : new ::TGTextLBEntry;
   }
   static void *newArray_TGTextLBEntry(Long_t nElements, void *p) {
      return p ? new(p) ::TGTextLBEntry[nElements] : new ::TGTextLBEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTextLBEntry(void *p) {
      delete (static_cast<::TGTextLBEntry*>(p));
   }
   static void deleteArray_TGTextLBEntry(void *p) {
      delete [] (static_cast<::TGTextLBEntry*>(p));
   }
   static void destruct_TGTextLBEntry(void *p) {
      typedef ::TGTextLBEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTextLBEntry(TBuffer &buf, void *obj) {
      ((::TGTextLBEntry*)obj)->::TGTextLBEntry::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTextLBEntry

//______________________________________________________________________________
void TGLineLBEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLineLBEntry.

   TGTextLBEntry::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLineLBEntry(void *p) {
      return  p ? new(p) ::TGLineLBEntry : new ::TGLineLBEntry;
   }
   static void *newArray_TGLineLBEntry(Long_t nElements, void *p) {
      return p ? new(p) ::TGLineLBEntry[nElements] : new ::TGLineLBEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLineLBEntry(void *p) {
      delete (static_cast<::TGLineLBEntry*>(p));
   }
   static void deleteArray_TGLineLBEntry(void *p) {
      delete [] (static_cast<::TGLineLBEntry*>(p));
   }
   static void destruct_TGLineLBEntry(void *p) {
      typedef ::TGLineLBEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLineLBEntry(TBuffer &buf, void *obj) {
      ((::TGLineLBEntry*)obj)->::TGLineLBEntry::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLineLBEntry

//______________________________________________________________________________
void TGIconLBEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGIconLBEntry.

   TGTextLBEntry::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGIconLBEntry(void *p) {
      return  p ? new(p) ::TGIconLBEntry : new ::TGIconLBEntry;
   }
   static void *newArray_TGIconLBEntry(Long_t nElements, void *p) {
      return p ? new(p) ::TGIconLBEntry[nElements] : new ::TGIconLBEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGIconLBEntry(void *p) {
      delete (static_cast<::TGIconLBEntry*>(p));
   }
   static void deleteArray_TGIconLBEntry(void *p) {
      delete [] (static_cast<::TGIconLBEntry*>(p));
   }
   static void destruct_TGIconLBEntry(void *p) {
      typedef ::TGIconLBEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGIconLBEntry(TBuffer &buf, void *obj) {
      ((::TGIconLBEntry*)obj)->::TGIconLBEntry::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGIconLBEntry

//______________________________________________________________________________
void TGLBContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLBContainer.

   TGContainer::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLBContainer(void *p) {
      return  p ? new(p) ::TGLBContainer : new ::TGLBContainer;
   }
   static void *newArray_TGLBContainer(Long_t nElements, void *p) {
      return p ? new(p) ::TGLBContainer[nElements] : new ::TGLBContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLBContainer(void *p) {
      delete (static_cast<::TGLBContainer*>(p));
   }
   static void deleteArray_TGLBContainer(void *p) {
      delete [] (static_cast<::TGLBContainer*>(p));
   }
   static void destruct_TGLBContainer(void *p) {
      typedef ::TGLBContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLBContainer(TBuffer &buf, void *obj) {
      ((::TGLBContainer*)obj)->::TGLBContainer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLBContainer

//______________________________________________________________________________
void TGListBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGListBox.

   TGCompositeFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGListBox(void *p) {
      return  p ? new(p) ::TGListBox : new ::TGListBox;
   }
   static void *newArray_TGListBox(Long_t nElements, void *p) {
      return p ? new(p) ::TGListBox[nElements] : new ::TGListBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGListBox(void *p) {
      delete (static_cast<::TGListBox*>(p));
   }
   static void deleteArray_TGListBox(void *p) {
      delete [] (static_cast<::TGListBox*>(p));
   }
   static void destruct_TGListBox(void *p) {
      typedef ::TGListBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGListBox(TBuffer &buf, void *obj) {
      ((::TGListBox*)obj)->::TGListBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGListBox

//______________________________________________________________________________
void TGComboBoxPopup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGComboBoxPopup.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGComboBoxPopup(void *p) {
      return  p ? new(p) ::TGComboBoxPopup : new ::TGComboBoxPopup;
   }
   static void *newArray_TGComboBoxPopup(Long_t nElements, void *p) {
      return p ? new(p) ::TGComboBoxPopup[nElements] : new ::TGComboBoxPopup[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGComboBoxPopup(void *p) {
      delete (static_cast<::TGComboBoxPopup*>(p));
   }
   static void deleteArray_TGComboBoxPopup(void *p) {
      delete [] (static_cast<::TGComboBoxPopup*>(p));
   }
   static void destruct_TGComboBoxPopup(void *p) {
      typedef ::TGComboBoxPopup current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGComboBoxPopup(TBuffer &buf, void *obj) {
      ((::TGComboBoxPopup*)obj)->::TGComboBoxPopup::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGComboBoxPopup

//______________________________________________________________________________
void TGComboBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGComboBox.

   TGCompositeFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGComboBox(void *p) {
      return  p ? new(p) ::TGComboBox : new ::TGComboBox;
   }
   static void *newArray_TGComboBox(Long_t nElements, void *p) {
      return p ? new(p) ::TGComboBox[nElements] : new ::TGComboBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGComboBox(void *p) {
      delete (static_cast<::TGComboBox*>(p));
   }
   static void deleteArray_TGComboBox(void *p) {
      delete [] (static_cast<::TGComboBox*>(p));
   }
   static void destruct_TGComboBox(void *p) {
      typedef ::TGComboBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGComboBox(TBuffer &buf, void *obj) {
      ((::TGComboBox*)obj)->::TGComboBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGComboBox

//______________________________________________________________________________
void TGLineStyleComboBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLineStyleComboBox.

   TGComboBox::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLineStyleComboBox(void *p) {
      return  p ? new(p) ::TGLineStyleComboBox : new ::TGLineStyleComboBox;
   }
   static void *newArray_TGLineStyleComboBox(Long_t nElements, void *p) {
      return p ? new(p) ::TGLineStyleComboBox[nElements] : new ::TGLineStyleComboBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLineStyleComboBox(void *p) {
      delete (static_cast<::TGLineStyleComboBox*>(p));
   }
   static void deleteArray_TGLineStyleComboBox(void *p) {
      delete [] (static_cast<::TGLineStyleComboBox*>(p));
   }
   static void destruct_TGLineStyleComboBox(void *p) {
      typedef ::TGLineStyleComboBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLineStyleComboBox(TBuffer &buf, void *obj) {
      ((::TGLineStyleComboBox*)obj)->::TGLineStyleComboBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLineStyleComboBox

//______________________________________________________________________________
void TGLineWidthComboBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLineWidthComboBox.

   TGComboBox::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLineWidthComboBox(void *p) {
      return  p ? new(p) ::TGLineWidthComboBox : new ::TGLineWidthComboBox;
   }
   static void *newArray_TGLineWidthComboBox(Long_t nElements, void *p) {
      return p ? new(p) ::TGLineWidthComboBox[nElements] : new ::TGLineWidthComboBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLineWidthComboBox(void *p) {
      delete (static_cast<::TGLineWidthComboBox*>(p));
   }
   static void deleteArray_TGLineWidthComboBox(void *p) {
      delete [] (static_cast<::TGLineWidthComboBox*>(p));
   }
   static void destruct_TGLineWidthComboBox(void *p) {
      typedef ::TGLineWidthComboBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLineWidthComboBox(TBuffer &buf, void *obj) {
      ((::TGLineWidthComboBox*)obj)->::TGLineWidthComboBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLineWidthComboBox

//______________________________________________________________________________
void TGFontTypeComboBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFontTypeComboBox.

   TGComboBox::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGFontTypeComboBox(void *p) {
      return  p ? new(p) ::TGFontTypeComboBox : new ::TGFontTypeComboBox;
   }
   static void *newArray_TGFontTypeComboBox(Long_t nElements, void *p) {
      return p ? new(p) ::TGFontTypeComboBox[nElements] : new ::TGFontTypeComboBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGFontTypeComboBox(void *p) {
      delete (static_cast<::TGFontTypeComboBox*>(p));
   }
   static void deleteArray_TGFontTypeComboBox(void *p) {
      delete [] (static_cast<::TGFontTypeComboBox*>(p));
   }
   static void destruct_TGFontTypeComboBox(void *p) {
      typedef ::TGFontTypeComboBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGFontTypeComboBox(TBuffer &buf, void *obj) {
      ((::TGFontTypeComboBox*)obj)->::TGFontTypeComboBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGFontTypeComboBox

//______________________________________________________________________________
void TGCommandPlugin::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGCommandPlugin.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGCommandPlugin(void *p) {
      delete (static_cast<::TGCommandPlugin*>(p));
   }
   static void deleteArray_TGCommandPlugin(void *p) {
      delete [] (static_cast<::TGCommandPlugin*>(p));
   }
   static void destruct_TGCommandPlugin(void *p) {
      typedef ::TGCommandPlugin current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGCommandPlugin(TBuffer &buf, void *obj) {
      ((::TGCommandPlugin*)obj)->::TGCommandPlugin::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGCommandPlugin

//______________________________________________________________________________
void TGDragWindow::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDragWindow.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGDragWindow(void *p) {
      delete (static_cast<::TGDragWindow*>(p));
   }
   static void deleteArray_TGDragWindow(void *p) {
      delete [] (static_cast<::TGDragWindow*>(p));
   }
   static void destruct_TGDragWindow(void *p) {
      typedef ::TGDragWindow current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDragWindow(TBuffer &buf, void *obj) {
      ((::TGDragWindow*)obj)->::TGDragWindow::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDragWindow

//______________________________________________________________________________
void TDNDData::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDNDData.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDNDData(void *p) {
      return  p ? new(p) ::TDNDData : new ::TDNDData;
   }
   static void *newArray_TDNDData(Long_t nElements, void *p) {
      return p ? new(p) ::TDNDData[nElements] : new ::TDNDData[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDNDData(void *p) {
      delete (static_cast<::TDNDData*>(p));
   }
   static void deleteArray_TDNDData(void *p) {
      delete [] (static_cast<::TDNDData*>(p));
   }
   static void destruct_TDNDData(void *p) {
      typedef ::TDNDData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDNDData(TBuffer &buf, void *obj) {
      ((::TDNDData*)obj)->::TDNDData::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDNDData

//______________________________________________________________________________
void TGDNDManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDNDManager.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGDNDManager(void *p) {
      delete (static_cast<::TGDNDManager*>(p));
   }
   static void deleteArray_TGDNDManager(void *p) {
      delete [] (static_cast<::TGDNDManager*>(p));
   }
   static void destruct_TGDNDManager(void *p) {
      typedef ::TGDNDManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDNDManager(TBuffer &buf, void *obj) {
      ((::TGDNDManager*)obj)->::TGDNDManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDNDManager

//______________________________________________________________________________
void TGDockButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDockButton.

   TGButton::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGDockButton(void *p) {
      return  p ? new(p) ::TGDockButton : new ::TGDockButton;
   }
   static void *newArray_TGDockButton(Long_t nElements, void *p) {
      return p ? new(p) ::TGDockButton[nElements] : new ::TGDockButton[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGDockButton(void *p) {
      delete (static_cast<::TGDockButton*>(p));
   }
   static void deleteArray_TGDockButton(void *p) {
      delete [] (static_cast<::TGDockButton*>(p));
   }
   static void destruct_TGDockButton(void *p) {
      typedef ::TGDockButton current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDockButton(TBuffer &buf, void *obj) {
      ((::TGDockButton*)obj)->::TGDockButton::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDockButton

//______________________________________________________________________________
void TGDockHideButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDockHideButton.

   TGDockButton::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGDockHideButton(void *p) {
      return  p ? new(p) ::TGDockHideButton : new ::TGDockHideButton;
   }
   static void *newArray_TGDockHideButton(Long_t nElements, void *p) {
      return p ? new(p) ::TGDockHideButton[nElements] : new ::TGDockHideButton[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGDockHideButton(void *p) {
      delete (static_cast<::TGDockHideButton*>(p));
   }
   static void deleteArray_TGDockHideButton(void *p) {
      delete [] (static_cast<::TGDockHideButton*>(p));
   }
   static void destruct_TGDockHideButton(void *p) {
      typedef ::TGDockHideButton current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDockHideButton(TBuffer &buf, void *obj) {
      ((::TGDockHideButton*)obj)->::TGDockHideButton::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDockHideButton

//______________________________________________________________________________
void TGUndockedFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGUndockedFrame.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGUndockedFrame(void *p) {
      return  p ? new(p) ::TGUndockedFrame : new ::TGUndockedFrame;
   }
   static void *newArray_TGUndockedFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGUndockedFrame[nElements] : new ::TGUndockedFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGUndockedFrame(void *p) {
      delete (static_cast<::TGUndockedFrame*>(p));
   }
   static void deleteArray_TGUndockedFrame(void *p) {
      delete [] (static_cast<::TGUndockedFrame*>(p));
   }
   static void destruct_TGUndockedFrame(void *p) {
      typedef ::TGUndockedFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGUndockedFrame(TBuffer &buf, void *obj) {
      ((::TGUndockedFrame*)obj)->::TGUndockedFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGUndockedFrame

//______________________________________________________________________________
void TGDockableFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDockableFrame.

   TGCompositeFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGDockableFrame(void *p) {
      return  p ? new(p) ::TGDockableFrame : new ::TGDockableFrame;
   }
   static void *newArray_TGDockableFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGDockableFrame[nElements] : new ::TGDockableFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGDockableFrame(void *p) {
      delete (static_cast<::TGDockableFrame*>(p));
   }
   static void deleteArray_TGDockableFrame(void *p) {
      delete [] (static_cast<::TGDockableFrame*>(p));
   }
   static void destruct_TGDockableFrame(void *p) {
      typedef ::TGDockableFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDockableFrame(TBuffer &buf, void *obj) {
      ((::TGDockableFrame*)obj)->::TGDockableFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDockableFrame

//______________________________________________________________________________
void TGDoubleSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDoubleSlider.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGDoubleSlider(void *p) {
      delete (static_cast<::TGDoubleSlider*>(p));
   }
   static void deleteArray_TGDoubleSlider(void *p) {
      delete [] (static_cast<::TGDoubleSlider*>(p));
   }
   static void destruct_TGDoubleSlider(void *p) {
      typedef ::TGDoubleSlider current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDoubleSlider(TBuffer &buf, void *obj) {
      ((::TGDoubleSlider*)obj)->::TGDoubleSlider::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDoubleSlider

//______________________________________________________________________________
void TGDoubleVSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDoubleVSlider.

   TGDoubleSlider::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGDoubleVSlider(void *p) {
      return  p ? new(p) ::TGDoubleVSlider : new ::TGDoubleVSlider;
   }
   static void *newArray_TGDoubleVSlider(Long_t nElements, void *p) {
      return p ? new(p) ::TGDoubleVSlider[nElements] : new ::TGDoubleVSlider[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGDoubleVSlider(void *p) {
      delete (static_cast<::TGDoubleVSlider*>(p));
   }
   static void deleteArray_TGDoubleVSlider(void *p) {
      delete [] (static_cast<::TGDoubleVSlider*>(p));
   }
   static void destruct_TGDoubleVSlider(void *p) {
      typedef ::TGDoubleVSlider current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDoubleVSlider(TBuffer &buf, void *obj) {
      ((::TGDoubleVSlider*)obj)->::TGDoubleVSlider::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDoubleVSlider

//______________________________________________________________________________
void TGDoubleHSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDoubleHSlider.

   TGDoubleSlider::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGDoubleHSlider(void *p) {
      return  p ? new(p) ::TGDoubleHSlider : new ::TGDoubleHSlider;
   }
   static void *newArray_TGDoubleHSlider(Long_t nElements, void *p) {
      return p ? new(p) ::TGDoubleHSlider[nElements] : new ::TGDoubleHSlider[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGDoubleHSlider(void *p) {
      delete (static_cast<::TGDoubleHSlider*>(p));
   }
   static void deleteArray_TGDoubleHSlider(void *p) {
      delete [] (static_cast<::TGDoubleHSlider*>(p));
   }
   static void destruct_TGDoubleHSlider(void *p) {
      typedef ::TGDoubleHSlider current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDoubleHSlider(TBuffer &buf, void *obj) {
      ((::TGDoubleHSlider*)obj)->::TGDoubleHSlider::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDoubleHSlider

//______________________________________________________________________________
void TGEventHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGEventHandler.

   TNamed::Streamer(R__b);
   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGEventHandler(void *p) {
      delete (static_cast<::TGEventHandler*>(p));
   }
   static void deleteArray_TGEventHandler(void *p) {
      delete [] (static_cast<::TGEventHandler*>(p));
   }
   static void destruct_TGEventHandler(void *p) {
      typedef ::TGEventHandler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGEventHandler(TBuffer &buf, void *obj) {
      ((::TGEventHandler*)obj)->::TGEventHandler::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGEventHandler

//______________________________________________________________________________
void TGTreeLBEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTreeLBEntry.

   TGLBEntry::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTreeLBEntry(void *p) {
      return  p ? new(p) ::TGTreeLBEntry : new ::TGTreeLBEntry;
   }
   static void *newArray_TGTreeLBEntry(Long_t nElements, void *p) {
      return p ? new(p) ::TGTreeLBEntry[nElements] : new ::TGTreeLBEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTreeLBEntry(void *p) {
      delete (static_cast<::TGTreeLBEntry*>(p));
   }
   static void deleteArray_TGTreeLBEntry(void *p) {
      delete [] (static_cast<::TGTreeLBEntry*>(p));
   }
   static void destruct_TGTreeLBEntry(void *p) {
      typedef ::TGTreeLBEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTreeLBEntry(TBuffer &buf, void *obj) {
      ((::TGTreeLBEntry*)obj)->::TGTreeLBEntry::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTreeLBEntry

//______________________________________________________________________________
void TGFSComboBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFSComboBox.

   TGComboBox::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGFSComboBox(void *p) {
      return  p ? new(p) ::TGFSComboBox : new ::TGFSComboBox;
   }
   static void *newArray_TGFSComboBox(Long_t nElements, void *p) {
      return p ? new(p) ::TGFSComboBox[nElements] : new ::TGFSComboBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGFSComboBox(void *p) {
      delete (static_cast<::TGFSComboBox*>(p));
   }
   static void deleteArray_TGFSComboBox(void *p) {
      delete [] (static_cast<::TGFSComboBox*>(p));
   }
   static void destruct_TGFSComboBox(void *p) {
      typedef ::TGFSComboBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGFSComboBox(TBuffer &buf, void *obj) {
      ((::TGFSComboBox*)obj)->::TGFSComboBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGFSComboBox

//______________________________________________________________________________
void TGSplitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSplitter.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGSplitter(void *p) {
      delete (static_cast<::TGSplitter*>(p));
   }
   static void deleteArray_TGSplitter(void *p) {
      delete [] (static_cast<::TGSplitter*>(p));
   }
   static void destruct_TGSplitter(void *p) {
      typedef ::TGSplitter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGSplitter(TBuffer &buf, void *obj) {
      ((::TGSplitter*)obj)->::TGSplitter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGSplitter

//______________________________________________________________________________
void TGVSplitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGVSplitter.

   TGSplitter::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGVSplitter(void *p) {
      return  p ? new(p) ::TGVSplitter : new ::TGVSplitter;
   }
   static void *newArray_TGVSplitter(Long_t nElements, void *p) {
      return p ? new(p) ::TGVSplitter[nElements] : new ::TGVSplitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGVSplitter(void *p) {
      delete (static_cast<::TGVSplitter*>(p));
   }
   static void deleteArray_TGVSplitter(void *p) {
      delete [] (static_cast<::TGVSplitter*>(p));
   }
   static void destruct_TGVSplitter(void *p) {
      typedef ::TGVSplitter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGVSplitter(TBuffer &buf, void *obj) {
      ((::TGVSplitter*)obj)->::TGVSplitter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGVSplitter

//______________________________________________________________________________
void TGHSplitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHSplitter.

   TGSplitter::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGHSplitter(void *p) {
      return  p ? new(p) ::TGHSplitter : new ::TGHSplitter;
   }
   static void *newArray_TGHSplitter(Long_t nElements, void *p) {
      return p ? new(p) ::TGHSplitter[nElements] : new ::TGHSplitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGHSplitter(void *p) {
      delete (static_cast<::TGHSplitter*>(p));
   }
   static void deleteArray_TGHSplitter(void *p) {
      delete [] (static_cast<::TGHSplitter*>(p));
   }
   static void destruct_TGHSplitter(void *p) {
      typedef ::TGHSplitter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHSplitter(TBuffer &buf, void *obj) {
      ((::TGHSplitter*)obj)->::TGHSplitter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHSplitter

//______________________________________________________________________________
void TGVFileSplitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGVFileSplitter.

   TGVSplitter::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGVFileSplitter(void *p) {
      return  p ? new(p) ::TGVFileSplitter : new ::TGVFileSplitter;
   }
   static void *newArray_TGVFileSplitter(Long_t nElements, void *p) {
      return p ? new(p) ::TGVFileSplitter[nElements] : new ::TGVFileSplitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGVFileSplitter(void *p) {
      delete (static_cast<::TGVFileSplitter*>(p));
   }
   static void deleteArray_TGVFileSplitter(void *p) {
      delete [] (static_cast<::TGVFileSplitter*>(p));
   }
   static void destruct_TGVFileSplitter(void *p) {
      typedef ::TGVFileSplitter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGVFileSplitter(TBuffer &buf, void *obj) {
      ((::TGVFileSplitter*)obj)->::TGVFileSplitter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGVFileSplitter

//______________________________________________________________________________
void TGLVEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLVEntry.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLVEntry(void *p) {
      return  p ? new(p) ::TGLVEntry : new ::TGLVEntry;
   }
   static void *newArray_TGLVEntry(Long_t nElements, void *p) {
      return p ? new(p) ::TGLVEntry[nElements] : new ::TGLVEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLVEntry(void *p) {
      delete (static_cast<::TGLVEntry*>(p));
   }
   static void deleteArray_TGLVEntry(void *p) {
      delete [] (static_cast<::TGLVEntry*>(p));
   }
   static void destruct_TGLVEntry(void *p) {
      typedef ::TGLVEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLVEntry(TBuffer &buf, void *obj) {
      ((::TGLVEntry*)obj)->::TGLVEntry::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLVEntry

//______________________________________________________________________________
void TGListView::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGListView.

   TGCanvas::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGListView(void *p) {
      delete (static_cast<::TGListView*>(p));
   }
   static void deleteArray_TGListView(void *p) {
      delete [] (static_cast<::TGListView*>(p));
   }
   static void destruct_TGListView(void *p) {
      typedef ::TGListView current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGListView(TBuffer &buf, void *obj) {
      ((::TGListView*)obj)->::TGListView::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGListView

//______________________________________________________________________________
void TGLVContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLVContainer.

   TGContainer::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLVContainer(void *p) {
      delete (static_cast<::TGLVContainer*>(p));
   }
   static void deleteArray_TGLVContainer(void *p) {
      delete [] (static_cast<::TGLVContainer*>(p));
   }
   static void destruct_TGLVContainer(void *p) {
      typedef ::TGLVContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLVContainer(TBuffer &buf, void *obj) {
      ((::TGLVContainer*)obj)->::TGLVContainer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLVContainer

//______________________________________________________________________________
void TGFileItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFileItem.

   TGLVEntry::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGFileItem(void *p) {
      return  p ? new(p) ::TGFileItem : new ::TGFileItem;
   }
   static void *newArray_TGFileItem(Long_t nElements, void *p) {
      return p ? new(p) ::TGFileItem[nElements] : new ::TGFileItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGFileItem(void *p) {
      delete (static_cast<::TGFileItem*>(p));
   }
   static void deleteArray_TGFileItem(void *p) {
      delete [] (static_cast<::TGFileItem*>(p));
   }
   static void destruct_TGFileItem(void *p) {
      typedef ::TGFileItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGFileItem(TBuffer &buf, void *obj) {
      ((::TGFileItem*)obj)->::TGFileItem::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGFileItem

//______________________________________________________________________________
void TGFileContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFileContainer.

   TGLVContainer::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGFileContainer(void *p) {
      return  p ? new(p) ::TGFileContainer : new ::TGFileContainer;
   }
   static void *newArray_TGFileContainer(Long_t nElements, void *p) {
      return p ? new(p) ::TGFileContainer[nElements] : new ::TGFileContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGFileContainer(void *p) {
      delete (static_cast<::TGFileContainer*>(p));
   }
   static void deleteArray_TGFileContainer(void *p) {
      delete [] (static_cast<::TGFileContainer*>(p));
   }
   static void destruct_TGFileContainer(void *p) {
      typedef ::TGFileContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGFileContainer(TBuffer &buf, void *obj) {
      ((::TGFileContainer*)obj)->::TGFileContainer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGFileContainer

//______________________________________________________________________________
void TGFileBrowser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFileBrowser.

   TGMainFrame::Streamer(R__b);
   TBrowserImp::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGFileBrowser(void *p) {
      delete (static_cast<::TGFileBrowser*>(p));
   }
   static void deleteArray_TGFileBrowser(void *p) {
      delete [] (static_cast<::TGFileBrowser*>(p));
   }
   static void destruct_TGFileBrowser(void *p) {
      typedef ::TGFileBrowser current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGFileBrowser(TBuffer &buf, void *obj) {
      ((::TGFileBrowser*)obj)->::TGFileBrowser::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGFileBrowser

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGFileInfo(void *p) {
      return  p ? new(p) ::TGFileInfo : new ::TGFileInfo;
   }
   static void *newArray_TGFileInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TGFileInfo[nElements] : new ::TGFileInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGFileInfo(void *p) {
      delete (static_cast<::TGFileInfo*>(p));
   }
   static void deleteArray_TGFileInfo(void *p) {
      delete [] (static_cast<::TGFileInfo*>(p));
   }
   static void destruct_TGFileInfo(void *p) {
      typedef ::TGFileInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGFileInfo

//______________________________________________________________________________
void TGFileDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFileDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGFileDialog(void *p) {
      return  p ? new(p) ::TGFileDialog : new ::TGFileDialog;
   }
   static void *newArray_TGFileDialog(Long_t nElements, void *p) {
      return p ? new(p) ::TGFileDialog[nElements] : new ::TGFileDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGFileDialog(void *p) {
      delete (static_cast<::TGFileDialog*>(p));
   }
   static void deleteArray_TGFileDialog(void *p) {
      delete [] (static_cast<::TGFileDialog*>(p));
   }
   static void destruct_TGFileDialog(void *p) {
      typedef ::TGFileDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGFileDialog(TBuffer &buf, void *obj) {
      ((::TGFileDialog*)obj)->::TGFileDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGFileDialog

//______________________________________________________________________________
void TGFontDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFontDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGFontDialog(void *p) {
      return  p ? new(p) ::TGFontDialog : new ::TGFontDialog;
   }
   static void *newArray_TGFontDialog(Long_t nElements, void *p) {
      return p ? new(p) ::TGFontDialog[nElements] : new ::TGFontDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGFontDialog(void *p) {
      delete (static_cast<::TGFontDialog*>(p));
   }
   static void deleteArray_TGFontDialog(void *p) {
      delete [] (static_cast<::TGFontDialog*>(p));
   }
   static void destruct_TGFontDialog(void *p) {
      typedef ::TGFontDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGFontDialog(TBuffer &buf, void *obj) {
      ((::TGFontDialog*)obj)->::TGFontDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGFontDialog

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGFontDialogcLcLFontProp_t(void *p) {
      return  p ? new(p) ::TGFontDialog::FontProp_t : new ::TGFontDialog::FontProp_t;
   }
   static void *newArray_TGFontDialogcLcLFontProp_t(Long_t nElements, void *p) {
      return p ? new(p) ::TGFontDialog::FontProp_t[nElements] : new ::TGFontDialog::FontProp_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGFontDialogcLcLFontProp_t(void *p) {
      delete (static_cast<::TGFontDialog::FontProp_t*>(p));
   }
   static void deleteArray_TGFontDialogcLcLFontProp_t(void *p) {
      delete [] (static_cast<::TGFontDialog::FontProp_t*>(p));
   }
   static void destruct_TGFontDialogcLcLFontProp_t(void *p) {
      typedef ::TGFontDialog::FontProp_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGFontDialog::FontProp_t

//______________________________________________________________________________
void TGIcon::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGIcon.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGIcon(void *p) {
      return  p ? new(p) ::TGIcon : new ::TGIcon;
   }
   static void *newArray_TGIcon(Long_t nElements, void *p) {
      return p ? new(p) ::TGIcon[nElements] : new ::TGIcon[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGIcon(void *p) {
      delete (static_cast<::TGIcon*>(p));
   }
   static void deleteArray_TGIcon(void *p) {
      delete [] (static_cast<::TGIcon*>(p));
   }
   static void destruct_TGIcon(void *p) {
      typedef ::TGIcon current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGIcon(TBuffer &buf, void *obj) {
      ((::TGIcon*)obj)->::TGIcon::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGIcon

//______________________________________________________________________________
void TGIdleHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGIdleHandler.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGIdleHandler(void *p) {
      delete (static_cast<::TGIdleHandler*>(p));
   }
   static void deleteArray_TGIdleHandler(void *p) {
      delete [] (static_cast<::TGIdleHandler*>(p));
   }
   static void destruct_TGIdleHandler(void *p) {
      typedef ::TGIdleHandler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGIdleHandler(TBuffer &buf, void *obj) {
      ((::TGIdleHandler*)obj)->::TGIdleHandler::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGIdleHandler

//______________________________________________________________________________
void TGRegion::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGRegion.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGRegion(void *p) {
      return  p ? new(p) ::TGRegion : new ::TGRegion;
   }
   static void *newArray_TGRegion(Long_t nElements, void *p) {
      return p ? new(p) ::TGRegion[nElements] : new ::TGRegion[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGRegion(void *p) {
      delete (static_cast<::TGRegion*>(p));
   }
   static void deleteArray_TGRegion(void *p) {
      delete [] (static_cast<::TGRegion*>(p));
   }
   static void destruct_TGRegion(void *p) {
      typedef ::TGRegion current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGRegion(TBuffer &buf, void *obj) {
      ((::TGRegion*)obj)->::TGRegion::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGRegion

//______________________________________________________________________________
void TGRegionWithId::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGRegionWithId.

   TGRegion::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGRegionWithId(void *p) {
      return  p ? new(p) ::TGRegionWithId : new ::TGRegionWithId;
   }
   static void *newArray_TGRegionWithId(Long_t nElements, void *p) {
      return p ? new(p) ::TGRegionWithId[nElements] : new ::TGRegionWithId[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGRegionWithId(void *p) {
      delete (static_cast<::TGRegionWithId*>(p));
   }
   static void deleteArray_TGRegionWithId(void *p) {
      delete [] (static_cast<::TGRegionWithId*>(p));
   }
   static void destruct_TGRegionWithId(void *p) {
      typedef ::TGRegionWithId current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGRegionWithId(TBuffer &buf, void *obj) {
      ((::TGRegionWithId*)obj)->::TGRegionWithId::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGRegionWithId

//______________________________________________________________________________
void TGImageMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGImageMap.

   TGPictureButton::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGImageMap(void *p) {
      return  p ? new(p) ::TGImageMap : new ::TGImageMap;
   }
   static void *newArray_TGImageMap(Long_t nElements, void *p) {
      return p ? new(p) ::TGImageMap[nElements] : new ::TGImageMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGImageMap(void *p) {
      delete (static_cast<::TGImageMap*>(p));
   }
   static void deleteArray_TGImageMap(void *p) {
      delete [] (static_cast<::TGImageMap*>(p));
   }
   static void destruct_TGImageMap(void *p) {
      typedef ::TGImageMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGImageMap(TBuffer &buf, void *obj) {
      ((::TGImageMap*)obj)->::TGImageMap::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGImageMap

//______________________________________________________________________________
void TGInputDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGInputDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGInputDialog(void *p) {
      return  p ? new(p) ::TGInputDialog : new ::TGInputDialog;
   }
   static void *newArray_TGInputDialog(Long_t nElements, void *p) {
      return p ? new(p) ::TGInputDialog[nElements] : new ::TGInputDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGInputDialog(void *p) {
      delete (static_cast<::TGInputDialog*>(p));
   }
   static void deleteArray_TGInputDialog(void *p) {
      delete [] (static_cast<::TGInputDialog*>(p));
   }
   static void destruct_TGInputDialog(void *p) {
      typedef ::TGInputDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGInputDialog(TBuffer &buf, void *obj) {
      ((::TGInputDialog*)obj)->::TGInputDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGInputDialog

//______________________________________________________________________________
void TGLabel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLabel.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLabel(void *p) {
      return  p ? new(p) ::TGLabel : new ::TGLabel;
   }
   static void *newArray_TGLabel(Long_t nElements, void *p) {
      return p ? new(p) ::TGLabel[nElements] : new ::TGLabel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLabel(void *p) {
      delete (static_cast<::TGLabel*>(p));
   }
   static void deleteArray_TGLabel(void *p) {
      delete [] (static_cast<::TGLabel*>(p));
   }
   static void destruct_TGLabel(void *p) {
      typedef ::TGLabel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLabel(TBuffer &buf, void *obj) {
      ((::TGLabel*)obj)->::TGLabel::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLabel

//______________________________________________________________________________
void TGListTreeItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGListTreeItem.

   ::Error("TGListTreeItem::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGListTreeItem(void *p) {
      delete (static_cast<::TGListTreeItem*>(p));
   }
   static void deleteArray_TGListTreeItem(void *p) {
      delete [] (static_cast<::TGListTreeItem*>(p));
   }
   static void destruct_TGListTreeItem(void *p) {
      typedef ::TGListTreeItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGListTreeItem(TBuffer &buf, void *obj) {
      ((::TGListTreeItem*)obj)->::TGListTreeItem::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGListTreeItem

//______________________________________________________________________________
void TGListTreeItemStd::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGListTreeItemStd.

   TGListTreeItem::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGListTreeItemStd(void *p) {
      return  p ? new(p) ::TGListTreeItemStd : new ::TGListTreeItemStd;
   }
   static void *newArray_TGListTreeItemStd(Long_t nElements, void *p) {
      return p ? new(p) ::TGListTreeItemStd[nElements] : new ::TGListTreeItemStd[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGListTreeItemStd(void *p) {
      delete (static_cast<::TGListTreeItemStd*>(p));
   }
   static void deleteArray_TGListTreeItemStd(void *p) {
      delete [] (static_cast<::TGListTreeItemStd*>(p));
   }
   static void destruct_TGListTreeItemStd(void *p) {
      typedef ::TGListTreeItemStd current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGListTreeItemStd(TBuffer &buf, void *obj) {
      ((::TGListTreeItemStd*)obj)->::TGListTreeItemStd::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGListTreeItemStd

//______________________________________________________________________________
void TGListTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGListTree.

   TGContainer::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGListTree(void *p) {
      return  p ? new(p) ::TGListTree : new ::TGListTree;
   }
   static void *newArray_TGListTree(Long_t nElements, void *p) {
      return p ? new(p) ::TGListTree[nElements] : new ::TGListTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGListTree(void *p) {
      delete (static_cast<::TGListTree*>(p));
   }
   static void deleteArray_TGListTree(void *p) {
      delete [] (static_cast<::TGListTree*>(p));
   }
   static void destruct_TGListTree(void *p) {
      typedef ::TGListTree current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGListTree(TBuffer &buf, void *obj) {
      ((::TGListTree*)obj)->::TGListTree::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGListTree

//______________________________________________________________________________
void TGPicture::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGPicture.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGPicture(void *p) {
      delete (static_cast<::TGPicture*>(p));
   }
   static void deleteArray_TGPicture(void *p) {
      delete [] (static_cast<::TGPicture*>(p));
   }
   static void destruct_TGPicture(void *p) {
      typedef ::TGPicture current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGPicture(TBuffer &buf, void *obj) {
      ((::TGPicture*)obj)->::TGPicture::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGPicture

//______________________________________________________________________________
void TGSelectedPicture::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSelectedPicture.

   TGPicture::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGSelectedPicture(void *p) {
      delete (static_cast<::TGSelectedPicture*>(p));
   }
   static void deleteArray_TGSelectedPicture(void *p) {
      delete [] (static_cast<::TGSelectedPicture*>(p));
   }
   static void destruct_TGSelectedPicture(void *p) {
      typedef ::TGSelectedPicture current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGSelectedPicture(TBuffer &buf, void *obj) {
      ((::TGSelectedPicture*)obj)->::TGSelectedPicture::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGSelectedPicture

//______________________________________________________________________________
void TGPicturePool::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGPicturePool.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGPicturePool(void *p) {
      delete (static_cast<::TGPicturePool*>(p));
   }
   static void deleteArray_TGPicturePool(void *p) {
      delete [] (static_cast<::TGPicturePool*>(p));
   }
   static void destruct_TGPicturePool(void *p) {
      typedef ::TGPicturePool current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGPicturePool(TBuffer &buf, void *obj) {
      ((::TGPicturePool*)obj)->::TGPicturePool::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGPicturePool

//______________________________________________________________________________
void TGMenuEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMenuEntry.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGMenuEntry(void *p) {
      return  p ? new(p) ::TGMenuEntry : new ::TGMenuEntry;
   }
   static void *newArray_TGMenuEntry(Long_t nElements, void *p) {
      return p ? new(p) ::TGMenuEntry[nElements] : new ::TGMenuEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGMenuEntry(void *p) {
      delete (static_cast<::TGMenuEntry*>(p));
   }
   static void deleteArray_TGMenuEntry(void *p) {
      delete [] (static_cast<::TGMenuEntry*>(p));
   }
   static void destruct_TGMenuEntry(void *p) {
      typedef ::TGMenuEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMenuEntry(TBuffer &buf, void *obj) {
      ((::TGMenuEntry*)obj)->::TGMenuEntry::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMenuEntry

//______________________________________________________________________________
void TGPopupMenu::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGPopupMenu.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGPopupMenu(void *p) {
      return  p ? new(p) ::TGPopupMenu : new ::TGPopupMenu;
   }
   static void *newArray_TGPopupMenu(Long_t nElements, void *p) {
      return p ? new(p) ::TGPopupMenu[nElements] : new ::TGPopupMenu[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGPopupMenu(void *p) {
      delete (static_cast<::TGPopupMenu*>(p));
   }
   static void deleteArray_TGPopupMenu(void *p) {
      delete [] (static_cast<::TGPopupMenu*>(p));
   }
   static void destruct_TGPopupMenu(void *p) {
      typedef ::TGPopupMenu current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGPopupMenu(TBuffer &buf, void *obj) {
      ((::TGPopupMenu*)obj)->::TGPopupMenu::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGPopupMenu

//______________________________________________________________________________
void TGMenuTitle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMenuTitle.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGMenuTitle(void *p) {
      return  p ? new(p) ::TGMenuTitle : new ::TGMenuTitle;
   }
   static void *newArray_TGMenuTitle(Long_t nElements, void *p) {
      return p ? new(p) ::TGMenuTitle[nElements] : new ::TGMenuTitle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGMenuTitle(void *p) {
      delete (static_cast<::TGMenuTitle*>(p));
   }
   static void deleteArray_TGMenuTitle(void *p) {
      delete [] (static_cast<::TGMenuTitle*>(p));
   }
   static void destruct_TGMenuTitle(void *p) {
      typedef ::TGMenuTitle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMenuTitle(TBuffer &buf, void *obj) {
      ((::TGMenuTitle*)obj)->::TGMenuTitle::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMenuTitle

//______________________________________________________________________________
void TGMenuBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMenuBar.

   TGHorizontalFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGMenuBar(void *p) {
      return  p ? new(p) ::TGMenuBar : new ::TGMenuBar;
   }
   static void *newArray_TGMenuBar(Long_t nElements, void *p) {
      return p ? new(p) ::TGMenuBar[nElements] : new ::TGMenuBar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGMenuBar(void *p) {
      delete (static_cast<::TGMenuBar*>(p));
   }
   static void deleteArray_TGMenuBar(void *p) {
      delete [] (static_cast<::TGMenuBar*>(p));
   }
   static void destruct_TGMenuBar(void *p) {
      typedef ::TGMenuBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMenuBar(TBuffer &buf, void *obj) {
      ((::TGMenuBar*)obj)->::TGMenuBar::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMenuBar

//______________________________________________________________________________
void TGMdiFrameList::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiFrameList.

   ::Error("TGMdiFrameList::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGMdiFrameList(void *p) {
      return  p ? new(p) ::TGMdiFrameList : new ::TGMdiFrameList;
   }
   static void *newArray_TGMdiFrameList(Long_t nElements, void *p) {
      return p ? new(p) ::TGMdiFrameList[nElements] : new ::TGMdiFrameList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGMdiFrameList(void *p) {
      delete (static_cast<::TGMdiFrameList*>(p));
   }
   static void deleteArray_TGMdiFrameList(void *p) {
      delete [] (static_cast<::TGMdiFrameList*>(p));
   }
   static void destruct_TGMdiFrameList(void *p) {
      typedef ::TGMdiFrameList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiFrameList(TBuffer &buf, void *obj) {
      ((::TGMdiFrameList*)obj)->::TGMdiFrameList::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiFrameList

//______________________________________________________________________________
void TGMdiGeometry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiGeometry.

   ::Error("TGMdiGeometry::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGMdiGeometry(void *p) {
      return  p ? new(p) ::TGMdiGeometry : new ::TGMdiGeometry;
   }
   static void *newArray_TGMdiGeometry(Long_t nElements, void *p) {
      return p ? new(p) ::TGMdiGeometry[nElements] : new ::TGMdiGeometry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGMdiGeometry(void *p) {
      delete (static_cast<::TGMdiGeometry*>(p));
   }
   static void deleteArray_TGMdiGeometry(void *p) {
      delete [] (static_cast<::TGMdiGeometry*>(p));
   }
   static void destruct_TGMdiGeometry(void *p) {
      typedef ::TGMdiGeometry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiGeometry(TBuffer &buf, void *obj) {
      ((::TGMdiGeometry*)obj)->::TGMdiGeometry::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiGeometry

//______________________________________________________________________________
void TGMdiMainFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiMainFrame.

   TGCanvas::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMdiMainFrame(void *p) {
      delete (static_cast<::TGMdiMainFrame*>(p));
   }
   static void deleteArray_TGMdiMainFrame(void *p) {
      delete [] (static_cast<::TGMdiMainFrame*>(p));
   }
   static void destruct_TGMdiMainFrame(void *p) {
      typedef ::TGMdiMainFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiMainFrame(TBuffer &buf, void *obj) {
      ((::TGMdiMainFrame*)obj)->::TGMdiMainFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiMainFrame

//______________________________________________________________________________
void TGMdiContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiContainer.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMdiContainer(void *p) {
      delete (static_cast<::TGMdiContainer*>(p));
   }
   static void deleteArray_TGMdiContainer(void *p) {
      delete [] (static_cast<::TGMdiContainer*>(p));
   }
   static void destruct_TGMdiContainer(void *p) {
      typedef ::TGMdiContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiContainer(TBuffer &buf, void *obj) {
      ((::TGMdiContainer*)obj)->::TGMdiContainer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiContainer

//______________________________________________________________________________
void TGMdiMenuBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiMenuBar.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMdiMenuBar(void *p) {
      delete (static_cast<::TGMdiMenuBar*>(p));
   }
   static void deleteArray_TGMdiMenuBar(void *p) {
      delete [] (static_cast<::TGMdiMenuBar*>(p));
   }
   static void destruct_TGMdiMenuBar(void *p) {
      typedef ::TGMdiMenuBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiMenuBar(TBuffer &buf, void *obj) {
      ((::TGMdiMenuBar*)obj)->::TGMdiMenuBar::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiMenuBar

//______________________________________________________________________________
void TGMdiFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiFrame.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMdiFrame(void *p) {
      delete (static_cast<::TGMdiFrame*>(p));
   }
   static void deleteArray_TGMdiFrame(void *p) {
      delete [] (static_cast<::TGMdiFrame*>(p));
   }
   static void destruct_TGMdiFrame(void *p) {
      typedef ::TGMdiFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiFrame(TBuffer &buf, void *obj) {
      ((::TGMdiFrame*)obj)->::TGMdiFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiFrame

//______________________________________________________________________________
void TGMdiWinResizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiWinResizer.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMdiWinResizer(void *p) {
      delete (static_cast<::TGMdiWinResizer*>(p));
   }
   static void deleteArray_TGMdiWinResizer(void *p) {
      delete [] (static_cast<::TGMdiWinResizer*>(p));
   }
   static void destruct_TGMdiWinResizer(void *p) {
      typedef ::TGMdiWinResizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiWinResizer(TBuffer &buf, void *obj) {
      ((::TGMdiWinResizer*)obj)->::TGMdiWinResizer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiWinResizer

//______________________________________________________________________________
void TGMdiVerticalWinResizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiVerticalWinResizer.

   TGMdiWinResizer::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMdiVerticalWinResizer(void *p) {
      delete (static_cast<::TGMdiVerticalWinResizer*>(p));
   }
   static void deleteArray_TGMdiVerticalWinResizer(void *p) {
      delete [] (static_cast<::TGMdiVerticalWinResizer*>(p));
   }
   static void destruct_TGMdiVerticalWinResizer(void *p) {
      typedef ::TGMdiVerticalWinResizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiVerticalWinResizer(TBuffer &buf, void *obj) {
      ((::TGMdiVerticalWinResizer*)obj)->::TGMdiVerticalWinResizer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiVerticalWinResizer

//______________________________________________________________________________
void TGMdiHorizontalWinResizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiHorizontalWinResizer.

   TGMdiWinResizer::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMdiHorizontalWinResizer(void *p) {
      delete (static_cast<::TGMdiHorizontalWinResizer*>(p));
   }
   static void deleteArray_TGMdiHorizontalWinResizer(void *p) {
      delete [] (static_cast<::TGMdiHorizontalWinResizer*>(p));
   }
   static void destruct_TGMdiHorizontalWinResizer(void *p) {
      typedef ::TGMdiHorizontalWinResizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiHorizontalWinResizer(TBuffer &buf, void *obj) {
      ((::TGMdiHorizontalWinResizer*)obj)->::TGMdiHorizontalWinResizer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiHorizontalWinResizer

//______________________________________________________________________________
void TGMdiCornerWinResizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiCornerWinResizer.

   TGMdiWinResizer::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMdiCornerWinResizer(void *p) {
      delete (static_cast<::TGMdiCornerWinResizer*>(p));
   }
   static void deleteArray_TGMdiCornerWinResizer(void *p) {
      delete [] (static_cast<::TGMdiCornerWinResizer*>(p));
   }
   static void destruct_TGMdiCornerWinResizer(void *p) {
      typedef ::TGMdiCornerWinResizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiCornerWinResizer(TBuffer &buf, void *obj) {
      ((::TGMdiCornerWinResizer*)obj)->::TGMdiCornerWinResizer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiCornerWinResizer

//______________________________________________________________________________
void TGMdiButtons::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiButtons.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMdiButtons(void *p) {
      delete (static_cast<::TGMdiButtons*>(p));
   }
   static void deleteArray_TGMdiButtons(void *p) {
      delete [] (static_cast<::TGMdiButtons*>(p));
   }
   static void destruct_TGMdiButtons(void *p) {
      typedef ::TGMdiButtons current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiButtons(TBuffer &buf, void *obj) {
      ((::TGMdiButtons*)obj)->::TGMdiButtons::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiButtons

//______________________________________________________________________________
void TGMdiTitleIcon::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiTitleIcon.

   TGIcon::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMdiTitleIcon(void *p) {
      delete (static_cast<::TGMdiTitleIcon*>(p));
   }
   static void deleteArray_TGMdiTitleIcon(void *p) {
      delete [] (static_cast<::TGMdiTitleIcon*>(p));
   }
   static void destruct_TGMdiTitleIcon(void *p) {
      typedef ::TGMdiTitleIcon current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiTitleIcon(TBuffer &buf, void *obj) {
      ((::TGMdiTitleIcon*)obj)->::TGMdiTitleIcon::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiTitleIcon

//______________________________________________________________________________
void TGMdiTitleBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiTitleBar.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMdiTitleBar(void *p) {
      delete (static_cast<::TGMdiTitleBar*>(p));
   }
   static void deleteArray_TGMdiTitleBar(void *p) {
      delete [] (static_cast<::TGMdiTitleBar*>(p));
   }
   static void destruct_TGMdiTitleBar(void *p) {
      typedef ::TGMdiTitleBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiTitleBar(TBuffer &buf, void *obj) {
      ((::TGMdiTitleBar*)obj)->::TGMdiTitleBar::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiTitleBar

//______________________________________________________________________________
void TGMdiDecorFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMdiDecorFrame.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMdiDecorFrame(void *p) {
      delete (static_cast<::TGMdiDecorFrame*>(p));
   }
   static void deleteArray_TGMdiDecorFrame(void *p) {
      delete [] (static_cast<::TGMdiDecorFrame*>(p));
   }
   static void destruct_TGMdiDecorFrame(void *p) {
      typedef ::TGMdiDecorFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMdiDecorFrame(TBuffer &buf, void *obj) {
      ((::TGMdiDecorFrame*)obj)->::TGMdiDecorFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMdiDecorFrame

//______________________________________________________________________________
void TGMimeTypes::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMimeTypes.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMimeTypes(void *p) {
      delete (static_cast<::TGMimeTypes*>(p));
   }
   static void deleteArray_TGMimeTypes(void *p) {
      delete [] (static_cast<::TGMimeTypes*>(p));
   }
   static void destruct_TGMimeTypes(void *p) {
      typedef ::TGMimeTypes current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMimeTypes(TBuffer &buf, void *obj) {
      ((::TGMimeTypes*)obj)->::TGMimeTypes::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMimeTypes

//______________________________________________________________________________
void TGMsgBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMsgBox.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGMsgBox(void *p) {
      return  p ? new(p) ::TGMsgBox : new ::TGMsgBox;
   }
   static void *newArray_TGMsgBox(Long_t nElements, void *p) {
      return p ? new(p) ::TGMsgBox[nElements] : new ::TGMsgBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGMsgBox(void *p) {
      delete (static_cast<::TGMsgBox*>(p));
   }
   static void deleteArray_TGMsgBox(void *p) {
      delete [] (static_cast<::TGMsgBox*>(p));
   }
   static void destruct_TGMsgBox(void *p) {
      typedef ::TGMsgBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMsgBox(TBuffer &buf, void *obj) {
      ((::TGMsgBox*)obj)->::TGMsgBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMsgBox

//______________________________________________________________________________
void TGTextBuffer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextBuffer.

   ::Error("TGTextBuffer::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTextBuffer(void *p) {
      return  p ? new(p) ::TGTextBuffer : new ::TGTextBuffer;
   }
   static void *newArray_TGTextBuffer(Long_t nElements, void *p) {
      return p ? new(p) ::TGTextBuffer[nElements] : new ::TGTextBuffer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTextBuffer(void *p) {
      delete (static_cast<::TGTextBuffer*>(p));
   }
   static void deleteArray_TGTextBuffer(void *p) {
      delete [] (static_cast<::TGTextBuffer*>(p));
   }
   static void destruct_TGTextBuffer(void *p) {
      typedef ::TGTextBuffer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTextBuffer(TBuffer &buf, void *obj) {
      ((::TGTextBuffer*)obj)->::TGTextBuffer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTextBuffer

//______________________________________________________________________________
void TGTextEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextEntry.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTextEntry(void *p) {
      return  p ? new(p) ::TGTextEntry : new ::TGTextEntry;
   }
   static void *newArray_TGTextEntry(Long_t nElements, void *p) {
      return p ? new(p) ::TGTextEntry[nElements] : new ::TGTextEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTextEntry(void *p) {
      delete (static_cast<::TGTextEntry*>(p));
   }
   static void deleteArray_TGTextEntry(void *p) {
      delete [] (static_cast<::TGTextEntry*>(p));
   }
   static void destruct_TGTextEntry(void *p) {
      typedef ::TGTextEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTextEntry(TBuffer &buf, void *obj) {
      ((::TGTextEntry*)obj)->::TGTextEntry::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTextEntry

//______________________________________________________________________________
void TGNumberFormat::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGNumberFormat.

   ::Error("TGNumberFormat::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGNumberFormat(void *p) {
      return  p ? new(p) ::TGNumberFormat : new ::TGNumberFormat;
   }
   static void *newArray_TGNumberFormat(Long_t nElements, void *p) {
      return p ? new(p) ::TGNumberFormat[nElements] : new ::TGNumberFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGNumberFormat(void *p) {
      delete (static_cast<::TGNumberFormat*>(p));
   }
   static void deleteArray_TGNumberFormat(void *p) {
      delete [] (static_cast<::TGNumberFormat*>(p));
   }
   static void destruct_TGNumberFormat(void *p) {
      typedef ::TGNumberFormat current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGNumberFormat(TBuffer &buf, void *obj) {
      ((::TGNumberFormat*)obj)->::TGNumberFormat::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGNumberFormat

//______________________________________________________________________________
void TGNumberEntryField::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGNumberEntryField.

   TGTextEntry::Streamer(R__b);
   TGNumberFormat::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGNumberEntryField(void *p) {
      return  p ? new(p) ::TGNumberEntryField : new ::TGNumberEntryField;
   }
   static void *newArray_TGNumberEntryField(Long_t nElements, void *p) {
      return p ? new(p) ::TGNumberEntryField[nElements] : new ::TGNumberEntryField[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGNumberEntryField(void *p) {
      delete (static_cast<::TGNumberEntryField*>(p));
   }
   static void deleteArray_TGNumberEntryField(void *p) {
      delete [] (static_cast<::TGNumberEntryField*>(p));
   }
   static void destruct_TGNumberEntryField(void *p) {
      typedef ::TGNumberEntryField current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGNumberEntryField(TBuffer &buf, void *obj) {
      ((::TGNumberEntryField*)obj)->::TGNumberEntryField::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGNumberEntryField

//______________________________________________________________________________
void TGNumberEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGNumberEntry.

   TGCompositeFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
   TGNumberFormat::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGNumberEntry(void *p) {
      return  p ? new(p) ::TGNumberEntry : new ::TGNumberEntry;
   }
   static void *newArray_TGNumberEntry(Long_t nElements, void *p) {
      return p ? new(p) ::TGNumberEntry[nElements] : new ::TGNumberEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGNumberEntry(void *p) {
      delete (static_cast<::TGNumberEntry*>(p));
   }
   static void deleteArray_TGNumberEntry(void *p) {
      delete [] (static_cast<::TGNumberEntry*>(p));
   }
   static void destruct_TGNumberEntry(void *p) {
      typedef ::TGNumberEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGNumberEntry(TBuffer &buf, void *obj) {
      ((::TGNumberEntry*)obj)->::TGNumberEntry::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGNumberEntry

//______________________________________________________________________________
void TGNumberEntryLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGNumberEntryLayout.

   TGLayoutManager::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGNumberEntryLayout(void *p) {
      delete (static_cast<::TGNumberEntryLayout*>(p));
   }
   static void deleteArray_TGNumberEntryLayout(void *p) {
      delete [] (static_cast<::TGNumberEntryLayout*>(p));
   }
   static void destruct_TGNumberEntryLayout(void *p) {
      typedef ::TGNumberEntryLayout current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGNumberEntryLayout(TBuffer &buf, void *obj) {
      ((::TGNumberEntryLayout*)obj)->::TGNumberEntryLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGNumberEntryLayout

//______________________________________________________________________________
void TGFrameElementPack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGFrameElementPack.

   TGFrameElement::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGFrameElementPack(void *p) {
      delete (static_cast<::TGFrameElementPack*>(p));
   }
   static void deleteArray_TGFrameElementPack(void *p) {
      delete [] (static_cast<::TGFrameElementPack*>(p));
   }
   static void destruct_TGFrameElementPack(void *p) {
      typedef ::TGFrameElementPack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGFrameElementPack(TBuffer &buf, void *obj) {
      ((::TGFrameElementPack*)obj)->::TGFrameElementPack::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGFrameElementPack

//______________________________________________________________________________
void TGPack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGPack.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGPack(void *p) {
      return  p ? new(p) ::TGPack : new ::TGPack;
   }
   static void *newArray_TGPack(Long_t nElements, void *p) {
      return p ? new(p) ::TGPack[nElements] : new ::TGPack[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGPack(void *p) {
      delete (static_cast<::TGPack*>(p));
   }
   static void deleteArray_TGPack(void *p) {
      delete [] (static_cast<::TGPack*>(p));
   }
   static void destruct_TGPack(void *p) {
      typedef ::TGPack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGPack(TBuffer &buf, void *obj) {
      ((::TGPack*)obj)->::TGPack::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGPack

//______________________________________________________________________________
void TGPasswdDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGPasswdDialog.

   ::Error("TGPasswdDialog::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGPasswdDialog(void *p) {
      delete (static_cast<::TGPasswdDialog*>(p));
   }
   static void deleteArray_TGPasswdDialog(void *p) {
      delete [] (static_cast<::TGPasswdDialog*>(p));
   }
   static void destruct_TGPasswdDialog(void *p) {
      typedef ::TGPasswdDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGPasswdDialog(TBuffer &buf, void *obj) {
      ((::TGPasswdDialog*)obj)->::TGPasswdDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGPasswdDialog

//______________________________________________________________________________
void TGProgressBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGProgressBar.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGProgressBar(void *p) {
      delete (static_cast<::TGProgressBar*>(p));
   }
   static void deleteArray_TGProgressBar(void *p) {
      delete [] (static_cast<::TGProgressBar*>(p));
   }
   static void destruct_TGProgressBar(void *p) {
      typedef ::TGProgressBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGProgressBar(TBuffer &buf, void *obj) {
      ((::TGProgressBar*)obj)->::TGProgressBar::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGProgressBar

//______________________________________________________________________________
void TGHProgressBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHProgressBar.

   TGProgressBar::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGHProgressBar(void *p) {
      return  p ? new(p) ::TGHProgressBar : new ::TGHProgressBar;
   }
   static void *newArray_TGHProgressBar(Long_t nElements, void *p) {
      return p ? new(p) ::TGHProgressBar[nElements] : new ::TGHProgressBar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGHProgressBar(void *p) {
      delete (static_cast<::TGHProgressBar*>(p));
   }
   static void deleteArray_TGHProgressBar(void *p) {
      delete [] (static_cast<::TGHProgressBar*>(p));
   }
   static void destruct_TGHProgressBar(void *p) {
      typedef ::TGHProgressBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHProgressBar(TBuffer &buf, void *obj) {
      ((::TGHProgressBar*)obj)->::TGHProgressBar::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHProgressBar

//______________________________________________________________________________
void TGVProgressBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGVProgressBar.

   TGProgressBar::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGVProgressBar(void *p) {
      return  p ? new(p) ::TGVProgressBar : new ::TGVProgressBar;
   }
   static void *newArray_TGVProgressBar(Long_t nElements, void *p) {
      return p ? new(p) ::TGVProgressBar[nElements] : new ::TGVProgressBar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGVProgressBar(void *p) {
      delete (static_cast<::TGVProgressBar*>(p));
   }
   static void deleteArray_TGVProgressBar(void *p) {
      delete [] (static_cast<::TGVProgressBar*>(p));
   }
   static void destruct_TGVProgressBar(void *p) {
      typedef ::TGVProgressBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGVProgressBar(TBuffer &buf, void *obj) {
      ((::TGVProgressBar*)obj)->::TGVProgressBar::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGVProgressBar

//______________________________________________________________________________
void TGRedirectOutputGuard::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGRedirectOutputGuard.

   ::Error("TGRedirectOutputGuard::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGRedirectOutputGuard(void *p) {
      delete (static_cast<::TGRedirectOutputGuard*>(p));
   }
   static void deleteArray_TGRedirectOutputGuard(void *p) {
      delete [] (static_cast<::TGRedirectOutputGuard*>(p));
   }
   static void destruct_TGRedirectOutputGuard(void *p) {
      typedef ::TGRedirectOutputGuard current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGRedirectOutputGuard(TBuffer &buf, void *obj) {
      ((::TGRedirectOutputGuard*)obj)->::TGRedirectOutputGuard::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGRedirectOutputGuard

//______________________________________________________________________________
void TGResourcePool::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGResourcePool.

   TGObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGResourcePool(void *p) {
      delete (static_cast<::TGResourcePool*>(p));
   }
   static void deleteArray_TGResourcePool(void *p) {
      delete [] (static_cast<::TGResourcePool*>(p));
   }
   static void destruct_TGResourcePool(void *p) {
      typedef ::TGResourcePool current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGResourcePool(TBuffer &buf, void *obj) {
      ((::TGResourcePool*)obj)->::TGResourcePool::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGResourcePool

//______________________________________________________________________________
void TGShapedFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGShapedFrame.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGShapedFrame(void *p) {
      return  p ? new(p) ::TGShapedFrame : new ::TGShapedFrame;
   }
   static void *newArray_TGShapedFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGShapedFrame[nElements] : new ::TGShapedFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGShapedFrame(void *p) {
      delete (static_cast<::TGShapedFrame*>(p));
   }
   static void deleteArray_TGShapedFrame(void *p) {
      delete [] (static_cast<::TGShapedFrame*>(p));
   }
   static void destruct_TGShapedFrame(void *p) {
      typedef ::TGShapedFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGShapedFrame(TBuffer &buf, void *obj) {
      ((::TGShapedFrame*)obj)->::TGShapedFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGShapedFrame

//______________________________________________________________________________
void TGShutterItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGShutterItem.

   TGVerticalFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGShutterItem(void *p) {
      return  p ? new(p) ::TGShutterItem : new ::TGShutterItem;
   }
   static void *newArray_TGShutterItem(Long_t nElements, void *p) {
      return p ? new(p) ::TGShutterItem[nElements] : new ::TGShutterItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGShutterItem(void *p) {
      delete (static_cast<::TGShutterItem*>(p));
   }
   static void deleteArray_TGShutterItem(void *p) {
      delete [] (static_cast<::TGShutterItem*>(p));
   }
   static void destruct_TGShutterItem(void *p) {
      typedef ::TGShutterItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGShutterItem(TBuffer &buf, void *obj) {
      ((::TGShutterItem*)obj)->::TGShutterItem::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGShutterItem

//______________________________________________________________________________
void TGShutter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGShutter.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGShutter(void *p) {
      return  p ? new(p) ::TGShutter : new ::TGShutter;
   }
   static void *newArray_TGShutter(Long_t nElements, void *p) {
      return p ? new(p) ::TGShutter[nElements] : new ::TGShutter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGShutter(void *p) {
      delete (static_cast<::TGShutter*>(p));
   }
   static void deleteArray_TGShutter(void *p) {
      delete [] (static_cast<::TGShutter*>(p));
   }
   static void destruct_TGShutter(void *p) {
      typedef ::TGShutter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGShutter(TBuffer &buf, void *obj) {
      ((::TGShutter*)obj)->::TGShutter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGShutter

//______________________________________________________________________________
void TGTableCell::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTableCell.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTableCell(void *p) {
      return  p ? new(p) ::TGTableCell : new ::TGTableCell;
   }
   static void *newArray_TGTableCell(Long_t nElements, void *p) {
      return p ? new(p) ::TGTableCell[nElements] : new ::TGTableCell[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTableCell(void *p) {
      delete (static_cast<::TGTableCell*>(p));
   }
   static void deleteArray_TGTableCell(void *p) {
      delete [] (static_cast<::TGTableCell*>(p));
   }
   static void destruct_TGTableCell(void *p) {
      typedef ::TGTableCell current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTableCell(TBuffer &buf, void *obj) {
      ((::TGTableCell*)obj)->::TGTableCell::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTableCell

//______________________________________________________________________________
void TGTableHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTableHeader.

   TGTableCell::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTableHeader(void *p) {
      return  p ? new(p) ::TGTableHeader : new ::TGTableHeader;
   }
   static void *newArray_TGTableHeader(Long_t nElements, void *p) {
      return p ? new(p) ::TGTableHeader[nElements] : new ::TGTableHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTableHeader(void *p) {
      delete (static_cast<::TGTableHeader*>(p));
   }
   static void deleteArray_TGTableHeader(void *p) {
      delete [] (static_cast<::TGTableHeader*>(p));
   }
   static void destruct_TGTableHeader(void *p) {
      typedef ::TGTableHeader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTableHeader(TBuffer &buf, void *obj) {
      ((::TGTableHeader*)obj)->::TGTableHeader::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTableHeader

//______________________________________________________________________________
void TGTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTable.

   TGCompositeFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTable(void *p) {
      return  p ? new(p) ::TGTable : new ::TGTable;
   }
   static void *newArray_TGTable(Long_t nElements, void *p) {
      return p ? new(p) ::TGTable[nElements] : new ::TGTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTable(void *p) {
      delete (static_cast<::TGTable*>(p));
   }
   static void deleteArray_TGTable(void *p) {
      delete [] (static_cast<::TGTable*>(p));
   }
   static void destruct_TGTable(void *p) {
      typedef ::TGTable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTable(TBuffer &buf, void *obj) {
      ((::TGTable*)obj)->::TGTable::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTable

//______________________________________________________________________________
void TTableRange::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTableRange.

   ::Error("TTableRange::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTableRange(void *p) {
      return  p ? new(p) ::TTableRange : new ::TTableRange;
   }
   static void *newArray_TTableRange(Long_t nElements, void *p) {
      return p ? new(p) ::TTableRange[nElements] : new ::TTableRange[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTableRange(void *p) {
      delete (static_cast<::TTableRange*>(p));
   }
   static void deleteArray_TTableRange(void *p) {
      delete [] (static_cast<::TTableRange*>(p));
   }
   static void destruct_TTableRange(void *p) {
      typedef ::TTableRange current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTableRange(TBuffer &buf, void *obj) {
      ((::TTableRange*)obj)->::TTableRange::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTableRange

//______________________________________________________________________________
void TGSimpleTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSimpleTable.

   TGTable::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGSimpleTable(void *p) {
      delete (static_cast<::TGSimpleTable*>(p));
   }
   static void deleteArray_TGSimpleTable(void *p) {
      delete [] (static_cast<::TGSimpleTable*>(p));
   }
   static void destruct_TGSimpleTable(void *p) {
      typedef ::TGSimpleTable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGSimpleTable(TBuffer &buf, void *obj) {
      ((::TGSimpleTable*)obj)->::TGSimpleTable::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGSimpleTable

//______________________________________________________________________________
void TGSimpleTableInterface::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSimpleTableInterface.

   TVirtualTableInterface::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGSimpleTableInterface(void *p) {
      delete (static_cast<::TGSimpleTableInterface*>(p));
   }
   static void deleteArray_TGSimpleTableInterface(void *p) {
      delete [] (static_cast<::TGSimpleTableInterface*>(p));
   }
   static void destruct_TGSimpleTableInterface(void *p) {
      typedef ::TGSimpleTableInterface current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGSimpleTableInterface(TBuffer &buf, void *obj) {
      ((::TGSimpleTableInterface*)obj)->::TGSimpleTableInterface::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGSimpleTableInterface

//______________________________________________________________________________
void TGSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSlider.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGSlider(void *p) {
      delete (static_cast<::TGSlider*>(p));
   }
   static void deleteArray_TGSlider(void *p) {
      delete [] (static_cast<::TGSlider*>(p));
   }
   static void destruct_TGSlider(void *p) {
      typedef ::TGSlider current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGSlider(TBuffer &buf, void *obj) {
      ((::TGSlider*)obj)->::TGSlider::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGSlider

//______________________________________________________________________________
void TGVSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGVSlider.

   TGSlider::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGVSlider(void *p) {
      return  p ? new(p) ::TGVSlider : new ::TGVSlider;
   }
   static void *newArray_TGVSlider(Long_t nElements, void *p) {
      return p ? new(p) ::TGVSlider[nElements] : new ::TGVSlider[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGVSlider(void *p) {
      delete (static_cast<::TGVSlider*>(p));
   }
   static void deleteArray_TGVSlider(void *p) {
      delete [] (static_cast<::TGVSlider*>(p));
   }
   static void destruct_TGVSlider(void *p) {
      typedef ::TGVSlider current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGVSlider(TBuffer &buf, void *obj) {
      ((::TGVSlider*)obj)->::TGVSlider::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGVSlider

//______________________________________________________________________________
void TGHSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHSlider.

   TGSlider::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGHSlider(void *p) {
      return  p ? new(p) ::TGHSlider : new ::TGHSlider;
   }
   static void *newArray_TGHSlider(Long_t nElements, void *p) {
      return p ? new(p) ::TGHSlider[nElements] : new ::TGHSlider[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGHSlider(void *p) {
      delete (static_cast<::TGHSlider*>(p));
   }
   static void deleteArray_TGHSlider(void *p) {
      delete [] (static_cast<::TGHSlider*>(p));
   }
   static void destruct_TGHSlider(void *p) {
      typedef ::TGHSlider current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHSlider(TBuffer &buf, void *obj) {
      ((::TGHSlider*)obj)->::TGHSlider::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHSlider

//______________________________________________________________________________
void TGSpeedo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSpeedo.

   TGFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGSpeedo(void *p) {
      return  p ? new(p) ::TGSpeedo : new ::TGSpeedo;
   }
   static void *newArray_TGSpeedo(Long_t nElements, void *p) {
      return p ? new(p) ::TGSpeedo[nElements] : new ::TGSpeedo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGSpeedo(void *p) {
      delete (static_cast<::TGSpeedo*>(p));
   }
   static void deleteArray_TGSpeedo(void *p) {
      delete [] (static_cast<::TGSpeedo*>(p));
   }
   static void destruct_TGSpeedo(void *p) {
      typedef ::TGSpeedo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGSpeedo(TBuffer &buf, void *obj) {
      ((::TGSpeedo*)obj)->::TGSpeedo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGSpeedo

//______________________________________________________________________________
void TGRectMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGRectMap.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGRectMap(void *p) {
      delete (static_cast<::TGRectMap*>(p));
   }
   static void deleteArray_TGRectMap(void *p) {
      delete [] (static_cast<::TGRectMap*>(p));
   }
   static void destruct_TGRectMap(void *p) {
      typedef ::TGRectMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGRectMap(TBuffer &buf, void *obj) {
      ((::TGRectMap*)obj)->::TGRectMap::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGRectMap

//______________________________________________________________________________
void TGSplitTool::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSplitTool.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGSplitTool(void *p) {
      return  p ? new(p) ::TGSplitTool : new ::TGSplitTool;
   }
   static void *newArray_TGSplitTool(Long_t nElements, void *p) {
      return p ? new(p) ::TGSplitTool[nElements] : new ::TGSplitTool[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGSplitTool(void *p) {
      delete (static_cast<::TGSplitTool*>(p));
   }
   static void deleteArray_TGSplitTool(void *p) {
      delete [] (static_cast<::TGSplitTool*>(p));
   }
   static void destruct_TGSplitTool(void *p) {
      typedef ::TGSplitTool current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGSplitTool(TBuffer &buf, void *obj) {
      ((::TGSplitTool*)obj)->::TGSplitTool::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGSplitTool

//______________________________________________________________________________
void TGSplitFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSplitFrame.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGSplitFrame(void *p) {
      return  p ? new(p) ::TGSplitFrame : new ::TGSplitFrame;
   }
   static void *newArray_TGSplitFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGSplitFrame[nElements] : new ::TGSplitFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGSplitFrame(void *p) {
      delete (static_cast<::TGSplitFrame*>(p));
   }
   static void deleteArray_TGSplitFrame(void *p) {
      delete [] (static_cast<::TGSplitFrame*>(p));
   }
   static void destruct_TGSplitFrame(void *p) {
      typedef ::TGSplitFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGSplitFrame(TBuffer &buf, void *obj) {
      ((::TGSplitFrame*)obj)->::TGSplitFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGSplitFrame

//______________________________________________________________________________
void TGStatusBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGStatusBar.

   TGHorizontalFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGStatusBar(void *p) {
      return  p ? new(p) ::TGStatusBar : new ::TGStatusBar;
   }
   static void *newArray_TGStatusBar(Long_t nElements, void *p) {
      return p ? new(p) ::TGStatusBar[nElements] : new ::TGStatusBar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGStatusBar(void *p) {
      delete (static_cast<::TGStatusBar*>(p));
   }
   static void deleteArray_TGStatusBar(void *p) {
      delete [] (static_cast<::TGStatusBar*>(p));
   }
   static void destruct_TGStatusBar(void *p) {
      typedef ::TGStatusBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGStatusBar(TBuffer &buf, void *obj) {
      ((::TGStatusBar*)obj)->::TGStatusBar::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGStatusBar

//______________________________________________________________________________
void TGTabLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTabLayout.

   TGLayoutManager::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGTabLayout(void *p) {
      delete (static_cast<::TGTabLayout*>(p));
   }
   static void deleteArray_TGTabLayout(void *p) {
      delete [] (static_cast<::TGTabLayout*>(p));
   }
   static void destruct_TGTabLayout(void *p) {
      typedef ::TGTabLayout current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTabLayout(TBuffer &buf, void *obj) {
      ((::TGTabLayout*)obj)->::TGTabLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTabLayout

//______________________________________________________________________________
void TGTab::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTab.

   TGCompositeFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTab(void *p) {
      return  p ? new(p) ::TGTab : new ::TGTab;
   }
   static void *newArray_TGTab(Long_t nElements, void *p) {
      return p ? new(p) ::TGTab[nElements] : new ::TGTab[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTab(void *p) {
      delete (static_cast<::TGTab*>(p));
   }
   static void deleteArray_TGTab(void *p) {
      delete [] (static_cast<::TGTab*>(p));
   }
   static void destruct_TGTab(void *p) {
      typedef ::TGTab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTab(TBuffer &buf, void *obj) {
      ((::TGTab*)obj)->::TGTab::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTab

//______________________________________________________________________________
void TGTabElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTabElement.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTabElement(void *p) {
      return  p ? new(p) ::TGTabElement : new ::TGTabElement;
   }
   static void *newArray_TGTabElement(Long_t nElements, void *p) {
      return p ? new(p) ::TGTabElement[nElements] : new ::TGTabElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTabElement(void *p) {
      delete (static_cast<::TGTabElement*>(p));
   }
   static void deleteArray_TGTabElement(void *p) {
      delete [] (static_cast<::TGTabElement*>(p));
   }
   static void destruct_TGTabElement(void *p) {
      typedef ::TGTabElement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTabElement(TBuffer &buf, void *obj) {
      ((::TGTabElement*)obj)->::TGTabElement::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTabElement

//______________________________________________________________________________
void TGTableFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTableFrame.

   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGTableFrame(void *p) {
      delete (static_cast<::TGTableFrame*>(p));
   }
   static void deleteArray_TGTableFrame(void *p) {
      delete [] (static_cast<::TGTableFrame*>(p));
   }
   static void destruct_TGTableFrame(void *p) {
      typedef ::TGTableFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTableFrame(TBuffer &buf, void *obj) {
      ((::TGTableFrame*)obj)->::TGTableFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTableFrame

//______________________________________________________________________________
void TGTableHeaderFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTableHeaderFrame.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGTableHeaderFrame(void *p) {
      delete (static_cast<::TGTableHeaderFrame*>(p));
   }
   static void deleteArray_TGTableHeaderFrame(void *p) {
      delete [] (static_cast<::TGTableHeaderFrame*>(p));
   }
   static void destruct_TGTableHeaderFrame(void *p) {
      typedef ::TGTableHeaderFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTableHeaderFrame(TBuffer &buf, void *obj) {
      ((::TGTableHeaderFrame*)obj)->::TGTableHeaderFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTableHeaderFrame

//______________________________________________________________________________
void TGTableLayoutHints::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTableLayoutHints.

   TGLayoutHints::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGTableLayoutHints(void *p) {
      delete (static_cast<::TGTableLayoutHints*>(p));
   }
   static void deleteArray_TGTableLayoutHints(void *p) {
      delete [] (static_cast<::TGTableLayoutHints*>(p));
   }
   static void destruct_TGTableLayoutHints(void *p) {
      typedef ::TGTableLayoutHints current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTableLayoutHints(TBuffer &buf, void *obj) {
      ((::TGTableLayoutHints*)obj)->::TGTableLayoutHints::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTableLayoutHints

//______________________________________________________________________________
void TGTableLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTableLayout.

   TGLayoutManager::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGTableLayout(void *p) {
      delete (static_cast<::TGTableLayout*>(p));
   }
   static void deleteArray_TGTableLayout(void *p) {
      delete [] (static_cast<::TGTableLayout*>(p));
   }
   static void destruct_TGTableLayout(void *p) {
      typedef ::TGTableLayout current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTableLayout(TBuffer &buf, void *obj) {
      ((::TGTableLayout*)obj)->::TGTableLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTableLayout

//______________________________________________________________________________
void TGTextLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextLine.

   ::Error("TGTextLine::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTextLine(void *p) {
      return  p ? new(p) ::TGTextLine : new ::TGTextLine;
   }
   static void *newArray_TGTextLine(Long_t nElements, void *p) {
      return p ? new(p) ::TGTextLine[nElements] : new ::TGTextLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTextLine(void *p) {
      delete (static_cast<::TGTextLine*>(p));
   }
   static void deleteArray_TGTextLine(void *p) {
      delete [] (static_cast<::TGTextLine*>(p));
   }
   static void destruct_TGTextLine(void *p) {
      typedef ::TGTextLine current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTextLine(TBuffer &buf, void *obj) {
      ((::TGTextLine*)obj)->::TGTextLine::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTextLine

//______________________________________________________________________________
void TGText::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGText.

   ::Error("TGText::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGText(void *p) {
      return  p ? new(p) ::TGText : new ::TGText;
   }
   static void *newArray_TGText(Long_t nElements, void *p) {
      return p ? new(p) ::TGText[nElements] : new ::TGText[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGText(void *p) {
      delete (static_cast<::TGText*>(p));
   }
   static void deleteArray_TGText(void *p) {
      delete [] (static_cast<::TGText*>(p));
   }
   static void destruct_TGText(void *p) {
      typedef ::TGText current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGText(TBuffer &buf, void *obj) {
      ((::TGText*)obj)->::TGText::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGText

//______________________________________________________________________________
void TGView::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGView.

   TGCompositeFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGView(void *p) {
      return  p ? new(p) ::TGView : new ::TGView;
   }
   static void *newArray_TGView(Long_t nElements, void *p) {
      return p ? new(p) ::TGView[nElements] : new ::TGView[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGView(void *p) {
      delete (static_cast<::TGView*>(p));
   }
   static void deleteArray_TGView(void *p) {
      delete [] (static_cast<::TGView*>(p));
   }
   static void destruct_TGView(void *p) {
      typedef ::TGView current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGView(TBuffer &buf, void *obj) {
      ((::TGView*)obj)->::TGView::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGView

//______________________________________________________________________________
void TGViewFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGViewFrame.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGViewFrame(void *p) {
      delete (static_cast<::TGViewFrame*>(p));
   }
   static void deleteArray_TGViewFrame(void *p) {
      delete [] (static_cast<::TGViewFrame*>(p));
   }
   static void destruct_TGViewFrame(void *p) {
      typedef ::TGViewFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGViewFrame(TBuffer &buf, void *obj) {
      ((::TGViewFrame*)obj)->::TGViewFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGViewFrame

//______________________________________________________________________________
void TGTextView::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextView.

   TGView::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTextView(void *p) {
      return  p ? new(p) ::TGTextView : new ::TGTextView;
   }
   static void *newArray_TGTextView(Long_t nElements, void *p) {
      return p ? new(p) ::TGTextView[nElements] : new ::TGTextView[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTextView(void *p) {
      delete (static_cast<::TGTextView*>(p));
   }
   static void deleteArray_TGTextView(void *p) {
      delete [] (static_cast<::TGTextView*>(p));
   }
   static void destruct_TGTextView(void *p) {
      typedef ::TGTextView current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTextView(TBuffer &buf, void *obj) {
      ((::TGTextView*)obj)->::TGTextView::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTextView

//______________________________________________________________________________
void TGTextEdit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextEdit.

   TGTextView::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTextEdit(void *p) {
      return  p ? new(p) ::TGTextEdit : new ::TGTextEdit;
   }
   static void *newArray_TGTextEdit(Long_t nElements, void *p) {
      return p ? new(p) ::TGTextEdit[nElements] : new ::TGTextEdit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTextEdit(void *p) {
      delete (static_cast<::TGTextEdit*>(p));
   }
   static void deleteArray_TGTextEdit(void *p) {
      delete [] (static_cast<::TGTextEdit*>(p));
   }
   static void destruct_TGTextEdit(void *p) {
      typedef ::TGTextEdit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTextEdit(TBuffer &buf, void *obj) {
      ((::TGTextEdit*)obj)->::TGTextEdit::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTextEdit

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGSearchType(void *p) {
      return  p ? new(p) ::TGSearchType : new ::TGSearchType;
   }
   static void *newArray_TGSearchType(Long_t nElements, void *p) {
      return p ? new(p) ::TGSearchType[nElements] : new ::TGSearchType[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGSearchType(void *p) {
      delete (static_cast<::TGSearchType*>(p));
   }
   static void deleteArray_TGSearchType(void *p) {
      delete [] (static_cast<::TGSearchType*>(p));
   }
   static void destruct_TGSearchType(void *p) {
      typedef ::TGSearchType current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGSearchType

//______________________________________________________________________________
void TGSearchDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSearchDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGSearchDialog(void *p) {
      return  p ? new(p) ::TGSearchDialog : new ::TGSearchDialog;
   }
   static void *newArray_TGSearchDialog(Long_t nElements, void *p) {
      return p ? new(p) ::TGSearchDialog[nElements] : new ::TGSearchDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGSearchDialog(void *p) {
      delete (static_cast<::TGSearchDialog*>(p));
   }
   static void deleteArray_TGSearchDialog(void *p) {
      delete [] (static_cast<::TGSearchDialog*>(p));
   }
   static void destruct_TGSearchDialog(void *p) {
      typedef ::TGSearchDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGSearchDialog(TBuffer &buf, void *obj) {
      ((::TGSearchDialog*)obj)->::TGSearchDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGSearchDialog

//______________________________________________________________________________
void TGPrintDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGPrintDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGPrintDialog(void *p) {
      return  p ? new(p) ::TGPrintDialog : new ::TGPrintDialog;
   }
   static void *newArray_TGPrintDialog(Long_t nElements, void *p) {
      return p ? new(p) ::TGPrintDialog[nElements] : new ::TGPrintDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGPrintDialog(void *p) {
      delete (static_cast<::TGPrintDialog*>(p));
   }
   static void deleteArray_TGPrintDialog(void *p) {
      delete [] (static_cast<::TGPrintDialog*>(p));
   }
   static void destruct_TGPrintDialog(void *p) {
      typedef ::TGPrintDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGPrintDialog(TBuffer &buf, void *obj) {
      ((::TGPrintDialog*)obj)->::TGPrintDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGPrintDialog

//______________________________________________________________________________
void TGGotoDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGGotoDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGGotoDialog(void *p) {
      return  p ? new(p) ::TGGotoDialog : new ::TGGotoDialog;
   }
   static void *newArray_TGGotoDialog(Long_t nElements, void *p) {
      return p ? new(p) ::TGGotoDialog[nElements] : new ::TGGotoDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGGotoDialog(void *p) {
      delete (static_cast<::TGGotoDialog*>(p));
   }
   static void deleteArray_TGGotoDialog(void *p) {
      delete [] (static_cast<::TGGotoDialog*>(p));
   }
   static void destruct_TGGotoDialog(void *p) {
      typedef ::TGGotoDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGGotoDialog(TBuffer &buf, void *obj) {
      ((::TGGotoDialog*)obj)->::TGGotoDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGGotoDialog

//______________________________________________________________________________
void TGTextEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextEditor.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTextEditor(void *p) {
      return  p ? new(p) ::TGTextEditor : new ::TGTextEditor;
   }
   static void *newArray_TGTextEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGTextEditor[nElements] : new ::TGTextEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTextEditor(void *p) {
      delete (static_cast<::TGTextEditor*>(p));
   }
   static void deleteArray_TGTextEditor(void *p) {
      delete [] (static_cast<::TGTextEditor*>(p));
   }
   static void destruct_TGTextEditor(void *p) {
      typedef ::TGTextEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTextEditor(TBuffer &buf, void *obj) {
      ((::TGTextEditor*)obj)->::TGTextEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTextEditor

//______________________________________________________________________________
void TGTextViewStreamBuf::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextViewStreamBuf.

   ::Error("TGTextViewStreamBuf::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGTextViewStreamBuf(void *p) {
      delete (static_cast<::TGTextViewStreamBuf*>(p));
   }
   static void deleteArray_TGTextViewStreamBuf(void *p) {
      delete [] (static_cast<::TGTextViewStreamBuf*>(p));
   }
   static void destruct_TGTextViewStreamBuf(void *p) {
      typedef ::TGTextViewStreamBuf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTextViewStreamBuf(TBuffer &buf, void *obj) {
      ((::TGTextViewStreamBuf*)obj)->::TGTextViewStreamBuf::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTextViewStreamBuf

//______________________________________________________________________________
void TGTextViewostream::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTextViewostream.

   TGTextView::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTextViewostream(void *p) {
      return  p ? new(p) ::TGTextViewostream : new ::TGTextViewostream;
   }
   static void *newArray_TGTextViewostream(Long_t nElements, void *p) {
      return p ? new(p) ::TGTextViewostream[nElements] : new ::TGTextViewostream[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTextViewostream(void *p) {
      delete (static_cast<::TGTextViewostream*>(p));
   }
   static void deleteArray_TGTextViewostream(void *p) {
      delete [] (static_cast<::TGTextViewostream*>(p));
   }
   static void destruct_TGTextViewostream(void *p) {
      typedef ::TGTextViewostream current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTextViewostream(TBuffer &buf, void *obj) {
      ((::TGTextViewostream*)obj)->::TGTextViewostream::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTextViewostream

namespace ROOT {
   // Wrappers around operator new
   static void *new_ToolBarData_t(void *p) {
      return  p ? new(p) ::ToolBarData_t : new ::ToolBarData_t;
   }
   static void *newArray_ToolBarData_t(Long_t nElements, void *p) {
      return p ? new(p) ::ToolBarData_t[nElements] : new ::ToolBarData_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_ToolBarData_t(void *p) {
      delete (static_cast<::ToolBarData_t*>(p));
   }
   static void deleteArray_ToolBarData_t(void *p) {
      delete [] (static_cast<::ToolBarData_t*>(p));
   }
   static void destruct_ToolBarData_t(void *p) {
      typedef ::ToolBarData_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ToolBarData_t

//______________________________________________________________________________
void TGToolBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGToolBar.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGToolBar(void *p) {
      return  p ? new(p) ::TGToolBar : new ::TGToolBar;
   }
   static void *newArray_TGToolBar(Long_t nElements, void *p) {
      return p ? new(p) ::TGToolBar[nElements] : new ::TGToolBar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGToolBar(void *p) {
      delete (static_cast<::TGToolBar*>(p));
   }
   static void deleteArray_TGToolBar(void *p) {
      delete [] (static_cast<::TGToolBar*>(p));
   }
   static void destruct_TGToolBar(void *p) {
      typedef ::TGToolBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGToolBar(TBuffer &buf, void *obj) {
      ((::TGToolBar*)obj)->::TGToolBar::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGToolBar

//______________________________________________________________________________
void TGToolTip::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGToolTip.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGToolTip(void *p) {
      return  p ? new(p) ::TGToolTip : new ::TGToolTip;
   }
   static void *newArray_TGToolTip(Long_t nElements, void *p) {
      return p ? new(p) ::TGToolTip[nElements] : new ::TGToolTip[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGToolTip(void *p) {
      delete (static_cast<::TGToolTip*>(p));
   }
   static void deleteArray_TGToolTip(void *p) {
      delete [] (static_cast<::TGToolTip*>(p));
   }
   static void destruct_TGToolTip(void *p) {
      typedef ::TGToolTip current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGToolTip(TBuffer &buf, void *obj) {
      ((::TGToolTip*)obj)->::TGToolTip::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGToolTip

//______________________________________________________________________________
void TGTripleVSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTripleVSlider.

   TGDoubleVSlider::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTripleVSlider(void *p) {
      return  p ? new(p) ::TGTripleVSlider : new ::TGTripleVSlider;
   }
   static void *newArray_TGTripleVSlider(Long_t nElements, void *p) {
      return p ? new(p) ::TGTripleVSlider[nElements] : new ::TGTripleVSlider[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTripleVSlider(void *p) {
      delete (static_cast<::TGTripleVSlider*>(p));
   }
   static void deleteArray_TGTripleVSlider(void *p) {
      delete [] (static_cast<::TGTripleVSlider*>(p));
   }
   static void destruct_TGTripleVSlider(void *p) {
      typedef ::TGTripleVSlider current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTripleVSlider(TBuffer &buf, void *obj) {
      ((::TGTripleVSlider*)obj)->::TGTripleVSlider::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTripleVSlider

//______________________________________________________________________________
void TGTripleHSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTripleHSlider.

   TGDoubleHSlider::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTripleHSlider(void *p) {
      return  p ? new(p) ::TGTripleHSlider : new ::TGTripleHSlider;
   }
   static void *newArray_TGTripleHSlider(Long_t nElements, void *p) {
      return p ? new(p) ::TGTripleHSlider[nElements] : new ::TGTripleHSlider[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTripleHSlider(void *p) {
      delete (static_cast<::TGTripleHSlider*>(p));
   }
   static void deleteArray_TGTripleHSlider(void *p) {
      delete [] (static_cast<::TGTripleHSlider*>(p));
   }
   static void destruct_TGTripleHSlider(void *p) {
      typedef ::TGTripleHSlider current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTripleHSlider(TBuffer &buf, void *obj) {
      ((::TGTripleHSlider*)obj)->::TGTripleHSlider::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTripleHSlider

//______________________________________________________________________________
void TGXYLayoutHints::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGXYLayoutHints.

   TGLayoutHints::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGXYLayoutHints(void *p) {
      delete (static_cast<::TGXYLayoutHints*>(p));
   }
   static void deleteArray_TGXYLayoutHints(void *p) {
      delete [] (static_cast<::TGXYLayoutHints*>(p));
   }
   static void destruct_TGXYLayoutHints(void *p) {
      typedef ::TGXYLayoutHints current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGXYLayoutHints(TBuffer &buf, void *obj) {
      ((::TGXYLayoutHints*)obj)->::TGXYLayoutHints::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGXYLayoutHints

//______________________________________________________________________________
void TGXYLayout::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGXYLayout.

   TGLayoutManager::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGXYLayout(void *p) {
      delete (static_cast<::TGXYLayout*>(p));
   }
   static void deleteArray_TGXYLayout(void *p) {
      delete [] (static_cast<::TGXYLayout*>(p));
   }
   static void destruct_TGXYLayout(void *p) {
      typedef ::TGXYLayout current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGXYLayout(TBuffer &buf, void *obj) {
      ((::TGXYLayout*)obj)->::TGXYLayout::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGXYLayout

//______________________________________________________________________________
void TGuiBldAction::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGuiBldAction.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGuiBldAction(void *p) {
      return  p ? new(p) ::TGuiBldAction : new ::TGuiBldAction;
   }
   static void *newArray_TGuiBldAction(Long_t nElements, void *p) {
      return p ? new(p) ::TGuiBldAction[nElements] : new ::TGuiBldAction[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGuiBldAction(void *p) {
      delete (static_cast<::TGuiBldAction*>(p));
   }
   static void deleteArray_TGuiBldAction(void *p) {
      delete [] (static_cast<::TGuiBldAction*>(p));
   }
   static void destruct_TGuiBldAction(void *p) {
      typedef ::TGuiBldAction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGuiBldAction(TBuffer &buf, void *obj) {
      ((::TGuiBldAction*)obj)->::TGuiBldAction::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGuiBldAction

//______________________________________________________________________________
void TGuiBuilder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGuiBuilder.

   ::Error("TGuiBuilder::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGuiBuilder(void *p) {
      return  p ? new(p) ::TGuiBuilder : new ::TGuiBuilder;
   }
   static void *newArray_TGuiBuilder(Long_t nElements, void *p) {
      return p ? new(p) ::TGuiBuilder[nElements] : new ::TGuiBuilder[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGuiBuilder(void *p) {
      delete (static_cast<::TGuiBuilder*>(p));
   }
   static void deleteArray_TGuiBuilder(void *p) {
      delete [] (static_cast<::TGuiBuilder*>(p));
   }
   static void destruct_TGuiBuilder(void *p) {
      typedef ::TGuiBuilder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGuiBuilder(TBuffer &buf, void *obj) {
      ((::TGuiBuilder*)obj)->::TGuiBuilder::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGuiBuilder

//______________________________________________________________________________
void TRootApplication::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootApplication.

   TApplicationImp::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TRootApplication(void *p) {
      delete (static_cast<::TRootApplication*>(p));
   }
   static void deleteArray_TRootApplication(void *p) {
      delete [] (static_cast<::TRootApplication*>(p));
   }
   static void destruct_TRootApplication(void *p) {
      typedef ::TRootApplication current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootApplication(TBuffer &buf, void *obj) {
      ((::TRootApplication*)obj)->::TRootApplication::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootApplication

//______________________________________________________________________________
void TBrowserPlugin::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBrowserPlugin.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TBrowserPlugin(void *p) {
      delete (static_cast<::TBrowserPlugin*>(p));
   }
   static void deleteArray_TBrowserPlugin(void *p) {
      delete [] (static_cast<::TBrowserPlugin*>(p));
   }
   static void destruct_TBrowserPlugin(void *p) {
      typedef ::TBrowserPlugin current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBrowserPlugin(TBuffer &buf, void *obj) {
      ((::TBrowserPlugin*)obj)->::TBrowserPlugin::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBrowserPlugin

//______________________________________________________________________________
void TRootBrowser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootBrowser.

   TGMainFrame::Streamer(R__b);
   TBrowserImp::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootBrowser(void *p) {
      return  p ? new(p) ::TRootBrowser : new ::TRootBrowser;
   }
   static void *newArray_TRootBrowser(Long_t nElements, void *p) {
      return p ? new(p) ::TRootBrowser[nElements] : new ::TRootBrowser[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootBrowser(void *p) {
      delete (static_cast<::TRootBrowser*>(p));
   }
   static void deleteArray_TRootBrowser(void *p) {
      delete [] (static_cast<::TRootBrowser*>(p));
   }
   static void destruct_TRootBrowser(void *p) {
      typedef ::TRootBrowser current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootBrowser(TBuffer &buf, void *obj) {
      ((::TRootBrowser*)obj)->::TRootBrowser::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootBrowser

//______________________________________________________________________________
void TRootBrowserLite::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootBrowserLite.

   TGMainFrame::Streamer(R__b);
   TBrowserImp::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootBrowserLite(void *p) {
      return  p ? new(p) ::TRootBrowserLite : new ::TRootBrowserLite;
   }
   static void *newArray_TRootBrowserLite(Long_t nElements, void *p) {
      return p ? new(p) ::TRootBrowserLite[nElements] : new ::TRootBrowserLite[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootBrowserLite(void *p) {
      delete (static_cast<::TRootBrowserLite*>(p));
   }
   static void deleteArray_TRootBrowserLite(void *p) {
      delete [] (static_cast<::TRootBrowserLite*>(p));
   }
   static void destruct_TRootBrowserLite(void *p) {
      typedef ::TRootBrowserLite current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootBrowserLite(TBuffer &buf, void *obj) {
      ((::TRootBrowserLite*)obj)->::TRootBrowserLite::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootBrowserLite

//______________________________________________________________________________
void TRootCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootCanvas.

   TGMainFrame::Streamer(R__b);
   TCanvasImp::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootCanvas(void *p) {
      return  p ? new(p) ::TRootCanvas : new ::TRootCanvas;
   }
   static void *newArray_TRootCanvas(Long_t nElements, void *p) {
      return p ? new(p) ::TRootCanvas[nElements] : new ::TRootCanvas[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootCanvas(void *p) {
      delete (static_cast<::TRootCanvas*>(p));
   }
   static void deleteArray_TRootCanvas(void *p) {
      delete [] (static_cast<::TRootCanvas*>(p));
   }
   static void destruct_TRootCanvas(void *p) {
      typedef ::TRootCanvas current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootCanvas(TBuffer &buf, void *obj) {
      ((::TRootCanvas*)obj)->::TRootCanvas::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootCanvas

//______________________________________________________________________________
void TRootContextMenu::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootContextMenu.

   TGPopupMenu::Streamer(R__b);
   TContextMenuImp::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootContextMenu(void *p) {
      return  p ? new(p) ::TRootContextMenu : new ::TRootContextMenu;
   }
   static void *newArray_TRootContextMenu(Long_t nElements, void *p) {
      return p ? new(p) ::TRootContextMenu[nElements] : new ::TRootContextMenu[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootContextMenu(void *p) {
      delete (static_cast<::TRootContextMenu*>(p));
   }
   static void deleteArray_TRootContextMenu(void *p) {
      delete [] (static_cast<::TRootContextMenu*>(p));
   }
   static void destruct_TRootContextMenu(void *p) {
      typedef ::TRootContextMenu current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootContextMenu(TBuffer &buf, void *obj) {
      ((::TRootContextMenu*)obj)->::TRootContextMenu::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootContextMenu

//______________________________________________________________________________
void TRootControlBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootControlBar.

   TGMainFrame::Streamer(R__b);
   TControlBarImp::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootControlBar(void *p) {
      return  p ? new(p) ::TRootControlBar : new ::TRootControlBar;
   }
   static void *newArray_TRootControlBar(Long_t nElements, void *p) {
      return p ? new(p) ::TRootControlBar[nElements] : new ::TRootControlBar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootControlBar(void *p) {
      delete (static_cast<::TRootControlBar*>(p));
   }
   static void deleteArray_TRootControlBar(void *p) {
      delete [] (static_cast<::TRootControlBar*>(p));
   }
   static void destruct_TRootControlBar(void *p) {
      typedef ::TRootControlBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootControlBar(TBuffer &buf, void *obj) {
      ((::TRootControlBar*)obj)->::TRootControlBar::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootControlBar

//______________________________________________________________________________
void TRootDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootDialog(void *p) {
      return  p ? new(p) ::TRootDialog : new ::TRootDialog;
   }
   static void *newArray_TRootDialog(Long_t nElements, void *p) {
      return p ? new(p) ::TRootDialog[nElements] : new ::TRootDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootDialog(void *p) {
      delete (static_cast<::TRootDialog*>(p));
   }
   static void deleteArray_TRootDialog(void *p) {
      delete [] (static_cast<::TRootDialog*>(p));
   }
   static void destruct_TRootDialog(void *p) {
      typedef ::TRootDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootDialog(TBuffer &buf, void *obj) {
      ((::TRootDialog*)obj)->::TRootDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootDialog

//______________________________________________________________________________
void TRootEmbeddedCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootEmbeddedCanvas.

   TGCanvas::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootEmbeddedCanvas(void *p) {
      return  p ? new(p) ::TRootEmbeddedCanvas : new ::TRootEmbeddedCanvas;
   }
   static void *newArray_TRootEmbeddedCanvas(Long_t nElements, void *p) {
      return p ? new(p) ::TRootEmbeddedCanvas[nElements] : new ::TRootEmbeddedCanvas[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootEmbeddedCanvas(void *p) {
      delete (static_cast<::TRootEmbeddedCanvas*>(p));
   }
   static void deleteArray_TRootEmbeddedCanvas(void *p) {
      delete [] (static_cast<::TRootEmbeddedCanvas*>(p));
   }
   static void destruct_TRootEmbeddedCanvas(void *p) {
      typedef ::TRootEmbeddedCanvas current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootEmbeddedCanvas(TBuffer &buf, void *obj) {
      ((::TRootEmbeddedCanvas*)obj)->::TRootEmbeddedCanvas::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootEmbeddedCanvas

//______________________________________________________________________________
void TRootGuiFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootGuiFactory.

   TGuiFactory::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootGuiFactory(void *p) {
      return  p ? new(p) ::TRootGuiFactory : new ::TRootGuiFactory;
   }
   static void *newArray_TRootGuiFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TRootGuiFactory[nElements] : new ::TRootGuiFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootGuiFactory(void *p) {
      delete (static_cast<::TRootGuiFactory*>(p));
   }
   static void deleteArray_TRootGuiFactory(void *p) {
      delete [] (static_cast<::TRootGuiFactory*>(p));
   }
   static void destruct_TRootGuiFactory(void *p) {
      typedef ::TRootGuiFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootGuiFactory(TBuffer &buf, void *obj) {
      ((::TRootGuiFactory*)obj)->::TRootGuiFactory::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootGuiFactory

//______________________________________________________________________________
void TRootHelpDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootHelpDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootHelpDialog(void *p) {
      return  p ? new(p) ::TRootHelpDialog : new ::TRootHelpDialog;
   }
   static void *newArray_TRootHelpDialog(Long_t nElements, void *p) {
      return p ? new(p) ::TRootHelpDialog[nElements] : new ::TRootHelpDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootHelpDialog(void *p) {
      delete (static_cast<::TRootHelpDialog*>(p));
   }
   static void deleteArray_TRootHelpDialog(void *p) {
      delete [] (static_cast<::TRootHelpDialog*>(p));
   }
   static void destruct_TRootHelpDialog(void *p) {
      typedef ::TRootHelpDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootHelpDialog(TBuffer &buf, void *obj) {
      ((::TRootHelpDialog*)obj)->::TRootHelpDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootHelpDialog

//______________________________________________________________________________
void TVirtualDragManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualDragManager.

   ::Error("TVirtualDragManager::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TVirtualDragManager(void *p) {
      return  p ? new(p) ::TVirtualDragManager : new ::TVirtualDragManager;
   }
   static void *newArray_TVirtualDragManager(Long_t nElements, void *p) {
      return p ? new(p) ::TVirtualDragManager[nElements] : new ::TVirtualDragManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TVirtualDragManager(void *p) {
      delete (static_cast<::TVirtualDragManager*>(p));
   }
   static void deleteArray_TVirtualDragManager(void *p) {
      delete [] (static_cast<::TVirtualDragManager*>(p));
   }
   static void destruct_TVirtualDragManager(void *p) {
      typedef ::TVirtualDragManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TVirtualDragManager(TBuffer &buf, void *obj) {
      ((::TVirtualDragManager*)obj)->::TVirtualDragManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TVirtualDragManager

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGui() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGui) = RecordReadRules_libGui();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGui));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGui_Impl() {
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
      TROOT::RegisterModule("libGui",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGui_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGui_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGui() {
  TriggerDictionaryInitialization_libGui_Impl();
}
