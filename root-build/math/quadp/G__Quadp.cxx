// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Quadp
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
#include "TGondzioSolver.h"
#include "TMehrotraSolver.h"
#include "TQpDataBase.h"
#include "TQpDataDens.h"
#include "TQpDataSparse.h"
#include "TQpLinSolverBase.h"
#include "TQpLinSolverDens.h"
#include "TQpLinSolverSparse.h"
#include "TQpProbBase.h"
#include "TQpProbDens.h"
#include "TQpProbSparse.h"
#include "TQpResidual.h"
#include "TQpSolverBase.h"
#include "TQpVar.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TQpVar(void *p = nullptr);
   static void *newArray_TQpVar(Long_t size, void *p);
   static void delete_TQpVar(void *p);
   static void deleteArray_TQpVar(void *p);
   static void destruct_TQpVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpVar*)
   {
      ::TQpVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TQpVar", ::TQpVar::Class_Version(), "TQpVar.h", 59,
                  typeid(::TQpVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpVar::Dictionary, isa_proxy, 4,
                  sizeof(::TQpVar) );
      instance.SetNew(&new_TQpVar);
      instance.SetNewArray(&newArray_TQpVar);
      instance.SetDelete(&delete_TQpVar);
      instance.SetDeleteArray(&deleteArray_TQpVar);
      instance.SetDestructor(&destruct_TQpVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TQpVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TQpVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TQpDataBase(void *p);
   static void deleteArray_TQpDataBase(void *p);
   static void destruct_TQpDataBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpDataBase*)
   {
      ::TQpDataBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpDataBase >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TQpDataBase", ::TQpDataBase::Class_Version(), "TQpDataBase.h", 60,
                  typeid(::TQpDataBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpDataBase::Dictionary, isa_proxy, 4,
                  sizeof(::TQpDataBase) );
      instance.SetDelete(&delete_TQpDataBase);
      instance.SetDeleteArray(&deleteArray_TQpDataBase);
      instance.SetDestructor(&destruct_TQpDataBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpDataBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::TQpDataBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TQpDataBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpDataDens(void *p = nullptr);
   static void *newArray_TQpDataDens(Long_t size, void *p);
   static void delete_TQpDataDens(void *p);
   static void deleteArray_TQpDataDens(void *p);
   static void destruct_TQpDataDens(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpDataDens*)
   {
      ::TQpDataDens *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpDataDens >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TQpDataDens", ::TQpDataDens::Class_Version(), "TQpDataDens.h", 62,
                  typeid(::TQpDataDens), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpDataDens::Dictionary, isa_proxy, 4,
                  sizeof(::TQpDataDens) );
      instance.SetNew(&new_TQpDataDens);
      instance.SetNewArray(&newArray_TQpDataDens);
      instance.SetDelete(&delete_TQpDataDens);
      instance.SetDeleteArray(&deleteArray_TQpDataDens);
      instance.SetDestructor(&destruct_TQpDataDens);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpDataDens*)
   {
      return GenerateInitInstanceLocal(static_cast<::TQpDataDens*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TQpDataDens*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpResidual(void *p = nullptr);
   static void *newArray_TQpResidual(Long_t size, void *p);
   static void delete_TQpResidual(void *p);
   static void deleteArray_TQpResidual(void *p);
   static void destruct_TQpResidual(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpResidual*)
   {
      ::TQpResidual *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpResidual >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TQpResidual", ::TQpResidual::Class_Version(), "TQpResidual.h", 61,
                  typeid(::TQpResidual), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpResidual::Dictionary, isa_proxy, 4,
                  sizeof(::TQpResidual) );
      instance.SetNew(&new_TQpResidual);
      instance.SetNewArray(&newArray_TQpResidual);
      instance.SetDelete(&delete_TQpResidual);
      instance.SetDeleteArray(&deleteArray_TQpResidual);
      instance.SetDestructor(&destruct_TQpResidual);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpResidual*)
   {
      return GenerateInitInstanceLocal(static_cast<::TQpResidual*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TQpResidual*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TQpProbBase(void *p);
   static void deleteArray_TQpProbBase(void *p);
   static void destruct_TQpProbBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpProbBase*)
   {
      ::TQpProbBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpProbBase >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TQpProbBase", ::TQpProbBase::Class_Version(), "TQpProbBase.h", 88,
                  typeid(::TQpProbBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpProbBase::Dictionary, isa_proxy, 4,
                  sizeof(::TQpProbBase) );
      instance.SetDelete(&delete_TQpProbBase);
      instance.SetDeleteArray(&deleteArray_TQpProbBase);
      instance.SetDestructor(&destruct_TQpProbBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpProbBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::TQpProbBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TQpProbBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TQpLinSolverBase(void *p);
   static void deleteArray_TQpLinSolverBase(void *p);
   static void destruct_TQpLinSolverBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpLinSolverBase*)
   {
      ::TQpLinSolverBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpLinSolverBase >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TQpLinSolverBase", ::TQpLinSolverBase::Class_Version(), "TQpLinSolverBase.h", 66,
                  typeid(::TQpLinSolverBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpLinSolverBase::Dictionary, isa_proxy, 4,
                  sizeof(::TQpLinSolverBase) );
      instance.SetDelete(&delete_TQpLinSolverBase);
      instance.SetDeleteArray(&deleteArray_TQpLinSolverBase);
      instance.SetDestructor(&destruct_TQpLinSolverBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpLinSolverBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::TQpLinSolverBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TQpLinSolverBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TQpSolverBase(void *p);
   static void deleteArray_TQpSolverBase(void *p);
   static void destruct_TQpSolverBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpSolverBase*)
   {
      ::TQpSolverBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpSolverBase >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TQpSolverBase", ::TQpSolverBase::Class_Version(), "TQpSolverBase.h", 72,
                  typeid(::TQpSolverBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpSolverBase::Dictionary, isa_proxy, 4,
                  sizeof(::TQpSolverBase) );
      instance.SetDelete(&delete_TQpSolverBase);
      instance.SetDeleteArray(&deleteArray_TQpSolverBase);
      instance.SetDestructor(&destruct_TQpSolverBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpSolverBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::TQpSolverBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TQpSolverBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGondzioSolver(void *p = nullptr);
   static void *newArray_TGondzioSolver(Long_t size, void *p);
   static void delete_TGondzioSolver(void *p);
   static void deleteArray_TGondzioSolver(void *p);
   static void destruct_TGondzioSolver(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGondzioSolver*)
   {
      ::TGondzioSolver *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGondzioSolver >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGondzioSolver", ::TGondzioSolver::Class_Version(), "TGondzioSolver.h", 56,
                  typeid(::TGondzioSolver), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGondzioSolver::Dictionary, isa_proxy, 4,
                  sizeof(::TGondzioSolver) );
      instance.SetNew(&new_TGondzioSolver);
      instance.SetNewArray(&newArray_TGondzioSolver);
      instance.SetDelete(&delete_TGondzioSolver);
      instance.SetDeleteArray(&deleteArray_TGondzioSolver);
      instance.SetDestructor(&destruct_TGondzioSolver);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGondzioSolver*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGondzioSolver*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGondzioSolver*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMehrotraSolver(void *p = nullptr);
   static void *newArray_TMehrotraSolver(Long_t size, void *p);
   static void delete_TMehrotraSolver(void *p);
   static void deleteArray_TMehrotraSolver(void *p);
   static void destruct_TMehrotraSolver(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMehrotraSolver*)
   {
      ::TMehrotraSolver *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMehrotraSolver >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMehrotraSolver", ::TMehrotraSolver::Class_Version(), "TMehrotraSolver.h", 55,
                  typeid(::TMehrotraSolver), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMehrotraSolver::Dictionary, isa_proxy, 4,
                  sizeof(::TMehrotraSolver) );
      instance.SetNew(&new_TMehrotraSolver);
      instance.SetNewArray(&newArray_TMehrotraSolver);
      instance.SetDelete(&delete_TMehrotraSolver);
      instance.SetDeleteArray(&deleteArray_TMehrotraSolver);
      instance.SetDestructor(&destruct_TMehrotraSolver);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMehrotraSolver*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMehrotraSolver*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMehrotraSolver*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpDataSparse(void *p = nullptr);
   static void *newArray_TQpDataSparse(Long_t size, void *p);
   static void delete_TQpDataSparse(void *p);
   static void deleteArray_TQpDataSparse(void *p);
   static void destruct_TQpDataSparse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpDataSparse*)
   {
      ::TQpDataSparse *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpDataSparse >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TQpDataSparse", ::TQpDataSparse::Class_Version(), "TQpDataSparse.h", 59,
                  typeid(::TQpDataSparse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpDataSparse::Dictionary, isa_proxy, 4,
                  sizeof(::TQpDataSparse) );
      instance.SetNew(&new_TQpDataSparse);
      instance.SetNewArray(&newArray_TQpDataSparse);
      instance.SetDelete(&delete_TQpDataSparse);
      instance.SetDeleteArray(&deleteArray_TQpDataSparse);
      instance.SetDestructor(&destruct_TQpDataSparse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpDataSparse*)
   {
      return GenerateInitInstanceLocal(static_cast<::TQpDataSparse*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TQpDataSparse*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpProbDens(void *p = nullptr);
   static void *newArray_TQpProbDens(Long_t size, void *p);
   static void delete_TQpProbDens(void *p);
   static void deleteArray_TQpProbDens(void *p);
   static void destruct_TQpProbDens(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpProbDens*)
   {
      ::TQpProbDens *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpProbDens >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TQpProbDens", ::TQpProbDens::Class_Version(), "TQpProbDens.h", 60,
                  typeid(::TQpProbDens), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpProbDens::Dictionary, isa_proxy, 4,
                  sizeof(::TQpProbDens) );
      instance.SetNew(&new_TQpProbDens);
      instance.SetNewArray(&newArray_TQpProbDens);
      instance.SetDelete(&delete_TQpProbDens);
      instance.SetDeleteArray(&deleteArray_TQpProbDens);
      instance.SetDestructor(&destruct_TQpProbDens);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpProbDens*)
   {
      return GenerateInitInstanceLocal(static_cast<::TQpProbDens*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TQpProbDens*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpLinSolverDens(void *p = nullptr);
   static void *newArray_TQpLinSolverDens(Long_t size, void *p);
   static void delete_TQpLinSolverDens(void *p);
   static void deleteArray_TQpLinSolverDens(void *p);
   static void destruct_TQpLinSolverDens(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpLinSolverDens*)
   {
      ::TQpLinSolverDens *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpLinSolverDens >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TQpLinSolverDens", ::TQpLinSolverDens::Class_Version(), "TQpLinSolverDens.h", 60,
                  typeid(::TQpLinSolverDens), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpLinSolverDens::Dictionary, isa_proxy, 4,
                  sizeof(::TQpLinSolverDens) );
      instance.SetNew(&new_TQpLinSolverDens);
      instance.SetNewArray(&newArray_TQpLinSolverDens);
      instance.SetDelete(&delete_TQpLinSolverDens);
      instance.SetDeleteArray(&deleteArray_TQpLinSolverDens);
      instance.SetDestructor(&destruct_TQpLinSolverDens);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpLinSolverDens*)
   {
      return GenerateInitInstanceLocal(static_cast<::TQpLinSolverDens*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TQpLinSolverDens*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpProbSparse(void *p = nullptr);
   static void *newArray_TQpProbSparse(Long_t size, void *p);
   static void delete_TQpProbSparse(void *p);
   static void deleteArray_TQpProbSparse(void *p);
   static void destruct_TQpProbSparse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpProbSparse*)
   {
      ::TQpProbSparse *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpProbSparse >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TQpProbSparse", ::TQpProbSparse::Class_Version(), "TQpProbSparse.h", 58,
                  typeid(::TQpProbSparse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpProbSparse::Dictionary, isa_proxy, 4,
                  sizeof(::TQpProbSparse) );
      instance.SetNew(&new_TQpProbSparse);
      instance.SetNewArray(&newArray_TQpProbSparse);
      instance.SetDelete(&delete_TQpProbSparse);
      instance.SetDeleteArray(&deleteArray_TQpProbSparse);
      instance.SetDestructor(&destruct_TQpProbSparse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpProbSparse*)
   {
      return GenerateInitInstanceLocal(static_cast<::TQpProbSparse*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TQpProbSparse*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpLinSolverSparse(void *p = nullptr);
   static void *newArray_TQpLinSolverSparse(Long_t size, void *p);
   static void delete_TQpLinSolverSparse(void *p);
   static void deleteArray_TQpLinSolverSparse(void *p);
   static void destruct_TQpLinSolverSparse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpLinSolverSparse*)
   {
      ::TQpLinSolverSparse *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpLinSolverSparse >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TQpLinSolverSparse", ::TQpLinSolverSparse::Class_Version(), "TQpLinSolverSparse.h", 60,
                  typeid(::TQpLinSolverSparse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpLinSolverSparse::Dictionary, isa_proxy, 4,
                  sizeof(::TQpLinSolverSparse) );
      instance.SetNew(&new_TQpLinSolverSparse);
      instance.SetNewArray(&newArray_TQpLinSolverSparse);
      instance.SetDelete(&delete_TQpLinSolverSparse);
      instance.SetDeleteArray(&deleteArray_TQpLinSolverSparse);
      instance.SetDestructor(&destruct_TQpLinSolverSparse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpLinSolverSparse*)
   {
      return GenerateInitInstanceLocal(static_cast<::TQpLinSolverSparse*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TQpLinSolverSparse*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TQpVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpVar::Class_Name()
{
   return "TQpVar";
}

//______________________________________________________________________________
const char *TQpVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TQpVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpVar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpDataBase::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpDataBase::Class_Name()
{
   return "TQpDataBase";
}

//______________________________________________________________________________
const char *TQpDataBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpDataBase*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TQpDataBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpDataBase*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpDataBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpDataBase*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpDataBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpDataBase*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpDataDens::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpDataDens::Class_Name()
{
   return "TQpDataDens";
}

//______________________________________________________________________________
const char *TQpDataDens::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpDataDens*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TQpDataDens::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpDataDens*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpDataDens::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpDataDens*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpDataDens::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpDataDens*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpResidual::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpResidual::Class_Name()
{
   return "TQpResidual";
}

//______________________________________________________________________________
const char *TQpResidual::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpResidual*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TQpResidual::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpResidual*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpResidual::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpResidual*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpResidual::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpResidual*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpProbBase::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpProbBase::Class_Name()
{
   return "TQpProbBase";
}

//______________________________________________________________________________
const char *TQpProbBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpProbBase*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TQpProbBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpProbBase*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpProbBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpProbBase*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpProbBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpProbBase*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpLinSolverBase::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpLinSolverBase::Class_Name()
{
   return "TQpLinSolverBase";
}

//______________________________________________________________________________
const char *TQpLinSolverBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverBase*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TQpLinSolverBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverBase*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpLinSolverBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverBase*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpLinSolverBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverBase*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpSolverBase::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpSolverBase::Class_Name()
{
   return "TQpSolverBase";
}

//______________________________________________________________________________
const char *TQpSolverBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpSolverBase*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TQpSolverBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpSolverBase*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpSolverBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpSolverBase*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpSolverBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpSolverBase*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGondzioSolver::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGondzioSolver::Class_Name()
{
   return "TGondzioSolver";
}

//______________________________________________________________________________
const char *TGondzioSolver::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGondzioSolver*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGondzioSolver::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGondzioSolver*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGondzioSolver::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGondzioSolver*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGondzioSolver::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGondzioSolver*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMehrotraSolver::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMehrotraSolver::Class_Name()
{
   return "TMehrotraSolver";
}

//______________________________________________________________________________
const char *TMehrotraSolver::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMehrotraSolver*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMehrotraSolver::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMehrotraSolver*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMehrotraSolver::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMehrotraSolver*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMehrotraSolver::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMehrotraSolver*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpDataSparse::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpDataSparse::Class_Name()
{
   return "TQpDataSparse";
}

//______________________________________________________________________________
const char *TQpDataSparse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpDataSparse*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TQpDataSparse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpDataSparse*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpDataSparse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpDataSparse*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpDataSparse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpDataSparse*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpProbDens::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpProbDens::Class_Name()
{
   return "TQpProbDens";
}

//______________________________________________________________________________
const char *TQpProbDens::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpProbDens*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TQpProbDens::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpProbDens*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpProbDens::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpProbDens*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpProbDens::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpProbDens*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpLinSolverDens::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpLinSolverDens::Class_Name()
{
   return "TQpLinSolverDens";
}

//______________________________________________________________________________
const char *TQpLinSolverDens::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverDens*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TQpLinSolverDens::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverDens*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpLinSolverDens::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverDens*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpLinSolverDens::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverDens*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpProbSparse::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpProbSparse::Class_Name()
{
   return "TQpProbSparse";
}

//______________________________________________________________________________
const char *TQpProbSparse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpProbSparse*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TQpProbSparse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpProbSparse*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpProbSparse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpProbSparse*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpProbSparse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpProbSparse*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpLinSolverSparse::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpLinSolverSparse::Class_Name()
{
   return "TQpLinSolverSparse";
}

//______________________________________________________________________________
const char *TQpLinSolverSparse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverSparse*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TQpLinSolverSparse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverSparse*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpLinSolverSparse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverSparse*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpLinSolverSparse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverSparse*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TQpVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpVar(void *p) {
      return  p ? new(p) ::TQpVar : new ::TQpVar;
   }
   static void *newArray_TQpVar(Long_t nElements, void *p) {
      return p ? new(p) ::TQpVar[nElements] : new ::TQpVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpVar(void *p) {
      delete (static_cast<::TQpVar*>(p));
   }
   static void deleteArray_TQpVar(void *p) {
      delete [] (static_cast<::TQpVar*>(p));
   }
   static void destruct_TQpVar(void *p) {
      typedef ::TQpVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TQpVar

//______________________________________________________________________________
void TQpDataBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpDataBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpDataBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpDataBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQpDataBase(void *p) {
      delete (static_cast<::TQpDataBase*>(p));
   }
   static void deleteArray_TQpDataBase(void *p) {
      delete [] (static_cast<::TQpDataBase*>(p));
   }
   static void destruct_TQpDataBase(void *p) {
      typedef ::TQpDataBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TQpDataBase

//______________________________________________________________________________
void TQpDataDens::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpDataDens.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpDataDens::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpDataDens::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpDataDens(void *p) {
      return  p ? new(p) ::TQpDataDens : new ::TQpDataDens;
   }
   static void *newArray_TQpDataDens(Long_t nElements, void *p) {
      return p ? new(p) ::TQpDataDens[nElements] : new ::TQpDataDens[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpDataDens(void *p) {
      delete (static_cast<::TQpDataDens*>(p));
   }
   static void deleteArray_TQpDataDens(void *p) {
      delete [] (static_cast<::TQpDataDens*>(p));
   }
   static void destruct_TQpDataDens(void *p) {
      typedef ::TQpDataDens current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TQpDataDens

//______________________________________________________________________________
void TQpResidual::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpResidual.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpResidual::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpResidual::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpResidual(void *p) {
      return  p ? new(p) ::TQpResidual : new ::TQpResidual;
   }
   static void *newArray_TQpResidual(Long_t nElements, void *p) {
      return p ? new(p) ::TQpResidual[nElements] : new ::TQpResidual[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpResidual(void *p) {
      delete (static_cast<::TQpResidual*>(p));
   }
   static void deleteArray_TQpResidual(void *p) {
      delete [] (static_cast<::TQpResidual*>(p));
   }
   static void destruct_TQpResidual(void *p) {
      typedef ::TQpResidual current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TQpResidual

//______________________________________________________________________________
void TQpProbBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpProbBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpProbBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpProbBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQpProbBase(void *p) {
      delete (static_cast<::TQpProbBase*>(p));
   }
   static void deleteArray_TQpProbBase(void *p) {
      delete [] (static_cast<::TQpProbBase*>(p));
   }
   static void destruct_TQpProbBase(void *p) {
      typedef ::TQpProbBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TQpProbBase

//______________________________________________________________________________
void TQpLinSolverBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpLinSolverBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpLinSolverBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpLinSolverBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQpLinSolverBase(void *p) {
      delete (static_cast<::TQpLinSolverBase*>(p));
   }
   static void deleteArray_TQpLinSolverBase(void *p) {
      delete [] (static_cast<::TQpLinSolverBase*>(p));
   }
   static void destruct_TQpLinSolverBase(void *p) {
      typedef ::TQpLinSolverBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TQpLinSolverBase

//______________________________________________________________________________
void TQpSolverBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpSolverBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpSolverBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpSolverBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQpSolverBase(void *p) {
      delete (static_cast<::TQpSolverBase*>(p));
   }
   static void deleteArray_TQpSolverBase(void *p) {
      delete [] (static_cast<::TQpSolverBase*>(p));
   }
   static void destruct_TQpSolverBase(void *p) {
      typedef ::TQpSolverBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TQpSolverBase

//______________________________________________________________________________
void TGondzioSolver::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGondzioSolver.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGondzioSolver::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGondzioSolver::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGondzioSolver(void *p) {
      return  p ? new(p) ::TGondzioSolver : new ::TGondzioSolver;
   }
   static void *newArray_TGondzioSolver(Long_t nElements, void *p) {
      return p ? new(p) ::TGondzioSolver[nElements] : new ::TGondzioSolver[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGondzioSolver(void *p) {
      delete (static_cast<::TGondzioSolver*>(p));
   }
   static void deleteArray_TGondzioSolver(void *p) {
      delete [] (static_cast<::TGondzioSolver*>(p));
   }
   static void destruct_TGondzioSolver(void *p) {
      typedef ::TGondzioSolver current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGondzioSolver

//______________________________________________________________________________
void TMehrotraSolver::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMehrotraSolver.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMehrotraSolver::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMehrotraSolver::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMehrotraSolver(void *p) {
      return  p ? new(p) ::TMehrotraSolver : new ::TMehrotraSolver;
   }
   static void *newArray_TMehrotraSolver(Long_t nElements, void *p) {
      return p ? new(p) ::TMehrotraSolver[nElements] : new ::TMehrotraSolver[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMehrotraSolver(void *p) {
      delete (static_cast<::TMehrotraSolver*>(p));
   }
   static void deleteArray_TMehrotraSolver(void *p) {
      delete [] (static_cast<::TMehrotraSolver*>(p));
   }
   static void destruct_TMehrotraSolver(void *p) {
      typedef ::TMehrotraSolver current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMehrotraSolver

//______________________________________________________________________________
void TQpDataSparse::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpDataSparse.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpDataSparse::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpDataSparse::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpDataSparse(void *p) {
      return  p ? new(p) ::TQpDataSparse : new ::TQpDataSparse;
   }
   static void *newArray_TQpDataSparse(Long_t nElements, void *p) {
      return p ? new(p) ::TQpDataSparse[nElements] : new ::TQpDataSparse[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpDataSparse(void *p) {
      delete (static_cast<::TQpDataSparse*>(p));
   }
   static void deleteArray_TQpDataSparse(void *p) {
      delete [] (static_cast<::TQpDataSparse*>(p));
   }
   static void destruct_TQpDataSparse(void *p) {
      typedef ::TQpDataSparse current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TQpDataSparse

//______________________________________________________________________________
void TQpProbDens::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpProbDens.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpProbDens::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpProbDens::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpProbDens(void *p) {
      return  p ? new(p) ::TQpProbDens : new ::TQpProbDens;
   }
   static void *newArray_TQpProbDens(Long_t nElements, void *p) {
      return p ? new(p) ::TQpProbDens[nElements] : new ::TQpProbDens[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpProbDens(void *p) {
      delete (static_cast<::TQpProbDens*>(p));
   }
   static void deleteArray_TQpProbDens(void *p) {
      delete [] (static_cast<::TQpProbDens*>(p));
   }
   static void destruct_TQpProbDens(void *p) {
      typedef ::TQpProbDens current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TQpProbDens

//______________________________________________________________________________
void TQpLinSolverDens::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpLinSolverDens.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpLinSolverDens::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpLinSolverDens::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpLinSolverDens(void *p) {
      return  p ? new(p) ::TQpLinSolverDens : new ::TQpLinSolverDens;
   }
   static void *newArray_TQpLinSolverDens(Long_t nElements, void *p) {
      return p ? new(p) ::TQpLinSolverDens[nElements] : new ::TQpLinSolverDens[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpLinSolverDens(void *p) {
      delete (static_cast<::TQpLinSolverDens*>(p));
   }
   static void deleteArray_TQpLinSolverDens(void *p) {
      delete [] (static_cast<::TQpLinSolverDens*>(p));
   }
   static void destruct_TQpLinSolverDens(void *p) {
      typedef ::TQpLinSolverDens current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TQpLinSolverDens

//______________________________________________________________________________
void TQpProbSparse::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpProbSparse.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpProbSparse::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpProbSparse::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpProbSparse(void *p) {
      return  p ? new(p) ::TQpProbSparse : new ::TQpProbSparse;
   }
   static void *newArray_TQpProbSparse(Long_t nElements, void *p) {
      return p ? new(p) ::TQpProbSparse[nElements] : new ::TQpProbSparse[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpProbSparse(void *p) {
      delete (static_cast<::TQpProbSparse*>(p));
   }
   static void deleteArray_TQpProbSparse(void *p) {
      delete [] (static_cast<::TQpProbSparse*>(p));
   }
   static void destruct_TQpProbSparse(void *p) {
      typedef ::TQpProbSparse current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TQpProbSparse

//______________________________________________________________________________
void TQpLinSolverSparse::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpLinSolverSparse.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpLinSolverSparse::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpLinSolverSparse::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpLinSolverSparse(void *p) {
      return  p ? new(p) ::TQpLinSolverSparse : new ::TQpLinSolverSparse;
   }
   static void *newArray_TQpLinSolverSparse(Long_t nElements, void *p) {
      return p ? new(p) ::TQpLinSolverSparse[nElements] : new ::TQpLinSolverSparse[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpLinSolverSparse(void *p) {
      delete (static_cast<::TQpLinSolverSparse*>(p));
   }
   static void deleteArray_TQpLinSolverSparse(void *p) {
      delete [] (static_cast<::TQpLinSolverSparse*>(p));
   }
   static void destruct_TQpLinSolverSparse(void *p) {
      typedef ::TQpLinSolverSparse current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TQpLinSolverSparse

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libQuadp() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libQuadp) = RecordReadRules_libQuadp();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libQuadp));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libQuadp_Impl() {
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
      TROOT::RegisterModule("libQuadp",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libQuadp_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libQuadp_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libQuadp() {
  TriggerDictionaryInitialization_libQuadp_Impl();
}
