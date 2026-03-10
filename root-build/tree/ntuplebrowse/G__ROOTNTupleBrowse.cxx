// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTNTupleBrowse
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
#include "ROOT/RNTupleBrowseUtils.hxx"
#include "ROOT/RNTupleClassicBrowse.hxx"
#include "ROOT/RNTupleDrawVisitor.hxx"
#include "ROOT/RNTupleTreeMap.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTNTupleBrowse() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTNTupleBrowse) = RecordReadRules_libROOTNTupleBrowse();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTNTupleBrowse));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTNTupleBrowse_Impl() {
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
      TROOT::RegisterModule("libROOTNTupleBrowse",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTNTupleBrowse_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTNTupleBrowse_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTNTupleBrowse() {
  TriggerDictionaryInitialization_libROOTNTupleBrowse_Impl();
}
