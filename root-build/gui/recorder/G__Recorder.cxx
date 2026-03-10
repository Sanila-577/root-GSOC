// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Recorder
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
#include "TRecorder.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TRecEvent(void *p);
   static void deleteArray_TRecEvent(void *p);
   static void destruct_TRecEvent(void *p);
   static void streamer_TRecEvent(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecEvent*)
   {
      ::TRecEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecEvent", ::TRecEvent::Class_Version(), "TRecorder.h", 48,
                  typeid(::TRecEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecEvent::Dictionary, isa_proxy, 16,
                  sizeof(::TRecEvent) );
      instance.SetDelete(&delete_TRecEvent);
      instance.SetDeleteArray(&deleteArray_TRecEvent);
      instance.SetDestructor(&destruct_TRecEvent);
      instance.SetStreamerFunc(&streamer_TRecEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRecCmdEvent(void *p = nullptr);
   static void *newArray_TRecCmdEvent(Long_t size, void *p);
   static void delete_TRecCmdEvent(void *p);
   static void deleteArray_TRecCmdEvent(void *p);
   static void destruct_TRecCmdEvent(void *p);
   static void streamer_TRecCmdEvent(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecCmdEvent*)
   {
      ::TRecCmdEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecCmdEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecCmdEvent", ::TRecCmdEvent::Class_Version(), "TRecorder.h", 91,
                  typeid(::TRecCmdEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecCmdEvent::Dictionary, isa_proxy, 16,
                  sizeof(::TRecCmdEvent) );
      instance.SetNew(&new_TRecCmdEvent);
      instance.SetNewArray(&newArray_TRecCmdEvent);
      instance.SetDelete(&delete_TRecCmdEvent);
      instance.SetDeleteArray(&deleteArray_TRecCmdEvent);
      instance.SetDestructor(&destruct_TRecCmdEvent);
      instance.SetStreamerFunc(&streamer_TRecCmdEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecCmdEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecCmdEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecCmdEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRecExtraEvent(void *p = nullptr);
   static void *newArray_TRecExtraEvent(Long_t size, void *p);
   static void delete_TRecExtraEvent(void *p);
   static void deleteArray_TRecExtraEvent(void *p);
   static void destruct_TRecExtraEvent(void *p);
   static void streamer_TRecExtraEvent(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecExtraEvent*)
   {
      ::TRecExtraEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecExtraEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecExtraEvent", ::TRecExtraEvent::Class_Version(), "TRecorder.h", 136,
                  typeid(::TRecExtraEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecExtraEvent::Dictionary, isa_proxy, 16,
                  sizeof(::TRecExtraEvent) );
      instance.SetNew(&new_TRecExtraEvent);
      instance.SetNewArray(&newArray_TRecExtraEvent);
      instance.SetDelete(&delete_TRecExtraEvent);
      instance.SetDeleteArray(&deleteArray_TRecExtraEvent);
      instance.SetDestructor(&destruct_TRecExtraEvent);
      instance.SetStreamerFunc(&streamer_TRecExtraEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecExtraEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecExtraEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecExtraEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRecGuiEvent(void *p = nullptr);
   static void *newArray_TRecGuiEvent(Long_t size, void *p);
   static void delete_TRecGuiEvent(void *p);
   static void deleteArray_TRecGuiEvent(void *p);
   static void destruct_TRecGuiEvent(void *p);
   static void streamer_TRecGuiEvent(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecGuiEvent*)
   {
      ::TRecGuiEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecGuiEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecGuiEvent", ::TRecGuiEvent::Class_Version(), "TRecorder.h", 180,
                  typeid(::TRecGuiEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecGuiEvent::Dictionary, isa_proxy, 16,
                  sizeof(::TRecGuiEvent) );
      instance.SetNew(&new_TRecGuiEvent);
      instance.SetNewArray(&newArray_TRecGuiEvent);
      instance.SetDelete(&delete_TRecGuiEvent);
      instance.SetDeleteArray(&deleteArray_TRecGuiEvent);
      instance.SetDestructor(&destruct_TRecGuiEvent);
      instance.SetStreamerFunc(&streamer_TRecGuiEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecGuiEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecGuiEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecGuiEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TRecWinPair(void *p);
   static void deleteArray_TRecWinPair(void *p);
   static void destruct_TRecWinPair(void *p);
   static void streamer_TRecWinPair(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecWinPair*)
   {
      ::TRecWinPair *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecWinPair >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecWinPair", ::TRecWinPair::Class_Version(), "TRecorder.h", 249,
                  typeid(::TRecWinPair), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecWinPair::Dictionary, isa_proxy, 16,
                  sizeof(::TRecWinPair) );
      instance.SetDelete(&delete_TRecWinPair);
      instance.SetDeleteArray(&deleteArray_TRecWinPair);
      instance.SetDestructor(&destruct_TRecWinPair);
      instance.SetStreamerFunc(&streamer_TRecWinPair);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecWinPair*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecWinPair*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecWinPair*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRecorder(void *p = nullptr);
   static void *newArray_TRecorder(Long_t size, void *p);
   static void delete_TRecorder(void *p);
   static void deleteArray_TRecorder(void *p);
   static void destruct_TRecorder(void *p);
   static void streamer_TRecorder(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecorder*)
   {
      ::TRecorder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecorder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecorder", ::TRecorder::Class_Version(), "TRecorder.h", 265,
                  typeid(::TRecorder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecorder::Dictionary, isa_proxy, 16,
                  sizeof(::TRecorder) );
      instance.SetNew(&new_TRecorder);
      instance.SetNewArray(&newArray_TRecorder);
      instance.SetDelete(&delete_TRecorder);
      instance.SetDeleteArray(&deleteArray_TRecorder);
      instance.SetDestructor(&destruct_TRecorder);
      instance.SetStreamerFunc(&streamer_TRecorder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecorder*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecorder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecorder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TRecorderState(void *p);
   static void deleteArray_TRecorderState(void *p);
   static void destruct_TRecorderState(void *p);
   static void streamer_TRecorderState(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecorderState*)
   {
      ::TRecorderState *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecorderState >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecorderState", ::TRecorderState::Class_Version(), "TRecorder.h", 360,
                  typeid(::TRecorderState), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecorderState::Dictionary, isa_proxy, 16,
                  sizeof(::TRecorderState) );
      instance.SetDelete(&delete_TRecorderState);
      instance.SetDeleteArray(&deleteArray_TRecorderState);
      instance.SetDestructor(&destruct_TRecorderState);
      instance.SetStreamerFunc(&streamer_TRecorderState);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecorderState*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecorderState*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecorderState*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void streamer_TRecorderReplaying(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecorderReplaying*)
   {
      ::TRecorderReplaying *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecorderReplaying >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecorderReplaying", ::TRecorderReplaying::Class_Version(), "TRecorder.h", 395,
                  typeid(::TRecorderReplaying), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecorderReplaying::Dictionary, isa_proxy, 16,
                  sizeof(::TRecorderReplaying) );
      instance.SetStreamerFunc(&streamer_TRecorderReplaying);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecorderReplaying*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecorderReplaying*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecorderReplaying*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void streamer_TRecorderRecording(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecorderRecording*)
   {
      ::TRecorderRecording *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecorderRecording >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecorderRecording", ::TRecorderRecording::Class_Version(), "TRecorder.h", 487,
                  typeid(::TRecorderRecording), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecorderRecording::Dictionary, isa_proxy, 16,
                  sizeof(::TRecorderRecording) );
      instance.SetStreamerFunc(&streamer_TRecorderRecording);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecorderRecording*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecorderRecording*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecorderRecording*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRecorderInactive(void *p = nullptr);
   static void *newArray_TRecorderInactive(Long_t size, void *p);
   static void delete_TRecorderInactive(void *p);
   static void deleteArray_TRecorderInactive(void *p);
   static void destruct_TRecorderInactive(void *p);
   static void streamer_TRecorderInactive(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecorderInactive*)
   {
      ::TRecorderInactive *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecorderInactive >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecorderInactive", ::TRecorderInactive::Class_Version(), "TRecorder.h", 563,
                  typeid(::TRecorderInactive), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecorderInactive::Dictionary, isa_proxy, 16,
                  sizeof(::TRecorderInactive) );
      instance.SetNew(&new_TRecorderInactive);
      instance.SetNewArray(&newArray_TRecorderInactive);
      instance.SetDelete(&delete_TRecorderInactive);
      instance.SetDeleteArray(&deleteArray_TRecorderInactive);
      instance.SetDestructor(&destruct_TRecorderInactive);
      instance.SetStreamerFunc(&streamer_TRecorderInactive);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecorderInactive*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecorderInactive*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecorderInactive*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void streamer_TRecorderPaused(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecorderPaused*)
   {
      ::TRecorderPaused *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecorderPaused >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecorderPaused", ::TRecorderPaused::Class_Version(), "TRecorder.h", 602,
                  typeid(::TRecorderPaused), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecorderPaused::Dictionary, isa_proxy, 16,
                  sizeof(::TRecorderPaused) );
      instance.SetStreamerFunc(&streamer_TRecorderPaused);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecorderPaused*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecorderPaused*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecorderPaused*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGRecorder(void *p = nullptr);
   static void *newArray_TGRecorder(Long_t size, void *p);
   static void delete_TGRecorder(void *p);
   static void deleteArray_TGRecorder(void *p);
   static void destruct_TGRecorder(void *p);
   static void streamer_TGRecorder(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGRecorder*)
   {
      ::TGRecorder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGRecorder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGRecorder", ::TGRecorder::Class_Version(), "TRecorder.h", 630,
                  typeid(::TGRecorder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGRecorder::Dictionary, isa_proxy, 16,
                  sizeof(::TGRecorder) );
      instance.SetNew(&new_TGRecorder);
      instance.SetNewArray(&newArray_TGRecorder);
      instance.SetDelete(&delete_TGRecorder);
      instance.SetDeleteArray(&deleteArray_TGRecorder);
      instance.SetDestructor(&destruct_TGRecorder);
      instance.SetStreamerFunc(&streamer_TGRecorder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGRecorder*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGRecorder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGRecorder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TRecEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecEvent::Class_Name()
{
   return "TRecEvent";
}

//______________________________________________________________________________
const char *TRecEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecCmdEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecCmdEvent::Class_Name()
{
   return "TRecCmdEvent";
}

//______________________________________________________________________________
const char *TRecCmdEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecCmdEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecCmdEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecCmdEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecCmdEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecCmdEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecCmdEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecCmdEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecExtraEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecExtraEvent::Class_Name()
{
   return "TRecExtraEvent";
}

//______________________________________________________________________________
const char *TRecExtraEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecExtraEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecExtraEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecExtraEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecExtraEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecExtraEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecExtraEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecExtraEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecGuiEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecGuiEvent::Class_Name()
{
   return "TRecGuiEvent";
}

//______________________________________________________________________________
const char *TRecGuiEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecGuiEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecGuiEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecGuiEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecGuiEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecGuiEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecGuiEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecGuiEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecWinPair::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecWinPair::Class_Name()
{
   return "TRecWinPair";
}

//______________________________________________________________________________
const char *TRecWinPair::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecWinPair*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecWinPair::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecWinPair*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecWinPair::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecWinPair*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecWinPair::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecWinPair*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecorder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecorder::Class_Name()
{
   return "TRecorder";
}

//______________________________________________________________________________
const char *TRecorder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecorder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecorder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecorder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecorder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecorder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecorder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecorder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecorderState::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecorderState::Class_Name()
{
   return "TRecorderState";
}

//______________________________________________________________________________
const char *TRecorderState::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecorderState*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecorderState::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecorderState*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecorderState::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecorderState*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecorderState::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecorderState*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecorderReplaying::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecorderReplaying::Class_Name()
{
   return "TRecorderReplaying";
}

//______________________________________________________________________________
const char *TRecorderReplaying::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecorderReplaying*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecorderReplaying::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecorderReplaying*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecorderReplaying::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecorderReplaying*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecorderReplaying::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecorderReplaying*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecorderRecording::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecorderRecording::Class_Name()
{
   return "TRecorderRecording";
}

//______________________________________________________________________________
const char *TRecorderRecording::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecorderRecording*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecorderRecording::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecorderRecording*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecorderRecording::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecorderRecording*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecorderRecording::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecorderRecording*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecorderInactive::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecorderInactive::Class_Name()
{
   return "TRecorderInactive";
}

//______________________________________________________________________________
const char *TRecorderInactive::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecorderInactive*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecorderInactive::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecorderInactive*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecorderInactive::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecorderInactive*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecorderInactive::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecorderInactive*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecorderPaused::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecorderPaused::Class_Name()
{
   return "TRecorderPaused";
}

//______________________________________________________________________________
const char *TRecorderPaused::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecorderPaused*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecorderPaused::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecorderPaused*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecorderPaused::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecorderPaused*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecorderPaused::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecorderPaused*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGRecorder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGRecorder::Class_Name()
{
   return "TGRecorder";
}

//______________________________________________________________________________
const char *TGRecorder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRecorder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGRecorder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGRecorder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGRecorder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRecorder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGRecorder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGRecorder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TRecEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecEvent.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      fEventTime.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TRecEvent::IsA());
   } else {
      R__c = R__b.WriteVersion(TRecEvent::IsA(), kTRUE);
      TObject::Streamer(R__b);
      fEventTime.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TRecEvent(void *p) {
      delete (static_cast<::TRecEvent*>(p));
   }
   static void deleteArray_TRecEvent(void *p) {
      delete [] (static_cast<::TRecEvent*>(p));
   }
   static void destruct_TRecEvent(void *p) {
      typedef ::TRecEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRecEvent(TBuffer &buf, void *obj) {
      ((::TRecEvent*)obj)->::TRecEvent::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRecEvent

//______________________________________________________________________________
void TRecCmdEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecCmdEvent.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TRecEvent::Streamer(R__b);
      fText.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TRecCmdEvent::IsA());
   } else {
      R__c = R__b.WriteVersion(TRecCmdEvent::IsA(), kTRUE);
      TRecEvent::Streamer(R__b);
      fText.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRecCmdEvent(void *p) {
      return  p ? new(p) ::TRecCmdEvent : new ::TRecCmdEvent;
   }
   static void *newArray_TRecCmdEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TRecCmdEvent[nElements] : new ::TRecCmdEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRecCmdEvent(void *p) {
      delete (static_cast<::TRecCmdEvent*>(p));
   }
   static void deleteArray_TRecCmdEvent(void *p) {
      delete [] (static_cast<::TRecCmdEvent*>(p));
   }
   static void destruct_TRecCmdEvent(void *p) {
      typedef ::TRecCmdEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRecCmdEvent(TBuffer &buf, void *obj) {
      ((::TRecCmdEvent*)obj)->::TRecCmdEvent::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRecCmdEvent

//______________________________________________________________________________
void TRecExtraEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecExtraEvent.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TRecEvent::Streamer(R__b);
      fText.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TRecExtraEvent::IsA());
   } else {
      R__c = R__b.WriteVersion(TRecExtraEvent::IsA(), kTRUE);
      TRecEvent::Streamer(R__b);
      fText.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRecExtraEvent(void *p) {
      return  p ? new(p) ::TRecExtraEvent : new ::TRecExtraEvent;
   }
   static void *newArray_TRecExtraEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TRecExtraEvent[nElements] : new ::TRecExtraEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRecExtraEvent(void *p) {
      delete (static_cast<::TRecExtraEvent*>(p));
   }
   static void deleteArray_TRecExtraEvent(void *p) {
      delete [] (static_cast<::TRecExtraEvent*>(p));
   }
   static void destruct_TRecExtraEvent(void *p) {
      typedef ::TRecExtraEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRecExtraEvent(TBuffer &buf, void *obj) {
      ((::TRecExtraEvent*)obj)->::TRecExtraEvent::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRecExtraEvent

//______________________________________________________________________________
void TRecGuiEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecGuiEvent.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TRecEvent::Streamer(R__b);
      void *ptr_fType = (void*)&fType;
      R__b >> *reinterpret_cast<Int_t*>(ptr_fType);
      R__b >> fWindow;
      R__b >> fTime;
      R__b >> fX;
      R__b >> fY;
      R__b >> fXRoot;
      R__b >> fYRoot;
      R__b >> fCode;
      R__b >> fState;
      R__b >> fWidth;
      R__b >> fHeight;
      R__b >> fCount;
      R__b >> fSendEvent;
      R__b >> fHandle;
      R__b >> fFormat;
      R__b.ReadStaticArray((long*)fUser);
      R__b >> fMasked;
      R__b.CheckByteCount(R__s, R__c, TRecGuiEvent::IsA());
   } else {
      R__c = R__b.WriteVersion(TRecGuiEvent::IsA(), kTRUE);
      TRecEvent::Streamer(R__b);
      R__b << (Int_t)fType;
      R__b << fWindow;
      R__b << fTime;
      R__b << fX;
      R__b << fY;
      R__b << fXRoot;
      R__b << fYRoot;
      R__b << fCode;
      R__b << fState;
      R__b << fWidth;
      R__b << fHeight;
      R__b << fCount;
      R__b << fSendEvent;
      R__b << fHandle;
      R__b << fFormat;
      R__b.WriteArray(fUser, 5);
      R__b << fMasked;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRecGuiEvent(void *p) {
      return  p ? new(p) ::TRecGuiEvent : new ::TRecGuiEvent;
   }
   static void *newArray_TRecGuiEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TRecGuiEvent[nElements] : new ::TRecGuiEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRecGuiEvent(void *p) {
      delete (static_cast<::TRecGuiEvent*>(p));
   }
   static void deleteArray_TRecGuiEvent(void *p) {
      delete [] (static_cast<::TRecGuiEvent*>(p));
   }
   static void destruct_TRecGuiEvent(void *p) {
      typedef ::TRecGuiEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRecGuiEvent(TBuffer &buf, void *obj) {
      ((::TRecGuiEvent*)obj)->::TRecGuiEvent::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRecGuiEvent

//______________________________________________________________________________
void TRecWinPair::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecWinPair.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fKey;
      R__b >> fValue;
      R__b.CheckByteCount(R__s, R__c, TRecWinPair::IsA());
   } else {
      R__c = R__b.WriteVersion(TRecWinPair::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fKey;
      R__b << fValue;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TRecWinPair(void *p) {
      delete (static_cast<::TRecWinPair*>(p));
   }
   static void deleteArray_TRecWinPair(void *p) {
      delete [] (static_cast<::TRecWinPair*>(p));
   }
   static void destruct_TRecWinPair(void *p) {
      typedef ::TRecWinPair current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRecWinPair(TBuffer &buf, void *obj) {
      ((::TRecWinPair*)obj)->::TRecWinPair::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRecWinPair

//______________________________________________________________________________
void TRecorder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecorder.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      fFilename.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TRecorder::IsA());
   } else {
      R__c = R__b.WriteVersion(TRecorder::IsA(), kTRUE);
      TObject::Streamer(R__b);
      fFilename.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRecorder(void *p) {
      return  p ? new(p) ::TRecorder : new ::TRecorder;
   }
   static void *newArray_TRecorder(Long_t nElements, void *p) {
      return p ? new(p) ::TRecorder[nElements] : new ::TRecorder[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRecorder(void *p) {
      delete (static_cast<::TRecorder*>(p));
   }
   static void deleteArray_TRecorder(void *p) {
      delete [] (static_cast<::TRecorder*>(p));
   }
   static void destruct_TRecorder(void *p) {
      typedef ::TRecorder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRecorder(TBuffer &buf, void *obj) {
      ((::TRecorder*)obj)->::TRecorder::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRecorder

//______________________________________________________________________________
void TRecorderState::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecorderState.

   ::Error("TRecorderState::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TRecorderState(void *p) {
      delete (static_cast<::TRecorderState*>(p));
   }
   static void deleteArray_TRecorderState(void *p) {
      delete [] (static_cast<::TRecorderState*>(p));
   }
   static void destruct_TRecorderState(void *p) {
      typedef ::TRecorderState current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRecorderState(TBuffer &buf, void *obj) {
      ((::TRecorderState*)obj)->::TRecorderState::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRecorderState

//______________________________________________________________________________
void TRecorderReplaying::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecorderReplaying.

   TRecorderState::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around a custom streamer member function.
   static void streamer_TRecorderReplaying(TBuffer &buf, void *obj) {
      ((::TRecorderReplaying*)obj)->::TRecorderReplaying::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRecorderReplaying

//______________________________________________________________________________
void TRecorderRecording::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecorderRecording.

   TRecorderState::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around a custom streamer member function.
   static void streamer_TRecorderRecording(TBuffer &buf, void *obj) {
      ((::TRecorderRecording*)obj)->::TRecorderRecording::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRecorderRecording

//______________________________________________________________________________
void TRecorderInactive::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecorderInactive.

   TRecorderState::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRecorderInactive(void *p) {
      return  p ? new(p) ::TRecorderInactive : new ::TRecorderInactive;
   }
   static void *newArray_TRecorderInactive(Long_t nElements, void *p) {
      return p ? new(p) ::TRecorderInactive[nElements] : new ::TRecorderInactive[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRecorderInactive(void *p) {
      delete (static_cast<::TRecorderInactive*>(p));
   }
   static void deleteArray_TRecorderInactive(void *p) {
      delete [] (static_cast<::TRecorderInactive*>(p));
   }
   static void destruct_TRecorderInactive(void *p) {
      typedef ::TRecorderInactive current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRecorderInactive(TBuffer &buf, void *obj) {
      ((::TRecorderInactive*)obj)->::TRecorderInactive::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRecorderInactive

//______________________________________________________________________________
void TRecorderPaused::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecorderPaused.

   TRecorderState::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around a custom streamer member function.
   static void streamer_TRecorderPaused(TBuffer &buf, void *obj) {
      ((::TRecorderPaused*)obj)->::TRecorderPaused::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRecorderPaused

//______________________________________________________________________________
void TGRecorder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGRecorder.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGRecorder(void *p) {
      return  p ? new(p) ::TGRecorder : new ::TGRecorder;
   }
   static void *newArray_TGRecorder(Long_t nElements, void *p) {
      return p ? new(p) ::TGRecorder[nElements] : new ::TGRecorder[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGRecorder(void *p) {
      delete (static_cast<::TGRecorder*>(p));
   }
   static void deleteArray_TGRecorder(void *p) {
      delete [] (static_cast<::TGRecorder*>(p));
   }
   static void destruct_TGRecorder(void *p) {
      typedef ::TGRecorder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGRecorder(TBuffer &buf, void *obj) {
      ((::TGRecorder*)obj)->::TGRecorder::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGRecorder

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libRecorder() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libRecorder) = RecordReadRules_libRecorder();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libRecorder));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libRecorder_Impl() {
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
      TROOT::RegisterModule("libRecorder",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRecorder_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRecorder_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRecorder() {
  TriggerDictionaryInitialization_libRecorder_Impl();
}
