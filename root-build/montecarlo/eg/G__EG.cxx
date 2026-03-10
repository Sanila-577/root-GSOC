// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__EG
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
#include "TAttParticle.h"
#include "TDatabasePDG.h"
#include "TDecayChannel.h"
#include "TGenerator.h"
#include "TPDGCode.h"
#include "TParticleClassPDG.h"
#include "TParticle.h"
#include "TParticlePDG.h"
#include "TPrimary.h"
#include "TVirtualMCDecayer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TAttParticle(void *p = nullptr);
   static void *newArray_TAttParticle(Long_t size, void *p);
   static void delete_TAttParticle(void *p);
   static void deleteArray_TAttParticle(void *p);
   static void destruct_TAttParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAttParticle*)
   {
      ::TAttParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAttParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAttParticle", ::TAttParticle::Class_Version(), "TAttParticle.h", 30,
                  typeid(::TAttParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAttParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TAttParticle) );
      instance.SetNew(&new_TAttParticle);
      instance.SetNewArray(&newArray_TAttParticle);
      instance.SetDelete(&delete_TAttParticle);
      instance.SetDeleteArray(&deleteArray_TAttParticle);
      instance.SetDestructor(&destruct_TAttParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAttParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAttParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAttParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TParticlePDG(void *p = nullptr);
   static void *newArray_TParticlePDG(Long_t size, void *p);
   static void delete_TParticlePDG(void *p);
   static void deleteArray_TParticlePDG(void *p);
   static void destruct_TParticlePDG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TParticlePDG*)
   {
      ::TParticlePDG *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TParticlePDG >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TParticlePDG", ::TParticlePDG::Class_Version(), "TParticlePDG.h", 19,
                  typeid(::TParticlePDG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TParticlePDG::Dictionary, isa_proxy, 4,
                  sizeof(::TParticlePDG) );
      instance.SetNew(&new_TParticlePDG);
      instance.SetNewArray(&newArray_TParticlePDG);
      instance.SetDelete(&delete_TParticlePDG);
      instance.SetDeleteArray(&deleteArray_TParticlePDG);
      instance.SetDestructor(&destruct_TParticlePDG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TParticlePDG*)
   {
      return GenerateInitInstanceLocal(static_cast<::TParticlePDG*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TParticlePDG*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TParticleClassPDG(void *p = nullptr);
   static void *newArray_TParticleClassPDG(Long_t size, void *p);
   static void delete_TParticleClassPDG(void *p);
   static void deleteArray_TParticleClassPDG(void *p);
   static void destruct_TParticleClassPDG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TParticleClassPDG*)
   {
      ::TParticleClassPDG *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TParticleClassPDG >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TParticleClassPDG", ::TParticleClassPDG::Class_Version(), "TParticleClassPDG.h", 19,
                  typeid(::TParticleClassPDG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TParticleClassPDG::Dictionary, isa_proxy, 4,
                  sizeof(::TParticleClassPDG) );
      instance.SetNew(&new_TParticleClassPDG);
      instance.SetNewArray(&newArray_TParticleClassPDG);
      instance.SetDelete(&delete_TParticleClassPDG);
      instance.SetDeleteArray(&deleteArray_TParticleClassPDG);
      instance.SetDestructor(&destruct_TParticleClassPDG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TParticleClassPDG*)
   {
      return GenerateInitInstanceLocal(static_cast<::TParticleClassPDG*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TParticleClassPDG*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDatabasePDG(void *p = nullptr);
   static void *newArray_TDatabasePDG(Long_t size, void *p);
   static void delete_TDatabasePDG(void *p);
   static void deleteArray_TDatabasePDG(void *p);
   static void destruct_TDatabasePDG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDatabasePDG*)
   {
      ::TDatabasePDG *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDatabasePDG >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDatabasePDG", ::TDatabasePDG::Class_Version(), "TDatabasePDG.h", 21,
                  typeid(::TDatabasePDG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDatabasePDG::Dictionary, isa_proxy, 4,
                  sizeof(::TDatabasePDG) );
      instance.SetNew(&new_TDatabasePDG);
      instance.SetNewArray(&newArray_TDatabasePDG);
      instance.SetDelete(&delete_TDatabasePDG);
      instance.SetDeleteArray(&deleteArray_TDatabasePDG);
      instance.SetDestructor(&destruct_TDatabasePDG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDatabasePDG*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDatabasePDG*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDatabasePDG*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDecayChannel(void *p = nullptr);
   static void *newArray_TDecayChannel(Long_t size, void *p);
   static void delete_TDecayChannel(void *p);
   static void deleteArray_TDecayChannel(void *p);
   static void destruct_TDecayChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDecayChannel*)
   {
      ::TDecayChannel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDecayChannel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDecayChannel", ::TDecayChannel::Class_Version(), "TDecayChannel.h", 24,
                  typeid(::TDecayChannel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDecayChannel::Dictionary, isa_proxy, 4,
                  sizeof(::TDecayChannel) );
      instance.SetNew(&new_TDecayChannel);
      instance.SetNewArray(&newArray_TDecayChannel);
      instance.SetDelete(&delete_TDecayChannel);
      instance.SetDeleteArray(&deleteArray_TDecayChannel);
      instance.SetDestructor(&destruct_TDecayChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDecayChannel*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDecayChannel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDecayChannel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGenerator(void *p = nullptr);
   static void *newArray_TGenerator(Long_t size, void *p);
   static void delete_TGenerator(void *p);
   static void deleteArray_TGenerator(void *p);
   static void destruct_TGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGenerator*)
   {
      ::TGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGenerator", ::TGenerator::Class_Version(), "TGenerator.h", 144,
                  typeid(::TGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::TGenerator) );
      instance.SetNew(&new_TGenerator);
      instance.SetNewArray(&newArray_TGenerator);
      instance.SetDelete(&delete_TGenerator);
      instance.SetDeleteArray(&deleteArray_TGenerator);
      instance.SetDestructor(&destruct_TGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TParticle(void *p = nullptr);
   static void *newArray_TParticle(Long_t size, void *p);
   static void delete_TParticle(void *p);
   static void deleteArray_TParticle(void *p);
   static void destruct_TParticle(void *p);
   static void streamer_TParticle(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TParticle*)
   {
      ::TParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TParticle", ::TParticle::Class_Version(), "TParticle.h", 26,
                  typeid(::TParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TParticle::Dictionary, isa_proxy, 17,
                  sizeof(::TParticle) );
      instance.SetNew(&new_TParticle);
      instance.SetNewArray(&newArray_TParticle);
      instance.SetDelete(&delete_TParticle);
      instance.SetDeleteArray(&deleteArray_TParticle);
      instance.SetDestructor(&destruct_TParticle);
      instance.SetStreamerFunc(&streamer_TParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPrimary(void *p = nullptr);
   static void *newArray_TPrimary(Long_t size, void *p);
   static void delete_TPrimary(void *p);
   static void deleteArray_TPrimary(void *p);
   static void destruct_TPrimary(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPrimary*)
   {
      ::TPrimary *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPrimary >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPrimary", ::TPrimary::Class_Version(), "TPrimary.h", 31,
                  typeid(::TPrimary), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPrimary::Dictionary, isa_proxy, 4,
                  sizeof(::TPrimary) );
      instance.SetNew(&new_TPrimary);
      instance.SetNewArray(&newArray_TPrimary);
      instance.SetDelete(&delete_TPrimary);
      instance.SetDeleteArray(&deleteArray_TPrimary);
      instance.SetDestructor(&destruct_TPrimary);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPrimary*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPrimary*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPrimary*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualMCDecayer(void *p);
   static void deleteArray_TVirtualMCDecayer(void *p);
   static void destruct_TVirtualMCDecayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualMCDecayer*)
   {
      ::TVirtualMCDecayer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualMCDecayer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualMCDecayer", ::TVirtualMCDecayer::Class_Version(), "TVirtualMCDecayer.h", 23,
                  typeid(::TVirtualMCDecayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualMCDecayer::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualMCDecayer) );
      instance.SetDelete(&delete_TVirtualMCDecayer);
      instance.SetDeleteArray(&deleteArray_TVirtualMCDecayer);
      instance.SetDestructor(&destruct_TVirtualMCDecayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualMCDecayer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVirtualMCDecayer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVirtualMCDecayer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TAttParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAttParticle::Class_Name()
{
   return "TAttParticle";
}

//______________________________________________________________________________
const char *TAttParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAttParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAttParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAttParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TParticlePDG::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TParticlePDG::Class_Name()
{
   return "TParticlePDG";
}

//______________________________________________________________________________
const char *TParticlePDG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParticlePDG*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TParticlePDG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParticlePDG*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TParticlePDG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParticlePDG*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TParticlePDG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParticlePDG*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TParticleClassPDG::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TParticleClassPDG::Class_Name()
{
   return "TParticleClassPDG";
}

//______________________________________________________________________________
const char *TParticleClassPDG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParticleClassPDG*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TParticleClassPDG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParticleClassPDG*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TParticleClassPDG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParticleClassPDG*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TParticleClassPDG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParticleClassPDG*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDatabasePDG::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDatabasePDG::Class_Name()
{
   return "TDatabasePDG";
}

//______________________________________________________________________________
const char *TDatabasePDG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDatabasePDG*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDatabasePDG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDatabasePDG*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDatabasePDG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDatabasePDG*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDatabasePDG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDatabasePDG*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDecayChannel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDecayChannel::Class_Name()
{
   return "TDecayChannel";
}

//______________________________________________________________________________
const char *TDecayChannel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecayChannel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDecayChannel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecayChannel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDecayChannel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecayChannel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDecayChannel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecayChannel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGenerator::Class_Name()
{
   return "TGenerator";
}

//______________________________________________________________________________
const char *TGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TParticle::Class_Name()
{
   return "TParticle";
}

//______________________________________________________________________________
const char *TParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPrimary::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPrimary::Class_Name()
{
   return "TPrimary";
}

//______________________________________________________________________________
const char *TPrimary::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPrimary*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPrimary::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPrimary*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPrimary::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPrimary*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPrimary::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPrimary*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualMCDecayer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualMCDecayer::Class_Name()
{
   return "TVirtualMCDecayer";
}

//______________________________________________________________________________
const char *TVirtualMCDecayer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCDecayer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualMCDecayer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCDecayer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualMCDecayer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCDecayer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualMCDecayer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCDecayer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TAttParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAttParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAttParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAttParticle(void *p) {
      return  p ? new(p) ::TAttParticle : new ::TAttParticle;
   }
   static void *newArray_TAttParticle(Long_t nElements, void *p) {
      return p ? new(p) ::TAttParticle[nElements] : new ::TAttParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAttParticle(void *p) {
      delete (static_cast<::TAttParticle*>(p));
   }
   static void deleteArray_TAttParticle(void *p) {
      delete [] (static_cast<::TAttParticle*>(p));
   }
   static void destruct_TAttParticle(void *p) {
      typedef ::TAttParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAttParticle

//______________________________________________________________________________
void TParticlePDG::Streamer(TBuffer &R__b)
{
   // Stream an object of class TParticlePDG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TParticlePDG::Class(),this);
   } else {
      R__b.WriteClassBuffer(TParticlePDG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TParticlePDG(void *p) {
      return  p ? new(p) ::TParticlePDG : new ::TParticlePDG;
   }
   static void *newArray_TParticlePDG(Long_t nElements, void *p) {
      return p ? new(p) ::TParticlePDG[nElements] : new ::TParticlePDG[nElements];
   }
   // Wrapper around operator delete
   static void delete_TParticlePDG(void *p) {
      delete (static_cast<::TParticlePDG*>(p));
   }
   static void deleteArray_TParticlePDG(void *p) {
      delete [] (static_cast<::TParticlePDG*>(p));
   }
   static void destruct_TParticlePDG(void *p) {
      typedef ::TParticlePDG current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TParticlePDG

//______________________________________________________________________________
void TParticleClassPDG::Streamer(TBuffer &R__b)
{
   // Stream an object of class TParticleClassPDG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TParticleClassPDG::Class(),this);
   } else {
      R__b.WriteClassBuffer(TParticleClassPDG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TParticleClassPDG(void *p) {
      return  p ? new(p) ::TParticleClassPDG : new ::TParticleClassPDG;
   }
   static void *newArray_TParticleClassPDG(Long_t nElements, void *p) {
      return p ? new(p) ::TParticleClassPDG[nElements] : new ::TParticleClassPDG[nElements];
   }
   // Wrapper around operator delete
   static void delete_TParticleClassPDG(void *p) {
      delete (static_cast<::TParticleClassPDG*>(p));
   }
   static void deleteArray_TParticleClassPDG(void *p) {
      delete [] (static_cast<::TParticleClassPDG*>(p));
   }
   static void destruct_TParticleClassPDG(void *p) {
      typedef ::TParticleClassPDG current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TParticleClassPDG

//______________________________________________________________________________
void TDatabasePDG::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDatabasePDG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDatabasePDG::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDatabasePDG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDatabasePDG(void *p) {
      return  p ? new(p) ::TDatabasePDG : new ::TDatabasePDG;
   }
   static void *newArray_TDatabasePDG(Long_t nElements, void *p) {
      return p ? new(p) ::TDatabasePDG[nElements] : new ::TDatabasePDG[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDatabasePDG(void *p) {
      delete (static_cast<::TDatabasePDG*>(p));
   }
   static void deleteArray_TDatabasePDG(void *p) {
      delete [] (static_cast<::TDatabasePDG*>(p));
   }
   static void destruct_TDatabasePDG(void *p) {
      typedef ::TDatabasePDG current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDatabasePDG

//______________________________________________________________________________
void TDecayChannel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDecayChannel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDecayChannel::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDecayChannel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDecayChannel(void *p) {
      return  p ? new(p) ::TDecayChannel : new ::TDecayChannel;
   }
   static void *newArray_TDecayChannel(Long_t nElements, void *p) {
      return p ? new(p) ::TDecayChannel[nElements] : new ::TDecayChannel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDecayChannel(void *p) {
      delete (static_cast<::TDecayChannel*>(p));
   }
   static void deleteArray_TDecayChannel(void *p) {
      delete [] (static_cast<::TDecayChannel*>(p));
   }
   static void destruct_TDecayChannel(void *p) {
      typedef ::TDecayChannel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDecayChannel

//______________________________________________________________________________
void TGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGenerator(void *p) {
      return  p ? new(p) ::TGenerator : new ::TGenerator;
   }
   static void *newArray_TGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::TGenerator[nElements] : new ::TGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGenerator(void *p) {
      delete (static_cast<::TGenerator*>(p));
   }
   static void deleteArray_TGenerator(void *p) {
      delete [] (static_cast<::TGenerator*>(p));
   }
   static void destruct_TGenerator(void *p) {
      typedef ::TGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_TParticle(void *p) {
      return  p ? new(p) ::TParticle : new ::TParticle;
   }
   static void *newArray_TParticle(Long_t nElements, void *p) {
      return p ? new(p) ::TParticle[nElements] : new ::TParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TParticle(void *p) {
      delete (static_cast<::TParticle*>(p));
   }
   static void deleteArray_TParticle(void *p) {
      delete [] (static_cast<::TParticle*>(p));
   }
   static void destruct_TParticle(void *p) {
      typedef ::TParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TParticle(TBuffer &buf, void *obj) {
      ((::TParticle*)obj)->::TParticle::Streamer(buf);
   }
} // end of namespace ROOT for class ::TParticle

//______________________________________________________________________________
void TPrimary::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPrimary.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPrimary::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPrimary::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPrimary(void *p) {
      return  p ? new(p) ::TPrimary : new ::TPrimary;
   }
   static void *newArray_TPrimary(Long_t nElements, void *p) {
      return p ? new(p) ::TPrimary[nElements] : new ::TPrimary[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPrimary(void *p) {
      delete (static_cast<::TPrimary*>(p));
   }
   static void deleteArray_TPrimary(void *p) {
      delete [] (static_cast<::TPrimary*>(p));
   }
   static void destruct_TPrimary(void *p) {
      typedef ::TPrimary current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TPrimary

//______________________________________________________________________________
void TVirtualMCDecayer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualMCDecayer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualMCDecayer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualMCDecayer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualMCDecayer(void *p) {
      delete (static_cast<::TVirtualMCDecayer*>(p));
   }
   static void deleteArray_TVirtualMCDecayer(void *p) {
      delete [] (static_cast<::TVirtualMCDecayer*>(p));
   }
   static void destruct_TVirtualMCDecayer(void *p) {
      typedef ::TVirtualMCDecayer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualMCDecayer

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libEG() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libEG) = RecordReadRules_libEG();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libEG));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libEG_Impl() {
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
      TROOT::RegisterModule("libEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libEG_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libEG() {
  TriggerDictionaryInitialization_libEG_Impl();
}
