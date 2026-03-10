// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Physics
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
#include "TFeldmanCousins.h"
#include "TGenPhaseSpace.h"
#include "TLorentzRotation.h"
#include "TLorentzVector.h"
#include "TQuaternion.h"
#include "TRobustEstimator.h"
#include "TRolke.h"
#include "TRotation.h"
#include "TVector2.h"
#include "TVector3.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TFeldmanCousins(void *p = nullptr);
   static void *newArray_TFeldmanCousins(Long_t size, void *p);
   static void delete_TFeldmanCousins(void *p);
   static void deleteArray_TFeldmanCousins(void *p);
   static void destruct_TFeldmanCousins(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFeldmanCousins*)
   {
      ::TFeldmanCousins *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFeldmanCousins >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFeldmanCousins", ::TFeldmanCousins::Class_Version(), "TFeldmanCousins.h", 47,
                  typeid(::TFeldmanCousins), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFeldmanCousins::Dictionary, isa_proxy, 4,
                  sizeof(::TFeldmanCousins) );
      instance.SetNew(&new_TFeldmanCousins);
      instance.SetNewArray(&newArray_TFeldmanCousins);
      instance.SetDelete(&delete_TFeldmanCousins);
      instance.SetDeleteArray(&deleteArray_TFeldmanCousins);
      instance.SetDestructor(&destruct_TFeldmanCousins);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFeldmanCousins*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFeldmanCousins*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFeldmanCousins*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TVector2(void *p = nullptr);
   static void *newArray_TVector2(Long_t size, void *p);
   static void delete_TVector2(void *p);
   static void deleteArray_TVector2(void *p);
   static void destruct_TVector2(void *p);
   static void streamer_TVector2(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVector2*)
   {
      ::TVector2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVector2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVector2", ::TVector2::Class_Version(), "TVector2.h", 18,
                  typeid(::TVector2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVector2::Dictionary, isa_proxy, 17,
                  sizeof(::TVector2) );
      instance.SetNew(&new_TVector2);
      instance.SetNewArray(&newArray_TVector2);
      instance.SetDelete(&delete_TVector2);
      instance.SetDeleteArray(&deleteArray_TVector2);
      instance.SetDestructor(&destruct_TVector2);
      instance.SetStreamerFunc(&streamer_TVector2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVector2*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVector2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVector2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TVector3(void *p = nullptr);
   static void *newArray_TVector3(Long_t size, void *p);
   static void delete_TVector3(void *p);
   static void deleteArray_TVector3(void *p);
   static void destruct_TVector3(void *p);
   static void streamer_TVector3(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVector3*)
   {
      ::TVector3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVector3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVector3", ::TVector3::Class_Version(), "TVector3.h", 22,
                  typeid(::TVector3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVector3::Dictionary, isa_proxy, 17,
                  sizeof(::TVector3) );
      instance.SetNew(&new_TVector3);
      instance.SetNewArray(&newArray_TVector3);
      instance.SetDelete(&delete_TVector3);
      instance.SetDeleteArray(&deleteArray_TVector3);
      instance.SetDestructor(&destruct_TVector3);
      instance.SetStreamerFunc(&streamer_TVector3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVector3*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVector3*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVector3*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRotation(void *p = nullptr);
   static void *newArray_TRotation(Long_t size, void *p);
   static void delete_TRotation(void *p);
   static void deleteArray_TRotation(void *p);
   static void destruct_TRotation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRotation*)
   {
      ::TRotation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRotation >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRotation", ::TRotation::Class_Version(), "TRotation.h", 20,
                  typeid(::TRotation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRotation::Dictionary, isa_proxy, 4,
                  sizeof(::TRotation) );
      instance.SetNew(&new_TRotation);
      instance.SetNewArray(&newArray_TRotation);
      instance.SetDelete(&delete_TRotation);
      instance.SetDeleteArray(&deleteArray_TRotation);
      instance.SetDestructor(&destruct_TRotation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRotation*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRotation*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRotation*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLorentzVector(void *p = nullptr);
   static void *newArray_TLorentzVector(Long_t size, void *p);
   static void delete_TLorentzVector(void *p);
   static void deleteArray_TLorentzVector(void *p);
   static void destruct_TLorentzVector(void *p);
   static void streamer_TLorentzVector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLorentzVector*)
   {
      ::TLorentzVector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLorentzVector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TLorentzVector", ::TLorentzVector::Class_Version(), "TLorentzVector.h", 31,
                  typeid(::TLorentzVector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLorentzVector::Dictionary, isa_proxy, 17,
                  sizeof(::TLorentzVector) );
      instance.SetNew(&new_TLorentzVector);
      instance.SetNewArray(&newArray_TLorentzVector);
      instance.SetDelete(&delete_TLorentzVector);
      instance.SetDeleteArray(&deleteArray_TLorentzVector);
      instance.SetDestructor(&destruct_TLorentzVector);
      instance.SetStreamerFunc(&streamer_TLorentzVector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLorentzVector*)
   {
      return GenerateInitInstanceLocal(static_cast<::TLorentzVector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TLorentzVector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGenPhaseSpace(void *p = nullptr);
   static void *newArray_TGenPhaseSpace(Long_t size, void *p);
   static void delete_TGenPhaseSpace(void *p);
   static void deleteArray_TGenPhaseSpace(void *p);
   static void destruct_TGenPhaseSpace(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGenPhaseSpace*)
   {
      ::TGenPhaseSpace *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGenPhaseSpace >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGenPhaseSpace", ::TGenPhaseSpace::Class_Version(), "TGenPhaseSpace.h", 10,
                  typeid(::TGenPhaseSpace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGenPhaseSpace::Dictionary, isa_proxy, 4,
                  sizeof(::TGenPhaseSpace) );
      instance.SetNew(&new_TGenPhaseSpace);
      instance.SetNewArray(&newArray_TGenPhaseSpace);
      instance.SetDelete(&delete_TGenPhaseSpace);
      instance.SetDeleteArray(&deleteArray_TGenPhaseSpace);
      instance.SetDestructor(&destruct_TGenPhaseSpace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGenPhaseSpace*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGenPhaseSpace*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGenPhaseSpace*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLorentzRotation(void *p = nullptr);
   static void *newArray_TLorentzRotation(Long_t size, void *p);
   static void delete_TLorentzRotation(void *p);
   static void deleteArray_TLorentzRotation(void *p);
   static void destruct_TLorentzRotation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLorentzRotation*)
   {
      ::TLorentzRotation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLorentzRotation >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TLorentzRotation", ::TLorentzRotation::Class_Version(), "TLorentzRotation.h", 20,
                  typeid(::TLorentzRotation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLorentzRotation::Dictionary, isa_proxy, 4,
                  sizeof(::TLorentzRotation) );
      instance.SetNew(&new_TLorentzRotation);
      instance.SetNewArray(&newArray_TLorentzRotation);
      instance.SetDelete(&delete_TLorentzRotation);
      instance.SetDeleteArray(&deleteArray_TLorentzRotation);
      instance.SetDestructor(&destruct_TLorentzRotation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLorentzRotation*)
   {
      return GenerateInitInstanceLocal(static_cast<::TLorentzRotation*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TLorentzRotation*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQuaternion(void *p = nullptr);
   static void *newArray_TQuaternion(Long_t size, void *p);
   static void delete_TQuaternion(void *p);
   static void deleteArray_TQuaternion(void *p);
   static void destruct_TQuaternion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQuaternion*)
   {
      ::TQuaternion *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQuaternion >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TQuaternion", ::TQuaternion::Class_Version(), "TQuaternion.h", 11,
                  typeid(::TQuaternion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQuaternion::Dictionary, isa_proxy, 4,
                  sizeof(::TQuaternion) );
      instance.SetNew(&new_TQuaternion);
      instance.SetNewArray(&newArray_TQuaternion);
      instance.SetDelete(&delete_TQuaternion);
      instance.SetDeleteArray(&deleteArray_TQuaternion);
      instance.SetDestructor(&destruct_TQuaternion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQuaternion*)
   {
      return GenerateInitInstanceLocal(static_cast<::TQuaternion*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TQuaternion*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRobustEstimator(void *p = nullptr);
   static void *newArray_TRobustEstimator(Long_t size, void *p);
   static void delete_TRobustEstimator(void *p);
   static void deleteArray_TRobustEstimator(void *p);
   static void destruct_TRobustEstimator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRobustEstimator*)
   {
      ::TRobustEstimator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRobustEstimator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRobustEstimator", ::TRobustEstimator::Class_Version(), "TRobustEstimator.h", 23,
                  typeid(::TRobustEstimator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRobustEstimator::Dictionary, isa_proxy, 4,
                  sizeof(::TRobustEstimator) );
      instance.SetNew(&new_TRobustEstimator);
      instance.SetNewArray(&newArray_TRobustEstimator);
      instance.SetDelete(&delete_TRobustEstimator);
      instance.SetDeleteArray(&deleteArray_TRobustEstimator);
      instance.SetDestructor(&destruct_TRobustEstimator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRobustEstimator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRobustEstimator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRobustEstimator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRolke(void *p = nullptr);
   static void *newArray_TRolke(Long_t size, void *p);
   static void delete_TRolke(void *p);
   static void deleteArray_TRolke(void *p);
   static void destruct_TRolke(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRolke*)
   {
      ::TRolke *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRolke >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRolke", ::TRolke::Class_Version(), "TRolke.h", 33,
                  typeid(::TRolke), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRolke::Dictionary, isa_proxy, 4,
                  sizeof(::TRolke) );
      instance.SetNew(&new_TRolke);
      instance.SetNewArray(&newArray_TRolke);
      instance.SetDelete(&delete_TRolke);
      instance.SetDeleteArray(&deleteArray_TRolke);
      instance.SetDestructor(&destruct_TRolke);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRolke*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRolke*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRolke*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TFeldmanCousins::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFeldmanCousins::Class_Name()
{
   return "TFeldmanCousins";
}

//______________________________________________________________________________
const char *TFeldmanCousins::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFeldmanCousins*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFeldmanCousins::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFeldmanCousins*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFeldmanCousins::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFeldmanCousins*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFeldmanCousins::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFeldmanCousins*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVector2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVector2::Class_Name()
{
   return "TVector2";
}

//______________________________________________________________________________
const char *TVector2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVector2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVector2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVector2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVector2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVector2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVector2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVector2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVector3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVector3::Class_Name()
{
   return "TVector3";
}

//______________________________________________________________________________
const char *TVector3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVector3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVector3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVector3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVector3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVector3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVector3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVector3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRotation::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRotation::Class_Name()
{
   return "TRotation";
}

//______________________________________________________________________________
const char *TRotation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRotation*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRotation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRotation*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRotation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRotation*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRotation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRotation*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLorentzVector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TLorentzVector::Class_Name()
{
   return "TLorentzVector";
}

//______________________________________________________________________________
const char *TLorentzVector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLorentzVector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TLorentzVector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLorentzVector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLorentzVector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLorentzVector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLorentzVector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLorentzVector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGenPhaseSpace::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGenPhaseSpace::Class_Name()
{
   return "TGenPhaseSpace";
}

//______________________________________________________________________________
const char *TGenPhaseSpace::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGenPhaseSpace*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGenPhaseSpace::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGenPhaseSpace*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGenPhaseSpace::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGenPhaseSpace*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGenPhaseSpace::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGenPhaseSpace*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLorentzRotation::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TLorentzRotation::Class_Name()
{
   return "TLorentzRotation";
}

//______________________________________________________________________________
const char *TLorentzRotation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLorentzRotation*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TLorentzRotation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLorentzRotation*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLorentzRotation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLorentzRotation*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLorentzRotation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLorentzRotation*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQuaternion::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TQuaternion::Class_Name()
{
   return "TQuaternion";
}

//______________________________________________________________________________
const char *TQuaternion::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQuaternion*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TQuaternion::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQuaternion*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQuaternion::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQuaternion*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQuaternion::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQuaternion*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRobustEstimator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRobustEstimator::Class_Name()
{
   return "TRobustEstimator";
}

//______________________________________________________________________________
const char *TRobustEstimator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRobustEstimator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRobustEstimator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRobustEstimator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRobustEstimator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRobustEstimator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRobustEstimator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRobustEstimator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRolke::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRolke::Class_Name()
{
   return "TRolke";
}

//______________________________________________________________________________
const char *TRolke::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRolke*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRolke::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRolke*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRolke::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRolke*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRolke::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRolke*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TFeldmanCousins::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFeldmanCousins.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFeldmanCousins::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFeldmanCousins::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFeldmanCousins(void *p) {
      return  p ? new(p) ::TFeldmanCousins : new ::TFeldmanCousins;
   }
   static void *newArray_TFeldmanCousins(Long_t nElements, void *p) {
      return p ? new(p) ::TFeldmanCousins[nElements] : new ::TFeldmanCousins[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFeldmanCousins(void *p) {
      delete (static_cast<::TFeldmanCousins*>(p));
   }
   static void deleteArray_TFeldmanCousins(void *p) {
      delete [] (static_cast<::TFeldmanCousins*>(p));
   }
   static void destruct_TFeldmanCousins(void *p) {
      typedef ::TFeldmanCousins current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFeldmanCousins

namespace ROOT {
   // Wrappers around operator new
   static void *new_TVector2(void *p) {
      return  p ? new(p) ::TVector2 : new ::TVector2;
   }
   static void *newArray_TVector2(Long_t nElements, void *p) {
      return p ? new(p) ::TVector2[nElements] : new ::TVector2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TVector2(void *p) {
      delete (static_cast<::TVector2*>(p));
   }
   static void deleteArray_TVector2(void *p) {
      delete [] (static_cast<::TVector2*>(p));
   }
   static void destruct_TVector2(void *p) {
      typedef ::TVector2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TVector2(TBuffer &buf, void *obj) {
      ((::TVector2*)obj)->::TVector2::Streamer(buf);
   }
} // end of namespace ROOT for class ::TVector2

namespace ROOT {
   // Wrappers around operator new
   static void *new_TVector3(void *p) {
      return  p ? new(p) ::TVector3 : new ::TVector3;
   }
   static void *newArray_TVector3(Long_t nElements, void *p) {
      return p ? new(p) ::TVector3[nElements] : new ::TVector3[nElements];
   }
   // Wrapper around operator delete
   static void delete_TVector3(void *p) {
      delete (static_cast<::TVector3*>(p));
   }
   static void deleteArray_TVector3(void *p) {
      delete [] (static_cast<::TVector3*>(p));
   }
   static void destruct_TVector3(void *p) {
      typedef ::TVector3 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TVector3(TBuffer &buf, void *obj) {
      ((::TVector3*)obj)->::TVector3::Streamer(buf);
   }
} // end of namespace ROOT for class ::TVector3

//______________________________________________________________________________
void TRotation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRotation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRotation::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRotation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRotation(void *p) {
      return  p ? new(p) ::TRotation : new ::TRotation;
   }
   static void *newArray_TRotation(Long_t nElements, void *p) {
      return p ? new(p) ::TRotation[nElements] : new ::TRotation[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRotation(void *p) {
      delete (static_cast<::TRotation*>(p));
   }
   static void deleteArray_TRotation(void *p) {
      delete [] (static_cast<::TRotation*>(p));
   }
   static void destruct_TRotation(void *p) {
      typedef ::TRotation current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TRotation

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLorentzVector(void *p) {
      return  p ? new(p) ::TLorentzVector : new ::TLorentzVector;
   }
   static void *newArray_TLorentzVector(Long_t nElements, void *p) {
      return p ? new(p) ::TLorentzVector[nElements] : new ::TLorentzVector[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLorentzVector(void *p) {
      delete (static_cast<::TLorentzVector*>(p));
   }
   static void deleteArray_TLorentzVector(void *p) {
      delete [] (static_cast<::TLorentzVector*>(p));
   }
   static void destruct_TLorentzVector(void *p) {
      typedef ::TLorentzVector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLorentzVector(TBuffer &buf, void *obj) {
      ((::TLorentzVector*)obj)->::TLorentzVector::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLorentzVector

//______________________________________________________________________________
void TGenPhaseSpace::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGenPhaseSpace.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGenPhaseSpace::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGenPhaseSpace::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGenPhaseSpace(void *p) {
      return  p ? new(p) ::TGenPhaseSpace : new ::TGenPhaseSpace;
   }
   static void *newArray_TGenPhaseSpace(Long_t nElements, void *p) {
      return p ? new(p) ::TGenPhaseSpace[nElements] : new ::TGenPhaseSpace[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGenPhaseSpace(void *p) {
      delete (static_cast<::TGenPhaseSpace*>(p));
   }
   static void deleteArray_TGenPhaseSpace(void *p) {
      delete [] (static_cast<::TGenPhaseSpace*>(p));
   }
   static void destruct_TGenPhaseSpace(void *p) {
      typedef ::TGenPhaseSpace current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGenPhaseSpace

//______________________________________________________________________________
void TLorentzRotation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLorentzRotation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLorentzRotation::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLorentzRotation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLorentzRotation(void *p) {
      return  p ? new(p) ::TLorentzRotation : new ::TLorentzRotation;
   }
   static void *newArray_TLorentzRotation(Long_t nElements, void *p) {
      return p ? new(p) ::TLorentzRotation[nElements] : new ::TLorentzRotation[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLorentzRotation(void *p) {
      delete (static_cast<::TLorentzRotation*>(p));
   }
   static void deleteArray_TLorentzRotation(void *p) {
      delete [] (static_cast<::TLorentzRotation*>(p));
   }
   static void destruct_TLorentzRotation(void *p) {
      typedef ::TLorentzRotation current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TLorentzRotation

//______________________________________________________________________________
void TQuaternion::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQuaternion.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQuaternion::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQuaternion::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQuaternion(void *p) {
      return  p ? new(p) ::TQuaternion : new ::TQuaternion;
   }
   static void *newArray_TQuaternion(Long_t nElements, void *p) {
      return p ? new(p) ::TQuaternion[nElements] : new ::TQuaternion[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQuaternion(void *p) {
      delete (static_cast<::TQuaternion*>(p));
   }
   static void deleteArray_TQuaternion(void *p) {
      delete [] (static_cast<::TQuaternion*>(p));
   }
   static void destruct_TQuaternion(void *p) {
      typedef ::TQuaternion current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TQuaternion

//______________________________________________________________________________
void TRobustEstimator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRobustEstimator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRobustEstimator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRobustEstimator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRobustEstimator(void *p) {
      return  p ? new(p) ::TRobustEstimator : new ::TRobustEstimator;
   }
   static void *newArray_TRobustEstimator(Long_t nElements, void *p) {
      return p ? new(p) ::TRobustEstimator[nElements] : new ::TRobustEstimator[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRobustEstimator(void *p) {
      delete (static_cast<::TRobustEstimator*>(p));
   }
   static void deleteArray_TRobustEstimator(void *p) {
      delete [] (static_cast<::TRobustEstimator*>(p));
   }
   static void destruct_TRobustEstimator(void *p) {
      typedef ::TRobustEstimator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TRobustEstimator

//______________________________________________________________________________
void TRolke::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRolke.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRolke::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRolke::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRolke(void *p) {
      return  p ? new(p) ::TRolke : new ::TRolke;
   }
   static void *newArray_TRolke(Long_t nElements, void *p) {
      return p ? new(p) ::TRolke[nElements] : new ::TRolke[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRolke(void *p) {
      delete (static_cast<::TRolke*>(p));
   }
   static void deleteArray_TRolke(void *p) {
      delete [] (static_cast<::TRolke*>(p));
   }
   static void destruct_TRolke(void *p) {
      typedef ::TRolke current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TRolke

namespace ROOT {
   static TClass *vectorlETVector3gR_Dictionary();
   static void vectorlETVector3gR_TClassManip(TClass*);
   static void *new_vectorlETVector3gR(void *p = nullptr);
   static void *newArray_vectorlETVector3gR(Long_t size, void *p);
   static void delete_vectorlETVector3gR(void *p);
   static void deleteArray_vectorlETVector3gR(void *p);
   static void destruct_vectorlETVector3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TVector3>*)
   {
      vector<TVector3> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TVector3>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TVector3>", -2, "functional", 86,
                  typeid(vector<TVector3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETVector3gR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TVector3>) );
      instance.SetNew(&new_vectorlETVector3gR);
      instance.SetNewArray(&newArray_vectorlETVector3gR);
      instance.SetDelete(&delete_vectorlETVector3gR);
      instance.SetDeleteArray(&deleteArray_vectorlETVector3gR);
      instance.SetDestructor(&destruct_vectorlETVector3gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TVector3> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TVector3>","std::__1::vector<TVector3, std::__1::allocator<TVector3>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TVector3>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETVector3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TVector3>*>(nullptr))->GetClass();
      vectorlETVector3gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETVector3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETVector3gR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TVector3> : new vector<TVector3>;
   }
   static void *newArray_vectorlETVector3gR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TVector3>[nElements] : new vector<TVector3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETVector3gR(void *p) {
      delete (static_cast<vector<TVector3>*>(p));
   }
   static void deleteArray_vectorlETVector3gR(void *p) {
      delete [] (static_cast<vector<TVector3>*>(p));
   }
   static void destruct_vectorlETVector3gR(void *p) {
      typedef vector<TVector3> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TVector3>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libPhysics() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libPhysics) = RecordReadRules_libPhysics();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libPhysics));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libPhysics_Impl() {
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
      TROOT::RegisterModule("libPhysics",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libPhysics_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libPhysics_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libPhysics() {
  TriggerDictionaryInitialization_libPhysics_Impl();
}
