// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__vectorDict
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
#include "vector"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *vectorlEunsignedsPshortgR_Dictionary();
   static void vectorlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortgR(void *p);
   static void destruct_vectorlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short>*)
   {
      vector<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short>", -2, "vector", 86,
                  typeid(vector<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unsigned short>) );
      instance.SetNew(&new_vectorlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned short>","std::__1::vector<unsigned short, std::__1::allocator<unsigned short>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr))->GetClass();
      vectorlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short> : new vector<unsigned short>;
   }
   static void *newArray_vectorlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short>[nElements] : new vector<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortgR(void *p) {
      delete (static_cast<vector<unsigned short>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPshortgR(void *p) {
      delete [] (static_cast<vector<unsigned short>*>(p));
   }
   static void destruct_vectorlEunsignedsPshortgR(void *p) {
      typedef vector<unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short>

namespace ROOT {
   static TClass *vectorlEunsignedsPlonggR_Dictionary();
   static void vectorlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPlonggR(void *p);
   static void deleteArray_vectorlEunsignedsPlonggR(void *p);
   static void destruct_vectorlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned long>*)
   {
      vector<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned long>", -2, "vector", 86,
                  typeid(vector<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unsigned long>) );
      instance.SetNew(&new_vectorlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPlonggR);
      instance.SetDelete(&delete_vectorlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned long>","std::__1::vector<unsigned long, std::__1::allocator<unsigned long>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned long>*>(nullptr))->GetClass();
      vectorlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned long> : new vector<unsigned long>;
   }
   static void *newArray_vectorlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned long>[nElements] : new vector<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPlonggR(void *p) {
      delete (static_cast<vector<unsigned long>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPlonggR(void *p) {
      delete [] (static_cast<vector<unsigned long>*>(p));
   }
   static void destruct_vectorlEunsignedsPlonggR(void *p) {
      typedef vector<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned long>

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 86,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned int>","std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr))->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete (static_cast<vector<unsigned int>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] (static_cast<vector<unsigned int>*>(p));
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEunsignedsPchargR_Dictionary();
   static void vectorlEunsignedsPchargR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPchargR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPchargR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPchargR(void *p);
   static void deleteArray_vectorlEunsignedsPchargR(void *p);
   static void destruct_vectorlEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned char>*)
   {
      vector<unsigned char> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned char>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned char>", -2, "vector", 86,
                  typeid(vector<unsigned char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPchargR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unsigned char>) );
      instance.SetNew(&new_vectorlEunsignedsPchargR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPchargR);
      instance.SetDelete(&delete_vectorlEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPchargR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned char> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned char>","std::__1::vector<unsigned char, std::__1::allocator<unsigned char>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned char>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned char>*>(nullptr))->GetClass();
      vectorlEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPchargR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned char> : new vector<unsigned char>;
   }
   static void *newArray_vectorlEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned char>[nElements] : new vector<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPchargR(void *p) {
      delete (static_cast<vector<unsigned char>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPchargR(void *p) {
      delete [] (static_cast<vector<unsigned char>*>(p));
   }
   static void destruct_vectorlEunsignedsPchargR(void *p) {
      typedef vector<unsigned char> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned char>

namespace ROOT {
   static TClass *vectorlEshortgR_Dictionary();
   static void vectorlEshortgR_TClassManip(TClass*);
   static void *new_vectorlEshortgR(void *p = nullptr);
   static void *newArray_vectorlEshortgR(Long_t size, void *p);
   static void delete_vectorlEshortgR(void *p);
   static void deleteArray_vectorlEshortgR(void *p);
   static void destruct_vectorlEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<short>*)
   {
      vector<short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<short>", -2, "vector", 86,
                  typeid(vector<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEshortgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<short>) );
      instance.SetNew(&new_vectorlEshortgR);
      instance.SetNewArray(&newArray_vectorlEshortgR);
      instance.SetDelete(&delete_vectorlEshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEshortgR);
      instance.SetDestructor(&destruct_vectorlEshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<short>","std::__1::vector<short, std::__1::allocator<short>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<short>*>(nullptr))->GetClass();
      vectorlEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<short> : new vector<short>;
   }
   static void *newArray_vectorlEshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<short>[nElements] : new vector<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEshortgR(void *p) {
      delete (static_cast<vector<short>*>(p));
   }
   static void deleteArray_vectorlEshortgR(void *p) {
      delete [] (static_cast<vector<short>*>(p));
   }
   static void destruct_vectorlEshortgR(void *p) {
      typedef vector<short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<short>

namespace ROOT {
   static TClass *vectorlElonggR_Dictionary();
   static void vectorlElonggR_TClassManip(TClass*);
   static void *new_vectorlElonggR(void *p = nullptr);
   static void *newArray_vectorlElonggR(Long_t size, void *p);
   static void delete_vectorlElonggR(void *p);
   static void deleteArray_vectorlElonggR(void *p);
   static void destruct_vectorlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<long>*)
   {
      vector<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<long>", -2, "vector", 86,
                  typeid(vector<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElonggR_Dictionary, isa_proxy, 4,
                  sizeof(vector<long>) );
      instance.SetNew(&new_vectorlElonggR);
      instance.SetNewArray(&newArray_vectorlElonggR);
      instance.SetDelete(&delete_vectorlElonggR);
      instance.SetDeleteArray(&deleteArray_vectorlElonggR);
      instance.SetDestructor(&destruct_vectorlElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<long>","std::__1::vector<long, std::__1::allocator<long>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<long>*>(nullptr))->GetClass();
      vectorlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<long> : new vector<long>;
   }
   static void *newArray_vectorlElonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<long>[nElements] : new vector<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElonggR(void *p) {
      delete (static_cast<vector<long>*>(p));
   }
   static void deleteArray_vectorlElonggR(void *p) {
      delete [] (static_cast<vector<long>*>(p));
   }
   static void destruct_vectorlElonggR(void *p) {
      typedef vector<long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<long>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = nullptr);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 86,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<float>","std::__1::vector<float, std::__1::allocator<float>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<float>*>(nullptr))->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete (static_cast<vector<float>*>(p));
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] (static_cast<vector<float>*>(p));
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 86,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<double>","std::__1::vector<double, std::__1::allocator<double>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr))->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete (static_cast<vector<double>*>(p));
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] (static_cast<vector<double>*>(p));
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlEconstsPcharmUgR_Dictionary();
   static void vectorlEconstsPcharmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPcharmUgR(void *p = nullptr);
   static void *newArray_vectorlEconstsPcharmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPcharmUgR(void *p);
   static void deleteArray_vectorlEconstsPcharmUgR(void *p);
   static void destruct_vectorlEconstsPcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const char*>*)
   {
      vector<const char*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const char*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const char*>", -2, "vector", 86,
                  typeid(vector<const char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<const char*>) );
      instance.SetNew(&new_vectorlEconstsPcharmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPcharmUgR);
      instance.SetDelete(&delete_vectorlEconstsPcharmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPcharmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const char*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<const char*>","std::__1::vector<char const*, std::__1::allocator<char const*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<const char*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<const char*>*>(nullptr))->GetClass();
      vectorlEconstsPcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPcharmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<const char*> : new vector<const char*>;
   }
   static void *newArray_vectorlEconstsPcharmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<const char*>[nElements] : new vector<const char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPcharmUgR(void *p) {
      delete (static_cast<vector<const char*>*>(p));
   }
   static void deleteArray_vectorlEconstsPcharmUgR(void *p) {
      delete [] (static_cast<vector<const char*>*>(p));
   }
   static void destruct_vectorlEconstsPcharmUgR(void *p) {
      typedef vector<const char*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<const char*>

namespace ROOT {
   static TClass *vectorlEchargR_Dictionary();
   static void vectorlEchargR_TClassManip(TClass*);
   static void *new_vectorlEchargR(void *p = nullptr);
   static void *newArray_vectorlEchargR(Long_t size, void *p);
   static void delete_vectorlEchargR(void *p);
   static void deleteArray_vectorlEchargR(void *p);
   static void destruct_vectorlEchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<char>*)
   {
      vector<char> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<char>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<char>", -2, "vector", 86,
                  typeid(vector<char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEchargR_Dictionary, isa_proxy, 4,
                  sizeof(vector<char>) );
      instance.SetNew(&new_vectorlEchargR);
      instance.SetNewArray(&newArray_vectorlEchargR);
      instance.SetDelete(&delete_vectorlEchargR);
      instance.SetDeleteArray(&deleteArray_vectorlEchargR);
      instance.SetDestructor(&destruct_vectorlEchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<char> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<char>","std::__1::vector<char, std::__1::allocator<char>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<char>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<char>*>(nullptr))->GetClass();
      vectorlEchargR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEchargR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<char> : new vector<char>;
   }
   static void *newArray_vectorlEchargR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<char>[nElements] : new vector<char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEchargR(void *p) {
      delete (static_cast<vector<char>*>(p));
   }
   static void deleteArray_vectorlEchargR(void *p) {
      delete [] (static_cast<vector<char>*>(p));
   }
   static void destruct_vectorlEchargR(void *p) {
      typedef vector<char> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<char>

namespace ROOT {
   static TClass *vectorlEcharmUgR_Dictionary();
   static void vectorlEcharmUgR_TClassManip(TClass*);
   static void *new_vectorlEcharmUgR(void *p = nullptr);
   static void *newArray_vectorlEcharmUgR(Long_t size, void *p);
   static void delete_vectorlEcharmUgR(void *p);
   static void deleteArray_vectorlEcharmUgR(void *p);
   static void destruct_vectorlEcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<char*>*)
   {
      vector<char*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<char*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<char*>", -2, "vector", 86,
                  typeid(vector<char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<char*>) );
      instance.SetNew(&new_vectorlEcharmUgR);
      instance.SetNewArray(&newArray_vectorlEcharmUgR);
      instance.SetDelete(&delete_vectorlEcharmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEcharmUgR);
      instance.SetDestructor(&destruct_vectorlEcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<char*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<char*>","std::__1::vector<char*, std::__1::allocator<char*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<char*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<char*>*>(nullptr))->GetClass();
      vectorlEcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEcharmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<char*> : new vector<char*>;
   }
   static void *newArray_vectorlEcharmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<char*>[nElements] : new vector<char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEcharmUgR(void *p) {
      delete (static_cast<vector<char*>*>(p));
   }
   static void deleteArray_vectorlEcharmUgR(void *p) {
      delete [] (static_cast<vector<char*>*>(p));
   }
   static void destruct_vectorlEcharmUgR(void *p) {
      typedef vector<char*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<char*>

namespace ROOT {
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = nullptr);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 76,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bool>","std::__1::vector<bool, std::__1::allocator<bool>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bool>*>(nullptr))->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete (static_cast<vector<bool>*>(p));
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] (static_cast<vector<bool>*>(p));
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace ROOT {
   static TClass *vectorlEULong64_tgR_Dictionary();
   static void vectorlEULong64_tgR_TClassManip(TClass*);
   static void *new_vectorlEULong64_tgR(void *p = nullptr);
   static void *newArray_vectorlEULong64_tgR(Long_t size, void *p);
   static void delete_vectorlEULong64_tgR(void *p);
   static void deleteArray_vectorlEULong64_tgR(void *p);
   static void destruct_vectorlEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ULong64_t>*)
   {
      vector<ULong64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ULong64_t>", -2, "vector", 86,
                  typeid(vector<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEULong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ULong64_t>) );
      instance.SetNew(&new_vectorlEULong64_tgR);
      instance.SetNewArray(&newArray_vectorlEULong64_tgR);
      instance.SetDelete(&delete_vectorlEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEULong64_tgR);
      instance.SetDestructor(&destruct_vectorlEULong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ULong64_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ULong64_t>","std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ULong64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ULong64_t>*>(nullptr))->GetClass();
      vectorlEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEULong64_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ULong64_t> : new vector<ULong64_t>;
   }
   static void *newArray_vectorlEULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ULong64_t>[nElements] : new vector<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEULong64_tgR(void *p) {
      delete (static_cast<vector<ULong64_t>*>(p));
   }
   static void deleteArray_vectorlEULong64_tgR(void *p) {
      delete [] (static_cast<vector<ULong64_t>*>(p));
   }
   static void destruct_vectorlEULong64_tgR(void *p) {
      typedef vector<ULong64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ULong64_t>

namespace ROOT {
   static TClass *vectorlELong64_tgR_Dictionary();
   static void vectorlELong64_tgR_TClassManip(TClass*);
   static void *new_vectorlELong64_tgR(void *p = nullptr);
   static void *newArray_vectorlELong64_tgR(Long_t size, void *p);
   static void delete_vectorlELong64_tgR(void *p);
   static void deleteArray_vectorlELong64_tgR(void *p);
   static void destruct_vectorlELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Long64_t>*)
   {
      vector<Long64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Long64_t>", -2, "vector", 86,
                  typeid(vector<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlELong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<Long64_t>) );
      instance.SetNew(&new_vectorlELong64_tgR);
      instance.SetNewArray(&newArray_vectorlELong64_tgR);
      instance.SetDelete(&delete_vectorlELong64_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlELong64_tgR);
      instance.SetDestructor(&destruct_vectorlELong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Long64_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<Long64_t>","std::__1::vector<long long, std::__1::allocator<long long>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<Long64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<Long64_t>*>(nullptr))->GetClass();
      vectorlELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlELong64_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<Long64_t> : new vector<Long64_t>;
   }
   static void *newArray_vectorlELong64_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<Long64_t>[nElements] : new vector<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlELong64_tgR(void *p) {
      delete (static_cast<vector<Long64_t>*>(p));
   }
   static void deleteArray_vectorlELong64_tgR(void *p) {
      delete [] (static_cast<vector<Long64_t>*>(p));
   }
   static void destruct_vectorlELong64_tgR(void *p) {
      typedef vector<Long64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<Long64_t>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libvectorDict() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libvectorDict) = RecordReadRules_libvectorDict();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libvectorDict));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libvectorDict_Impl() {
    static const char* headers[] = {
"vector",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libvectorDict dictionary payload"

#ifndef R__DUMMY_CXX_STANDARD_17
  #define R__DUMMY_CXX_STANDARD_17 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "vector"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libvectorDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libvectorDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libvectorDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libvectorDict() {
  TriggerDictionaryInitialization_libvectorDict_Impl();
}
