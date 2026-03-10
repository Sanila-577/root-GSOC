// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__unordered_multisetDict
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
#include "unordered_set"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *unordered_multisetlEvoidmUgR_Dictionary();
   static void unordered_multisetlEvoidmUgR_TClassManip(TClass*);
   static void *new_unordered_multisetlEvoidmUgR(void *p = nullptr);
   static void *newArray_unordered_multisetlEvoidmUgR(Long_t size, void *p);
   static void delete_unordered_multisetlEvoidmUgR(void *p);
   static void deleteArray_unordered_multisetlEvoidmUgR(void *p);
   static void destruct_unordered_multisetlEvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multiset<void*>*)
   {
      unordered_multiset<void*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multiset<void*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multiset<void*>", -2, "unordered_set", 1202,
                  typeid(unordered_multiset<void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multisetlEvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multiset<void*>) );
      instance.SetNew(&new_unordered_multisetlEvoidmUgR);
      instance.SetNewArray(&newArray_unordered_multisetlEvoidmUgR);
      instance.SetDelete(&delete_unordered_multisetlEvoidmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_multisetlEvoidmUgR);
      instance.SetDestructor(&destruct_unordered_multisetlEvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_multiset<void*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multiset<void*>","std::__1::unordered_multiset<void*, std::__1::hash<void*>, std::__1::equal_to<void*>, std::__1::allocator<void*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multiset<void*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multisetlEvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multiset<void*>*>(nullptr))->GetClass();
      unordered_multisetlEvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multisetlEvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multisetlEvoidmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<void*> : new unordered_multiset<void*>;
   }
   static void *newArray_unordered_multisetlEvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<void*>[nElements] : new unordered_multiset<void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multisetlEvoidmUgR(void *p) {
      delete (static_cast<unordered_multiset<void*>*>(p));
   }
   static void deleteArray_unordered_multisetlEvoidmUgR(void *p) {
      delete [] (static_cast<unordered_multiset<void*>*>(p));
   }
   static void destruct_unordered_multisetlEvoidmUgR(void *p) {
      typedef unordered_multiset<void*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multiset<void*>

namespace ROOT {
   static TClass *unordered_multisetlEstringgR_Dictionary();
   static void unordered_multisetlEstringgR_TClassManip(TClass*);
   static void *new_unordered_multisetlEstringgR(void *p = nullptr);
   static void *newArray_unordered_multisetlEstringgR(Long_t size, void *p);
   static void delete_unordered_multisetlEstringgR(void *p);
   static void deleteArray_unordered_multisetlEstringgR(void *p);
   static void destruct_unordered_multisetlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multiset<string>*)
   {
      unordered_multiset<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multiset<string>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multiset<string>", -2, "unordered_set", 1202,
                  typeid(unordered_multiset<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multisetlEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multiset<string>) );
      instance.SetNew(&new_unordered_multisetlEstringgR);
      instance.SetNewArray(&newArray_unordered_multisetlEstringgR);
      instance.SetDelete(&delete_unordered_multisetlEstringgR);
      instance.SetDeleteArray(&deleteArray_unordered_multisetlEstringgR);
      instance.SetDestructor(&destruct_unordered_multisetlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_multiset<string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multiset<string>","std::__1::unordered_multiset<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multiset<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multisetlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multiset<string>*>(nullptr))->GetClass();
      unordered_multisetlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multisetlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multisetlEstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<string> : new unordered_multiset<string>;
   }
   static void *newArray_unordered_multisetlEstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<string>[nElements] : new unordered_multiset<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multisetlEstringgR(void *p) {
      delete (static_cast<unordered_multiset<string>*>(p));
   }
   static void deleteArray_unordered_multisetlEstringgR(void *p) {
      delete [] (static_cast<unordered_multiset<string>*>(p));
   }
   static void destruct_unordered_multisetlEstringgR(void *p) {
      typedef unordered_multiset<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multiset<string>

namespace ROOT {
   static TClass *unordered_multisetlElonggR_Dictionary();
   static void unordered_multisetlElonggR_TClassManip(TClass*);
   static void *new_unordered_multisetlElonggR(void *p = nullptr);
   static void *newArray_unordered_multisetlElonggR(Long_t size, void *p);
   static void delete_unordered_multisetlElonggR(void *p);
   static void deleteArray_unordered_multisetlElonggR(void *p);
   static void destruct_unordered_multisetlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multiset<long>*)
   {
      unordered_multiset<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multiset<long>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multiset<long>", -2, "unordered_set", 1202,
                  typeid(unordered_multiset<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multisetlElonggR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multiset<long>) );
      instance.SetNew(&new_unordered_multisetlElonggR);
      instance.SetNewArray(&newArray_unordered_multisetlElonggR);
      instance.SetDelete(&delete_unordered_multisetlElonggR);
      instance.SetDeleteArray(&deleteArray_unordered_multisetlElonggR);
      instance.SetDestructor(&destruct_unordered_multisetlElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_multiset<long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multiset<long>","std::__1::unordered_multiset<long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<long>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multiset<long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multisetlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multiset<long>*>(nullptr))->GetClass();
      unordered_multisetlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multisetlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multisetlElonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<long> : new unordered_multiset<long>;
   }
   static void *newArray_unordered_multisetlElonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<long>[nElements] : new unordered_multiset<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multisetlElonggR(void *p) {
      delete (static_cast<unordered_multiset<long>*>(p));
   }
   static void deleteArray_unordered_multisetlElonggR(void *p) {
      delete [] (static_cast<unordered_multiset<long>*>(p));
   }
   static void destruct_unordered_multisetlElonggR(void *p) {
      typedef unordered_multiset<long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multiset<long>

namespace ROOT {
   static TClass *unordered_multisetlEintgR_Dictionary();
   static void unordered_multisetlEintgR_TClassManip(TClass*);
   static void *new_unordered_multisetlEintgR(void *p = nullptr);
   static void *newArray_unordered_multisetlEintgR(Long_t size, void *p);
   static void delete_unordered_multisetlEintgR(void *p);
   static void deleteArray_unordered_multisetlEintgR(void *p);
   static void destruct_unordered_multisetlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multiset<int>*)
   {
      unordered_multiset<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multiset<int>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multiset<int>", -2, "unordered_set", 1202,
                  typeid(unordered_multiset<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multisetlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multiset<int>) );
      instance.SetNew(&new_unordered_multisetlEintgR);
      instance.SetNewArray(&newArray_unordered_multisetlEintgR);
      instance.SetDelete(&delete_unordered_multisetlEintgR);
      instance.SetDeleteArray(&deleteArray_unordered_multisetlEintgR);
      instance.SetDestructor(&destruct_unordered_multisetlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_multiset<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multiset<int>","std::__1::unordered_multiset<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multiset<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multisetlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multiset<int>*>(nullptr))->GetClass();
      unordered_multisetlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multisetlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multisetlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<int> : new unordered_multiset<int>;
   }
   static void *newArray_unordered_multisetlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<int>[nElements] : new unordered_multiset<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multisetlEintgR(void *p) {
      delete (static_cast<unordered_multiset<int>*>(p));
   }
   static void deleteArray_unordered_multisetlEintgR(void *p) {
      delete [] (static_cast<unordered_multiset<int>*>(p));
   }
   static void destruct_unordered_multisetlEintgR(void *p) {
      typedef unordered_multiset<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multiset<int>

namespace ROOT {
   static TClass *unordered_multisetlEfloatgR_Dictionary();
   static void unordered_multisetlEfloatgR_TClassManip(TClass*);
   static void *new_unordered_multisetlEfloatgR(void *p = nullptr);
   static void *newArray_unordered_multisetlEfloatgR(Long_t size, void *p);
   static void delete_unordered_multisetlEfloatgR(void *p);
   static void deleteArray_unordered_multisetlEfloatgR(void *p);
   static void destruct_unordered_multisetlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multiset<float>*)
   {
      unordered_multiset<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multiset<float>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multiset<float>", -2, "unordered_set", 1202,
                  typeid(unordered_multiset<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multisetlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multiset<float>) );
      instance.SetNew(&new_unordered_multisetlEfloatgR);
      instance.SetNewArray(&newArray_unordered_multisetlEfloatgR);
      instance.SetDelete(&delete_unordered_multisetlEfloatgR);
      instance.SetDeleteArray(&deleteArray_unordered_multisetlEfloatgR);
      instance.SetDestructor(&destruct_unordered_multisetlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_multiset<float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multiset<float>","std::__1::unordered_multiset<float, std::__1::hash<float>, std::__1::equal_to<float>, std::__1::allocator<float>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multiset<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multisetlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multiset<float>*>(nullptr))->GetClass();
      unordered_multisetlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multisetlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multisetlEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<float> : new unordered_multiset<float>;
   }
   static void *newArray_unordered_multisetlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<float>[nElements] : new unordered_multiset<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multisetlEfloatgR(void *p) {
      delete (static_cast<unordered_multiset<float>*>(p));
   }
   static void deleteArray_unordered_multisetlEfloatgR(void *p) {
      delete [] (static_cast<unordered_multiset<float>*>(p));
   }
   static void destruct_unordered_multisetlEfloatgR(void *p) {
      typedef unordered_multiset<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multiset<float>

namespace ROOT {
   static TClass *unordered_multisetlEdoublegR_Dictionary();
   static void unordered_multisetlEdoublegR_TClassManip(TClass*);
   static void *new_unordered_multisetlEdoublegR(void *p = nullptr);
   static void *newArray_unordered_multisetlEdoublegR(Long_t size, void *p);
   static void delete_unordered_multisetlEdoublegR(void *p);
   static void deleteArray_unordered_multisetlEdoublegR(void *p);
   static void destruct_unordered_multisetlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multiset<double>*)
   {
      unordered_multiset<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multiset<double>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multiset<double>", -2, "unordered_set", 1202,
                  typeid(unordered_multiset<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multisetlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multiset<double>) );
      instance.SetNew(&new_unordered_multisetlEdoublegR);
      instance.SetNewArray(&newArray_unordered_multisetlEdoublegR);
      instance.SetDelete(&delete_unordered_multisetlEdoublegR);
      instance.SetDeleteArray(&deleteArray_unordered_multisetlEdoublegR);
      instance.SetDestructor(&destruct_unordered_multisetlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_multiset<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multiset<double>","std::__1::unordered_multiset<double, std::__1::hash<double>, std::__1::equal_to<double>, std::__1::allocator<double>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multiset<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multisetlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multiset<double>*>(nullptr))->GetClass();
      unordered_multisetlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multisetlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multisetlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<double> : new unordered_multiset<double>;
   }
   static void *newArray_unordered_multisetlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<double>[nElements] : new unordered_multiset<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multisetlEdoublegR(void *p) {
      delete (static_cast<unordered_multiset<double>*>(p));
   }
   static void deleteArray_unordered_multisetlEdoublegR(void *p) {
      delete [] (static_cast<unordered_multiset<double>*>(p));
   }
   static void destruct_unordered_multisetlEdoublegR(void *p) {
      typedef unordered_multiset<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multiset<double>

namespace ROOT {
   static TClass *unordered_multisetlEcharmUgR_Dictionary();
   static void unordered_multisetlEcharmUgR_TClassManip(TClass*);
   static void *new_unordered_multisetlEcharmUgR(void *p = nullptr);
   static void *newArray_unordered_multisetlEcharmUgR(Long_t size, void *p);
   static void delete_unordered_multisetlEcharmUgR(void *p);
   static void deleteArray_unordered_multisetlEcharmUgR(void *p);
   static void destruct_unordered_multisetlEcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multiset<char*>*)
   {
      unordered_multiset<char*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multiset<char*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multiset<char*>", -2, "unordered_set", 1202,
                  typeid(unordered_multiset<char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multisetlEcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multiset<char*>) );
      instance.SetNew(&new_unordered_multisetlEcharmUgR);
      instance.SetNewArray(&newArray_unordered_multisetlEcharmUgR);
      instance.SetDelete(&delete_unordered_multisetlEcharmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_multisetlEcharmUgR);
      instance.SetDestructor(&destruct_unordered_multisetlEcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_multiset<char*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multiset<char*>","std::__1::unordered_multiset<char*, std::__1::hash<char*>, std::__1::equal_to<char*>, std::__1::allocator<char*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multiset<char*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multisetlEcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multiset<char*>*>(nullptr))->GetClass();
      unordered_multisetlEcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multisetlEcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multisetlEcharmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<char*> : new unordered_multiset<char*>;
   }
   static void *newArray_unordered_multisetlEcharmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multiset<char*>[nElements] : new unordered_multiset<char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multisetlEcharmUgR(void *p) {
      delete (static_cast<unordered_multiset<char*>*>(p));
   }
   static void deleteArray_unordered_multisetlEcharmUgR(void *p) {
      delete [] (static_cast<unordered_multiset<char*>*>(p));
   }
   static void destruct_unordered_multisetlEcharmUgR(void *p) {
      typedef unordered_multiset<char*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multiset<char*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libunordered_multisetDict() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libunordered_multisetDict) = RecordReadRules_libunordered_multisetDict();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libunordered_multisetDict));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libunordered_multisetDict_Impl() {
    static const char* headers[] = {
"unordered_set",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libunordered_multisetDict dictionary payload"

#ifndef R__DUMMY_CXX_STANDARD_17
  #define R__DUMMY_CXX_STANDARD_17 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "unordered_set"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libunordered_multisetDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libunordered_multisetDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libunordered_multisetDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libunordered_multisetDict() {
  TriggerDictionaryInitialization_libunordered_multisetDict_Impl();
}
