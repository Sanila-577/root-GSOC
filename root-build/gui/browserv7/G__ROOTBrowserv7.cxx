// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTBrowserv7
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
#include "ROOT/RBrowser.hxx"
#include "ROOT/RBrowserData.hxx"
#include "ROOT/RBrowserReply.hxx"
#include "ROOT/RBrowserRequest.hxx"
#include "ROOT/RFileDialog.hxx"
#include "ROOT/RWebBrowserImp.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ROOTcLcLRBrowserRequest_Dictionary();
   static void ROOTcLcLRBrowserRequest_TClassManip(TClass*);
   static void *new_ROOTcLcLRBrowserRequest(void *p = nullptr);
   static void *newArray_ROOTcLcLRBrowserRequest(Long_t size, void *p);
   static void delete_ROOTcLcLRBrowserRequest(void *p);
   static void deleteArray_ROOTcLcLRBrowserRequest(void *p);
   static void destruct_ROOTcLcLRBrowserRequest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RBrowserRequest*)
   {
      ::ROOT::RBrowserRequest *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RBrowserRequest));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RBrowserRequest", "ROOT/RBrowserRequest.hxx", 25,
                  typeid(::ROOT::RBrowserRequest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRBrowserRequest_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RBrowserRequest) );
      instance.SetNew(&new_ROOTcLcLRBrowserRequest);
      instance.SetNewArray(&newArray_ROOTcLcLRBrowserRequest);
      instance.SetDelete(&delete_ROOTcLcLRBrowserRequest);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRBrowserRequest);
      instance.SetDestructor(&destruct_ROOTcLcLRBrowserRequest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RBrowserRequest*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RBrowserRequest*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RBrowserRequest*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRBrowserRequest_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RBrowserRequest*>(nullptr))->GetClass();
      ROOTcLcLRBrowserRequest_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRBrowserRequest_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRBrowserReply_Dictionary();
   static void ROOTcLcLRBrowserReply_TClassManip(TClass*);
   static void *new_ROOTcLcLRBrowserReply(void *p = nullptr);
   static void *newArray_ROOTcLcLRBrowserReply(Long_t size, void *p);
   static void delete_ROOTcLcLRBrowserReply(void *p);
   static void deleteArray_ROOTcLcLRBrowserReply(void *p);
   static void destruct_ROOTcLcLRBrowserReply(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RBrowserReply*)
   {
      ::ROOT::RBrowserReply *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RBrowserReply));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RBrowserReply", "ROOT/RBrowserReply.hxx", 26,
                  typeid(::ROOT::RBrowserReply), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRBrowserReply_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RBrowserReply) );
      instance.SetNew(&new_ROOTcLcLRBrowserReply);
      instance.SetNewArray(&newArray_ROOTcLcLRBrowserReply);
      instance.SetDelete(&delete_ROOTcLcLRBrowserReply);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRBrowserReply);
      instance.SetDestructor(&destruct_ROOTcLcLRBrowserReply);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RBrowserReply*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RBrowserReply*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RBrowserReply*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRBrowserReply_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RBrowserReply*>(nullptr))->GetClass();
      ROOTcLcLRBrowserReply_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRBrowserReply_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRBrowserData_Dictionary();
   static void ROOTcLcLRBrowserData_TClassManip(TClass*);
   static void *new_ROOTcLcLRBrowserData(void *p = nullptr);
   static void *newArray_ROOTcLcLRBrowserData(Long_t size, void *p);
   static void delete_ROOTcLcLRBrowserData(void *p);
   static void deleteArray_ROOTcLcLRBrowserData(void *p);
   static void destruct_ROOTcLcLRBrowserData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RBrowserData*)
   {
      ::ROOT::RBrowserData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RBrowserData));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RBrowserData", "ROOT/RBrowserData.hxx", 34,
                  typeid(::ROOT::RBrowserData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRBrowserData_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RBrowserData) );
      instance.SetNew(&new_ROOTcLcLRBrowserData);
      instance.SetNewArray(&newArray_ROOTcLcLRBrowserData);
      instance.SetDelete(&delete_ROOTcLcLRBrowserData);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRBrowserData);
      instance.SetDestructor(&destruct_ROOTcLcLRBrowserData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RBrowserData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RBrowserData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RBrowserData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRBrowserData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RBrowserData*>(nullptr))->GetClass();
      ROOTcLcLRBrowserData_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRBrowserData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRBrowser_Dictionary();
   static void ROOTcLcLRBrowser_TClassManip(TClass*);
   static void *new_ROOTcLcLRBrowser(void *p = nullptr);
   static void *newArray_ROOTcLcLRBrowser(Long_t size, void *p);
   static void delete_ROOTcLcLRBrowser(void *p);
   static void deleteArray_ROOTcLcLRBrowser(void *p);
   static void destruct_ROOTcLcLRBrowser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RBrowser*)
   {
      ::ROOT::RBrowser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RBrowser));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RBrowser", "ROOT/RBrowser.hxx", 26,
                  typeid(::ROOT::RBrowser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRBrowser_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RBrowser) );
      instance.SetNew(&new_ROOTcLcLRBrowser);
      instance.SetNewArray(&newArray_ROOTcLcLRBrowser);
      instance.SetDelete(&delete_ROOTcLcLRBrowser);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRBrowser);
      instance.SetDestructor(&destruct_ROOTcLcLRBrowser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RBrowser*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RBrowser*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RBrowser*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRBrowser_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RBrowser*>(nullptr))->GetClass();
      ROOTcLcLRBrowser_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRBrowser_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRFileDialog_Dictionary();
   static void ROOTcLcLRFileDialog_TClassManip(TClass*);
   static void *new_ROOTcLcLRFileDialog(void *p = nullptr);
   static void *newArray_ROOTcLcLRFileDialog(Long_t size, void *p);
   static void delete_ROOTcLcLRFileDialog(void *p);
   static void deleteArray_ROOTcLcLRFileDialog(void *p);
   static void destruct_ROOTcLcLRFileDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RFileDialog*)
   {
      ::ROOT::RFileDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RFileDialog));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RFileDialog", "ROOT/RFileDialog.hxx", 40,
                  typeid(::ROOT::RFileDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRFileDialog_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RFileDialog) );
      instance.SetNew(&new_ROOTcLcLRFileDialog);
      instance.SetNewArray(&newArray_ROOTcLcLRFileDialog);
      instance.SetDelete(&delete_ROOTcLcLRFileDialog);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRFileDialog);
      instance.SetDestructor(&destruct_ROOTcLcLRFileDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RFileDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RFileDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RFileDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRFileDialog_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RFileDialog*>(nullptr))->GetClass();
      ROOTcLcLRFileDialog_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRFileDialog_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLRWebBrowserImp(void *p = nullptr);
   static void *newArray_ROOTcLcLRWebBrowserImp(Long_t size, void *p);
   static void delete_ROOTcLcLRWebBrowserImp(void *p);
   static void deleteArray_ROOTcLcLRWebBrowserImp(void *p);
   static void destruct_ROOTcLcLRWebBrowserImp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RWebBrowserImp*)
   {
      ::ROOT::RWebBrowserImp *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::RWebBrowserImp >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RWebBrowserImp", ::ROOT::RWebBrowserImp::Class_Version(), "ROOT/RWebBrowserImp.hxx", 21,
                  typeid(::ROOT::RWebBrowserImp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::RWebBrowserImp::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RWebBrowserImp) );
      instance.SetNew(&new_ROOTcLcLRWebBrowserImp);
      instance.SetNewArray(&newArray_ROOTcLcLRWebBrowserImp);
      instance.SetDelete(&delete_ROOTcLcLRWebBrowserImp);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRWebBrowserImp);
      instance.SetDestructor(&destruct_ROOTcLcLRWebBrowserImp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RWebBrowserImp*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RWebBrowserImp*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RWebBrowserImp*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
//______________________________________________________________________________
atomic_TClass_ptr RWebBrowserImp::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RWebBrowserImp::Class_Name()
{
   return "ROOT::RWebBrowserImp";
}

//______________________________________________________________________________
const char *RWebBrowserImp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::RWebBrowserImp*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RWebBrowserImp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::RWebBrowserImp*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RWebBrowserImp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::RWebBrowserImp*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RWebBrowserImp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::RWebBrowserImp*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRBrowserRequest(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RBrowserRequest : new ::ROOT::RBrowserRequest;
   }
   static void *newArray_ROOTcLcLRBrowserRequest(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RBrowserRequest[nElements] : new ::ROOT::RBrowserRequest[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRBrowserRequest(void *p) {
      delete (static_cast<::ROOT::RBrowserRequest*>(p));
   }
   static void deleteArray_ROOTcLcLRBrowserRequest(void *p) {
      delete [] (static_cast<::ROOT::RBrowserRequest*>(p));
   }
   static void destruct_ROOTcLcLRBrowserRequest(void *p) {
      typedef ::ROOT::RBrowserRequest current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RBrowserRequest

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRBrowserReply(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RBrowserReply : new ::ROOT::RBrowserReply;
   }
   static void *newArray_ROOTcLcLRBrowserReply(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RBrowserReply[nElements] : new ::ROOT::RBrowserReply[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRBrowserReply(void *p) {
      delete (static_cast<::ROOT::RBrowserReply*>(p));
   }
   static void deleteArray_ROOTcLcLRBrowserReply(void *p) {
      delete [] (static_cast<::ROOT::RBrowserReply*>(p));
   }
   static void destruct_ROOTcLcLRBrowserReply(void *p) {
      typedef ::ROOT::RBrowserReply current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RBrowserReply

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRBrowserData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RBrowserData : new ::ROOT::RBrowserData;
   }
   static void *newArray_ROOTcLcLRBrowserData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RBrowserData[nElements] : new ::ROOT::RBrowserData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRBrowserData(void *p) {
      delete (static_cast<::ROOT::RBrowserData*>(p));
   }
   static void deleteArray_ROOTcLcLRBrowserData(void *p) {
      delete [] (static_cast<::ROOT::RBrowserData*>(p));
   }
   static void destruct_ROOTcLcLRBrowserData(void *p) {
      typedef ::ROOT::RBrowserData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RBrowserData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRBrowser(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RBrowser : new ::ROOT::RBrowser;
   }
   static void *newArray_ROOTcLcLRBrowser(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RBrowser[nElements] : new ::ROOT::RBrowser[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRBrowser(void *p) {
      delete (static_cast<::ROOT::RBrowser*>(p));
   }
   static void deleteArray_ROOTcLcLRBrowser(void *p) {
      delete [] (static_cast<::ROOT::RBrowser*>(p));
   }
   static void destruct_ROOTcLcLRBrowser(void *p) {
      typedef ::ROOT::RBrowser current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RBrowser

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRFileDialog(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RFileDialog : new ::ROOT::RFileDialog;
   }
   static void *newArray_ROOTcLcLRFileDialog(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RFileDialog[nElements] : new ::ROOT::RFileDialog[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRFileDialog(void *p) {
      delete (static_cast<::ROOT::RFileDialog*>(p));
   }
   static void deleteArray_ROOTcLcLRFileDialog(void *p) {
      delete [] (static_cast<::ROOT::RFileDialog*>(p));
   }
   static void destruct_ROOTcLcLRFileDialog(void *p) {
      typedef ::ROOT::RFileDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RFileDialog

namespace ROOT {
//______________________________________________________________________________
void RWebBrowserImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::RWebBrowserImp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::RWebBrowserImp::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::RWebBrowserImp::Class(),this);
   }
}

} // namespace ROOT
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRWebBrowserImp(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RWebBrowserImp : new ::ROOT::RWebBrowserImp;
   }
   static void *newArray_ROOTcLcLRWebBrowserImp(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RWebBrowserImp[nElements] : new ::ROOT::RWebBrowserImp[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRWebBrowserImp(void *p) {
      delete (static_cast<::ROOT::RWebBrowserImp*>(p));
   }
   static void deleteArray_ROOTcLcLRWebBrowserImp(void *p) {
      delete [] (static_cast<::ROOT::RWebBrowserImp*>(p));
   }
   static void destruct_ROOTcLcLRWebBrowserImp(void *p) {
      typedef ::ROOT::RWebBrowserImp current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RWebBrowserImp

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = nullptr);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "functional", 86,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<string>","std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr))->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete (static_cast<vector<string>*>(p));
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] (static_cast<vector<string>*>(p));
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR_Dictionary();
   static void vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR(void *p = nullptr);
   static void *newArray_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR(void *p);
   static void deleteArray_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR(void *p);
   static void destruct_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const ROOT::Browsable::RItem*>*)
   {
      vector<const ROOT::Browsable::RItem*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const ROOT::Browsable::RItem*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const ROOT::Browsable::RItem*>", -2, "functional", 86,
                  typeid(vector<const ROOT::Browsable::RItem*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<const ROOT::Browsable::RItem*>) );
      instance.SetNew(&new_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR);
      instance.SetDelete(&delete_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const ROOT::Browsable::RItem*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<const ROOT::Browsable::RItem*>","std::__1::vector<ROOT::Browsable::RItem const*, std::__1::allocator<ROOT::Browsable::RItem const*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<const ROOT::Browsable::RItem*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<const ROOT::Browsable::RItem*>*>(nullptr))->GetClass();
      vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<const ROOT::Browsable::RItem*> : new vector<const ROOT::Browsable::RItem*>;
   }
   static void *newArray_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<const ROOT::Browsable::RItem*>[nElements] : new vector<const ROOT::Browsable::RItem*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR(void *p) {
      delete (static_cast<vector<const ROOT::Browsable::RItem*>*>(p));
   }
   static void deleteArray_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR(void *p) {
      delete [] (static_cast<vector<const ROOT::Browsable::RItem*>*>(p));
   }
   static void destruct_vectorlEconstsPROOTcLcLBrowsablecLcLRItemmUgR(void *p) {
      typedef vector<const ROOT::Browsable::RItem*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<const ROOT::Browsable::RItem*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTBrowserv7() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTBrowserv7) = RecordReadRules_libROOTBrowserv7();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTBrowserv7));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTBrowserv7_Impl() {
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
      TROOT::RegisterModule("libROOTBrowserv7",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTBrowserv7_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTBrowserv7_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTBrowserv7() {
  TriggerDictionaryInitialization_libROOTBrowserv7_Impl();
}
