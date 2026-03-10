// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__dequeDict
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
#include "deque"

// Header files passed via #pragma extra_include
#include "deque"

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *dequelEvoidmUgR_Dictionary();
   static void dequelEvoidmUgR_TClassManip(TClass*);
   static void *new_dequelEvoidmUgR(void *p = nullptr);
   static void *newArray_dequelEvoidmUgR(Long_t size, void *p);
   static void delete_dequelEvoidmUgR(void *p);
   static void deleteArray_dequelEvoidmUgR(void *p);
   static void destruct_dequelEvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<void*>*)
   {
      deque<void*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<void*>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<void*>", -2, "deque", 489,
                  typeid(deque<void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(deque<void*>) );
      instance.SetNew(&new_dequelEvoidmUgR);
      instance.SetNewArray(&newArray_dequelEvoidmUgR);
      instance.SetDelete(&delete_dequelEvoidmUgR);
      instance.SetDeleteArray(&deleteArray_dequelEvoidmUgR);
      instance.SetDestructor(&destruct_dequelEvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<void*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("deque<void*>","std::__1::deque<void*, std::__1::allocator<void*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const deque<void*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const deque<void*>*>(nullptr))->GetClass();
      dequelEvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEvoidmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<void*> : new deque<void*>;
   }
   static void *newArray_dequelEvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<void*>[nElements] : new deque<void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEvoidmUgR(void *p) {
      delete (static_cast<deque<void*>*>(p));
   }
   static void deleteArray_dequelEvoidmUgR(void *p) {
      delete [] (static_cast<deque<void*>*>(p));
   }
   static void destruct_dequelEvoidmUgR(void *p) {
      typedef deque<void*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class deque<void*>

namespace ROOT {
   static TClass *dequelEunsignedsPshortgR_Dictionary();
   static void dequelEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_dequelEunsignedsPshortgR(void *p = nullptr);
   static void *newArray_dequelEunsignedsPshortgR(Long_t size, void *p);
   static void delete_dequelEunsignedsPshortgR(void *p);
   static void deleteArray_dequelEunsignedsPshortgR(void *p);
   static void destruct_dequelEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<unsigned short>*)
   {
      deque<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<unsigned short>", -2, "deque", 489,
                  typeid(deque<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEunsignedsPshortgR_Dictionary, isa_proxy, 4,
                  sizeof(deque<unsigned short>) );
      instance.SetNew(&new_dequelEunsignedsPshortgR);
      instance.SetNewArray(&newArray_dequelEunsignedsPshortgR);
      instance.SetDelete(&delete_dequelEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_dequelEunsignedsPshortgR);
      instance.SetDestructor(&destruct_dequelEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<unsigned short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("deque<unsigned short>","std::__1::deque<unsigned short, std::__1::allocator<unsigned short>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const deque<unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const deque<unsigned short>*>(nullptr))->GetClass();
      dequelEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEunsignedsPshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<unsigned short> : new deque<unsigned short>;
   }
   static void *newArray_dequelEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<unsigned short>[nElements] : new deque<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEunsignedsPshortgR(void *p) {
      delete (static_cast<deque<unsigned short>*>(p));
   }
   static void deleteArray_dequelEunsignedsPshortgR(void *p) {
      delete [] (static_cast<deque<unsigned short>*>(p));
   }
   static void destruct_dequelEunsignedsPshortgR(void *p) {
      typedef deque<unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class deque<unsigned short>

namespace ROOT {
   static TClass *dequelEunsignedsPlonggR_Dictionary();
   static void dequelEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_dequelEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_dequelEunsignedsPlonggR(Long_t size, void *p);
   static void delete_dequelEunsignedsPlonggR(void *p);
   static void deleteArray_dequelEunsignedsPlonggR(void *p);
   static void destruct_dequelEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<unsigned long>*)
   {
      deque<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<unsigned long>", -2, "deque", 489,
                  typeid(deque<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(deque<unsigned long>) );
      instance.SetNew(&new_dequelEunsignedsPlonggR);
      instance.SetNewArray(&newArray_dequelEunsignedsPlonggR);
      instance.SetDelete(&delete_dequelEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_dequelEunsignedsPlonggR);
      instance.SetDestructor(&destruct_dequelEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<unsigned long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("deque<unsigned long>","std::__1::deque<unsigned long, std::__1::allocator<unsigned long>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const deque<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const deque<unsigned long>*>(nullptr))->GetClass();
      dequelEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEunsignedsPlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<unsigned long> : new deque<unsigned long>;
   }
   static void *newArray_dequelEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<unsigned long>[nElements] : new deque<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEunsignedsPlonggR(void *p) {
      delete (static_cast<deque<unsigned long>*>(p));
   }
   static void deleteArray_dequelEunsignedsPlonggR(void *p) {
      delete [] (static_cast<deque<unsigned long>*>(p));
   }
   static void destruct_dequelEunsignedsPlonggR(void *p) {
      typedef deque<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class deque<unsigned long>

namespace ROOT {
   static TClass *dequelEunsignedsPintgR_Dictionary();
   static void dequelEunsignedsPintgR_TClassManip(TClass*);
   static void *new_dequelEunsignedsPintgR(void *p = nullptr);
   static void *newArray_dequelEunsignedsPintgR(Long_t size, void *p);
   static void delete_dequelEunsignedsPintgR(void *p);
   static void deleteArray_dequelEunsignedsPintgR(void *p);
   static void destruct_dequelEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<unsigned int>*)
   {
      deque<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<unsigned int>", -2, "deque", 489,
                  typeid(deque<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(deque<unsigned int>) );
      instance.SetNew(&new_dequelEunsignedsPintgR);
      instance.SetNewArray(&newArray_dequelEunsignedsPintgR);
      instance.SetDelete(&delete_dequelEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_dequelEunsignedsPintgR);
      instance.SetDestructor(&destruct_dequelEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<unsigned int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("deque<unsigned int>","std::__1::deque<unsigned int, std::__1::allocator<unsigned int>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const deque<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const deque<unsigned int>*>(nullptr))->GetClass();
      dequelEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<unsigned int> : new deque<unsigned int>;
   }
   static void *newArray_dequelEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<unsigned int>[nElements] : new deque<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEunsignedsPintgR(void *p) {
      delete (static_cast<deque<unsigned int>*>(p));
   }
   static void deleteArray_dequelEunsignedsPintgR(void *p) {
      delete [] (static_cast<deque<unsigned int>*>(p));
   }
   static void destruct_dequelEunsignedsPintgR(void *p) {
      typedef deque<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class deque<unsigned int>

namespace ROOT {
   static TClass *dequelEshortgR_Dictionary();
   static void dequelEshortgR_TClassManip(TClass*);
   static void *new_dequelEshortgR(void *p = nullptr);
   static void *newArray_dequelEshortgR(Long_t size, void *p);
   static void delete_dequelEshortgR(void *p);
   static void deleteArray_dequelEshortgR(void *p);
   static void destruct_dequelEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<short>*)
   {
      deque<short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<short>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<short>", -2, "deque", 489,
                  typeid(deque<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEshortgR_Dictionary, isa_proxy, 4,
                  sizeof(deque<short>) );
      instance.SetNew(&new_dequelEshortgR);
      instance.SetNewArray(&newArray_dequelEshortgR);
      instance.SetDelete(&delete_dequelEshortgR);
      instance.SetDeleteArray(&deleteArray_dequelEshortgR);
      instance.SetDestructor(&destruct_dequelEshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("deque<short>","std::__1::deque<short, std::__1::allocator<short>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const deque<short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const deque<short>*>(nullptr))->GetClass();
      dequelEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<short> : new deque<short>;
   }
   static void *newArray_dequelEshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<short>[nElements] : new deque<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEshortgR(void *p) {
      delete (static_cast<deque<short>*>(p));
   }
   static void deleteArray_dequelEshortgR(void *p) {
      delete [] (static_cast<deque<short>*>(p));
   }
   static void destruct_dequelEshortgR(void *p) {
      typedef deque<short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class deque<short>

namespace ROOT {
   static TClass *dequelElonggR_Dictionary();
   static void dequelElonggR_TClassManip(TClass*);
   static void *new_dequelElonggR(void *p = nullptr);
   static void *newArray_dequelElonggR(Long_t size, void *p);
   static void delete_dequelElonggR(void *p);
   static void deleteArray_dequelElonggR(void *p);
   static void destruct_dequelElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<long>*)
   {
      deque<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<long>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<long>", -2, "deque", 489,
                  typeid(deque<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelElonggR_Dictionary, isa_proxy, 4,
                  sizeof(deque<long>) );
      instance.SetNew(&new_dequelElonggR);
      instance.SetNewArray(&newArray_dequelElonggR);
      instance.SetDelete(&delete_dequelElonggR);
      instance.SetDeleteArray(&deleteArray_dequelElonggR);
      instance.SetDestructor(&destruct_dequelElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("deque<long>","std::__1::deque<long, std::__1::allocator<long>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const deque<long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const deque<long>*>(nullptr))->GetClass();
      dequelElonggR_TClassManip(theClass);
   return theClass;
   }

   static void dequelElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelElonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<long> : new deque<long>;
   }
   static void *newArray_dequelElonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<long>[nElements] : new deque<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelElonggR(void *p) {
      delete (static_cast<deque<long>*>(p));
   }
   static void deleteArray_dequelElonggR(void *p) {
      delete [] (static_cast<deque<long>*>(p));
   }
   static void destruct_dequelElonggR(void *p) {
      typedef deque<long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class deque<long>

namespace ROOT {
   static TClass *dequelEintgR_Dictionary();
   static void dequelEintgR_TClassManip(TClass*);
   static void *new_dequelEintgR(void *p = nullptr);
   static void *newArray_dequelEintgR(Long_t size, void *p);
   static void delete_dequelEintgR(void *p);
   static void deleteArray_dequelEintgR(void *p);
   static void destruct_dequelEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<int>*)
   {
      deque<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<int>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<int>", -2, "deque", 489,
                  typeid(deque<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEintgR_Dictionary, isa_proxy, 4,
                  sizeof(deque<int>) );
      instance.SetNew(&new_dequelEintgR);
      instance.SetNewArray(&newArray_dequelEintgR);
      instance.SetDelete(&delete_dequelEintgR);
      instance.SetDeleteArray(&deleteArray_dequelEintgR);
      instance.SetDestructor(&destruct_dequelEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("deque<int>","std::__1::deque<int, std::__1::allocator<int>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const deque<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const deque<int>*>(nullptr))->GetClass();
      dequelEintgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<int> : new deque<int>;
   }
   static void *newArray_dequelEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<int>[nElements] : new deque<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEintgR(void *p) {
      delete (static_cast<deque<int>*>(p));
   }
   static void deleteArray_dequelEintgR(void *p) {
      delete [] (static_cast<deque<int>*>(p));
   }
   static void destruct_dequelEintgR(void *p) {
      typedef deque<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class deque<int>

namespace ROOT {
   static TClass *dequelEfloatgR_Dictionary();
   static void dequelEfloatgR_TClassManip(TClass*);
   static void *new_dequelEfloatgR(void *p = nullptr);
   static void *newArray_dequelEfloatgR(Long_t size, void *p);
   static void delete_dequelEfloatgR(void *p);
   static void deleteArray_dequelEfloatgR(void *p);
   static void destruct_dequelEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<float>*)
   {
      deque<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<float>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<float>", -2, "deque", 489,
                  typeid(deque<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(deque<float>) );
      instance.SetNew(&new_dequelEfloatgR);
      instance.SetNewArray(&newArray_dequelEfloatgR);
      instance.SetDelete(&delete_dequelEfloatgR);
      instance.SetDeleteArray(&deleteArray_dequelEfloatgR);
      instance.SetDestructor(&destruct_dequelEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("deque<float>","std::__1::deque<float, std::__1::allocator<float>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const deque<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const deque<float>*>(nullptr))->GetClass();
      dequelEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<float> : new deque<float>;
   }
   static void *newArray_dequelEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<float>[nElements] : new deque<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEfloatgR(void *p) {
      delete (static_cast<deque<float>*>(p));
   }
   static void deleteArray_dequelEfloatgR(void *p) {
      delete [] (static_cast<deque<float>*>(p));
   }
   static void destruct_dequelEfloatgR(void *p) {
      typedef deque<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class deque<float>

namespace ROOT {
   static TClass *dequelEdoublegR_Dictionary();
   static void dequelEdoublegR_TClassManip(TClass*);
   static void *new_dequelEdoublegR(void *p = nullptr);
   static void *newArray_dequelEdoublegR(Long_t size, void *p);
   static void delete_dequelEdoublegR(void *p);
   static void deleteArray_dequelEdoublegR(void *p);
   static void destruct_dequelEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<double>*)
   {
      deque<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<double>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<double>", -2, "deque", 489,
                  typeid(deque<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(deque<double>) );
      instance.SetNew(&new_dequelEdoublegR);
      instance.SetNewArray(&newArray_dequelEdoublegR);
      instance.SetDelete(&delete_dequelEdoublegR);
      instance.SetDeleteArray(&deleteArray_dequelEdoublegR);
      instance.SetDestructor(&destruct_dequelEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("deque<double>","std::__1::deque<double, std::__1::allocator<double>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const deque<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const deque<double>*>(nullptr))->GetClass();
      dequelEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<double> : new deque<double>;
   }
   static void *newArray_dequelEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<double>[nElements] : new deque<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEdoublegR(void *p) {
      delete (static_cast<deque<double>*>(p));
   }
   static void deleteArray_dequelEdoublegR(void *p) {
      delete [] (static_cast<deque<double>*>(p));
   }
   static void destruct_dequelEdoublegR(void *p) {
      typedef deque<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class deque<double>

namespace ROOT {
   static TClass *dequelEcharmUgR_Dictionary();
   static void dequelEcharmUgR_TClassManip(TClass*);
   static void *new_dequelEcharmUgR(void *p = nullptr);
   static void *newArray_dequelEcharmUgR(Long_t size, void *p);
   static void delete_dequelEcharmUgR(void *p);
   static void deleteArray_dequelEcharmUgR(void *p);
   static void destruct_dequelEcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<char*>*)
   {
      deque<char*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<char*>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<char*>", -2, "deque", 489,
                  typeid(deque<char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(deque<char*>) );
      instance.SetNew(&new_dequelEcharmUgR);
      instance.SetNewArray(&newArray_dequelEcharmUgR);
      instance.SetDelete(&delete_dequelEcharmUgR);
      instance.SetDeleteArray(&deleteArray_dequelEcharmUgR);
      instance.SetDestructor(&destruct_dequelEcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<char*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("deque<char*>","std::__1::deque<char*, std::__1::allocator<char*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const deque<char*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const deque<char*>*>(nullptr))->GetClass();
      dequelEcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEcharmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<char*> : new deque<char*>;
   }
   static void *newArray_dequelEcharmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) deque<char*>[nElements] : new deque<char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEcharmUgR(void *p) {
      delete (static_cast<deque<char*>*>(p));
   }
   static void deleteArray_dequelEcharmUgR(void *p) {
      delete [] (static_cast<deque<char*>*>(p));
   }
   static void destruct_dequelEcharmUgR(void *p) {
      typedef deque<char*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class deque<char*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libdequeDict() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libdequeDict) = RecordReadRules_libdequeDict();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libdequeDict));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libdequeDict_Impl() {
    static const char* headers[] = {
"deque",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libdequeDict dictionary payload"

#ifndef R__DUMMY_CXX_STANDARD_17
  #define R__DUMMY_CXX_STANDARD_17 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "deque"

// Extra includes
#include "deque"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libdequeDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libdequeDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libdequeDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libdequeDict() {
  TriggerDictionaryInitialization_libdequeDict_Impl();
}
