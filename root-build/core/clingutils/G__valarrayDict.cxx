// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__valarrayDict
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
#include "valarray"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *valarraylEdoublegR_Dictionary();
   static void valarraylEdoublegR_TClassManip(TClass*);
   static void *new_valarraylEdoublegR(void *p = nullptr);
   static void *newArray_valarraylEdoublegR(Long_t size, void *p);
   static void delete_valarraylEdoublegR(void *p);
   static void deleteArray_valarraylEdoublegR(void *p);
   static void destruct_valarraylEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::valarray<double>*)
   {
      ::valarray<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::valarray<double>));
      static ::ROOT::TGenericClassInfo 
         instance("valarray<double>", "valarray", 783,
                  typeid(::valarray<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &valarraylEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(::valarray<double>) );
      instance.SetNew(&new_valarraylEdoublegR);
      instance.SetNewArray(&newArray_valarraylEdoublegR);
      instance.SetDelete(&delete_valarraylEdoublegR);
      instance.SetDeleteArray(&deleteArray_valarraylEdoublegR);
      instance.SetDestructor(&destruct_valarraylEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("valarray<double>","std::__1::valarray<double>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::valarray<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *valarraylEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::valarray<double>*>(nullptr))->GetClass();
      valarraylEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void valarraylEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *valarraylEfloatgR_Dictionary();
   static void valarraylEfloatgR_TClassManip(TClass*);
   static void *new_valarraylEfloatgR(void *p = nullptr);
   static void *newArray_valarraylEfloatgR(Long_t size, void *p);
   static void delete_valarraylEfloatgR(void *p);
   static void deleteArray_valarraylEfloatgR(void *p);
   static void destruct_valarraylEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::valarray<float>*)
   {
      ::valarray<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::valarray<float>));
      static ::ROOT::TGenericClassInfo 
         instance("valarray<float>", "valarray", 783,
                  typeid(::valarray<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &valarraylEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(::valarray<float>) );
      instance.SetNew(&new_valarraylEfloatgR);
      instance.SetNewArray(&newArray_valarraylEfloatgR);
      instance.SetDelete(&delete_valarraylEfloatgR);
      instance.SetDeleteArray(&deleteArray_valarraylEfloatgR);
      instance.SetDestructor(&destruct_valarraylEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("valarray<float>","std::__1::valarray<float>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::valarray<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *valarraylEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::valarray<float>*>(nullptr))->GetClass();
      valarraylEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void valarraylEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *valarraylElonggR_Dictionary();
   static void valarraylElonggR_TClassManip(TClass*);
   static void *new_valarraylElonggR(void *p = nullptr);
   static void *newArray_valarraylElonggR(Long_t size, void *p);
   static void delete_valarraylElonggR(void *p);
   static void deleteArray_valarraylElonggR(void *p);
   static void destruct_valarraylElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::valarray<long>*)
   {
      ::valarray<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::valarray<long>));
      static ::ROOT::TGenericClassInfo 
         instance("valarray<long>", "valarray", 783,
                  typeid(::valarray<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &valarraylElonggR_Dictionary, isa_proxy, 0,
                  sizeof(::valarray<long>) );
      instance.SetNew(&new_valarraylElonggR);
      instance.SetNewArray(&newArray_valarraylElonggR);
      instance.SetDelete(&delete_valarraylElonggR);
      instance.SetDeleteArray(&deleteArray_valarraylElonggR);
      instance.SetDestructor(&destruct_valarraylElonggR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("valarray<long>","std::__1::valarray<long>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::valarray<long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *valarraylElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::valarray<long>*>(nullptr))->GetClass();
      valarraylElonggR_TClassManip(theClass);
   return theClass;
   }

   static void valarraylElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *valarraylEintgR_Dictionary();
   static void valarraylEintgR_TClassManip(TClass*);
   static void *new_valarraylEintgR(void *p = nullptr);
   static void *newArray_valarraylEintgR(Long_t size, void *p);
   static void delete_valarraylEintgR(void *p);
   static void deleteArray_valarraylEintgR(void *p);
   static void destruct_valarraylEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::valarray<int>*)
   {
      ::valarray<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::valarray<int>));
      static ::ROOT::TGenericClassInfo 
         instance("valarray<int>", "valarray", 783,
                  typeid(::valarray<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &valarraylEintgR_Dictionary, isa_proxy, 0,
                  sizeof(::valarray<int>) );
      instance.SetNew(&new_valarraylEintgR);
      instance.SetNewArray(&newArray_valarraylEintgR);
      instance.SetDelete(&delete_valarraylEintgR);
      instance.SetDeleteArray(&deleteArray_valarraylEintgR);
      instance.SetDestructor(&destruct_valarraylEintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("valarray<int>","std::__1::valarray<int>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::valarray<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *valarraylEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::valarray<int>*>(nullptr))->GetClass();
      valarraylEintgR_TClassManip(theClass);
   return theClass;
   }

   static void valarraylEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_valarraylEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::valarray<double> : new ::valarray<double>;
   }
   static void *newArray_valarraylEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::valarray<double>[nElements] : new ::valarray<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_valarraylEdoublegR(void *p) {
      delete (static_cast<::valarray<double>*>(p));
   }
   static void deleteArray_valarraylEdoublegR(void *p) {
      delete [] (static_cast<::valarray<double>*>(p));
   }
   static void destruct_valarraylEdoublegR(void *p) {
      typedef ::valarray<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::valarray<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_valarraylEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::valarray<float> : new ::valarray<float>;
   }
   static void *newArray_valarraylEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::valarray<float>[nElements] : new ::valarray<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_valarraylEfloatgR(void *p) {
      delete (static_cast<::valarray<float>*>(p));
   }
   static void deleteArray_valarraylEfloatgR(void *p) {
      delete [] (static_cast<::valarray<float>*>(p));
   }
   static void destruct_valarraylEfloatgR(void *p) {
      typedef ::valarray<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::valarray<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_valarraylElonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::valarray<long> : new ::valarray<long>;
   }
   static void *newArray_valarraylElonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::valarray<long>[nElements] : new ::valarray<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_valarraylElonggR(void *p) {
      delete (static_cast<::valarray<long>*>(p));
   }
   static void deleteArray_valarraylElonggR(void *p) {
      delete [] (static_cast<::valarray<long>*>(p));
   }
   static void destruct_valarraylElonggR(void *p) {
      typedef ::valarray<long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::valarray<long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_valarraylEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::valarray<int> : new ::valarray<int>;
   }
   static void *newArray_valarraylEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::valarray<int>[nElements] : new ::valarray<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_valarraylEintgR(void *p) {
      delete (static_cast<::valarray<int>*>(p));
   }
   static void deleteArray_valarraylEintgR(void *p) {
      delete [] (static_cast<::valarray<int>*>(p));
   }
   static void destruct_valarraylEintgR(void *p) {
      typedef ::valarray<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::valarray<int>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libvalarrayDict() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libvalarrayDict) = RecordReadRules_libvalarrayDict();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libvalarrayDict));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libvalarrayDict_Impl() {
    static const char* headers[] = {
"valarray",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libvalarrayDict dictionary payload"

#ifndef R__DUMMY_CXX_STANDARD_17
  #define R__DUMMY_CXX_STANDARD_17 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "valarray"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libvalarrayDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libvalarrayDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libvalarrayDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libvalarrayDict() {
  TriggerDictionaryInitialization_libvalarrayDict_Impl();
}
