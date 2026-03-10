// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__unordered_multimapDict
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
#include "unordered_map"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *unordered_multimaplEstringcOvoidmUgR_Dictionary();
   static void unordered_multimaplEstringcOvoidmUgR_TClassManip(TClass*);
   static void *new_unordered_multimaplEstringcOvoidmUgR(void *p = nullptr);
   static void *newArray_unordered_multimaplEstringcOvoidmUgR(Long_t size, void *p);
   static void delete_unordered_multimaplEstringcOvoidmUgR(void *p);
   static void deleteArray_unordered_multimaplEstringcOvoidmUgR(void *p);
   static void destruct_unordered_multimaplEstringcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<string,void*>*)
   {
      unordered_multimap<string,void*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<string,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<string,void*>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<string,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEstringcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<string,void*>) );
      instance.SetNew(&new_unordered_multimaplEstringcOvoidmUgR);
      instance.SetNewArray(&newArray_unordered_multimaplEstringcOvoidmUgR);
      instance.SetDelete(&delete_unordered_multimaplEstringcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEstringcOvoidmUgR);
      instance.SetDestructor(&destruct_unordered_multimaplEstringcOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<string,void*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<string,void*>","std::__1::unordered_multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, void*, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, void*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<string,void*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEstringcOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<string,void*>*>(nullptr))->GetClass();
      unordered_multimaplEstringcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEstringcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEstringcOvoidmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<string,void*> : new unordered_multimap<string,void*>;
   }
   static void *newArray_unordered_multimaplEstringcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<string,void*>[nElements] : new unordered_multimap<string,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEstringcOvoidmUgR(void *p) {
      delete (static_cast<unordered_multimap<string,void*>*>(p));
   }
   static void deleteArray_unordered_multimaplEstringcOvoidmUgR(void *p) {
      delete [] (static_cast<unordered_multimap<string,void*>*>(p));
   }
   static void destruct_unordered_multimaplEstringcOvoidmUgR(void *p) {
      typedef unordered_multimap<string,void*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<string,void*>

namespace ROOT {
   static TClass *unordered_multimaplEstringcOlonggR_Dictionary();
   static void unordered_multimaplEstringcOlonggR_TClassManip(TClass*);
   static void *new_unordered_multimaplEstringcOlonggR(void *p = nullptr);
   static void *newArray_unordered_multimaplEstringcOlonggR(Long_t size, void *p);
   static void delete_unordered_multimaplEstringcOlonggR(void *p);
   static void deleteArray_unordered_multimaplEstringcOlonggR(void *p);
   static void destruct_unordered_multimaplEstringcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<string,long>*)
   {
      unordered_multimap<string,long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<string,long>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<string,long>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<string,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEstringcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<string,long>) );
      instance.SetNew(&new_unordered_multimaplEstringcOlonggR);
      instance.SetNewArray(&newArray_unordered_multimaplEstringcOlonggR);
      instance.SetDelete(&delete_unordered_multimaplEstringcOlonggR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEstringcOlonggR);
      instance.SetDestructor(&destruct_unordered_multimaplEstringcOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<string,long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<string,long>","std::__1::unordered_multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, long, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, long>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<string,long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEstringcOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<string,long>*>(nullptr))->GetClass();
      unordered_multimaplEstringcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEstringcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEstringcOlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<string,long> : new unordered_multimap<string,long>;
   }
   static void *newArray_unordered_multimaplEstringcOlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<string,long>[nElements] : new unordered_multimap<string,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEstringcOlonggR(void *p) {
      delete (static_cast<unordered_multimap<string,long>*>(p));
   }
   static void deleteArray_unordered_multimaplEstringcOlonggR(void *p) {
      delete [] (static_cast<unordered_multimap<string,long>*>(p));
   }
   static void destruct_unordered_multimaplEstringcOlonggR(void *p) {
      typedef unordered_multimap<string,long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<string,long>

namespace ROOT {
   static TClass *unordered_multimaplEstringcOintgR_Dictionary();
   static void unordered_multimaplEstringcOintgR_TClassManip(TClass*);
   static void *new_unordered_multimaplEstringcOintgR(void *p = nullptr);
   static void *newArray_unordered_multimaplEstringcOintgR(Long_t size, void *p);
   static void delete_unordered_multimaplEstringcOintgR(void *p);
   static void deleteArray_unordered_multimaplEstringcOintgR(void *p);
   static void destruct_unordered_multimaplEstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<string,int>*)
   {
      unordered_multimap<string,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<string,int>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<string,int>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<string,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEstringcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<string,int>) );
      instance.SetNew(&new_unordered_multimaplEstringcOintgR);
      instance.SetNewArray(&newArray_unordered_multimaplEstringcOintgR);
      instance.SetDelete(&delete_unordered_multimaplEstringcOintgR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEstringcOintgR);
      instance.SetDestructor(&destruct_unordered_multimaplEstringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<string,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<string,int>","std::__1::unordered_multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, int, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<string,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEstringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<string,int>*>(nullptr))->GetClass();
      unordered_multimaplEstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEstringcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<string,int> : new unordered_multimap<string,int>;
   }
   static void *newArray_unordered_multimaplEstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<string,int>[nElements] : new unordered_multimap<string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEstringcOintgR(void *p) {
      delete (static_cast<unordered_multimap<string,int>*>(p));
   }
   static void deleteArray_unordered_multimaplEstringcOintgR(void *p) {
      delete [] (static_cast<unordered_multimap<string,int>*>(p));
   }
   static void destruct_unordered_multimaplEstringcOintgR(void *p) {
      typedef unordered_multimap<string,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<string,int>

namespace ROOT {
   static TClass *unordered_multimaplEstringcOdoublegR_Dictionary();
   static void unordered_multimaplEstringcOdoublegR_TClassManip(TClass*);
   static void *new_unordered_multimaplEstringcOdoublegR(void *p = nullptr);
   static void *newArray_unordered_multimaplEstringcOdoublegR(Long_t size, void *p);
   static void delete_unordered_multimaplEstringcOdoublegR(void *p);
   static void deleteArray_unordered_multimaplEstringcOdoublegR(void *p);
   static void destruct_unordered_multimaplEstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<string,double>*)
   {
      unordered_multimap<string,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<string,double>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEstringcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<string,double>) );
      instance.SetNew(&new_unordered_multimaplEstringcOdoublegR);
      instance.SetNewArray(&newArray_unordered_multimaplEstringcOdoublegR);
      instance.SetDelete(&delete_unordered_multimaplEstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEstringcOdoublegR);
      instance.SetDestructor(&destruct_unordered_multimaplEstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<string,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<string,double>","std::__1::unordered_multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, double, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<string,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<string,double>*>(nullptr))->GetClass();
      unordered_multimaplEstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEstringcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<string,double> : new unordered_multimap<string,double>;
   }
   static void *newArray_unordered_multimaplEstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<string,double>[nElements] : new unordered_multimap<string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEstringcOdoublegR(void *p) {
      delete (static_cast<unordered_multimap<string,double>*>(p));
   }
   static void deleteArray_unordered_multimaplEstringcOdoublegR(void *p) {
      delete [] (static_cast<unordered_multimap<string,double>*>(p));
   }
   static void destruct_unordered_multimaplEstringcOdoublegR(void *p) {
      typedef unordered_multimap<string,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<string,double>

namespace ROOT {
   static TClass *unordered_multimaplElongcOvoidmUgR_Dictionary();
   static void unordered_multimaplElongcOvoidmUgR_TClassManip(TClass*);
   static void *new_unordered_multimaplElongcOvoidmUgR(void *p = nullptr);
   static void *newArray_unordered_multimaplElongcOvoidmUgR(Long_t size, void *p);
   static void delete_unordered_multimaplElongcOvoidmUgR(void *p);
   static void deleteArray_unordered_multimaplElongcOvoidmUgR(void *p);
   static void destruct_unordered_multimaplElongcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<long,void*>*)
   {
      unordered_multimap<long,void*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<long,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<long,void*>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<long,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplElongcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<long,void*>) );
      instance.SetNew(&new_unordered_multimaplElongcOvoidmUgR);
      instance.SetNewArray(&newArray_unordered_multimaplElongcOvoidmUgR);
      instance.SetDelete(&delete_unordered_multimaplElongcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplElongcOvoidmUgR);
      instance.SetDestructor(&destruct_unordered_multimaplElongcOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<long,void*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<long,void*>","std::__1::unordered_multimap<long, void*, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, void*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<long,void*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplElongcOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<long,void*>*>(nullptr))->GetClass();
      unordered_multimaplElongcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplElongcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplElongcOvoidmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<long,void*> : new unordered_multimap<long,void*>;
   }
   static void *newArray_unordered_multimaplElongcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<long,void*>[nElements] : new unordered_multimap<long,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplElongcOvoidmUgR(void *p) {
      delete (static_cast<unordered_multimap<long,void*>*>(p));
   }
   static void deleteArray_unordered_multimaplElongcOvoidmUgR(void *p) {
      delete [] (static_cast<unordered_multimap<long,void*>*>(p));
   }
   static void destruct_unordered_multimaplElongcOvoidmUgR(void *p) {
      typedef unordered_multimap<long,void*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<long,void*>

namespace ROOT {
   static TClass *unordered_multimaplElongcOlonggR_Dictionary();
   static void unordered_multimaplElongcOlonggR_TClassManip(TClass*);
   static void *new_unordered_multimaplElongcOlonggR(void *p = nullptr);
   static void *newArray_unordered_multimaplElongcOlonggR(Long_t size, void *p);
   static void delete_unordered_multimaplElongcOlonggR(void *p);
   static void deleteArray_unordered_multimaplElongcOlonggR(void *p);
   static void destruct_unordered_multimaplElongcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<long,long>*)
   {
      unordered_multimap<long,long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<long,long>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<long,long>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<long,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplElongcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<long,long>) );
      instance.SetNew(&new_unordered_multimaplElongcOlonggR);
      instance.SetNewArray(&newArray_unordered_multimaplElongcOlonggR);
      instance.SetDelete(&delete_unordered_multimaplElongcOlonggR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplElongcOlonggR);
      instance.SetDestructor(&destruct_unordered_multimaplElongcOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<long,long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<long,long>","std::__1::unordered_multimap<long, long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, long>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<long,long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplElongcOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<long,long>*>(nullptr))->GetClass();
      unordered_multimaplElongcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplElongcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplElongcOlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<long,long> : new unordered_multimap<long,long>;
   }
   static void *newArray_unordered_multimaplElongcOlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<long,long>[nElements] : new unordered_multimap<long,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplElongcOlonggR(void *p) {
      delete (static_cast<unordered_multimap<long,long>*>(p));
   }
   static void deleteArray_unordered_multimaplElongcOlonggR(void *p) {
      delete [] (static_cast<unordered_multimap<long,long>*>(p));
   }
   static void destruct_unordered_multimaplElongcOlonggR(void *p) {
      typedef unordered_multimap<long,long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<long,long>

namespace ROOT {
   static TClass *unordered_multimaplElongcOintgR_Dictionary();
   static void unordered_multimaplElongcOintgR_TClassManip(TClass*);
   static void *new_unordered_multimaplElongcOintgR(void *p = nullptr);
   static void *newArray_unordered_multimaplElongcOintgR(Long_t size, void *p);
   static void delete_unordered_multimaplElongcOintgR(void *p);
   static void deleteArray_unordered_multimaplElongcOintgR(void *p);
   static void destruct_unordered_multimaplElongcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<long,int>*)
   {
      unordered_multimap<long,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<long,int>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<long,int>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<long,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplElongcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<long,int>) );
      instance.SetNew(&new_unordered_multimaplElongcOintgR);
      instance.SetNewArray(&newArray_unordered_multimaplElongcOintgR);
      instance.SetDelete(&delete_unordered_multimaplElongcOintgR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplElongcOintgR);
      instance.SetDestructor(&destruct_unordered_multimaplElongcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<long,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<long,int>","std::__1::unordered_multimap<long, int, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<long,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplElongcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<long,int>*>(nullptr))->GetClass();
      unordered_multimaplElongcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplElongcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplElongcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<long,int> : new unordered_multimap<long,int>;
   }
   static void *newArray_unordered_multimaplElongcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<long,int>[nElements] : new unordered_multimap<long,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplElongcOintgR(void *p) {
      delete (static_cast<unordered_multimap<long,int>*>(p));
   }
   static void deleteArray_unordered_multimaplElongcOintgR(void *p) {
      delete [] (static_cast<unordered_multimap<long,int>*>(p));
   }
   static void destruct_unordered_multimaplElongcOintgR(void *p) {
      typedef unordered_multimap<long,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<long,int>

namespace ROOT {
   static TClass *unordered_multimaplElongcOdoublegR_Dictionary();
   static void unordered_multimaplElongcOdoublegR_TClassManip(TClass*);
   static void *new_unordered_multimaplElongcOdoublegR(void *p = nullptr);
   static void *newArray_unordered_multimaplElongcOdoublegR(Long_t size, void *p);
   static void delete_unordered_multimaplElongcOdoublegR(void *p);
   static void deleteArray_unordered_multimaplElongcOdoublegR(void *p);
   static void destruct_unordered_multimaplElongcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<long,double>*)
   {
      unordered_multimap<long,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<long,double>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<long,double>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<long,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplElongcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<long,double>) );
      instance.SetNew(&new_unordered_multimaplElongcOdoublegR);
      instance.SetNewArray(&newArray_unordered_multimaplElongcOdoublegR);
      instance.SetDelete(&delete_unordered_multimaplElongcOdoublegR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplElongcOdoublegR);
      instance.SetDestructor(&destruct_unordered_multimaplElongcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<long,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<long,double>","std::__1::unordered_multimap<long, double, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<long,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplElongcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<long,double>*>(nullptr))->GetClass();
      unordered_multimaplElongcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplElongcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplElongcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<long,double> : new unordered_multimap<long,double>;
   }
   static void *newArray_unordered_multimaplElongcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<long,double>[nElements] : new unordered_multimap<long,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplElongcOdoublegR(void *p) {
      delete (static_cast<unordered_multimap<long,double>*>(p));
   }
   static void deleteArray_unordered_multimaplElongcOdoublegR(void *p) {
      delete [] (static_cast<unordered_multimap<long,double>*>(p));
   }
   static void destruct_unordered_multimaplElongcOdoublegR(void *p) {
      typedef unordered_multimap<long,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<long,double>

namespace ROOT {
   static TClass *unordered_multimaplElongcOcharmUgR_Dictionary();
   static void unordered_multimaplElongcOcharmUgR_TClassManip(TClass*);
   static void *new_unordered_multimaplElongcOcharmUgR(void *p = nullptr);
   static void *newArray_unordered_multimaplElongcOcharmUgR(Long_t size, void *p);
   static void delete_unordered_multimaplElongcOcharmUgR(void *p);
   static void deleteArray_unordered_multimaplElongcOcharmUgR(void *p);
   static void destruct_unordered_multimaplElongcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<long,char*>*)
   {
      unordered_multimap<long,char*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<long,char*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<long,char*>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<long,char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplElongcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<long,char*>) );
      instance.SetNew(&new_unordered_multimaplElongcOcharmUgR);
      instance.SetNewArray(&newArray_unordered_multimaplElongcOcharmUgR);
      instance.SetDelete(&delete_unordered_multimaplElongcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplElongcOcharmUgR);
      instance.SetDestructor(&destruct_unordered_multimaplElongcOcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<long,char*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<long,char*>","std::__1::unordered_multimap<long, char*, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, char*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<long,char*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplElongcOcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<long,char*>*>(nullptr))->GetClass();
      unordered_multimaplElongcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplElongcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplElongcOcharmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<long,char*> : new unordered_multimap<long,char*>;
   }
   static void *newArray_unordered_multimaplElongcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<long,char*>[nElements] : new unordered_multimap<long,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplElongcOcharmUgR(void *p) {
      delete (static_cast<unordered_multimap<long,char*>*>(p));
   }
   static void deleteArray_unordered_multimaplElongcOcharmUgR(void *p) {
      delete [] (static_cast<unordered_multimap<long,char*>*>(p));
   }
   static void destruct_unordered_multimaplElongcOcharmUgR(void *p) {
      typedef unordered_multimap<long,char*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<long,char*>

namespace ROOT {
   static TClass *unordered_multimaplEdoublecOvoidmUgR_Dictionary();
   static void unordered_multimaplEdoublecOvoidmUgR_TClassManip(TClass*);
   static void *new_unordered_multimaplEdoublecOvoidmUgR(void *p = nullptr);
   static void *newArray_unordered_multimaplEdoublecOvoidmUgR(Long_t size, void *p);
   static void delete_unordered_multimaplEdoublecOvoidmUgR(void *p);
   static void deleteArray_unordered_multimaplEdoublecOvoidmUgR(void *p);
   static void destruct_unordered_multimaplEdoublecOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<double,void*>*)
   {
      unordered_multimap<double,void*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<double,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<double,void*>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<double,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEdoublecOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<double,void*>) );
      instance.SetNew(&new_unordered_multimaplEdoublecOvoidmUgR);
      instance.SetNewArray(&newArray_unordered_multimaplEdoublecOvoidmUgR);
      instance.SetDelete(&delete_unordered_multimaplEdoublecOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEdoublecOvoidmUgR);
      instance.SetDestructor(&destruct_unordered_multimaplEdoublecOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<double,void*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<double,void*>","std::__1::unordered_multimap<double, void*, std::__1::hash<double>, std::__1::equal_to<double>, std::__1::allocator<std::__1::pair<double const, void*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<double,void*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEdoublecOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<double,void*>*>(nullptr))->GetClass();
      unordered_multimaplEdoublecOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEdoublecOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEdoublecOvoidmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<double,void*> : new unordered_multimap<double,void*>;
   }
   static void *newArray_unordered_multimaplEdoublecOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<double,void*>[nElements] : new unordered_multimap<double,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEdoublecOvoidmUgR(void *p) {
      delete (static_cast<unordered_multimap<double,void*>*>(p));
   }
   static void deleteArray_unordered_multimaplEdoublecOvoidmUgR(void *p) {
      delete [] (static_cast<unordered_multimap<double,void*>*>(p));
   }
   static void destruct_unordered_multimaplEdoublecOvoidmUgR(void *p) {
      typedef unordered_multimap<double,void*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<double,void*>

namespace ROOT {
   static TClass *unordered_multimaplEdoublecOlonggR_Dictionary();
   static void unordered_multimaplEdoublecOlonggR_TClassManip(TClass*);
   static void *new_unordered_multimaplEdoublecOlonggR(void *p = nullptr);
   static void *newArray_unordered_multimaplEdoublecOlonggR(Long_t size, void *p);
   static void delete_unordered_multimaplEdoublecOlonggR(void *p);
   static void deleteArray_unordered_multimaplEdoublecOlonggR(void *p);
   static void destruct_unordered_multimaplEdoublecOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<double,long>*)
   {
      unordered_multimap<double,long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<double,long>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<double,long>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<double,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEdoublecOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<double,long>) );
      instance.SetNew(&new_unordered_multimaplEdoublecOlonggR);
      instance.SetNewArray(&newArray_unordered_multimaplEdoublecOlonggR);
      instance.SetDelete(&delete_unordered_multimaplEdoublecOlonggR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEdoublecOlonggR);
      instance.SetDestructor(&destruct_unordered_multimaplEdoublecOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<double,long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<double,long>","std::__1::unordered_multimap<double, long, std::__1::hash<double>, std::__1::equal_to<double>, std::__1::allocator<std::__1::pair<double const, long>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<double,long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEdoublecOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<double,long>*>(nullptr))->GetClass();
      unordered_multimaplEdoublecOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEdoublecOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEdoublecOlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<double,long> : new unordered_multimap<double,long>;
   }
   static void *newArray_unordered_multimaplEdoublecOlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<double,long>[nElements] : new unordered_multimap<double,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEdoublecOlonggR(void *p) {
      delete (static_cast<unordered_multimap<double,long>*>(p));
   }
   static void deleteArray_unordered_multimaplEdoublecOlonggR(void *p) {
      delete [] (static_cast<unordered_multimap<double,long>*>(p));
   }
   static void destruct_unordered_multimaplEdoublecOlonggR(void *p) {
      typedef unordered_multimap<double,long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<double,long>

namespace ROOT {
   static TClass *unordered_multimaplEdoublecOintgR_Dictionary();
   static void unordered_multimaplEdoublecOintgR_TClassManip(TClass*);
   static void *new_unordered_multimaplEdoublecOintgR(void *p = nullptr);
   static void *newArray_unordered_multimaplEdoublecOintgR(Long_t size, void *p);
   static void delete_unordered_multimaplEdoublecOintgR(void *p);
   static void deleteArray_unordered_multimaplEdoublecOintgR(void *p);
   static void destruct_unordered_multimaplEdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<double,int>*)
   {
      unordered_multimap<double,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<double,int>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<double,int>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<double,int>) );
      instance.SetNew(&new_unordered_multimaplEdoublecOintgR);
      instance.SetNewArray(&newArray_unordered_multimaplEdoublecOintgR);
      instance.SetDelete(&delete_unordered_multimaplEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEdoublecOintgR);
      instance.SetDestructor(&destruct_unordered_multimaplEdoublecOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<double,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<double,int>","std::__1::unordered_multimap<double, int, std::__1::hash<double>, std::__1::equal_to<double>, std::__1::allocator<std::__1::pair<double const, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<double,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<double,int>*>(nullptr))->GetClass();
      unordered_multimaplEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEdoublecOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<double,int> : new unordered_multimap<double,int>;
   }
   static void *newArray_unordered_multimaplEdoublecOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<double,int>[nElements] : new unordered_multimap<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEdoublecOintgR(void *p) {
      delete (static_cast<unordered_multimap<double,int>*>(p));
   }
   static void deleteArray_unordered_multimaplEdoublecOintgR(void *p) {
      delete [] (static_cast<unordered_multimap<double,int>*>(p));
   }
   static void destruct_unordered_multimaplEdoublecOintgR(void *p) {
      typedef unordered_multimap<double,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<double,int>

namespace ROOT {
   static TClass *unordered_multimaplEdoublecOdoublegR_Dictionary();
   static void unordered_multimaplEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_unordered_multimaplEdoublecOdoublegR(void *p = nullptr);
   static void *newArray_unordered_multimaplEdoublecOdoublegR(Long_t size, void *p);
   static void delete_unordered_multimaplEdoublecOdoublegR(void *p);
   static void deleteArray_unordered_multimaplEdoublecOdoublegR(void *p);
   static void destruct_unordered_multimaplEdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<double,double>*)
   {
      unordered_multimap<double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<double,double>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<double,double>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<double,double>) );
      instance.SetNew(&new_unordered_multimaplEdoublecOdoublegR);
      instance.SetNewArray(&newArray_unordered_multimaplEdoublecOdoublegR);
      instance.SetDelete(&delete_unordered_multimaplEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEdoublecOdoublegR);
      instance.SetDestructor(&destruct_unordered_multimaplEdoublecOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<double,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<double,double>","std::__1::unordered_multimap<double, double, std::__1::hash<double>, std::__1::equal_to<double>, std::__1::allocator<std::__1::pair<double const, double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<double,double>*>(nullptr))->GetClass();
      unordered_multimaplEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEdoublecOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<double,double> : new unordered_multimap<double,double>;
   }
   static void *newArray_unordered_multimaplEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<double,double>[nElements] : new unordered_multimap<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEdoublecOdoublegR(void *p) {
      delete (static_cast<unordered_multimap<double,double>*>(p));
   }
   static void deleteArray_unordered_multimaplEdoublecOdoublegR(void *p) {
      delete [] (static_cast<unordered_multimap<double,double>*>(p));
   }
   static void destruct_unordered_multimaplEdoublecOdoublegR(void *p) {
      typedef unordered_multimap<double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<double,double>

namespace ROOT {
   static TClass *unordered_multimaplEdoublecOcharmUgR_Dictionary();
   static void unordered_multimaplEdoublecOcharmUgR_TClassManip(TClass*);
   static void *new_unordered_multimaplEdoublecOcharmUgR(void *p = nullptr);
   static void *newArray_unordered_multimaplEdoublecOcharmUgR(Long_t size, void *p);
   static void delete_unordered_multimaplEdoublecOcharmUgR(void *p);
   static void deleteArray_unordered_multimaplEdoublecOcharmUgR(void *p);
   static void destruct_unordered_multimaplEdoublecOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<double,char*>*)
   {
      unordered_multimap<double,char*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<double,char*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<double,char*>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<double,char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEdoublecOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<double,char*>) );
      instance.SetNew(&new_unordered_multimaplEdoublecOcharmUgR);
      instance.SetNewArray(&newArray_unordered_multimaplEdoublecOcharmUgR);
      instance.SetDelete(&delete_unordered_multimaplEdoublecOcharmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEdoublecOcharmUgR);
      instance.SetDestructor(&destruct_unordered_multimaplEdoublecOcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<double,char*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<double,char*>","std::__1::unordered_multimap<double, char*, std::__1::hash<double>, std::__1::equal_to<double>, std::__1::allocator<std::__1::pair<double const, char*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<double,char*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEdoublecOcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<double,char*>*>(nullptr))->GetClass();
      unordered_multimaplEdoublecOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEdoublecOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEdoublecOcharmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<double,char*> : new unordered_multimap<double,char*>;
   }
   static void *newArray_unordered_multimaplEdoublecOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<double,char*>[nElements] : new unordered_multimap<double,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEdoublecOcharmUgR(void *p) {
      delete (static_cast<unordered_multimap<double,char*>*>(p));
   }
   static void deleteArray_unordered_multimaplEdoublecOcharmUgR(void *p) {
      delete [] (static_cast<unordered_multimap<double,char*>*>(p));
   }
   static void destruct_unordered_multimaplEdoublecOcharmUgR(void *p) {
      typedef unordered_multimap<double,char*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<double,char*>

namespace ROOT {
   static TClass *unordered_multimaplEcharmUcOvoidmUgR_Dictionary();
   static void unordered_multimaplEcharmUcOvoidmUgR_TClassManip(TClass*);
   static void *new_unordered_multimaplEcharmUcOvoidmUgR(void *p = nullptr);
   static void *newArray_unordered_multimaplEcharmUcOvoidmUgR(Long_t size, void *p);
   static void delete_unordered_multimaplEcharmUcOvoidmUgR(void *p);
   static void deleteArray_unordered_multimaplEcharmUcOvoidmUgR(void *p);
   static void destruct_unordered_multimaplEcharmUcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<char*,void*>*)
   {
      unordered_multimap<char*,void*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<char*,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<char*,void*>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<char*,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEcharmUcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<char*,void*>) );
      instance.SetNew(&new_unordered_multimaplEcharmUcOvoidmUgR);
      instance.SetNewArray(&newArray_unordered_multimaplEcharmUcOvoidmUgR);
      instance.SetDelete(&delete_unordered_multimaplEcharmUcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEcharmUcOvoidmUgR);
      instance.SetDestructor(&destruct_unordered_multimaplEcharmUcOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<char*,void*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<char*,void*>","std::__1::unordered_multimap<char*, void*, std::__1::hash<char*>, std::__1::equal_to<char*>, std::__1::allocator<std::__1::pair<char* const, void*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<char*,void*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEcharmUcOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<char*,void*>*>(nullptr))->GetClass();
      unordered_multimaplEcharmUcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEcharmUcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEcharmUcOvoidmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<char*,void*> : new unordered_multimap<char*,void*>;
   }
   static void *newArray_unordered_multimaplEcharmUcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<char*,void*>[nElements] : new unordered_multimap<char*,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEcharmUcOvoidmUgR(void *p) {
      delete (static_cast<unordered_multimap<char*,void*>*>(p));
   }
   static void deleteArray_unordered_multimaplEcharmUcOvoidmUgR(void *p) {
      delete [] (static_cast<unordered_multimap<char*,void*>*>(p));
   }
   static void destruct_unordered_multimaplEcharmUcOvoidmUgR(void *p) {
      typedef unordered_multimap<char*,void*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<char*,void*>

namespace ROOT {
   static TClass *unordered_multimaplEcharmUcOlonggR_Dictionary();
   static void unordered_multimaplEcharmUcOlonggR_TClassManip(TClass*);
   static void *new_unordered_multimaplEcharmUcOlonggR(void *p = nullptr);
   static void *newArray_unordered_multimaplEcharmUcOlonggR(Long_t size, void *p);
   static void delete_unordered_multimaplEcharmUcOlonggR(void *p);
   static void deleteArray_unordered_multimaplEcharmUcOlonggR(void *p);
   static void destruct_unordered_multimaplEcharmUcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<char*,long>*)
   {
      unordered_multimap<char*,long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<char*,long>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<char*,long>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<char*,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEcharmUcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<char*,long>) );
      instance.SetNew(&new_unordered_multimaplEcharmUcOlonggR);
      instance.SetNewArray(&newArray_unordered_multimaplEcharmUcOlonggR);
      instance.SetDelete(&delete_unordered_multimaplEcharmUcOlonggR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEcharmUcOlonggR);
      instance.SetDestructor(&destruct_unordered_multimaplEcharmUcOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<char*,long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<char*,long>","std::__1::unordered_multimap<char*, long, std::__1::hash<char*>, std::__1::equal_to<char*>, std::__1::allocator<std::__1::pair<char* const, long>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<char*,long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEcharmUcOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<char*,long>*>(nullptr))->GetClass();
      unordered_multimaplEcharmUcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEcharmUcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEcharmUcOlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<char*,long> : new unordered_multimap<char*,long>;
   }
   static void *newArray_unordered_multimaplEcharmUcOlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<char*,long>[nElements] : new unordered_multimap<char*,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEcharmUcOlonggR(void *p) {
      delete (static_cast<unordered_multimap<char*,long>*>(p));
   }
   static void deleteArray_unordered_multimaplEcharmUcOlonggR(void *p) {
      delete [] (static_cast<unordered_multimap<char*,long>*>(p));
   }
   static void destruct_unordered_multimaplEcharmUcOlonggR(void *p) {
      typedef unordered_multimap<char*,long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<char*,long>

namespace ROOT {
   static TClass *unordered_multimaplEcharmUcOintgR_Dictionary();
   static void unordered_multimaplEcharmUcOintgR_TClassManip(TClass*);
   static void *new_unordered_multimaplEcharmUcOintgR(void *p = nullptr);
   static void *newArray_unordered_multimaplEcharmUcOintgR(Long_t size, void *p);
   static void delete_unordered_multimaplEcharmUcOintgR(void *p);
   static void deleteArray_unordered_multimaplEcharmUcOintgR(void *p);
   static void destruct_unordered_multimaplEcharmUcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<char*,int>*)
   {
      unordered_multimap<char*,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<char*,int>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<char*,int>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<char*,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEcharmUcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<char*,int>) );
      instance.SetNew(&new_unordered_multimaplEcharmUcOintgR);
      instance.SetNewArray(&newArray_unordered_multimaplEcharmUcOintgR);
      instance.SetDelete(&delete_unordered_multimaplEcharmUcOintgR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEcharmUcOintgR);
      instance.SetDestructor(&destruct_unordered_multimaplEcharmUcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<char*,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<char*,int>","std::__1::unordered_multimap<char*, int, std::__1::hash<char*>, std::__1::equal_to<char*>, std::__1::allocator<std::__1::pair<char* const, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<char*,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEcharmUcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<char*,int>*>(nullptr))->GetClass();
      unordered_multimaplEcharmUcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEcharmUcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEcharmUcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<char*,int> : new unordered_multimap<char*,int>;
   }
   static void *newArray_unordered_multimaplEcharmUcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<char*,int>[nElements] : new unordered_multimap<char*,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEcharmUcOintgR(void *p) {
      delete (static_cast<unordered_multimap<char*,int>*>(p));
   }
   static void deleteArray_unordered_multimaplEcharmUcOintgR(void *p) {
      delete [] (static_cast<unordered_multimap<char*,int>*>(p));
   }
   static void destruct_unordered_multimaplEcharmUcOintgR(void *p) {
      typedef unordered_multimap<char*,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<char*,int>

namespace ROOT {
   static TClass *unordered_multimaplEcharmUcOdoublegR_Dictionary();
   static void unordered_multimaplEcharmUcOdoublegR_TClassManip(TClass*);
   static void *new_unordered_multimaplEcharmUcOdoublegR(void *p = nullptr);
   static void *newArray_unordered_multimaplEcharmUcOdoublegR(Long_t size, void *p);
   static void delete_unordered_multimaplEcharmUcOdoublegR(void *p);
   static void deleteArray_unordered_multimaplEcharmUcOdoublegR(void *p);
   static void destruct_unordered_multimaplEcharmUcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<char*,double>*)
   {
      unordered_multimap<char*,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<char*,double>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<char*,double>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<char*,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEcharmUcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<char*,double>) );
      instance.SetNew(&new_unordered_multimaplEcharmUcOdoublegR);
      instance.SetNewArray(&newArray_unordered_multimaplEcharmUcOdoublegR);
      instance.SetDelete(&delete_unordered_multimaplEcharmUcOdoublegR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEcharmUcOdoublegR);
      instance.SetDestructor(&destruct_unordered_multimaplEcharmUcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<char*,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<char*,double>","std::__1::unordered_multimap<char*, double, std::__1::hash<char*>, std::__1::equal_to<char*>, std::__1::allocator<std::__1::pair<char* const, double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<char*,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEcharmUcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<char*,double>*>(nullptr))->GetClass();
      unordered_multimaplEcharmUcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEcharmUcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEcharmUcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<char*,double> : new unordered_multimap<char*,double>;
   }
   static void *newArray_unordered_multimaplEcharmUcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<char*,double>[nElements] : new unordered_multimap<char*,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEcharmUcOdoublegR(void *p) {
      delete (static_cast<unordered_multimap<char*,double>*>(p));
   }
   static void deleteArray_unordered_multimaplEcharmUcOdoublegR(void *p) {
      delete [] (static_cast<unordered_multimap<char*,double>*>(p));
   }
   static void destruct_unordered_multimaplEcharmUcOdoublegR(void *p) {
      typedef unordered_multimap<char*,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<char*,double>

namespace ROOT {
   static TClass *unordered_multimaplEcharmUcOcharmUgR_Dictionary();
   static void unordered_multimaplEcharmUcOcharmUgR_TClassManip(TClass*);
   static void *new_unordered_multimaplEcharmUcOcharmUgR(void *p = nullptr);
   static void *newArray_unordered_multimaplEcharmUcOcharmUgR(Long_t size, void *p);
   static void delete_unordered_multimaplEcharmUcOcharmUgR(void *p);
   static void deleteArray_unordered_multimaplEcharmUcOcharmUgR(void *p);
   static void destruct_unordered_multimaplEcharmUcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_multimap<char*,char*>*)
   {
      unordered_multimap<char*,char*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_multimap<char*,char*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_multimap<char*,char*>", -2, "unordered_map", 1853,
                  typeid(unordered_multimap<char*,char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_multimaplEcharmUcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_multimap<char*,char*>) );
      instance.SetNew(&new_unordered_multimaplEcharmUcOcharmUgR);
      instance.SetNewArray(&newArray_unordered_multimaplEcharmUcOcharmUgR);
      instance.SetDelete(&delete_unordered_multimaplEcharmUcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_multimaplEcharmUcOcharmUgR);
      instance.SetDestructor(&destruct_unordered_multimaplEcharmUcOcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_multimap<char*,char*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_multimap<char*,char*>","std::__1::unordered_multimap<char*, char*, std::__1::hash<char*>, std::__1::equal_to<char*>, std::__1::allocator<std::__1::pair<char* const, char*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_multimap<char*,char*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_multimaplEcharmUcOcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_multimap<char*,char*>*>(nullptr))->GetClass();
      unordered_multimaplEcharmUcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_multimaplEcharmUcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_multimaplEcharmUcOcharmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<char*,char*> : new unordered_multimap<char*,char*>;
   }
   static void *newArray_unordered_multimaplEcharmUcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_multimap<char*,char*>[nElements] : new unordered_multimap<char*,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_multimaplEcharmUcOcharmUgR(void *p) {
      delete (static_cast<unordered_multimap<char*,char*>*>(p));
   }
   static void deleteArray_unordered_multimaplEcharmUcOcharmUgR(void *p) {
      delete [] (static_cast<unordered_multimap<char*,char*>*>(p));
   }
   static void destruct_unordered_multimaplEcharmUcOcharmUgR(void *p) {
      typedef unordered_multimap<char*,char*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_multimap<char*,char*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libunordered_multimapDict() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libunordered_multimapDict) = RecordReadRules_libunordered_multimapDict();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libunordered_multimapDict));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libunordered_multimapDict_Impl() {
    static const char* headers[] = {
"unordered_map",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libunordered_multimapDict dictionary payload"

#ifndef R__DUMMY_CXX_STANDARD_17
  #define R__DUMMY_CXX_STANDARD_17 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "unordered_map"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libunordered_multimapDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libunordered_multimapDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libunordered_multimapDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libunordered_multimapDict() {
  TriggerDictionaryInitialization_libunordered_multimapDict_Impl();
}
