// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__XMLIO
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
#include "TBufferXML.h"
#include "TKeyXML.h"
#include "TXMLEngine.h"
#include "TXMLFile.h"
#include "TXMLPlayer.h"
#include "TXMLSetup.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TXMLSetup(void *p = nullptr);
   static void *newArray_TXMLSetup(Long_t size, void *p);
   static void delete_TXMLSetup(void *p);
   static void deleteArray_TXMLSetup(void *p);
   static void destruct_TXMLSetup(void *p);
   static void streamer_TXMLSetup(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXMLSetup*)
   {
      ::TXMLSetup *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXMLSetup >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TXMLSetup", ::TXMLSetup::Class_Version(), "TXMLSetup.h", 82,
                  typeid(::TXMLSetup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXMLSetup::Dictionary, isa_proxy, 16,
                  sizeof(::TXMLSetup) );
      instance.SetNew(&new_TXMLSetup);
      instance.SetNewArray(&newArray_TXMLSetup);
      instance.SetDelete(&delete_TXMLSetup);
      instance.SetDeleteArray(&deleteArray_TXMLSetup);
      instance.SetDestructor(&destruct_TXMLSetup);
      instance.SetStreamerFunc(&streamer_TXMLSetup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXMLSetup*)
   {
      return GenerateInitInstanceLocal(static_cast<::TXMLSetup*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TXMLSetup*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TXMLEngine(void *p = nullptr);
   static void *newArray_TXMLEngine(Long_t size, void *p);
   static void delete_TXMLEngine(void *p);
   static void deleteArray_TXMLEngine(void *p);
   static void destruct_TXMLEngine(void *p);
   static void streamer_TXMLEngine(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXMLEngine*)
   {
      ::TXMLEngine *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXMLEngine >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TXMLEngine", ::TXMLEngine::Class_Version(), "TXMLEngine.h", 26,
                  typeid(::TXMLEngine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXMLEngine::Dictionary, isa_proxy, 16,
                  sizeof(::TXMLEngine) );
      instance.SetNew(&new_TXMLEngine);
      instance.SetNewArray(&newArray_TXMLEngine);
      instance.SetDelete(&delete_TXMLEngine);
      instance.SetDeleteArray(&deleteArray_TXMLEngine);
      instance.SetDestructor(&destruct_TXMLEngine);
      instance.SetStreamerFunc(&streamer_TXMLEngine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXMLEngine*)
   {
      return GenerateInitInstanceLocal(static_cast<::TXMLEngine*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TXMLEngine*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TBufferXML(void *p);
   static void deleteArray_TBufferXML(void *p);
   static void destruct_TBufferXML(void *p);
   static void streamer_TBufferXML(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBufferXML*)
   {
      ::TBufferXML *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBufferXML >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TBufferXML", ::TBufferXML::Class_Version(), "TBufferXML.h", 33,
                  typeid(::TBufferXML), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBufferXML::Dictionary, isa_proxy, 16,
                  sizeof(::TBufferXML) );
      instance.SetDelete(&delete_TBufferXML);
      instance.SetDeleteArray(&deleteArray_TBufferXML);
      instance.SetDestructor(&destruct_TBufferXML);
      instance.SetStreamerFunc(&streamer_TBufferXML);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBufferXML*)
   {
      return GenerateInitInstanceLocal(static_cast<::TBufferXML*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TBufferXML*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TKeyXML(void *p);
   static void deleteArray_TKeyXML(void *p);
   static void destruct_TKeyXML(void *p);
   static void streamer_TKeyXML(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TKeyXML*)
   {
      ::TKeyXML *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TKeyXML >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TKeyXML", ::TKeyXML::Class_Version(), "TKeyXML.h", 20,
                  typeid(::TKeyXML), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TKeyXML::Dictionary, isa_proxy, 16,
                  sizeof(::TKeyXML) );
      instance.SetDelete(&delete_TKeyXML);
      instance.SetDeleteArray(&deleteArray_TKeyXML);
      instance.SetDestructor(&destruct_TKeyXML);
      instance.SetStreamerFunc(&streamer_TKeyXML);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TKeyXML*)
   {
      return GenerateInitInstanceLocal(static_cast<::TKeyXML*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TKeyXML*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TXMLFile(void *p = nullptr);
   static void *newArray_TXMLFile(Long_t size, void *p);
   static void delete_TXMLFile(void *p);
   static void deleteArray_TXMLFile(void *p);
   static void destruct_TXMLFile(void *p);
   static void streamer_TXMLFile(TBuffer &buf, void *obj);
   static void reset_TXMLFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXMLFile*)
   {
      ::TXMLFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXMLFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TXMLFile", ::TXMLFile::Class_Version(), "TXMLFile.h", 25,
                  typeid(::TXMLFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXMLFile::Dictionary, isa_proxy, 16,
                  sizeof(::TXMLFile) );
      instance.SetNew(&new_TXMLFile);
      instance.SetNewArray(&newArray_TXMLFile);
      instance.SetDelete(&delete_TXMLFile);
      instance.SetDeleteArray(&deleteArray_TXMLFile);
      instance.SetDestructor(&destruct_TXMLFile);
      instance.SetStreamerFunc(&streamer_TXMLFile);
      instance.SetResetAfterMerge(&reset_TXMLFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXMLFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TXMLFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TXMLFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TXMLPlayer(void *p = nullptr);
   static void *newArray_TXMLPlayer(Long_t size, void *p);
   static void delete_TXMLPlayer(void *p);
   static void deleteArray_TXMLPlayer(void *p);
   static void destruct_TXMLPlayer(void *p);
   static void streamer_TXMLPlayer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXMLPlayer*)
   {
      ::TXMLPlayer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXMLPlayer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TXMLPlayer", ::TXMLPlayer::Class_Version(), "TXMLPlayer.h", 25,
                  typeid(::TXMLPlayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXMLPlayer::Dictionary, isa_proxy, 16,
                  sizeof(::TXMLPlayer) );
      instance.SetNew(&new_TXMLPlayer);
      instance.SetNewArray(&newArray_TXMLPlayer);
      instance.SetDelete(&delete_TXMLPlayer);
      instance.SetDeleteArray(&deleteArray_TXMLPlayer);
      instance.SetDestructor(&destruct_TXMLPlayer);
      instance.SetStreamerFunc(&streamer_TXMLPlayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXMLPlayer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TXMLPlayer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TXMLPlayer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TXMLSetup::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TXMLSetup::Class_Name()
{
   return "TXMLSetup";
}

//______________________________________________________________________________
const char *TXMLSetup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLSetup*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TXMLSetup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLSetup*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXMLSetup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLSetup*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXMLSetup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLSetup*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TXMLEngine::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TXMLEngine::Class_Name()
{
   return "TXMLEngine";
}

//______________________________________________________________________________
const char *TXMLEngine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLEngine*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TXMLEngine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLEngine*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXMLEngine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLEngine*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXMLEngine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLEngine*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBufferXML::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferXML::Class_Name()
{
   return "TBufferXML";
}

//______________________________________________________________________________
const char *TBufferXML::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferXML*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferXML::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferXML*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferXML::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferXML*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferXML::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferXML*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TKeyXML::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TKeyXML::Class_Name()
{
   return "TKeyXML";
}

//______________________________________________________________________________
const char *TKeyXML::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKeyXML*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TKeyXML::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKeyXML*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TKeyXML::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKeyXML*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TKeyXML::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKeyXML*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TXMLFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TXMLFile::Class_Name()
{
   return "TXMLFile";
}

//______________________________________________________________________________
const char *TXMLFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TXMLFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXMLFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXMLFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TXMLPlayer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TXMLPlayer::Class_Name()
{
   return "TXMLPlayer";
}

//______________________________________________________________________________
const char *TXMLPlayer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLPlayer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TXMLPlayer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLPlayer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXMLPlayer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLPlayer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXMLPlayer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLPlayer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TXMLSetup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXMLSetup.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      void *ptr_fXmlLayout = (void*)&fXmlLayout;
      R__b >> *reinterpret_cast<Int_t*>(ptr_fXmlLayout);
      R__b >> fStoreStreamerInfos;
      R__b >> fUseDtd;
      R__b >> fUseNamespaces;
      R__b.CheckByteCount(R__s, R__c, TXMLSetup::IsA());
   } else {
      R__c = R__b.WriteVersion(TXMLSetup::IsA(), kTRUE);
      R__b << (Int_t)fXmlLayout;
      R__b << fStoreStreamerInfos;
      R__b << fUseDtd;
      R__b << fUseNamespaces;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TXMLSetup(void *p) {
      return  p ? new(p) ::TXMLSetup : new ::TXMLSetup;
   }
   static void *newArray_TXMLSetup(Long_t nElements, void *p) {
      return p ? new(p) ::TXMLSetup[nElements] : new ::TXMLSetup[nElements];
   }
   // Wrapper around operator delete
   static void delete_TXMLSetup(void *p) {
      delete (static_cast<::TXMLSetup*>(p));
   }
   static void deleteArray_TXMLSetup(void *p) {
      delete [] (static_cast<::TXMLSetup*>(p));
   }
   static void destruct_TXMLSetup(void *p) {
      typedef ::TXMLSetup current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXMLSetup(TBuffer &buf, void *obj) {
      ((::TXMLSetup*)obj)->::TXMLSetup::Streamer(buf);
   }
} // end of namespace ROOT for class ::TXMLSetup

//______________________________________________________________________________
void TXMLEngine::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXMLEngine.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TXMLEngine::IsA());
   } else {
      R__c = R__b.WriteVersion(TXMLEngine::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TXMLEngine(void *p) {
      return  p ? new(p) ::TXMLEngine : new ::TXMLEngine;
   }
   static void *newArray_TXMLEngine(Long_t nElements, void *p) {
      return p ? new(p) ::TXMLEngine[nElements] : new ::TXMLEngine[nElements];
   }
   // Wrapper around operator delete
   static void delete_TXMLEngine(void *p) {
      delete (static_cast<::TXMLEngine*>(p));
   }
   static void deleteArray_TXMLEngine(void *p) {
      delete [] (static_cast<::TXMLEngine*>(p));
   }
   static void destruct_TXMLEngine(void *p) {
      typedef ::TXMLEngine current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXMLEngine(TBuffer &buf, void *obj) {
      ((::TXMLEngine*)obj)->::TXMLEngine::Streamer(buf);
   }
} // end of namespace ROOT for class ::TXMLEngine

//______________________________________________________________________________
void TBufferXML::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBufferXML.

   TBufferText::Streamer(R__b);
   TXMLSetup::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TBufferXML(void *p) {
      delete (static_cast<::TBufferXML*>(p));
   }
   static void deleteArray_TBufferXML(void *p) {
      delete [] (static_cast<::TBufferXML*>(p));
   }
   static void destruct_TBufferXML(void *p) {
      typedef ::TBufferXML current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBufferXML(TBuffer &buf, void *obj) {
      ((::TBufferXML*)obj)->::TBufferXML::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBufferXML

//______________________________________________________________________________
void TKeyXML::Streamer(TBuffer &R__b)
{
   // Stream an object of class TKeyXML.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TKey::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TKeyXML::IsA());
   } else {
      R__c = R__b.WriteVersion(TKeyXML::IsA(), kTRUE);
      TKey::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TKeyXML(void *p) {
      delete (static_cast<::TKeyXML*>(p));
   }
   static void deleteArray_TKeyXML(void *p) {
      delete [] (static_cast<::TKeyXML*>(p));
   }
   static void destruct_TKeyXML(void *p) {
      typedef ::TKeyXML current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TKeyXML(TBuffer &buf, void *obj) {
      ((::TKeyXML*)obj)->::TKeyXML::Streamer(buf);
   }
} // end of namespace ROOT for class ::TKeyXML

//______________________________________________________________________________
void TXMLFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXMLFile.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TFile::Streamer(R__b);
      TXMLSetup::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TXMLFile::IsA());
   } else {
      R__c = R__b.WriteVersion(TXMLFile::IsA(), kTRUE);
      TFile::Streamer(R__b);
      TXMLSetup::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TXMLFile(void *p) {
      return  p ? new(p) ::TXMLFile : new ::TXMLFile;
   }
   static void *newArray_TXMLFile(Long_t nElements, void *p) {
      return p ? new(p) ::TXMLFile[nElements] : new ::TXMLFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TXMLFile(void *p) {
      delete (static_cast<::TXMLFile*>(p));
   }
   static void deleteArray_TXMLFile(void *p) {
      delete [] (static_cast<::TXMLFile*>(p));
   }
   static void destruct_TXMLFile(void *p) {
      typedef ::TXMLFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXMLFile(TBuffer &buf, void *obj) {
      ((::TXMLFile*)obj)->::TXMLFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TXMLFile(void *obj,TFileMergeInfo *info) {
      ((::TXMLFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TXMLFile

//______________________________________________________________________________
void TXMLPlayer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXMLPlayer.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TXMLPlayer::IsA());
   } else {
      R__c = R__b.WriteVersion(TXMLPlayer::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TXMLPlayer(void *p) {
      return  p ? new(p) ::TXMLPlayer : new ::TXMLPlayer;
   }
   static void *newArray_TXMLPlayer(Long_t nElements, void *p) {
      return p ? new(p) ::TXMLPlayer[nElements] : new ::TXMLPlayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TXMLPlayer(void *p) {
      delete (static_cast<::TXMLPlayer*>(p));
   }
   static void deleteArray_TXMLPlayer(void *p) {
      delete [] (static_cast<::TXMLPlayer*>(p));
   }
   static void destruct_TXMLPlayer(void *p) {
      typedef ::TXMLPlayer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXMLPlayer(TBuffer &buf, void *obj) {
      ((::TXMLPlayer*)obj)->::TXMLPlayer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TXMLPlayer

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libXMLIO() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libXMLIO) = RecordReadRules_libXMLIO();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libXMLIO));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libXMLIO_Impl() {
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
      TROOT::RegisterModule("libXMLIO",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libXMLIO_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libXMLIO_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libXMLIO() {
  TriggerDictionaryInitialization_libXMLIO_Impl();
}
