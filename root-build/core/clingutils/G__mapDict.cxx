// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__mapDict
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
#include "map"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *maplEstringcOvoidmUgR_Dictionary();
   static void maplEstringcOvoidmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOvoidmUgR(void *p = nullptr);
   static void *newArray_maplEstringcOvoidmUgR(Long_t size, void *p);
   static void delete_maplEstringcOvoidmUgR(void *p);
   static void deleteArray_maplEstringcOvoidmUgR(void *p);
   static void destruct_maplEstringcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,void*>*)
   {
      map<string,void*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,void*>", -2, "map", 975,
                  typeid(map<string,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,void*>) );
      instance.SetNew(&new_maplEstringcOvoidmUgR);
      instance.SetNewArray(&newArray_maplEstringcOvoidmUgR);
      instance.SetDelete(&delete_maplEstringcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvoidmUgR);
      instance.SetDestructor(&destruct_maplEstringcOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,void*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,void*>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, void*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, void*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,void*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,void*>*>(nullptr))->GetClass();
      maplEstringcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvoidmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,void*> : new map<string,void*>;
   }
   static void *newArray_maplEstringcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,void*>[nElements] : new map<string,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvoidmUgR(void *p) {
      delete (static_cast<map<string,void*>*>(p));
   }
   static void deleteArray_maplEstringcOvoidmUgR(void *p) {
      delete [] (static_cast<map<string,void*>*>(p));
   }
   static void destruct_maplEstringcOvoidmUgR(void *p) {
      typedef map<string,void*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,void*>

namespace ROOT {
   static TClass *maplEstringcOstringgR_Dictionary();
   static void maplEstringcOstringgR_TClassManip(TClass*);
   static void *new_maplEstringcOstringgR(void *p = nullptr);
   static void *newArray_maplEstringcOstringgR(Long_t size, void *p);
   static void delete_maplEstringcOstringgR(void *p);
   static void deleteArray_maplEstringcOstringgR(void *p);
   static void destruct_maplEstringcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,string>*)
   {
      map<string,string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,string>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,string>", -2, "map", 975,
                  typeid(map<string,string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOstringgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,string>) );
      instance.SetNew(&new_maplEstringcOstringgR);
      instance.SetNewArray(&newArray_maplEstringcOstringgR);
      instance.SetDelete(&delete_maplEstringcOstringgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOstringgR);
      instance.SetDestructor(&destruct_maplEstringcOstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,string>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,string>*>(nullptr))->GetClass();
      maplEstringcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,string> : new map<string,string>;
   }
   static void *newArray_maplEstringcOstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,string>[nElements] : new map<string,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOstringgR(void *p) {
      delete (static_cast<map<string,string>*>(p));
   }
   static void deleteArray_maplEstringcOstringgR(void *p) {
      delete [] (static_cast<map<string,string>*>(p));
   }
   static void destruct_maplEstringcOstringgR(void *p) {
      typedef map<string,string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,string>

namespace ROOT {
   static TClass *maplEstringcOlonggR_Dictionary();
   static void maplEstringcOlonggR_TClassManip(TClass*);
   static void *new_maplEstringcOlonggR(void *p = nullptr);
   static void *newArray_maplEstringcOlonggR(Long_t size, void *p);
   static void delete_maplEstringcOlonggR(void *p);
   static void deleteArray_maplEstringcOlonggR(void *p);
   static void destruct_maplEstringcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,long>*)
   {
      map<string,long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,long>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,long>", -2, "map", 975,
                  typeid(map<string,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,long>) );
      instance.SetNew(&new_maplEstringcOlonggR);
      instance.SetNewArray(&newArray_maplEstringcOlonggR);
      instance.SetDelete(&delete_maplEstringcOlonggR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOlonggR);
      instance.SetDestructor(&destruct_maplEstringcOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,long>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, long, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, long>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,long>*>(nullptr))->GetClass();
      maplEstringcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,long> : new map<string,long>;
   }
   static void *newArray_maplEstringcOlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,long>[nElements] : new map<string,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOlonggR(void *p) {
      delete (static_cast<map<string,long>*>(p));
   }
   static void deleteArray_maplEstringcOlonggR(void *p) {
      delete [] (static_cast<map<string,long>*>(p));
   }
   static void destruct_maplEstringcOlonggR(void *p) {
      typedef map<string,long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,long>

namespace ROOT {
   static TClass *maplEstringcOintgR_Dictionary();
   static void maplEstringcOintgR_TClassManip(TClass*);
   static void *new_maplEstringcOintgR(void *p = nullptr);
   static void *newArray_maplEstringcOintgR(Long_t size, void *p);
   static void delete_maplEstringcOintgR(void *p);
   static void deleteArray_maplEstringcOintgR(void *p);
   static void destruct_maplEstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,int>*)
   {
      map<string,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,int>", -2, "map", 975,
                  typeid(map<string,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,int>) );
      instance.SetNew(&new_maplEstringcOintgR);
      instance.SetNewArray(&newArray_maplEstringcOintgR);
      instance.SetDelete(&delete_maplEstringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOintgR);
      instance.SetDestructor(&destruct_maplEstringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,int>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, int, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,int>*>(nullptr))->GetClass();
      maplEstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,int> : new map<string,int>;
   }
   static void *newArray_maplEstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,int>[nElements] : new map<string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOintgR(void *p) {
      delete (static_cast<map<string,int>*>(p));
   }
   static void deleteArray_maplEstringcOintgR(void *p) {
      delete [] (static_cast<map<string,int>*>(p));
   }
   static void destruct_maplEstringcOintgR(void *p) {
      typedef map<string,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,int>

namespace ROOT {
   static TClass *maplEstringcOfloatgR_Dictionary();
   static void maplEstringcOfloatgR_TClassManip(TClass*);
   static void *new_maplEstringcOfloatgR(void *p = nullptr);
   static void *newArray_maplEstringcOfloatgR(Long_t size, void *p);
   static void delete_maplEstringcOfloatgR(void *p);
   static void deleteArray_maplEstringcOfloatgR(void *p);
   static void destruct_maplEstringcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,float>*)
   {
      map<string,float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,float>", -2, "map", 975,
                  typeid(map<string,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,float>) );
      instance.SetNew(&new_maplEstringcOfloatgR);
      instance.SetNewArray(&newArray_maplEstringcOfloatgR);
      instance.SetDelete(&delete_maplEstringcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOfloatgR);
      instance.SetDestructor(&destruct_maplEstringcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,float>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, float, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, float>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,float>*>(nullptr))->GetClass();
      maplEstringcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,float> : new map<string,float>;
   }
   static void *newArray_maplEstringcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,float>[nElements] : new map<string,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOfloatgR(void *p) {
      delete (static_cast<map<string,float>*>(p));
   }
   static void deleteArray_maplEstringcOfloatgR(void *p) {
      delete [] (static_cast<map<string,float>*>(p));
   }
   static void destruct_maplEstringcOfloatgR(void *p) {
      typedef map<string,float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,float>

namespace ROOT {
   static TClass *maplEstringcOdoublegR_Dictionary();
   static void maplEstringcOdoublegR_TClassManip(TClass*);
   static void *new_maplEstringcOdoublegR(void *p = nullptr);
   static void *newArray_maplEstringcOdoublegR(Long_t size, void *p);
   static void delete_maplEstringcOdoublegR(void *p);
   static void deleteArray_maplEstringcOdoublegR(void *p);
   static void destruct_maplEstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,double>*)
   {
      map<string,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,double>", -2, "map", 975,
                  typeid(map<string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,double>) );
      instance.SetNew(&new_maplEstringcOdoublegR);
      instance.SetNewArray(&newArray_maplEstringcOdoublegR);
      instance.SetDelete(&delete_maplEstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOdoublegR);
      instance.SetDestructor(&destruct_maplEstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,double>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, double, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,double>*>(nullptr))->GetClass();
      maplEstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,double> : new map<string,double>;
   }
   static void *newArray_maplEstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,double>[nElements] : new map<string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOdoublegR(void *p) {
      delete (static_cast<map<string,double>*>(p));
   }
   static void deleteArray_maplEstringcOdoublegR(void *p) {
      delete [] (static_cast<map<string,double>*>(p));
   }
   static void destruct_maplEstringcOdoublegR(void *p) {
      typedef map<string,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,double>

namespace ROOT {
   static TClass *maplEcharmUcOvoidmUgR_Dictionary();
   static void maplEcharmUcOvoidmUgR_TClassManip(TClass*);
   static void *new_maplEcharmUcOvoidmUgR(void *p = nullptr);
   static void *newArray_maplEcharmUcOvoidmUgR(Long_t size, void *p);
   static void delete_maplEcharmUcOvoidmUgR(void *p);
   static void deleteArray_maplEcharmUcOvoidmUgR(void *p);
   static void destruct_maplEcharmUcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<char*,void*>*)
   {
      map<char*,void*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<char*,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<char*,void*>", -2, "map", 975,
                  typeid(map<char*,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEcharmUcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<char*,void*>) );
      instance.SetNew(&new_maplEcharmUcOvoidmUgR);
      instance.SetNewArray(&newArray_maplEcharmUcOvoidmUgR);
      instance.SetDelete(&delete_maplEcharmUcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_maplEcharmUcOvoidmUgR);
      instance.SetDestructor(&destruct_maplEcharmUcOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<char*,void*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<char*,void*>","std::__1::map<char*, void*, std::__1::less<char*>, std::__1::allocator<std::__1::pair<char* const, void*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<char*,void*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEcharmUcOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<char*,void*>*>(nullptr))->GetClass();
      maplEcharmUcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEcharmUcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEcharmUcOvoidmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<char*,void*> : new map<char*,void*>;
   }
   static void *newArray_maplEcharmUcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<char*,void*>[nElements] : new map<char*,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEcharmUcOvoidmUgR(void *p) {
      delete (static_cast<map<char*,void*>*>(p));
   }
   static void deleteArray_maplEcharmUcOvoidmUgR(void *p) {
      delete [] (static_cast<map<char*,void*>*>(p));
   }
   static void destruct_maplEcharmUcOvoidmUgR(void *p) {
      typedef map<char*,void*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<char*,void*>

namespace ROOT {
   static TClass *maplEcharmUcOlonggR_Dictionary();
   static void maplEcharmUcOlonggR_TClassManip(TClass*);
   static void *new_maplEcharmUcOlonggR(void *p = nullptr);
   static void *newArray_maplEcharmUcOlonggR(Long_t size, void *p);
   static void delete_maplEcharmUcOlonggR(void *p);
   static void deleteArray_maplEcharmUcOlonggR(void *p);
   static void destruct_maplEcharmUcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<char*,long>*)
   {
      map<char*,long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<char*,long>));
      static ::ROOT::TGenericClassInfo 
         instance("map<char*,long>", -2, "map", 975,
                  typeid(map<char*,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEcharmUcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(map<char*,long>) );
      instance.SetNew(&new_maplEcharmUcOlonggR);
      instance.SetNewArray(&newArray_maplEcharmUcOlonggR);
      instance.SetDelete(&delete_maplEcharmUcOlonggR);
      instance.SetDeleteArray(&deleteArray_maplEcharmUcOlonggR);
      instance.SetDestructor(&destruct_maplEcharmUcOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<char*,long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<char*,long>","std::__1::map<char*, long, std::__1::less<char*>, std::__1::allocator<std::__1::pair<char* const, long>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<char*,long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEcharmUcOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<char*,long>*>(nullptr))->GetClass();
      maplEcharmUcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void maplEcharmUcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEcharmUcOlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<char*,long> : new map<char*,long>;
   }
   static void *newArray_maplEcharmUcOlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<char*,long>[nElements] : new map<char*,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEcharmUcOlonggR(void *p) {
      delete (static_cast<map<char*,long>*>(p));
   }
   static void deleteArray_maplEcharmUcOlonggR(void *p) {
      delete [] (static_cast<map<char*,long>*>(p));
   }
   static void destruct_maplEcharmUcOlonggR(void *p) {
      typedef map<char*,long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<char*,long>

namespace ROOT {
   static TClass *maplEcharmUcOintgR_Dictionary();
   static void maplEcharmUcOintgR_TClassManip(TClass*);
   static void *new_maplEcharmUcOintgR(void *p = nullptr);
   static void *newArray_maplEcharmUcOintgR(Long_t size, void *p);
   static void delete_maplEcharmUcOintgR(void *p);
   static void deleteArray_maplEcharmUcOintgR(void *p);
   static void destruct_maplEcharmUcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<char*,int>*)
   {
      map<char*,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<char*,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<char*,int>", -2, "map", 975,
                  typeid(map<char*,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEcharmUcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(map<char*,int>) );
      instance.SetNew(&new_maplEcharmUcOintgR);
      instance.SetNewArray(&newArray_maplEcharmUcOintgR);
      instance.SetDelete(&delete_maplEcharmUcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEcharmUcOintgR);
      instance.SetDestructor(&destruct_maplEcharmUcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<char*,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<char*,int>","std::__1::map<char*, int, std::__1::less<char*>, std::__1::allocator<std::__1::pair<char* const, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<char*,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEcharmUcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<char*,int>*>(nullptr))->GetClass();
      maplEcharmUcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEcharmUcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEcharmUcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<char*,int> : new map<char*,int>;
   }
   static void *newArray_maplEcharmUcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<char*,int>[nElements] : new map<char*,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEcharmUcOintgR(void *p) {
      delete (static_cast<map<char*,int>*>(p));
   }
   static void deleteArray_maplEcharmUcOintgR(void *p) {
      delete [] (static_cast<map<char*,int>*>(p));
   }
   static void destruct_maplEcharmUcOintgR(void *p) {
      typedef map<char*,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<char*,int>

namespace ROOT {
   static TClass *maplEcharmUcOfloatgR_Dictionary();
   static void maplEcharmUcOfloatgR_TClassManip(TClass*);
   static void *new_maplEcharmUcOfloatgR(void *p = nullptr);
   static void *newArray_maplEcharmUcOfloatgR(Long_t size, void *p);
   static void delete_maplEcharmUcOfloatgR(void *p);
   static void deleteArray_maplEcharmUcOfloatgR(void *p);
   static void destruct_maplEcharmUcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<char*,float>*)
   {
      map<char*,float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<char*,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<char*,float>", -2, "map", 975,
                  typeid(map<char*,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEcharmUcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(map<char*,float>) );
      instance.SetNew(&new_maplEcharmUcOfloatgR);
      instance.SetNewArray(&newArray_maplEcharmUcOfloatgR);
      instance.SetDelete(&delete_maplEcharmUcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplEcharmUcOfloatgR);
      instance.SetDestructor(&destruct_maplEcharmUcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<char*,float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<char*,float>","std::__1::map<char*, float, std::__1::less<char*>, std::__1::allocator<std::__1::pair<char* const, float>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<char*,float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEcharmUcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<char*,float>*>(nullptr))->GetClass();
      maplEcharmUcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEcharmUcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEcharmUcOfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<char*,float> : new map<char*,float>;
   }
   static void *newArray_maplEcharmUcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<char*,float>[nElements] : new map<char*,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEcharmUcOfloatgR(void *p) {
      delete (static_cast<map<char*,float>*>(p));
   }
   static void deleteArray_maplEcharmUcOfloatgR(void *p) {
      delete [] (static_cast<map<char*,float>*>(p));
   }
   static void destruct_maplEcharmUcOfloatgR(void *p) {
      typedef map<char*,float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<char*,float>

namespace ROOT {
   static TClass *maplEcharmUcOdoublegR_Dictionary();
   static void maplEcharmUcOdoublegR_TClassManip(TClass*);
   static void *new_maplEcharmUcOdoublegR(void *p = nullptr);
   static void *newArray_maplEcharmUcOdoublegR(Long_t size, void *p);
   static void delete_maplEcharmUcOdoublegR(void *p);
   static void deleteArray_maplEcharmUcOdoublegR(void *p);
   static void destruct_maplEcharmUcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<char*,double>*)
   {
      map<char*,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<char*,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<char*,double>", -2, "map", 975,
                  typeid(map<char*,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEcharmUcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(map<char*,double>) );
      instance.SetNew(&new_maplEcharmUcOdoublegR);
      instance.SetNewArray(&newArray_maplEcharmUcOdoublegR);
      instance.SetDelete(&delete_maplEcharmUcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEcharmUcOdoublegR);
      instance.SetDestructor(&destruct_maplEcharmUcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<char*,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<char*,double>","std::__1::map<char*, double, std::__1::less<char*>, std::__1::allocator<std::__1::pair<char* const, double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<char*,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEcharmUcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<char*,double>*>(nullptr))->GetClass();
      maplEcharmUcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEcharmUcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEcharmUcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<char*,double> : new map<char*,double>;
   }
   static void *newArray_maplEcharmUcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<char*,double>[nElements] : new map<char*,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEcharmUcOdoublegR(void *p) {
      delete (static_cast<map<char*,double>*>(p));
   }
   static void deleteArray_maplEcharmUcOdoublegR(void *p) {
      delete [] (static_cast<map<char*,double>*>(p));
   }
   static void destruct_maplEcharmUcOdoublegR(void *p) {
      typedef map<char*,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<char*,double>

namespace ROOT {
   static TClass *maplEcharmUcOcharmUgR_Dictionary();
   static void maplEcharmUcOcharmUgR_TClassManip(TClass*);
   static void *new_maplEcharmUcOcharmUgR(void *p = nullptr);
   static void *newArray_maplEcharmUcOcharmUgR(Long_t size, void *p);
   static void delete_maplEcharmUcOcharmUgR(void *p);
   static void deleteArray_maplEcharmUcOcharmUgR(void *p);
   static void destruct_maplEcharmUcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<char*,char*>*)
   {
      map<char*,char*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<char*,char*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<char*,char*>", -2, "map", 975,
                  typeid(map<char*,char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEcharmUcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<char*,char*>) );
      instance.SetNew(&new_maplEcharmUcOcharmUgR);
      instance.SetNewArray(&newArray_maplEcharmUcOcharmUgR);
      instance.SetDelete(&delete_maplEcharmUcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_maplEcharmUcOcharmUgR);
      instance.SetDestructor(&destruct_maplEcharmUcOcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<char*,char*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<char*,char*>","std::__1::map<char*, char*, std::__1::less<char*>, std::__1::allocator<std::__1::pair<char* const, char*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<char*,char*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEcharmUcOcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<char*,char*>*>(nullptr))->GetClass();
      maplEcharmUcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEcharmUcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEcharmUcOcharmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<char*,char*> : new map<char*,char*>;
   }
   static void *newArray_maplEcharmUcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<char*,char*>[nElements] : new map<char*,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEcharmUcOcharmUgR(void *p) {
      delete (static_cast<map<char*,char*>*>(p));
   }
   static void deleteArray_maplEcharmUcOcharmUgR(void *p) {
      delete [] (static_cast<map<char*,char*>*>(p));
   }
   static void destruct_maplEcharmUcOcharmUgR(void *p) {
      typedef map<char*,char*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<char*,char*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libmapDict() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libmapDict) = RecordReadRules_libmapDict();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libmapDict));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libmapDict_Impl() {
    static const char* headers[] = {
"map",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libmapDict dictionary payload"

#ifndef R__DUMMY_CXX_STANDARD_17
  #define R__DUMMY_CXX_STANDARD_17 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "map"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libmapDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libmapDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libmapDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libmapDict() {
  TriggerDictionaryInitialization_libmapDict_Impl();
}
