// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTBrowsable
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
#include "ROOT/Browsable/RAnyObjectHolder.hxx"
#include "ROOT/Browsable/RElement.hxx"
#include "ROOT/Browsable/RGroup.hxx"
#include "ROOT/Browsable/RHolder.hxx"
#include "ROOT/Browsable/RItem.hxx"
#include "ROOT/Browsable/RLevelIter.hxx"
#include "ROOT/Browsable/RProvider.hxx"
#include "ROOT/Browsable/RShared.hxx"
#include "ROOT/Browsable/RSysFile.hxx"
#include "ROOT/Browsable/RSysFileItem.hxx"
#include "ROOT/Browsable/RUnique.hxx"
#include "ROOT/Browsable/RWrapper.hxx"
#include "ROOT/Browsable/TKeyItem.hxx"
#include "ROOT/Browsable/TObjectElement.hxx"
#include "ROOT/Browsable/TObjectHolder.hxx"
#include "ROOT/Browsable/TObjectItem.hxx"
#include "ROOT/Browsable/RNTupleItem.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   namespace Browsable {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLBrowsable_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Browsable", 0 /*version*/, "ROOT/Browsable/RHolder.hxx", 23,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &ROOTcLcLBrowsable_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLBrowsable_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLRHolder_Dictionary();
   static void ROOTcLcLBrowsablecLcLRHolder_TClassManip(TClass*);
   static void delete_ROOTcLcLBrowsablecLcLRHolder(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLRHolder(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLRHolder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::RHolder*)
   {
      ::ROOT::Browsable::RHolder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::RHolder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::RHolder", "ROOT/Browsable/RHolder.hxx", 33,
                  typeid(::ROOT::Browsable::RHolder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLRHolder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::RHolder) );
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLRHolder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLRHolder);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLRHolder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::RHolder*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::RHolder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RHolder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLRHolder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RHolder*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLRHolder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLRHolder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLRAnyObjectHolder_Dictionary();
   static void ROOTcLcLBrowsablecLcLRAnyObjectHolder_TClassManip(TClass*);
   static void delete_ROOTcLcLBrowsablecLcLRAnyObjectHolder(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLRAnyObjectHolder(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLRAnyObjectHolder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::RAnyObjectHolder*)
   {
      ::ROOT::Browsable::RAnyObjectHolder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::RAnyObjectHolder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::RAnyObjectHolder", "ROOT/Browsable/RAnyObjectHolder.hxx", 25,
                  typeid(::ROOT::Browsable::RAnyObjectHolder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLRAnyObjectHolder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::RAnyObjectHolder) );
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLRAnyObjectHolder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLRAnyObjectHolder);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLRAnyObjectHolder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::RAnyObjectHolder*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::RAnyObjectHolder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RAnyObjectHolder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLRAnyObjectHolder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RAnyObjectHolder*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLRAnyObjectHolder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLRAnyObjectHolder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLRElement_Dictionary();
   static void ROOTcLcLBrowsablecLcLRElement_TClassManip(TClass*);
   static void delete_ROOTcLcLBrowsablecLcLRElement(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLRElement(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLRElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::RElement*)
   {
      ::ROOT::Browsable::RElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::RElement));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::RElement", "ROOT/Browsable/RElement.hxx", 34,
                  typeid(::ROOT::Browsable::RElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLRElement_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::RElement) );
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLRElement);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLRElement);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLRElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::RElement*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::RElement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RElement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLRElement_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RElement*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLRElement_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLRElement_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLRGroup_Dictionary();
   static void ROOTcLcLBrowsablecLcLRGroup_TClassManip(TClass*);
   static void delete_ROOTcLcLBrowsablecLcLRGroup(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLRGroup(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLRGroup(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::RGroup*)
   {
      ::ROOT::Browsable::RGroup *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::RGroup));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::RGroup", "ROOT/Browsable/RGroup.hxx", 25,
                  typeid(::ROOT::Browsable::RGroup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLRGroup_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::RGroup) );
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLRGroup);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLRGroup);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLRGroup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::RGroup*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::RGroup*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RGroup*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLRGroup_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RGroup*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLRGroup_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLRGroup_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLRItem_Dictionary();
   static void ROOTcLcLBrowsablecLcLRItem_TClassManip(TClass*);
   static void *new_ROOTcLcLBrowsablecLcLRItem(void *p = nullptr);
   static void *newArray_ROOTcLcLBrowsablecLcLRItem(Long_t size, void *p);
   static void delete_ROOTcLcLBrowsablecLcLRItem(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLRItem(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLRItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::RItem*)
   {
      ::ROOT::Browsable::RItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::RItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::RItem", "ROOT/Browsable/RItem.hxx", 23,
                  typeid(::ROOT::Browsable::RItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLRItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::RItem) );
      instance.SetNew(&new_ROOTcLcLBrowsablecLcLRItem);
      instance.SetNewArray(&newArray_ROOTcLcLBrowsablecLcLRItem);
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLRItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLRItem);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLRItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::RItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::RItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLRItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RItem*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLRItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLRItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLRLevelIter_Dictionary();
   static void ROOTcLcLBrowsablecLcLRLevelIter_TClassManip(TClass*);
   static void delete_ROOTcLcLBrowsablecLcLRLevelIter(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLRLevelIter(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLRLevelIter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::RLevelIter*)
   {
      ::ROOT::Browsable::RLevelIter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::RLevelIter));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::RLevelIter", "ROOT/Browsable/RLevelIter.hxx", 29,
                  typeid(::ROOT::Browsable::RLevelIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLRLevelIter_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::RLevelIter) );
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLRLevelIter);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLRLevelIter);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLRLevelIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::RLevelIter*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::RLevelIter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RLevelIter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLRLevelIter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RLevelIter*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLRLevelIter_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLRLevelIter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLRProvider_Dictionary();
   static void ROOTcLcLBrowsablecLcLRProvider_TClassManip(TClass*);
   static void *new_ROOTcLcLBrowsablecLcLRProvider(void *p = nullptr);
   static void *newArray_ROOTcLcLBrowsablecLcLRProvider(Long_t size, void *p);
   static void delete_ROOTcLcLBrowsablecLcLRProvider(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLRProvider(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLRProvider(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::RProvider*)
   {
      ::ROOT::Browsable::RProvider *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::RProvider));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::RProvider", "ROOT/Browsable/RProvider.hxx", 37,
                  typeid(::ROOT::Browsable::RProvider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLRProvider_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::RProvider) );
      instance.SetNew(&new_ROOTcLcLBrowsablecLcLRProvider);
      instance.SetNewArray(&newArray_ROOTcLcLBrowsablecLcLRProvider);
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLRProvider);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLRProvider);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLRProvider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::RProvider*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::RProvider*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RProvider*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLRProvider_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RProvider*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLRProvider_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLRProvider_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLRSysFile_Dictionary();
   static void ROOTcLcLBrowsablecLcLRSysFile_TClassManip(TClass*);
   static void delete_ROOTcLcLBrowsablecLcLRSysFile(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLRSysFile(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLRSysFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::RSysFile*)
   {
      ::ROOT::Browsable::RSysFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::RSysFile));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::RSysFile", "ROOT/Browsable/RSysFile.hxx", 27,
                  typeid(::ROOT::Browsable::RSysFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLRSysFile_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::RSysFile) );
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLRSysFile);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLRSysFile);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLRSysFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::RSysFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::RSysFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RSysFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLRSysFile_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RSysFile*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLRSysFile_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLRSysFile_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLRSysFileItem_Dictionary();
   static void ROOTcLcLBrowsablecLcLRSysFileItem_TClassManip(TClass*);
   static void *new_ROOTcLcLBrowsablecLcLRSysFileItem(void *p = nullptr);
   static void *newArray_ROOTcLcLBrowsablecLcLRSysFileItem(Long_t size, void *p);
   static void delete_ROOTcLcLBrowsablecLcLRSysFileItem(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLRSysFileItem(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLRSysFileItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::RSysFileItem*)
   {
      ::ROOT::Browsable::RSysFileItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::RSysFileItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::RSysFileItem", "ROOT/Browsable/RSysFileItem.hxx", 25,
                  typeid(::ROOT::Browsable::RSysFileItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLRSysFileItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::RSysFileItem) );
      instance.SetNew(&new_ROOTcLcLBrowsablecLcLRSysFileItem);
      instance.SetNewArray(&newArray_ROOTcLcLBrowsablecLcLRSysFileItem);
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLRSysFileItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLRSysFileItem);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLRSysFileItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::RSysFileItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::RSysFileItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RSysFileItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLRSysFileItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RSysFileItem*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLRSysFileItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLRSysFileItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLRWrapper_Dictionary();
   static void ROOTcLcLBrowsablecLcLRWrapper_TClassManip(TClass*);
   static void *new_ROOTcLcLBrowsablecLcLRWrapper(void *p = nullptr);
   static void *newArray_ROOTcLcLBrowsablecLcLRWrapper(Long_t size, void *p);
   static void delete_ROOTcLcLBrowsablecLcLRWrapper(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLRWrapper(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLRWrapper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::RWrapper*)
   {
      ::ROOT::Browsable::RWrapper *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::RWrapper));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::RWrapper", "ROOT/Browsable/RWrapper.hxx", 26,
                  typeid(::ROOT::Browsable::RWrapper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLRWrapper_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::RWrapper) );
      instance.SetNew(&new_ROOTcLcLBrowsablecLcLRWrapper);
      instance.SetNewArray(&newArray_ROOTcLcLBrowsablecLcLRWrapper);
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLRWrapper);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLRWrapper);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLRWrapper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::RWrapper*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::RWrapper*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RWrapper*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLRWrapper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RWrapper*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLRWrapper_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLRWrapper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLTKeyItem_Dictionary();
   static void ROOTcLcLBrowsablecLcLTKeyItem_TClassManip(TClass*);
   static void *new_ROOTcLcLBrowsablecLcLTKeyItem(void *p = nullptr);
   static void *newArray_ROOTcLcLBrowsablecLcLTKeyItem(Long_t size, void *p);
   static void delete_ROOTcLcLBrowsablecLcLTKeyItem(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLTKeyItem(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLTKeyItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::TKeyItem*)
   {
      ::ROOT::Browsable::TKeyItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::TKeyItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::TKeyItem", "ROOT/Browsable/TKeyItem.hxx", 24,
                  typeid(::ROOT::Browsable::TKeyItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLTKeyItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::TKeyItem) );
      instance.SetNew(&new_ROOTcLcLBrowsablecLcLTKeyItem);
      instance.SetNewArray(&newArray_ROOTcLcLBrowsablecLcLTKeyItem);
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLTKeyItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLTKeyItem);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLTKeyItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::TKeyItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::TKeyItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::TKeyItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLTKeyItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::TKeyItem*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLTKeyItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLTKeyItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLTObjectHolder_Dictionary();
   static void ROOTcLcLBrowsablecLcLTObjectHolder_TClassManip(TClass*);
   static void delete_ROOTcLcLBrowsablecLcLTObjectHolder(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLTObjectHolder(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLTObjectHolder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::TObjectHolder*)
   {
      ::ROOT::Browsable::TObjectHolder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::TObjectHolder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::TObjectHolder", "ROOT/Browsable/TObjectHolder.hxx", 25,
                  typeid(::ROOT::Browsable::TObjectHolder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLTObjectHolder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::TObjectHolder) );
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLTObjectHolder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLTObjectHolder);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLTObjectHolder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::TObjectHolder*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::TObjectHolder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::TObjectHolder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLTObjectHolder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::TObjectHolder*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLTObjectHolder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLTObjectHolder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLTObjectItem_Dictionary();
   static void ROOTcLcLBrowsablecLcLTObjectItem_TClassManip(TClass*);
   static void *new_ROOTcLcLBrowsablecLcLTObjectItem(void *p = nullptr);
   static void *newArray_ROOTcLcLBrowsablecLcLTObjectItem(Long_t size, void *p);
   static void delete_ROOTcLcLBrowsablecLcLTObjectItem(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLTObjectItem(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLTObjectItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::TObjectItem*)
   {
      ::ROOT::Browsable::TObjectItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::TObjectItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::TObjectItem", "ROOT/Browsable/TObjectItem.hxx", 27,
                  typeid(::ROOT::Browsable::TObjectItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLTObjectItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::TObjectItem) );
      instance.SetNew(&new_ROOTcLcLBrowsablecLcLTObjectItem);
      instance.SetNewArray(&newArray_ROOTcLcLBrowsablecLcLTObjectItem);
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLTObjectItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLTObjectItem);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLTObjectItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::TObjectItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::TObjectItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::TObjectItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLTObjectItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::TObjectItem*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLTObjectItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLTObjectItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLBrowsablecLcLRNTupleItem_Dictionary();
   static void ROOTcLcLBrowsablecLcLRNTupleItem_TClassManip(TClass*);
   static void *new_ROOTcLcLBrowsablecLcLRNTupleItem(void *p = nullptr);
   static void *newArray_ROOTcLcLBrowsablecLcLRNTupleItem(Long_t size, void *p);
   static void delete_ROOTcLcLBrowsablecLcLRNTupleItem(void *p);
   static void deleteArray_ROOTcLcLBrowsablecLcLRNTupleItem(void *p);
   static void destruct_ROOTcLcLBrowsablecLcLRNTupleItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Browsable::RNTupleItem*)
   {
      ::ROOT::Browsable::RNTupleItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Browsable::RNTupleItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Browsable::RNTupleItem", "ROOT/Browsable/RNTupleItem.hxx", 23,
                  typeid(::ROOT::Browsable::RNTupleItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLBrowsablecLcLRNTupleItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Browsable::RNTupleItem) );
      instance.SetNew(&new_ROOTcLcLBrowsablecLcLRNTupleItem);
      instance.SetNewArray(&newArray_ROOTcLcLBrowsablecLcLRNTupleItem);
      instance.SetDelete(&delete_ROOTcLcLBrowsablecLcLRNTupleItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLBrowsablecLcLRNTupleItem);
      instance.SetDestructor(&destruct_ROOTcLcLBrowsablecLcLRNTupleItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Browsable::RNTupleItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Browsable::RNTupleItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RNTupleItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLBrowsablecLcLRNTupleItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Browsable::RNTupleItem*>(nullptr))->GetClass();
      ROOTcLcLBrowsablecLcLRNTupleItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLBrowsablecLcLRNTupleItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLRHolder(void *p) {
      delete (static_cast<::ROOT::Browsable::RHolder*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLRHolder(void *p) {
      delete [] (static_cast<::ROOT::Browsable::RHolder*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLRHolder(void *p) {
      typedef ::ROOT::Browsable::RHolder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::RHolder

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLRAnyObjectHolder(void *p) {
      delete (static_cast<::ROOT::Browsable::RAnyObjectHolder*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLRAnyObjectHolder(void *p) {
      delete [] (static_cast<::ROOT::Browsable::RAnyObjectHolder*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLRAnyObjectHolder(void *p) {
      typedef ::ROOT::Browsable::RAnyObjectHolder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::RAnyObjectHolder

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLRElement(void *p) {
      delete (static_cast<::ROOT::Browsable::RElement*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLRElement(void *p) {
      delete [] (static_cast<::ROOT::Browsable::RElement*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLRElement(void *p) {
      typedef ::ROOT::Browsable::RElement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::RElement

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLRGroup(void *p) {
      delete (static_cast<::ROOT::Browsable::RGroup*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLRGroup(void *p) {
      delete [] (static_cast<::ROOT::Browsable::RGroup*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLRGroup(void *p) {
      typedef ::ROOT::Browsable::RGroup current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::RGroup

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLBrowsablecLcLRItem(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::RItem : new ::ROOT::Browsable::RItem;
   }
   static void *newArray_ROOTcLcLBrowsablecLcLRItem(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::RItem[nElements] : new ::ROOT::Browsable::RItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLRItem(void *p) {
      delete (static_cast<::ROOT::Browsable::RItem*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLRItem(void *p) {
      delete [] (static_cast<::ROOT::Browsable::RItem*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLRItem(void *p) {
      typedef ::ROOT::Browsable::RItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::RItem

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLRLevelIter(void *p) {
      delete (static_cast<::ROOT::Browsable::RLevelIter*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLRLevelIter(void *p) {
      delete [] (static_cast<::ROOT::Browsable::RLevelIter*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLRLevelIter(void *p) {
      typedef ::ROOT::Browsable::RLevelIter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::RLevelIter

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLBrowsablecLcLRProvider(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::RProvider : new ::ROOT::Browsable::RProvider;
   }
   static void *newArray_ROOTcLcLBrowsablecLcLRProvider(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::RProvider[nElements] : new ::ROOT::Browsable::RProvider[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLRProvider(void *p) {
      delete (static_cast<::ROOT::Browsable::RProvider*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLRProvider(void *p) {
      delete [] (static_cast<::ROOT::Browsable::RProvider*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLRProvider(void *p) {
      typedef ::ROOT::Browsable::RProvider current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::RProvider

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLRSysFile(void *p) {
      delete (static_cast<::ROOT::Browsable::RSysFile*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLRSysFile(void *p) {
      delete [] (static_cast<::ROOT::Browsable::RSysFile*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLRSysFile(void *p) {
      typedef ::ROOT::Browsable::RSysFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::RSysFile

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLBrowsablecLcLRSysFileItem(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::RSysFileItem : new ::ROOT::Browsable::RSysFileItem;
   }
   static void *newArray_ROOTcLcLBrowsablecLcLRSysFileItem(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::RSysFileItem[nElements] : new ::ROOT::Browsable::RSysFileItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLRSysFileItem(void *p) {
      delete (static_cast<::ROOT::Browsable::RSysFileItem*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLRSysFileItem(void *p) {
      delete [] (static_cast<::ROOT::Browsable::RSysFileItem*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLRSysFileItem(void *p) {
      typedef ::ROOT::Browsable::RSysFileItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::RSysFileItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLBrowsablecLcLRWrapper(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::RWrapper : new ::ROOT::Browsable::RWrapper;
   }
   static void *newArray_ROOTcLcLBrowsablecLcLRWrapper(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::RWrapper[nElements] : new ::ROOT::Browsable::RWrapper[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLRWrapper(void *p) {
      delete (static_cast<::ROOT::Browsable::RWrapper*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLRWrapper(void *p) {
      delete [] (static_cast<::ROOT::Browsable::RWrapper*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLRWrapper(void *p) {
      typedef ::ROOT::Browsable::RWrapper current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::RWrapper

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLBrowsablecLcLTKeyItem(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::TKeyItem : new ::ROOT::Browsable::TKeyItem;
   }
   static void *newArray_ROOTcLcLBrowsablecLcLTKeyItem(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::TKeyItem[nElements] : new ::ROOT::Browsable::TKeyItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLTKeyItem(void *p) {
      delete (static_cast<::ROOT::Browsable::TKeyItem*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLTKeyItem(void *p) {
      delete [] (static_cast<::ROOT::Browsable::TKeyItem*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLTKeyItem(void *p) {
      typedef ::ROOT::Browsable::TKeyItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::TKeyItem

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLTObjectHolder(void *p) {
      delete (static_cast<::ROOT::Browsable::TObjectHolder*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLTObjectHolder(void *p) {
      delete [] (static_cast<::ROOT::Browsable::TObjectHolder*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLTObjectHolder(void *p) {
      typedef ::ROOT::Browsable::TObjectHolder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::TObjectHolder

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLBrowsablecLcLTObjectItem(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::TObjectItem : new ::ROOT::Browsable::TObjectItem;
   }
   static void *newArray_ROOTcLcLBrowsablecLcLTObjectItem(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::TObjectItem[nElements] : new ::ROOT::Browsable::TObjectItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLTObjectItem(void *p) {
      delete (static_cast<::ROOT::Browsable::TObjectItem*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLTObjectItem(void *p) {
      delete [] (static_cast<::ROOT::Browsable::TObjectItem*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLTObjectItem(void *p) {
      typedef ::ROOT::Browsable::TObjectItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::TObjectItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLBrowsablecLcLRNTupleItem(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::RNTupleItem : new ::ROOT::Browsable::RNTupleItem;
   }
   static void *newArray_ROOTcLcLBrowsablecLcLRNTupleItem(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Browsable::RNTupleItem[nElements] : new ::ROOT::Browsable::RNTupleItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLBrowsablecLcLRNTupleItem(void *p) {
      delete (static_cast<::ROOT::Browsable::RNTupleItem*>(p));
   }
   static void deleteArray_ROOTcLcLBrowsablecLcLRNTupleItem(void *p) {
      delete [] (static_cast<::ROOT::Browsable::RNTupleItem*>(p));
   }
   static void destruct_ROOTcLcLBrowsablecLcLRNTupleItem(void *p) {
      typedef ::ROOT::Browsable::RNTupleItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Browsable::RNTupleItem

namespace ROOT {
   static TClass *vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR_Dictionary();
   static void vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR(Long_t size, void *p);
   static void delete_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR(void *p);
   static void deleteArray_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR(void *p);
   static void destruct_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<shared_ptr<ROOT::Browsable::RElement> >*)
   {
      vector<shared_ptr<ROOT::Browsable::RElement> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<shared_ptr<ROOT::Browsable::RElement> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<shared_ptr<ROOT::Browsable::RElement> >", -2, "functional", 86,
                  typeid(vector<shared_ptr<ROOT::Browsable::RElement> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<shared_ptr<ROOT::Browsable::RElement> >) );
      instance.SetNew(&new_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR);
      instance.SetNewArray(&newArray_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR);
      instance.SetDelete(&delete_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR);
      instance.SetDestructor(&destruct_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<shared_ptr<ROOT::Browsable::RElement> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<shared_ptr<ROOT::Browsable::RElement> >","std::__1::vector<std::__1::shared_ptr<ROOT::Browsable::RElement>, std::__1::allocator<std::__1::shared_ptr<ROOT::Browsable::RElement>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<shared_ptr<ROOT::Browsable::RElement> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<shared_ptr<ROOT::Browsable::RElement> >*>(nullptr))->GetClass();
      vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<shared_ptr<ROOT::Browsable::RElement> > : new vector<shared_ptr<ROOT::Browsable::RElement> >;
   }
   static void *newArray_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<shared_ptr<ROOT::Browsable::RElement> >[nElements] : new vector<shared_ptr<ROOT::Browsable::RElement> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR(void *p) {
      delete (static_cast<vector<shared_ptr<ROOT::Browsable::RElement> >*>(p));
   }
   static void deleteArray_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR(void *p) {
      delete [] (static_cast<vector<shared_ptr<ROOT::Browsable::RElement> >*>(p));
   }
   static void destruct_vectorlEshared_ptrlEROOTcLcLBrowsablecLcLRElementgRsPgR(void *p) {
      typedef vector<shared_ptr<ROOT::Browsable::RElement> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<shared_ptr<ROOT::Browsable::RElement> >

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTBrowsable() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTBrowsable) = RecordReadRules_libROOTBrowsable();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTBrowsable));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTBrowsable_Impl() {
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
      TROOT::RegisterModule("libROOTBrowsable",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTBrowsable_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTBrowsable_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTBrowsable() {
  TriggerDictionaryInitialization_libROOTBrowsable_Impl();
}
