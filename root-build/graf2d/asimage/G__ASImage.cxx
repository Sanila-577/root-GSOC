// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ASImage
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
#include "TASImage.h"
#include "TASImagePlugin.h"
#include "TASPluginGS.h"
#include "TASPngWriter.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TASImage(void *p = nullptr);
   static void *newArray_TASImage(Long_t size, void *p);
   static void delete_TASImage(void *p);
   static void deleteArray_TASImage(void *p);
   static void destruct_TASImage(void *p);
   static void streamer_TASImage(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TASImage*)
   {
      ::TASImage *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TASImage >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TASImage", ::TASImage::Class_Version(), "TASImage.h", 31,
                  typeid(::TASImage), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TASImage::Dictionary, isa_proxy, 17,
                  sizeof(::TASImage) );
      instance.SetNew(&new_TASImage);
      instance.SetNewArray(&newArray_TASImage);
      instance.SetDelete(&delete_TASImage);
      instance.SetDeleteArray(&deleteArray_TASImage);
      instance.SetDestructor(&destruct_TASImage);
      instance.SetStreamerFunc(&streamer_TASImage);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TASImage*)
   {
      return GenerateInitInstanceLocal(static_cast<::TASImage*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TASImage*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TASImagePlugin(void *p);
   static void deleteArray_TASImagePlugin(void *p);
   static void destruct_TASImagePlugin(void *p);
   static void streamer_TASImagePlugin(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TASImagePlugin*)
   {
      ::TASImagePlugin *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TASImagePlugin >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TASImagePlugin", ::TASImagePlugin::Class_Version(), "TASImagePlugin.h", 26,
                  typeid(::TASImagePlugin), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TASImagePlugin::Dictionary, isa_proxy, 16,
                  sizeof(::TASImagePlugin) );
      instance.SetDelete(&delete_TASImagePlugin);
      instance.SetDeleteArray(&deleteArray_TASImagePlugin);
      instance.SetDestructor(&destruct_TASImagePlugin);
      instance.SetStreamerFunc(&streamer_TASImagePlugin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TASImagePlugin*)
   {
      return GenerateInitInstanceLocal(static_cast<::TASImagePlugin*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TASImagePlugin*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TASPluginGS(void *p);
   static void deleteArray_TASPluginGS(void *p);
   static void destruct_TASPluginGS(void *p);
   static void streamer_TASPluginGS(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TASPluginGS*)
   {
      ::TASPluginGS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TASPluginGS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TASPluginGS", ::TASPluginGS::Class_Version(), "TASPluginGS.h", 25,
                  typeid(::TASPluginGS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TASPluginGS::Dictionary, isa_proxy, 16,
                  sizeof(::TASPluginGS) );
      instance.SetDelete(&delete_TASPluginGS);
      instance.SetDeleteArray(&deleteArray_TASPluginGS);
      instance.SetDestructor(&destruct_TASPluginGS);
      instance.SetStreamerFunc(&streamer_TASPluginGS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TASPluginGS*)
   {
      return GenerateInitInstanceLocal(static_cast<::TASPluginGS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TASPluginGS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TASPngWriter_Dictionary();
   static void TASPngWriter_TClassManip(TClass*);
   static void *new_TASPngWriter(void *p = nullptr);
   static void *newArray_TASPngWriter(Long_t size, void *p);
   static void delete_TASPngWriter(void *p);
   static void deleteArray_TASPngWriter(void *p);
   static void destruct_TASPngWriter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TASPngWriter*)
   {
      ::TASPngWriter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TASPngWriter));
      static ::ROOT::TGenericClassInfo 
         instance("TASPngWriter", "TASPngWriter.h", 7,
                  typeid(::TASPngWriter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TASPngWriter_Dictionary, isa_proxy, 0,
                  sizeof(::TASPngWriter) );
      instance.SetNew(&new_TASPngWriter);
      instance.SetNewArray(&newArray_TASPngWriter);
      instance.SetDelete(&delete_TASPngWriter);
      instance.SetDeleteArray(&deleteArray_TASPngWriter);
      instance.SetDestructor(&destruct_TASPngWriter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TASPngWriter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TASPngWriter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TASPngWriter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TASPngWriter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TASPngWriter*>(nullptr))->GetClass();
      TASPngWriter_TClassManip(theClass);
   return theClass;
   }

   static void TASPngWriter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TASImage::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TASImage::Class_Name()
{
   return "TASImage";
}

//______________________________________________________________________________
const char *TASImage::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASImage*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TASImage::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASImage*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TASImage::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASImage*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TASImage::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASImage*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TASImagePlugin::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TASImagePlugin::Class_Name()
{
   return "TASImagePlugin";
}

//______________________________________________________________________________
const char *TASImagePlugin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASImagePlugin*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TASImagePlugin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASImagePlugin*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TASImagePlugin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASImagePlugin*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TASImagePlugin::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASImagePlugin*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TASPluginGS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TASPluginGS::Class_Name()
{
   return "TASPluginGS";
}

//______________________________________________________________________________
const char *TASPluginGS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASPluginGS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TASPluginGS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASPluginGS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TASPluginGS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASPluginGS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TASPluginGS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASPluginGS*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TASImage(void *p) {
      return  p ? new(p) ::TASImage : new ::TASImage;
   }
   static void *newArray_TASImage(Long_t nElements, void *p) {
      return p ? new(p) ::TASImage[nElements] : new ::TASImage[nElements];
   }
   // Wrapper around operator delete
   static void delete_TASImage(void *p) {
      delete (static_cast<::TASImage*>(p));
   }
   static void deleteArray_TASImage(void *p) {
      delete [] (static_cast<::TASImage*>(p));
   }
   static void destruct_TASImage(void *p) {
      typedef ::TASImage current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TASImage(TBuffer &buf, void *obj) {
      ((::TASImage*)obj)->::TASImage::Streamer(buf);
   }
} // end of namespace ROOT for class ::TASImage

//______________________________________________________________________________
void TASImagePlugin::Streamer(TBuffer &R__b)
{
   // Stream an object of class TASImagePlugin.

   TImagePlugin::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TASImagePlugin(void *p) {
      delete (static_cast<::TASImagePlugin*>(p));
   }
   static void deleteArray_TASImagePlugin(void *p) {
      delete [] (static_cast<::TASImagePlugin*>(p));
   }
   static void destruct_TASImagePlugin(void *p) {
      typedef ::TASImagePlugin current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TASImagePlugin(TBuffer &buf, void *obj) {
      ((::TASImagePlugin*)obj)->::TASImagePlugin::Streamer(buf);
   }
} // end of namespace ROOT for class ::TASImagePlugin

//______________________________________________________________________________
void TASPluginGS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TASPluginGS.

   TASImagePlugin::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TASPluginGS(void *p) {
      delete (static_cast<::TASPluginGS*>(p));
   }
   static void deleteArray_TASPluginGS(void *p) {
      delete [] (static_cast<::TASPluginGS*>(p));
   }
   static void destruct_TASPluginGS(void *p) {
      typedef ::TASPluginGS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TASPluginGS(TBuffer &buf, void *obj) {
      ((::TASPluginGS*)obj)->::TASPluginGS::Streamer(buf);
   }
} // end of namespace ROOT for class ::TASPluginGS

namespace ROOT {
   // Wrappers around operator new
   static void *new_TASPngWriter(void *p) {
      return  p ? new(p) ::TASPngWriter : new ::TASPngWriter;
   }
   static void *newArray_TASPngWriter(Long_t nElements, void *p) {
      return p ? new(p) ::TASPngWriter[nElements] : new ::TASPngWriter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TASPngWriter(void *p) {
      delete (static_cast<::TASPngWriter*>(p));
   }
   static void deleteArray_TASPngWriter(void *p) {
      delete [] (static_cast<::TASPngWriter*>(p));
   }
   static void destruct_TASPngWriter(void *p) {
      typedef ::TASPngWriter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TASPngWriter

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libASImage() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libASImage) = RecordReadRules_libASImage();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libASImage));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libASImage_Impl() {
    static const char* headers[] = {
nullptr
    };
    static const char* includePaths[] = {
"/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include",
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = "";
    static const char* classesHeaders[] = {
""
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libASImage",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libASImage_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libASImage_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libASImage() {
  TriggerDictionaryInitialization_libASImage_Impl();
}
