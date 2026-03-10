// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__XMLParser
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
#include "TDOMParser.h"
#include "TSAXParser.h"
#include "TXMLAttr.h"
#include "TXMLDocument.h"
#include "TXMLNode.h"
#include "TXMLParser.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TXMLParser(void *p);
   static void deleteArray_TXMLParser(void *p);
   static void destruct_TXMLParser(void *p);
   static void streamer_TXMLParser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXMLParser*)
   {
      ::TXMLParser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXMLParser >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TXMLParser", ::TXMLParser::Class_Version(), "TXMLParser.h", 24,
                  typeid(::TXMLParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXMLParser::Dictionary, isa_proxy, 16,
                  sizeof(::TXMLParser) );
      instance.SetDelete(&delete_TXMLParser);
      instance.SetDeleteArray(&deleteArray_TXMLParser);
      instance.SetDestructor(&destruct_TXMLParser);
      instance.SetStreamerFunc(&streamer_TXMLParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXMLParser*)
   {
      return GenerateInitInstanceLocal(static_cast<::TXMLParser*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TXMLParser*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TXMLDocument(void *p);
   static void deleteArray_TXMLDocument(void *p);
   static void destruct_TXMLDocument(void *p);
   static void streamer_TXMLDocument(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXMLDocument*)
   {
      ::TXMLDocument *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXMLDocument >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TXMLDocument", ::TXMLDocument::Class_Version(), "TXMLDocument.h", 21,
                  typeid(::TXMLDocument), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXMLDocument::Dictionary, isa_proxy, 16,
                  sizeof(::TXMLDocument) );
      instance.SetDelete(&delete_TXMLDocument);
      instance.SetDeleteArray(&deleteArray_TXMLDocument);
      instance.SetDestructor(&destruct_TXMLDocument);
      instance.SetStreamerFunc(&streamer_TXMLDocument);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXMLDocument*)
   {
      return GenerateInitInstanceLocal(static_cast<::TXMLDocument*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TXMLDocument*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDOMParser(void *p = nullptr);
   static void *newArray_TDOMParser(Long_t size, void *p);
   static void delete_TDOMParser(void *p);
   static void deleteArray_TDOMParser(void *p);
   static void destruct_TDOMParser(void *p);
   static void streamer_TDOMParser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDOMParser*)
   {
      ::TDOMParser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDOMParser >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDOMParser", ::TDOMParser::Class_Version(), "TDOMParser.h", 20,
                  typeid(::TDOMParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDOMParser::Dictionary, isa_proxy, 16,
                  sizeof(::TDOMParser) );
      instance.SetNew(&new_TDOMParser);
      instance.SetNewArray(&newArray_TDOMParser);
      instance.SetDelete(&delete_TDOMParser);
      instance.SetDeleteArray(&deleteArray_TDOMParser);
      instance.SetDestructor(&destruct_TDOMParser);
      instance.SetStreamerFunc(&streamer_TDOMParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDOMParser*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDOMParser*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDOMParser*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSAXParser(void *p = nullptr);
   static void *newArray_TSAXParser(Long_t size, void *p);
   static void delete_TSAXParser(void *p);
   static void deleteArray_TSAXParser(void *p);
   static void destruct_TSAXParser(void *p);
   static void streamer_TSAXParser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSAXParser*)
   {
      ::TSAXParser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSAXParser >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSAXParser", ::TSAXParser::Class_Version(), "TSAXParser.h", 23,
                  typeid(::TSAXParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSAXParser::Dictionary, isa_proxy, 16,
                  sizeof(::TSAXParser) );
      instance.SetNew(&new_TSAXParser);
      instance.SetNewArray(&newArray_TSAXParser);
      instance.SetDelete(&delete_TSAXParser);
      instance.SetDeleteArray(&deleteArray_TSAXParser);
      instance.SetDestructor(&destruct_TSAXParser);
      instance.SetStreamerFunc(&streamer_TSAXParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSAXParser*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSAXParser*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSAXParser*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TXMLAttr(void *p);
   static void deleteArray_TXMLAttr(void *p);
   static void destruct_TXMLAttr(void *p);
   static void streamer_TXMLAttr(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXMLAttr*)
   {
      ::TXMLAttr *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXMLAttr >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TXMLAttr", ::TXMLAttr::Class_Version(), "TXMLAttr.h", 18,
                  typeid(::TXMLAttr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXMLAttr::Dictionary, isa_proxy, 16,
                  sizeof(::TXMLAttr) );
      instance.SetDelete(&delete_TXMLAttr);
      instance.SetDeleteArray(&deleteArray_TXMLAttr);
      instance.SetDestructor(&destruct_TXMLAttr);
      instance.SetStreamerFunc(&streamer_TXMLAttr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXMLAttr*)
   {
      return GenerateInitInstanceLocal(static_cast<::TXMLAttr*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TXMLAttr*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TXMLNode(void *p);
   static void deleteArray_TXMLNode(void *p);
   static void destruct_TXMLNode(void *p);
   static void streamer_TXMLNode(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXMLNode*)
   {
      ::TXMLNode *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXMLNode >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TXMLNode", ::TXMLNode::Class_Version(), "TXMLNode.h", 20,
                  typeid(::TXMLNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXMLNode::Dictionary, isa_proxy, 16,
                  sizeof(::TXMLNode) );
      instance.SetDelete(&delete_TXMLNode);
      instance.SetDeleteArray(&deleteArray_TXMLNode);
      instance.SetDestructor(&destruct_TXMLNode);
      instance.SetStreamerFunc(&streamer_TXMLNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXMLNode*)
   {
      return GenerateInitInstanceLocal(static_cast<::TXMLNode*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TXMLNode*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TXMLParser::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TXMLParser::Class_Name()
{
   return "TXMLParser";
}

//______________________________________________________________________________
const char *TXMLParser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLParser*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TXMLParser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLParser*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXMLParser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLParser*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXMLParser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLParser*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TXMLDocument::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TXMLDocument::Class_Name()
{
   return "TXMLDocument";
}

//______________________________________________________________________________
const char *TXMLDocument::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLDocument*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TXMLDocument::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLDocument*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXMLDocument::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLDocument*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXMLDocument::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLDocument*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDOMParser::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDOMParser::Class_Name()
{
   return "TDOMParser";
}

//______________________________________________________________________________
const char *TDOMParser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDOMParser*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDOMParser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDOMParser*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDOMParser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDOMParser*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDOMParser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDOMParser*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSAXParser::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSAXParser::Class_Name()
{
   return "TSAXParser";
}

//______________________________________________________________________________
const char *TSAXParser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSAXParser*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSAXParser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSAXParser*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSAXParser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSAXParser*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSAXParser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSAXParser*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TXMLAttr::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TXMLAttr::Class_Name()
{
   return "TXMLAttr";
}

//______________________________________________________________________________
const char *TXMLAttr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLAttr*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TXMLAttr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLAttr*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXMLAttr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLAttr*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXMLAttr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLAttr*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TXMLNode::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TXMLNode::Class_Name()
{
   return "TXMLNode";
}

//______________________________________________________________________________
const char *TXMLNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLNode*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TXMLNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLNode*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXMLNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLNode*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXMLNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLNode*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TXMLParser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXMLParser.

   TObject::Streamer(R__b);
   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TXMLParser(void *p) {
      delete (static_cast<::TXMLParser*>(p));
   }
   static void deleteArray_TXMLParser(void *p) {
      delete [] (static_cast<::TXMLParser*>(p));
   }
   static void destruct_TXMLParser(void *p) {
      typedef ::TXMLParser current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXMLParser(TBuffer &buf, void *obj) {
      ((::TXMLParser*)obj)->::TXMLParser::Streamer(buf);
   }
} // end of namespace ROOT for class ::TXMLParser

//______________________________________________________________________________
void TXMLDocument::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXMLDocument.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TXMLDocument(void *p) {
      delete (static_cast<::TXMLDocument*>(p));
   }
   static void deleteArray_TXMLDocument(void *p) {
      delete [] (static_cast<::TXMLDocument*>(p));
   }
   static void destruct_TXMLDocument(void *p) {
      typedef ::TXMLDocument current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXMLDocument(TBuffer &buf, void *obj) {
      ((::TXMLDocument*)obj)->::TXMLDocument::Streamer(buf);
   }
} // end of namespace ROOT for class ::TXMLDocument

//______________________________________________________________________________
void TDOMParser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDOMParser.

   TXMLParser::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDOMParser(void *p) {
      return  p ? new(p) ::TDOMParser : new ::TDOMParser;
   }
   static void *newArray_TDOMParser(Long_t nElements, void *p) {
      return p ? new(p) ::TDOMParser[nElements] : new ::TDOMParser[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDOMParser(void *p) {
      delete (static_cast<::TDOMParser*>(p));
   }
   static void deleteArray_TDOMParser(void *p) {
      delete [] (static_cast<::TDOMParser*>(p));
   }
   static void destruct_TDOMParser(void *p) {
      typedef ::TDOMParser current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDOMParser(TBuffer &buf, void *obj) {
      ((::TDOMParser*)obj)->::TDOMParser::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDOMParser

//______________________________________________________________________________
void TSAXParser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSAXParser.

   TXMLParser::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSAXParser(void *p) {
      return  p ? new(p) ::TSAXParser : new ::TSAXParser;
   }
   static void *newArray_TSAXParser(Long_t nElements, void *p) {
      return p ? new(p) ::TSAXParser[nElements] : new ::TSAXParser[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSAXParser(void *p) {
      delete (static_cast<::TSAXParser*>(p));
   }
   static void deleteArray_TSAXParser(void *p) {
      delete [] (static_cast<::TSAXParser*>(p));
   }
   static void destruct_TSAXParser(void *p) {
      typedef ::TSAXParser current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSAXParser(TBuffer &buf, void *obj) {
      ((::TSAXParser*)obj)->::TSAXParser::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSAXParser

//______________________________________________________________________________
void TXMLAttr::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXMLAttr.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TXMLAttr(void *p) {
      delete (static_cast<::TXMLAttr*>(p));
   }
   static void deleteArray_TXMLAttr(void *p) {
      delete [] (static_cast<::TXMLAttr*>(p));
   }
   static void destruct_TXMLAttr(void *p) {
      typedef ::TXMLAttr current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXMLAttr(TBuffer &buf, void *obj) {
      ((::TXMLAttr*)obj)->::TXMLAttr::Streamer(buf);
   }
} // end of namespace ROOT for class ::TXMLAttr

//______________________________________________________________________________
void TXMLNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXMLNode.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TXMLNode(void *p) {
      delete (static_cast<::TXMLNode*>(p));
   }
   static void deleteArray_TXMLNode(void *p) {
      delete [] (static_cast<::TXMLNode*>(p));
   }
   static void destruct_TXMLNode(void *p) {
      typedef ::TXMLNode current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXMLNode(TBuffer &buf, void *obj) {
      ((::TXMLNode*)obj)->::TXMLNode::Streamer(buf);
   }
} // end of namespace ROOT for class ::TXMLNode

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libXMLParser() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libXMLParser) = RecordReadRules_libXMLParser();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libXMLParser));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libXMLParser_Impl() {
    static const char* headers[] = {
nullptr
    };
    static const char* includePaths[] = {
"/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libxml2",
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = "";
    static const char* classesHeaders[] = {
""
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libXMLParser",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libXMLParser_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libXMLParser_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libXMLParser() {
  TriggerDictionaryInitialization_libXMLParser_Impl();
}
