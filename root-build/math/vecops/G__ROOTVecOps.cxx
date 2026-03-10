// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTVecOps
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
#include "ROOT/RVec.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   namespace VecOps {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLVecOps_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::VecOps", 0 /*version*/, "TCollectionProxyInfo.h", 43,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &ROOTcLcLVecOps_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLVecOps_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase_Dictionary();
   static void ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase(void *p);
   static void destruct_ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::VecOps::SmallVectorBase*)
   {
      ::ROOT::Internal::VecOps::SmallVectorBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::VecOps::SmallVectorBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::VecOps::SmallVectorBase", "ROOT/RVec.hxx", 140,
                  typeid(::ROOT::Internal::VecOps::SmallVectorBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::VecOps::SmallVectorBase) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::VecOps::SmallVectorBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Internal::VecOps::SmallVectorBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::VecOps::SmallVectorBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::VecOps::SmallVectorBase*>(nullptr))->GetClass();
      ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase(void *p) {
      delete (static_cast<::ROOT::Internal::VecOps::SmallVectorBase*>(p));
   }
   static void deleteArray_ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase(void *p) {
      delete [] (static_cast<::ROOT::Internal::VecOps::SmallVectorBase*>(p));
   }
   static void destruct_ROOTcLcLInternalcLcLVecOpscLcLSmallVectorBase(void *p) {
      typedef ::ROOT::Internal::VecOps::SmallVectorBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::VecOps::SmallVectorBase

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<unsigned short>*)
   {
      ROOT::VecOps::RVec<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<unsigned short>", -2, "ROOT/RVec.hxx", 3683,
                  typeid(ROOT::VecOps::RVec<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<unsigned short>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<unsigned short> >()));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<unsigned short>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<unsigned short>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<unsigned short>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<unsigned short> : new ROOT::VecOps::RVec<unsigned short>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<unsigned short>[nElements] : new ROOT::VecOps::RVec<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<unsigned short>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<unsigned short>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p) {
      typedef ROOT::VecOps::RVec<unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<unsigned short>

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<unsigned long>*)
   {
      ROOT::VecOps::RVec<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<unsigned long>", -2, "ROOT/RVec.hxx", 3685,
                  typeid(ROOT::VecOps::RVec<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<unsigned long>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<unsigned long> >()));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<unsigned long>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<unsigned long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<unsigned long>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<unsigned long> : new ROOT::VecOps::RVec<unsigned long>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<unsigned long>[nElements] : new ROOT::VecOps::RVec<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<unsigned long>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<unsigned long>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p) {
      typedef ROOT::VecOps::RVec<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<unsigned long>

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<unsigned int>*)
   {
      ROOT::VecOps::RVec<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<unsigned int>", -2, "ROOT/RVec.hxx", 3684,
                  typeid(ROOT::VecOps::RVec<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<unsigned int>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<unsigned int> >()));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<unsigned int>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<unsigned int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<unsigned int>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<unsigned int> : new ROOT::VecOps::RVec<unsigned int>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<unsigned int>[nElements] : new ROOT::VecOps::RVec<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<unsigned int>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<unsigned int>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p) {
      typedef ROOT::VecOps::RVec<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<unsigned int>

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<unsigned char>*)
   {
      ROOT::VecOps::RVec<unsigned char> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<unsigned char>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<unsigned char>", -2, "ROOT/RVec.hxx", 3682,
                  typeid(ROOT::VecOps::RVec<unsigned char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<unsigned char>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<unsigned char> >()));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<unsigned char>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<unsigned char>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<unsigned char>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<unsigned char>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<unsigned char> : new ROOT::VecOps::RVec<unsigned char>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<unsigned char>[nElements] : new ROOT::VecOps::RVec<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<unsigned char>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<unsigned char>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p) {
      typedef ROOT::VecOps::RVec<unsigned char> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<unsigned char>

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEstringgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEstringgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEstringgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEstringgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEstringgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEstringgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<string>*)
   {
      ROOT::VecOps::RVec<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<string>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<string>", -2, "ROOT/RVec.hxx", 1524,
                  typeid(ROOT::VecOps::RVec<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<string>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEstringgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEstringgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEstringgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEstringgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VecOps::RVec<string>","ROOT::VecOps::RVec<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<string>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<string>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<string>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<string> : new ROOT::VecOps::RVec<string>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<string>[nElements] : new ROOT::VecOps::RVec<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEstringgR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<string>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEstringgR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<string>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEstringgR(void *p) {
      typedef ROOT::VecOps::RVec<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<string>

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEshortgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEshortgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEshortgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<short>*)
   {
      ROOT::VecOps::RVec<short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<short>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<short>", -2, "ROOT/RVec.hxx", 3677,
                  typeid(ROOT::VecOps::RVec<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEshortgR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<short>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEshortgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEshortgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEshortgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEshortgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<short> >()));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<short>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<short>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<short>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<short> : new ROOT::VecOps::RVec<short>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<short>[nElements] : new ROOT::VecOps::RVec<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<short>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<short>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p) {
      typedef ROOT::VecOps::RVec<short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<short>

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclElonggR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclElonggR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclElonggR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclElonggR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclElonggR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclElonggR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<long>*)
   {
      ROOT::VecOps::RVec<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<long>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<long>", -2, "ROOT/RVec.hxx", 3679,
                  typeid(ROOT::VecOps::RVec<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclElonggR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<long>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclElonggR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclElonggR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclElonggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclElonggR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<long> >()));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<long>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<long>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclElonggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclElonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<long> : new ROOT::VecOps::RVec<long>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclElonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<long>[nElements] : new ROOT::VecOps::RVec<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclElonggR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<long>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclElonggR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<long>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclElonggR(void *p) {
      typedef ROOT::VecOps::RVec<long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<long>

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEintgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEintgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEintgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEintgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEintgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEintgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<int>*)
   {
      ROOT::VecOps::RVec<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<int>", -2, "ROOT/RVec.hxx", 3678,
                  typeid(ROOT::VecOps::RVec<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEintgR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<int>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEintgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEintgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEintgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<int> >()));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<int>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<int>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclEintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<int> : new ROOT::VecOps::RVec<int>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<int>[nElements] : new ROOT::VecOps::RVec<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEintgR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<int>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEintgR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<int>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEintgR(void *p) {
      typedef ROOT::VecOps::RVec<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<int>

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEfloatgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<float>*)
   {
      ROOT::VecOps::RVec<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<float>", -2, "ROOT/RVec.hxx", 3688,
                  typeid(ROOT::VecOps::RVec<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<float>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<float> >()));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<float>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<float> : new ROOT::VecOps::RVec<float>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<float>[nElements] : new ROOT::VecOps::RVec<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<float>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<float>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p) {
      typedef ROOT::VecOps::RVec<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<float>

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEdoublegR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<double>*)
   {
      ROOT::VecOps::RVec<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<double>", -2, "ROOT/RVec.hxx", 3689,
                  typeid(ROOT::VecOps::RVec<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<double>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<double> >()));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<double>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<double> : new ROOT::VecOps::RVec<double>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<double>[nElements] : new ROOT::VecOps::RVec<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<double>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<double>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p) {
      typedef ROOT::VecOps::RVec<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<double>

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEchargR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEchargR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEchargR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEchargR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEchargR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEchargR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<char>*)
   {
      ROOT::VecOps::RVec<char> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<char>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<char>", -2, "ROOT/RVec.hxx", 3676,
                  typeid(ROOT::VecOps::RVec<char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEchargR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<char>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEchargR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEchargR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEchargR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEchargR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<char> >()));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<char>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<char>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<char>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<char>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclEchargR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEchargR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<char> : new ROOT::VecOps::RVec<char>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEchargR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<char>[nElements] : new ROOT::VecOps::RVec<char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEchargR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<char>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEchargR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<char>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEchargR(void *p) {
      typedef ROOT::VecOps::RVec<char> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<char>

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEboolgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEboolgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEboolgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<bool>*)
   {
      ROOT::VecOps::RVec<bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<bool>", -2, "ROOT/RVec.hxx", 1524,
                  typeid(ROOT::VecOps::RVec<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEboolgR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<bool>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEboolgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEboolgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEboolgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEboolgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<bool> >()));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<bool>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<bool>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<bool>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<bool> : new ROOT::VecOps::RVec<bool>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEboolgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<bool>[nElements] : new ROOT::VecOps::RVec<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<bool>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<bool>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p) {
      typedef ROOT::VecOps::RVec<bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<bool>

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEULong64_tgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEULong64_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<ULong64_t>*)
   {
      ROOT::VecOps::RVec<ULong64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<ULong64_t>", -2, "ROOT/RVec.hxx", 1524,
                  typeid(ROOT::VecOps::RVec<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEULong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<ULong64_t>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEULong64_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEULong64_tgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEULong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEULong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<ULong64_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VecOps::RVec<ULong64_t>","ROOT::VecOps::RVec<unsigned long long>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<ULong64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<ULong64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<ULong64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<ULong64_t>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<ULong64_t> : new ROOT::VecOps::RVec<ULong64_t>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<ULong64_t>[nElements] : new ROOT::VecOps::RVec<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<ULong64_t>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<ULong64_t>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p) {
      typedef ROOT::VecOps::RVec<ULong64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<ULong64_t>

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclELong64_tgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclELong64_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclELong64_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ROOT::VecOps::RVec<Long64_t>*)
   {
      ROOT::VecOps::RVec<Long64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(ROOT::VecOps::RVec<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<Long64_t>", -2, "ROOT/RVec.hxx", 1524,
                  typeid(ROOT::VecOps::RVec<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclELong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(ROOT::VecOps::RVec<Long64_t>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclELong64_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclELong64_tgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclELong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclELong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclELong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< ROOT::VecOps::RVec<Long64_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VecOps::RVec<Long64_t>","ROOT::VecOps::RVec<long long>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ROOT::VecOps::RVec<Long64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<ROOT::VecOps::RVec<Long64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<Long64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ROOT::VecOps::RVec<Long64_t>*>(nullptr))->GetClass();
      ROOTcLcLVecOpscLcLRVeclELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<Long64_t> : new ROOT::VecOps::RVec<Long64_t>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclELong64_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ROOT::VecOps::RVec<Long64_t>[nElements] : new ROOT::VecOps::RVec<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p) {
      delete (static_cast<ROOT::VecOps::RVec<Long64_t>*>(p));
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p) {
      delete [] (static_cast<ROOT::VecOps::RVec<Long64_t>*>(p));
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p) {
      typedef ROOT::VecOps::RVec<Long64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ROOT::VecOps::RVec<Long64_t>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTVecOps() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTVecOps) = RecordReadRules_libROOTVecOps();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTVecOps));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTVecOps_Impl() {
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
      TROOT::RegisterModule("libROOTVecOps",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTVecOps_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTVecOps_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTVecOps() {
  TriggerDictionaryInitialization_libROOTVecOps_Impl();
}
