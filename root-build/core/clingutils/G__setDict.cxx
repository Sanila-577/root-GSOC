// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__setDict
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
#include "set"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *setlEvoidmUgR_Dictionary();
   static void setlEvoidmUgR_TClassManip(TClass*);
   static void *new_setlEvoidmUgR(void *p = nullptr);
   static void *newArray_setlEvoidmUgR(Long_t size, void *p);
   static void delete_setlEvoidmUgR(void *p);
   static void deleteArray_setlEvoidmUgR(void *p);
   static void destruct_setlEvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<void*>*)
   {
      set<void*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<void*>));
      static ::ROOT::TGenericClassInfo 
         instance("set<void*>", -2, "set", 576,
                  typeid(set<void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(set<void*>) );
      instance.SetNew(&new_setlEvoidmUgR);
      instance.SetNewArray(&newArray_setlEvoidmUgR);
      instance.SetDelete(&delete_setlEvoidmUgR);
      instance.SetDeleteArray(&deleteArray_setlEvoidmUgR);
      instance.SetDestructor(&destruct_setlEvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<void*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<void*>","std::__1::set<void*, std::__1::less<void*>, std::__1::allocator<void*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<void*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<void*>*>(nullptr))->GetClass();
      setlEvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEvoidmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<void*> : new set<void*>;
   }
   static void *newArray_setlEvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<void*>[nElements] : new set<void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEvoidmUgR(void *p) {
      delete (static_cast<set<void*>*>(p));
   }
   static void deleteArray_setlEvoidmUgR(void *p) {
      delete [] (static_cast<set<void*>*>(p));
   }
   static void destruct_setlEvoidmUgR(void *p) {
      typedef set<void*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<void*>

namespace ROOT {
   static TClass *setlEstringgR_Dictionary();
   static void setlEstringgR_TClassManip(TClass*);
   static void *new_setlEstringgR(void *p = nullptr);
   static void *newArray_setlEstringgR(Long_t size, void *p);
   static void delete_setlEstringgR(void *p);
   static void deleteArray_setlEstringgR(void *p);
   static void destruct_setlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<string>*)
   {
      set<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<string>));
      static ::ROOT::TGenericClassInfo 
         instance("set<string>", -2, "set", 576,
                  typeid(set<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(set<string>) );
      instance.SetNew(&new_setlEstringgR);
      instance.SetNewArray(&newArray_setlEstringgR);
      instance.SetDelete(&delete_setlEstringgR);
      instance.SetDeleteArray(&deleteArray_setlEstringgR);
      instance.SetDestructor(&destruct_setlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<string>","std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<string>*>(nullptr))->GetClass();
      setlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<string> : new set<string>;
   }
   static void *newArray_setlEstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<string>[nElements] : new set<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEstringgR(void *p) {
      delete (static_cast<set<string>*>(p));
   }
   static void deleteArray_setlEstringgR(void *p) {
      delete [] (static_cast<set<string>*>(p));
   }
   static void destruct_setlEstringgR(void *p) {
      typedef set<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<string>

namespace ROOT {
   static TClass *setlElonggR_Dictionary();
   static void setlElonggR_TClassManip(TClass*);
   static void *new_setlElonggR(void *p = nullptr);
   static void *newArray_setlElonggR(Long_t size, void *p);
   static void delete_setlElonggR(void *p);
   static void deleteArray_setlElonggR(void *p);
   static void destruct_setlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<long>*)
   {
      set<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<long>));
      static ::ROOT::TGenericClassInfo 
         instance("set<long>", -2, "set", 576,
                  typeid(set<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlElonggR_Dictionary, isa_proxy, 4,
                  sizeof(set<long>) );
      instance.SetNew(&new_setlElonggR);
      instance.SetNewArray(&newArray_setlElonggR);
      instance.SetDelete(&delete_setlElonggR);
      instance.SetDeleteArray(&deleteArray_setlElonggR);
      instance.SetDestructor(&destruct_setlElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<long>","std::__1::set<long, std::__1::less<long>, std::__1::allocator<long>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<long>*>(nullptr))->GetClass();
      setlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void setlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlElonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<long> : new set<long>;
   }
   static void *newArray_setlElonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<long>[nElements] : new set<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlElonggR(void *p) {
      delete (static_cast<set<long>*>(p));
   }
   static void deleteArray_setlElonggR(void *p) {
      delete [] (static_cast<set<long>*>(p));
   }
   static void destruct_setlElonggR(void *p) {
      typedef set<long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<long>

namespace ROOT {
   static TClass *setlEintgR_Dictionary();
   static void setlEintgR_TClassManip(TClass*);
   static void *new_setlEintgR(void *p = nullptr);
   static void *newArray_setlEintgR(Long_t size, void *p);
   static void delete_setlEintgR(void *p);
   static void deleteArray_setlEintgR(void *p);
   static void destruct_setlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<int>*)
   {
      set<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<int>));
      static ::ROOT::TGenericClassInfo 
         instance("set<int>", -2, "set", 576,
                  typeid(set<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(set<int>) );
      instance.SetNew(&new_setlEintgR);
      instance.SetNewArray(&newArray_setlEintgR);
      instance.SetDelete(&delete_setlEintgR);
      instance.SetDeleteArray(&deleteArray_setlEintgR);
      instance.SetDestructor(&destruct_setlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<int>","std::__1::set<int, std::__1::less<int>, std::__1::allocator<int>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<int>*>(nullptr))->GetClass();
      setlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<int> : new set<int>;
   }
   static void *newArray_setlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<int>[nElements] : new set<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEintgR(void *p) {
      delete (static_cast<set<int>*>(p));
   }
   static void deleteArray_setlEintgR(void *p) {
      delete [] (static_cast<set<int>*>(p));
   }
   static void destruct_setlEintgR(void *p) {
      typedef set<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<int>

namespace ROOT {
   static TClass *setlEfloatgR_Dictionary();
   static void setlEfloatgR_TClassManip(TClass*);
   static void *new_setlEfloatgR(void *p = nullptr);
   static void *newArray_setlEfloatgR(Long_t size, void *p);
   static void delete_setlEfloatgR(void *p);
   static void deleteArray_setlEfloatgR(void *p);
   static void destruct_setlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<float>*)
   {
      set<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<float>));
      static ::ROOT::TGenericClassInfo 
         instance("set<float>", -2, "set", 576,
                  typeid(set<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(set<float>) );
      instance.SetNew(&new_setlEfloatgR);
      instance.SetNewArray(&newArray_setlEfloatgR);
      instance.SetDelete(&delete_setlEfloatgR);
      instance.SetDeleteArray(&deleteArray_setlEfloatgR);
      instance.SetDestructor(&destruct_setlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<float>","std::__1::set<float, std::__1::less<float>, std::__1::allocator<float>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<float>*>(nullptr))->GetClass();
      setlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<float> : new set<float>;
   }
   static void *newArray_setlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<float>[nElements] : new set<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEfloatgR(void *p) {
      delete (static_cast<set<float>*>(p));
   }
   static void deleteArray_setlEfloatgR(void *p) {
      delete [] (static_cast<set<float>*>(p));
   }
   static void destruct_setlEfloatgR(void *p) {
      typedef set<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<float>

namespace ROOT {
   static TClass *setlEdoublegR_Dictionary();
   static void setlEdoublegR_TClassManip(TClass*);
   static void *new_setlEdoublegR(void *p = nullptr);
   static void *newArray_setlEdoublegR(Long_t size, void *p);
   static void delete_setlEdoublegR(void *p);
   static void deleteArray_setlEdoublegR(void *p);
   static void destruct_setlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<double>*)
   {
      set<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<double>));
      static ::ROOT::TGenericClassInfo 
         instance("set<double>", -2, "set", 576,
                  typeid(set<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(set<double>) );
      instance.SetNew(&new_setlEdoublegR);
      instance.SetNewArray(&newArray_setlEdoublegR);
      instance.SetDelete(&delete_setlEdoublegR);
      instance.SetDeleteArray(&deleteArray_setlEdoublegR);
      instance.SetDestructor(&destruct_setlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<double>","std::__1::set<double, std::__1::less<double>, std::__1::allocator<double>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<double>*>(nullptr))->GetClass();
      setlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void setlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<double> : new set<double>;
   }
   static void *newArray_setlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<double>[nElements] : new set<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEdoublegR(void *p) {
      delete (static_cast<set<double>*>(p));
   }
   static void deleteArray_setlEdoublegR(void *p) {
      delete [] (static_cast<set<double>*>(p));
   }
   static void destruct_setlEdoublegR(void *p) {
      typedef set<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<double>

namespace ROOT {
   static TClass *setlEcharmUgR_Dictionary();
   static void setlEcharmUgR_TClassManip(TClass*);
   static void *new_setlEcharmUgR(void *p = nullptr);
   static void *newArray_setlEcharmUgR(Long_t size, void *p);
   static void delete_setlEcharmUgR(void *p);
   static void deleteArray_setlEcharmUgR(void *p);
   static void destruct_setlEcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<char*>*)
   {
      set<char*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<char*>));
      static ::ROOT::TGenericClassInfo 
         instance("set<char*>", -2, "set", 576,
                  typeid(set<char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(set<char*>) );
      instance.SetNew(&new_setlEcharmUgR);
      instance.SetNewArray(&newArray_setlEcharmUgR);
      instance.SetDelete(&delete_setlEcharmUgR);
      instance.SetDeleteArray(&deleteArray_setlEcharmUgR);
      instance.SetDestructor(&destruct_setlEcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<char*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<char*>","std::__1::set<char*, std::__1::less<char*>, std::__1::allocator<char*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<char*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<char*>*>(nullptr))->GetClass();
      setlEcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEcharmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<char*> : new set<char*>;
   }
   static void *newArray_setlEcharmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<char*>[nElements] : new set<char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEcharmUgR(void *p) {
      delete (static_cast<set<char*>*>(p));
   }
   static void deleteArray_setlEcharmUgR(void *p) {
      delete [] (static_cast<set<char*>*>(p));
   }
   static void destruct_setlEcharmUgR(void *p) {
      typedef set<char*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<char*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libsetDict() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libsetDict) = RecordReadRules_libsetDict();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libsetDict));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libsetDict_Impl() {
    static const char* headers[] = {
"set",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libsetDict dictionary payload"

#ifndef R__DUMMY_CXX_STANDARD_17
  #define R__DUMMY_CXX_STANDARD_17 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "set"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libsetDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libsetDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libsetDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libsetDict() {
  TriggerDictionaryInitialization_libsetDict_Impl();
}
