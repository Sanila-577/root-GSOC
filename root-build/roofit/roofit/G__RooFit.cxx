// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RooFit
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

#include "TBuffer.h"
#include "TVirtualObject.h"
#include <vector>
#include "TSchemaHelper.h"


// Header files passed as explicit arguments
#include "Roo2DKeysPdf.h"
#include "RooArgusBG.h"
#include "RooBCPEffDecay.h"
#include "RooBCPGenDecay.h"
#include "RooBDecay.h"
#include "RooBernstein.h"
#include "RooBifurGauss.h"
#include "RooBlindTools.h"
#include "RooBMixDecay.h"
#include "RooBreitWigner.h"
#include "RooBukinPdf.h"
#include "RooCBShape.h"
#include "RooCrystalBall.h"
#include "RooCFunction1Binding.h"
#include "RooCFunction2Binding.h"
#include "RooCFunction3Binding.h"
#include "RooCFunction4Binding.h"
#include "RooChebychev.h"
#include "RooChi2MCSModule.h"
#include "RooChiSquarePdf.h"
#include "RooDecay.h"
#include "RooDstD0BG.h"
#include "RooExponential.h"
#include "RooLegacyExpPoly.h"
#include "RooPowerSum.h"
#include "RooFunctor1DBinding.h"
#include "RooFunctorBinding.h"
#include "RooGamma.h"
#include "RooGaussExpTails.h"
#include "RooGaussian.h"
#include "RooGaussModel.h"
#include "RooGExpModel.h"
#include "RooHistConstraint.h"
#include "RooIntegralMorph.h"
#include "RooJeffreysPrior.h"
#include "RooKeysPdf.h"
#include "RooLagrangianMorphFunc.h"
#include "RooLandau.h"
#include "RooLognormal.h"
#include "RooMathCoreReg.h"
#include "RooMomentMorphFunc.h"
#include "RooMomentMorphFuncND.h"
#include "RooMomentMorph.h"
#include "RooMultiBinomial.h"
#include "RooNDKeysPdf.h"
#include "RooNonCPEigenDecay.h"
#include "RooNovosibirsk.h"
#include "RooParametricStepFunction.h"
#include "RooParamHistFunc.h"
#include "RooPoisson.h"
#include "RooPolynomial.h"
#include "RooPyBind.h"
#include "RooSpline.h"
#include "RooStepFunction.h"
#include "RooStudentT.h"
#include "RooTFnBinding.h"
#include "RooTFnPdfBinding.h"
#include "RooTMathReg.h"
#include "RooUnblindCPAsymVar.h"
#include "RooUnblindOffset.h"
#include "RooUnblindPrecision.h"
#include "RooUnblindUniform.h"
#include "RooUniform.h"
#include "RooVoigtian.h"
#include "RooJohnson.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace RooFit {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *RooFit_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("RooFit", 0 /*version*/, "RooFit/Config.h", 22,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &RooFit_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *RooFit_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void delete_Roo2DKeysPdf(void *p);
   static void deleteArray_Roo2DKeysPdf(void *p);
   static void destruct_Roo2DKeysPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Roo2DKeysPdf*)
   {
      ::Roo2DKeysPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Roo2DKeysPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Roo2DKeysPdf", ::Roo2DKeysPdf::Class_Version(), "Roo2DKeysPdf.h", 25,
                  typeid(::Roo2DKeysPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Roo2DKeysPdf::Dictionary, isa_proxy, 4,
                  sizeof(::Roo2DKeysPdf) );
      instance.SetDelete(&delete_Roo2DKeysPdf);
      instance.SetDeleteArray(&deleteArray_Roo2DKeysPdf);
      instance.SetDestructor(&destruct_Roo2DKeysPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Roo2DKeysPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::Roo2DKeysPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Roo2DKeysPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooArgusBG(void *p = nullptr);
   static void *newArray_RooArgusBG(Long_t size, void *p);
   static void delete_RooArgusBG(void *p);
   static void deleteArray_RooArgusBG(void *p);
   static void destruct_RooArgusBG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooArgusBG*)
   {
      ::RooArgusBG *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooArgusBG >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooArgusBG", ::RooArgusBG::Class_Version(), "RooArgusBG.h", 22,
                  typeid(::RooArgusBG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooArgusBG::Dictionary, isa_proxy, 4,
                  sizeof(::RooArgusBG) );
      instance.SetNew(&new_RooArgusBG);
      instance.SetNewArray(&newArray_RooArgusBG);
      instance.SetDelete(&delete_RooArgusBG);
      instance.SetDeleteArray(&deleteArray_RooArgusBG);
      instance.SetDestructor(&destruct_RooArgusBG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooArgusBG*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooArgusBG*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooArgusBG*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBCPEffDecay(void *p = nullptr);
   static void *newArray_RooBCPEffDecay(Long_t size, void *p);
   static void delete_RooBCPEffDecay(void *p);
   static void deleteArray_RooBCPEffDecay(void *p);
   static void destruct_RooBCPEffDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBCPEffDecay*)
   {
      ::RooBCPEffDecay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBCPEffDecay >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBCPEffDecay", ::RooBCPEffDecay::Class_Version(), "RooBCPEffDecay.h", 23,
                  typeid(::RooBCPEffDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBCPEffDecay::Dictionary, isa_proxy, 4,
                  sizeof(::RooBCPEffDecay) );
      instance.SetNew(&new_RooBCPEffDecay);
      instance.SetNewArray(&newArray_RooBCPEffDecay);
      instance.SetDelete(&delete_RooBCPEffDecay);
      instance.SetDeleteArray(&deleteArray_RooBCPEffDecay);
      instance.SetDestructor(&destruct_RooBCPEffDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBCPEffDecay*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBCPEffDecay*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBCPEffDecay*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBCPGenDecay(void *p = nullptr);
   static void *newArray_RooBCPGenDecay(Long_t size, void *p);
   static void delete_RooBCPGenDecay(void *p);
   static void deleteArray_RooBCPGenDecay(void *p);
   static void destruct_RooBCPGenDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBCPGenDecay*)
   {
      ::RooBCPGenDecay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBCPGenDecay >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBCPGenDecay", ::RooBCPGenDecay::Class_Version(), "RooBCPGenDecay.h", 23,
                  typeid(::RooBCPGenDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBCPGenDecay::Dictionary, isa_proxy, 4,
                  sizeof(::RooBCPGenDecay) );
      instance.SetNew(&new_RooBCPGenDecay);
      instance.SetNewArray(&newArray_RooBCPGenDecay);
      instance.SetDelete(&delete_RooBCPGenDecay);
      instance.SetDeleteArray(&deleteArray_RooBCPGenDecay);
      instance.SetDestructor(&destruct_RooBCPGenDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBCPGenDecay*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBCPGenDecay*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBCPGenDecay*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBDecay(void *p = nullptr);
   static void *newArray_RooBDecay(Long_t size, void *p);
   static void delete_RooBDecay(void *p);
   static void deleteArray_RooBDecay(void *p);
   static void destruct_RooBDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBDecay*)
   {
      ::RooBDecay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBDecay >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBDecay", ::RooBDecay::Class_Version(), "RooBDecay.h", 24,
                  typeid(::RooBDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBDecay::Dictionary, isa_proxy, 4,
                  sizeof(::RooBDecay) );
      instance.SetNew(&new_RooBDecay);
      instance.SetNewArray(&newArray_RooBDecay);
      instance.SetDelete(&delete_RooBDecay);
      instance.SetDeleteArray(&deleteArray_RooBDecay);
      instance.SetDestructor(&destruct_RooBDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBDecay*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBDecay*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBDecay*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBernstein(void *p = nullptr);
   static void *newArray_RooBernstein(Long_t size, void *p);
   static void delete_RooBernstein(void *p);
   static void deleteArray_RooBernstein(void *p);
   static void destruct_RooBernstein(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBernstein*)
   {
      ::RooBernstein *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBernstein >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBernstein", ::RooBernstein::Class_Version(), "RooBernstein.h", 22,
                  typeid(::RooBernstein), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBernstein::Dictionary, isa_proxy, 4,
                  sizeof(::RooBernstein) );
      instance.SetNew(&new_RooBernstein);
      instance.SetNewArray(&newArray_RooBernstein);
      instance.SetDelete(&delete_RooBernstein);
      instance.SetDeleteArray(&deleteArray_RooBernstein);
      instance.SetDestructor(&destruct_RooBernstein);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBernstein*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBernstein*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBernstein*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBifurGauss(void *p = nullptr);
   static void *newArray_RooBifurGauss(Long_t size, void *p);
   static void delete_RooBifurGauss(void *p);
   static void deleteArray_RooBifurGauss(void *p);
   static void destruct_RooBifurGauss(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBifurGauss*)
   {
      ::RooBifurGauss *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBifurGauss >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBifurGauss", ::RooBifurGauss::Class_Version(), "RooBifurGauss.h", 22,
                  typeid(::RooBifurGauss), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBifurGauss::Dictionary, isa_proxy, 4,
                  sizeof(::RooBifurGauss) );
      instance.SetNew(&new_RooBifurGauss);
      instance.SetNewArray(&newArray_RooBifurGauss);
      instance.SetDelete(&delete_RooBifurGauss);
      instance.SetDeleteArray(&deleteArray_RooBifurGauss);
      instance.SetDestructor(&destruct_RooBifurGauss);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBifurGauss*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBifurGauss*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBifurGauss*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBlindTools(void *p = nullptr);
   static void *newArray_RooBlindTools(Long_t size, void *p);
   static void delete_RooBlindTools(void *p);
   static void deleteArray_RooBlindTools(void *p);
   static void destruct_RooBlindTools(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBlindTools*)
   {
      ::RooBlindTools *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBlindTools >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBlindTools", ::RooBlindTools::Class_Version(), "RooBlindTools.h", 26,
                  typeid(::RooBlindTools), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBlindTools::Dictionary, isa_proxy, 4,
                  sizeof(::RooBlindTools) );
      instance.SetNew(&new_RooBlindTools);
      instance.SetNewArray(&newArray_RooBlindTools);
      instance.SetDelete(&delete_RooBlindTools);
      instance.SetDeleteArray(&deleteArray_RooBlindTools);
      instance.SetDestructor(&destruct_RooBlindTools);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBlindTools*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBlindTools*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBlindTools*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBMixDecay(void *p = nullptr);
   static void *newArray_RooBMixDecay(Long_t size, void *p);
   static void delete_RooBMixDecay(void *p);
   static void deleteArray_RooBMixDecay(void *p);
   static void destruct_RooBMixDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBMixDecay*)
   {
      ::RooBMixDecay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBMixDecay >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBMixDecay", ::RooBMixDecay::Class_Version(), "RooBMixDecay.h", 23,
                  typeid(::RooBMixDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBMixDecay::Dictionary, isa_proxy, 4,
                  sizeof(::RooBMixDecay) );
      instance.SetNew(&new_RooBMixDecay);
      instance.SetNewArray(&newArray_RooBMixDecay);
      instance.SetDelete(&delete_RooBMixDecay);
      instance.SetDeleteArray(&deleteArray_RooBMixDecay);
      instance.SetDestructor(&destruct_RooBMixDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBMixDecay*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBMixDecay*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBMixDecay*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBreitWigner(void *p = nullptr);
   static void *newArray_RooBreitWigner(Long_t size, void *p);
   static void delete_RooBreitWigner(void *p);
   static void deleteArray_RooBreitWigner(void *p);
   static void destruct_RooBreitWigner(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBreitWigner*)
   {
      ::RooBreitWigner *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBreitWigner >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBreitWigner", ::RooBreitWigner::Class_Version(), "RooBreitWigner.h", 25,
                  typeid(::RooBreitWigner), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBreitWigner::Dictionary, isa_proxy, 4,
                  sizeof(::RooBreitWigner) );
      instance.SetNew(&new_RooBreitWigner);
      instance.SetNewArray(&newArray_RooBreitWigner);
      instance.SetDelete(&delete_RooBreitWigner);
      instance.SetDeleteArray(&deleteArray_RooBreitWigner);
      instance.SetDestructor(&destruct_RooBreitWigner);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBreitWigner*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBreitWigner*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBreitWigner*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBukinPdf(void *p = nullptr);
   static void *newArray_RooBukinPdf(Long_t size, void *p);
   static void delete_RooBukinPdf(void *p);
   static void deleteArray_RooBukinPdf(void *p);
   static void destruct_RooBukinPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBukinPdf*)
   {
      ::RooBukinPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBukinPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBukinPdf", ::RooBukinPdf::Class_Version(), "RooBukinPdf.h", 29,
                  typeid(::RooBukinPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBukinPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooBukinPdf) );
      instance.SetNew(&new_RooBukinPdf);
      instance.SetNewArray(&newArray_RooBukinPdf);
      instance.SetDelete(&delete_RooBukinPdf);
      instance.SetDeleteArray(&deleteArray_RooBukinPdf);
      instance.SetDestructor(&destruct_RooBukinPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBukinPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBukinPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBukinPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCBShape(void *p = nullptr);
   static void *newArray_RooCBShape(Long_t size, void *p);
   static void delete_RooCBShape(void *p);
   static void deleteArray_RooCBShape(void *p);
   static void destruct_RooCBShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCBShape*)
   {
      ::RooCBShape *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCBShape >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCBShape", ::RooCBShape::Class_Version(), "RooCBShape.h", 24,
                  typeid(::RooCBShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCBShape::Dictionary, isa_proxy, 4,
                  sizeof(::RooCBShape) );
      instance.SetNew(&new_RooCBShape);
      instance.SetNewArray(&newArray_RooCBShape);
      instance.SetDelete(&delete_RooCBShape);
      instance.SetDeleteArray(&deleteArray_RooCBShape);
      instance.SetDestructor(&destruct_RooCBShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCBShape*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCBShape*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCBShape*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCrystalBall(void *p = nullptr);
   static void *newArray_RooCrystalBall(Long_t size, void *p);
   static void delete_RooCrystalBall(void *p);
   static void deleteArray_RooCrystalBall(void *p);
   static void destruct_RooCrystalBall(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCrystalBall*)
   {
      ::RooCrystalBall *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCrystalBall >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCrystalBall", ::RooCrystalBall::Class_Version(), "RooCrystalBall.h", 11,
                  typeid(::RooCrystalBall), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCrystalBall::Dictionary, isa_proxy, 4,
                  sizeof(::RooCrystalBall) );
      instance.SetNew(&new_RooCrystalBall);
      instance.SetNewArray(&newArray_RooCrystalBall);
      instance.SetDelete(&delete_RooCrystalBall);
      instance.SetDeleteArray(&deleteArray_RooCrystalBall);
      instance.SetDestructor(&destruct_RooCrystalBall);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCrystalBall*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCrystalBall*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCrystalBall*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction1ReflEdoublecOintgR_Dictionary();
   static void RooCFunction1ReflEdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction1ReflEdoublecOintgR(void *p = nullptr);
   static void *newArray_RooCFunction1ReflEdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction1ReflEdoublecOintgR(void *p);
   static void deleteArray_RooCFunction1ReflEdoublecOintgR(void *p);
   static void destruct_RooCFunction1ReflEdoublecOintgR(void *p);
   static void streamer_RooCFunction1ReflEdoublecOintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction1Ref<double,int>*)
   {
      ::RooCFunction1Ref<double,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction1Ref<double,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction1Ref<double,int>", ::RooCFunction1Ref<double,int>::Class_Version(), "RooCFunction1Binding.h", 89,
                  typeid(::RooCFunction1Ref<double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction1ReflEdoublecOintgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction1Ref<double,int>) );
      instance.SetNew(&new_RooCFunction1ReflEdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction1ReflEdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction1ReflEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction1ReflEdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction1ReflEdoublecOintgR);
      instance.SetStreamerFunc(&streamer_RooCFunction1ReflEdoublecOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction1Ref<double,int>","RooCFunction1Ref<double,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction1Ref<double,int>","RooCFunction1Ref<double, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction1Ref<double,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction1Ref<double,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction1Ref<double,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction1ReflEdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction1Ref<double,int>*>(nullptr))->GetClass();
      RooCFunction1ReflEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction1ReflEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction1ReflEdoublecOdoublegR_Dictionary();
   static void RooCFunction1ReflEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction1ReflEdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction1ReflEdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction1ReflEdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction1ReflEdoublecOdoublegR(void *p);
   static void destruct_RooCFunction1ReflEdoublecOdoublegR(void *p);
   static void streamer_RooCFunction1ReflEdoublecOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction1Ref<double,double>*)
   {
      ::RooCFunction1Ref<double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction1Ref<double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction1Ref<double,double>", ::RooCFunction1Ref<double,double>::Class_Version(), "RooCFunction1Binding.h", 89,
                  typeid(::RooCFunction1Ref<double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction1ReflEdoublecOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction1Ref<double,double>) );
      instance.SetNew(&new_RooCFunction1ReflEdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction1ReflEdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction1ReflEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction1ReflEdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction1ReflEdoublecOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction1ReflEdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction1Ref<double,double>","RooCFunction1Ref<double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction1Ref<double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction1Ref<double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction1Ref<double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction1ReflEdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction1Ref<double,double>*>(nullptr))->GetClass();
      RooCFunction1ReflEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction1ReflEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction1BindinglEdoublecOintgR_Dictionary();
   static void RooCFunction1BindinglEdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction1BindinglEdoublecOintgR(void *p = nullptr);
   static void *newArray_RooCFunction1BindinglEdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction1BindinglEdoublecOintgR(void *p);
   static void deleteArray_RooCFunction1BindinglEdoublecOintgR(void *p);
   static void destruct_RooCFunction1BindinglEdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction1Binding<double,int>*)
   {
      ::RooCFunction1Binding<double,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction1Binding<double,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction1Binding<double,int>", ::RooCFunction1Binding<double,int>::Class_Version(), "RooCFunction1Binding.h", 218,
                  typeid(::RooCFunction1Binding<double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction1BindinglEdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction1Binding<double,int>) );
      instance.SetNew(&new_RooCFunction1BindinglEdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction1BindinglEdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction1BindinglEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction1BindinglEdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction1BindinglEdoublecOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction1Binding<double,int>","RooCFunction1Binding<double,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction1Binding<double,int>","RooCFunction1Binding<double, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction1Binding<double,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction1Binding<double,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction1Binding<double,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction1BindinglEdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction1Binding<double,int>*>(nullptr))->GetClass();
      RooCFunction1BindinglEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction1BindinglEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction1BindinglEdoublecOdoublegR_Dictionary();
   static void RooCFunction1BindinglEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction1BindinglEdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction1BindinglEdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction1BindinglEdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction1BindinglEdoublecOdoublegR(void *p);
   static void destruct_RooCFunction1BindinglEdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction1Binding<double,double>*)
   {
      ::RooCFunction1Binding<double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction1Binding<double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction1Binding<double,double>", ::RooCFunction1Binding<double,double>::Class_Version(), "RooCFunction1Binding.h", 218,
                  typeid(::RooCFunction1Binding<double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction1BindinglEdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction1Binding<double,double>) );
      instance.SetNew(&new_RooCFunction1BindinglEdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction1BindinglEdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction1BindinglEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction1BindinglEdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction1BindinglEdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction1Binding<double,double>","RooCFunction1Binding<double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction1Binding<double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction1Binding<double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction1Binding<double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction1BindinglEdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction1Binding<double,double>*>(nullptr))->GetClass();
      RooCFunction1BindinglEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction1BindinglEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction1PdfBindinglEdoublecOintgR_Dictionary();
   static void RooCFunction1PdfBindinglEdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction1PdfBindinglEdoublecOintgR(void *p = nullptr);
   static void *newArray_RooCFunction1PdfBindinglEdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction1PdfBindinglEdoublecOintgR(void *p);
   static void deleteArray_RooCFunction1PdfBindinglEdoublecOintgR(void *p);
   static void destruct_RooCFunction1PdfBindinglEdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction1PdfBinding<double,int>*)
   {
      ::RooCFunction1PdfBinding<double,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction1PdfBinding<double,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction1PdfBinding<double,int>", ::RooCFunction1PdfBinding<double,int>::Class_Version(), "RooCFunction1Binding.h", 281,
                  typeid(::RooCFunction1PdfBinding<double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction1PdfBindinglEdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction1PdfBinding<double,int>) );
      instance.SetNew(&new_RooCFunction1PdfBindinglEdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction1PdfBindinglEdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction1PdfBindinglEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction1PdfBindinglEdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction1PdfBindinglEdoublecOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction1PdfBinding<double,int>","RooCFunction1PdfBinding<double,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction1PdfBinding<double,int>","RooCFunction1PdfBinding<double, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction1PdfBinding<double,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction1PdfBinding<double,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction1PdfBinding<double,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction1PdfBindinglEdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction1PdfBinding<double,int>*>(nullptr))->GetClass();
      RooCFunction1PdfBindinglEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction1PdfBindinglEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction1PdfBindinglEdoublecOdoublegR_Dictionary();
   static void RooCFunction1PdfBindinglEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction1PdfBindinglEdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p);
   static void destruct_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction1PdfBinding<double,double>*)
   {
      ::RooCFunction1PdfBinding<double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction1PdfBinding<double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction1PdfBinding<double,double>", ::RooCFunction1PdfBinding<double,double>::Class_Version(), "RooCFunction1Binding.h", 281,
                  typeid(::RooCFunction1PdfBinding<double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction1PdfBindinglEdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction1PdfBinding<double,double>) );
      instance.SetNew(&new_RooCFunction1PdfBindinglEdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction1PdfBindinglEdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction1PdfBindinglEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction1PdfBindinglEdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction1PdfBindinglEdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction1PdfBinding<double,double>","RooCFunction1PdfBinding<double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction1PdfBinding<double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction1PdfBinding<double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction1PdfBinding<double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction1PdfBindinglEdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction1PdfBinding<double,double>*>(nullptr))->GetClass();
      RooCFunction1PdfBindinglEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction1PdfBindinglEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2ReflEdoublecOintcOintgR_Dictionary();
   static void RooCFunction2ReflEdoublecOintcOintgR_TClassManip(TClass*);
   static void *new_RooCFunction2ReflEdoublecOintcOintgR(void *p = nullptr);
   static void *newArray_RooCFunction2ReflEdoublecOintcOintgR(Long_t size, void *p);
   static void delete_RooCFunction2ReflEdoublecOintcOintgR(void *p);
   static void deleteArray_RooCFunction2ReflEdoublecOintcOintgR(void *p);
   static void destruct_RooCFunction2ReflEdoublecOintcOintgR(void *p);
   static void streamer_RooCFunction2ReflEdoublecOintcOintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Ref<double,int,int>*)
   {
      ::RooCFunction2Ref<double,int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Ref<double,int,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Ref<double,int,int>", ::RooCFunction2Ref<double,int,int>::Class_Version(), "RooCFunction2Binding.h", 98,
                  typeid(::RooCFunction2Ref<double,int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2ReflEdoublecOintcOintgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction2Ref<double,int,int>) );
      instance.SetNew(&new_RooCFunction2ReflEdoublecOintcOintgR);
      instance.SetNewArray(&newArray_RooCFunction2ReflEdoublecOintcOintgR);
      instance.SetDelete(&delete_RooCFunction2ReflEdoublecOintcOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2ReflEdoublecOintcOintgR);
      instance.SetDestructor(&destruct_RooCFunction2ReflEdoublecOintcOintgR);
      instance.SetStreamerFunc(&streamer_RooCFunction2ReflEdoublecOintcOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Ref<double,int,int>","RooCFunction2Ref<double,Int_t,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Ref<double,int,int>","RooCFunction2Ref<double, int, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Ref<double,int,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2Ref<double,int,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Ref<double,int,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2ReflEdoublecOintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Ref<double,int,int>*>(nullptr))->GetClass();
      RooCFunction2ReflEdoublecOintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2ReflEdoublecOintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2ReflEdoublecOdoublecOintgR_Dictionary();
   static void RooCFunction2ReflEdoublecOdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction2ReflEdoublecOdoublecOintgR(void *p = nullptr);
   static void *newArray_RooCFunction2ReflEdoublecOdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction2ReflEdoublecOdoublecOintgR(void *p);
   static void deleteArray_RooCFunction2ReflEdoublecOdoublecOintgR(void *p);
   static void destruct_RooCFunction2ReflEdoublecOdoublecOintgR(void *p);
   static void streamer_RooCFunction2ReflEdoublecOdoublecOintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Ref<double,double,int>*)
   {
      ::RooCFunction2Ref<double,double,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Ref<double,double,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Ref<double,double,int>", ::RooCFunction2Ref<double,double,int>::Class_Version(), "RooCFunction2Binding.h", 98,
                  typeid(::RooCFunction2Ref<double,double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2ReflEdoublecOdoublecOintgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction2Ref<double,double,int>) );
      instance.SetNew(&new_RooCFunction2ReflEdoublecOdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction2ReflEdoublecOdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction2ReflEdoublecOdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2ReflEdoublecOdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction2ReflEdoublecOdoublecOintgR);
      instance.SetStreamerFunc(&streamer_RooCFunction2ReflEdoublecOdoublecOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Ref<double,double,int>","RooCFunction2Ref<double,double,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Ref<double,double,int>","RooCFunction2Ref<double, double, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Ref<double,double,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2Ref<double,double,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Ref<double,double,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2ReflEdoublecOdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Ref<double,double,int>*>(nullptr))->GetClass();
      RooCFunction2ReflEdoublecOdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2ReflEdoublecOdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR_Dictionary();
   static void RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p);
   static void deleteArray_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p);
   static void destruct_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p);
   static void streamer_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Ref<double,unsigned int,double>*)
   {
      ::RooCFunction2Ref<double,unsigned int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Ref<double,unsigned int,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Ref<double,unsigned int,double>", ::RooCFunction2Ref<double,unsigned int,double>::Class_Version(), "RooCFunction2Binding.h", 98,
                  typeid(::RooCFunction2Ref<double,unsigned int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction2Ref<double,unsigned int,double>) );
      instance.SetNew(&new_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Ref<double,unsigned int,double>","RooCFunction2Ref<double,UInt_t,double>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Ref<double,unsigned int,double>","RooCFunction2Ref<double, unsigned int, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Ref<double,unsigned int,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2Ref<double,unsigned int,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Ref<double,unsigned int,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Ref<double,unsigned int,double>*>(nullptr))->GetClass();
      RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2ReflEdoublecOintcOdoublegR_Dictionary();
   static void RooCFunction2ReflEdoublecOintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2ReflEdoublecOintcOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction2ReflEdoublecOintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2ReflEdoublecOintcOdoublegR(void *p);
   static void deleteArray_RooCFunction2ReflEdoublecOintcOdoublegR(void *p);
   static void destruct_RooCFunction2ReflEdoublecOintcOdoublegR(void *p);
   static void streamer_RooCFunction2ReflEdoublecOintcOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Ref<double,int,double>*)
   {
      ::RooCFunction2Ref<double,int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Ref<double,int,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Ref<double,int,double>", ::RooCFunction2Ref<double,int,double>::Class_Version(), "RooCFunction2Binding.h", 98,
                  typeid(::RooCFunction2Ref<double,int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2ReflEdoublecOintcOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction2Ref<double,int,double>) );
      instance.SetNew(&new_RooCFunction2ReflEdoublecOintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2ReflEdoublecOintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction2ReflEdoublecOintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2ReflEdoublecOintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2ReflEdoublecOintcOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction2ReflEdoublecOintcOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Ref<double,int,double>","RooCFunction2Ref<double,Int_t,double>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Ref<double,int,double>","RooCFunction2Ref<double, int, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Ref<double,int,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2Ref<double,int,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Ref<double,int,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2ReflEdoublecOintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Ref<double,int,double>*>(nullptr))->GetClass();
      RooCFunction2ReflEdoublecOintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2ReflEdoublecOintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2ReflEdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction2ReflEdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction2ReflEdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p);
   static void streamer_RooCFunction2ReflEdoublecOdoublecOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Ref<double,double,double>*)
   {
      ::RooCFunction2Ref<double,double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Ref<double,double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Ref<double,double,double>", ::RooCFunction2Ref<double,double,double>::Class_Version(), "RooCFunction2Binding.h", 98,
                  typeid(::RooCFunction2Ref<double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2ReflEdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction2Ref<double,double,double>) );
      instance.SetNew(&new_RooCFunction2ReflEdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2ReflEdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction2ReflEdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2ReflEdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2ReflEdoublecOdoublecOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction2ReflEdoublecOdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Ref<double,double,double>","RooCFunction2Ref<double, double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Ref<double,double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2Ref<double,double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Ref<double,double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2ReflEdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Ref<double,double,double>*>(nullptr))->GetClass();
      RooCFunction2ReflEdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2ReflEdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2BindinglEdoublecOintcOintgR_Dictionary();
   static void RooCFunction2BindinglEdoublecOintcOintgR_TClassManip(TClass*);
   static void *new_RooCFunction2BindinglEdoublecOintcOintgR(void *p = nullptr);
   static void *newArray_RooCFunction2BindinglEdoublecOintcOintgR(Long_t size, void *p);
   static void delete_RooCFunction2BindinglEdoublecOintcOintgR(void *p);
   static void deleteArray_RooCFunction2BindinglEdoublecOintcOintgR(void *p);
   static void destruct_RooCFunction2BindinglEdoublecOintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Binding<double,int,int>*)
   {
      ::RooCFunction2Binding<double,int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Binding<double,int,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Binding<double,int,int>", ::RooCFunction2Binding<double,int,int>::Class_Version(), "RooCFunction2Binding.h", 228,
                  typeid(::RooCFunction2Binding<double,int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2BindinglEdoublecOintcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2Binding<double,int,int>) );
      instance.SetNew(&new_RooCFunction2BindinglEdoublecOintcOintgR);
      instance.SetNewArray(&newArray_RooCFunction2BindinglEdoublecOintcOintgR);
      instance.SetDelete(&delete_RooCFunction2BindinglEdoublecOintcOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2BindinglEdoublecOintcOintgR);
      instance.SetDestructor(&destruct_RooCFunction2BindinglEdoublecOintcOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Binding<double,int,int>","RooCFunction2Binding<double,Int_t,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Binding<double,int,int>","RooCFunction2Binding<double, int, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Binding<double,int,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2Binding<double,int,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Binding<double,int,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2BindinglEdoublecOintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Binding<double,int,int>*>(nullptr))->GetClass();
      RooCFunction2BindinglEdoublecOintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2BindinglEdoublecOintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2BindinglEdoublecOdoublecOintgR_Dictionary();
   static void RooCFunction2BindinglEdoublecOdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p = nullptr);
   static void *newArray_RooCFunction2BindinglEdoublecOdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p);
   static void deleteArray_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p);
   static void destruct_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Binding<double,double,int>*)
   {
      ::RooCFunction2Binding<double,double,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Binding<double,double,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Binding<double,double,int>", ::RooCFunction2Binding<double,double,int>::Class_Version(), "RooCFunction2Binding.h", 228,
                  typeid(::RooCFunction2Binding<double,double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2BindinglEdoublecOdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2Binding<double,double,int>) );
      instance.SetNew(&new_RooCFunction2BindinglEdoublecOdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction2BindinglEdoublecOdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction2BindinglEdoublecOdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2BindinglEdoublecOdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction2BindinglEdoublecOdoublecOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Binding<double,double,int>","RooCFunction2Binding<double,double,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Binding<double,double,int>","RooCFunction2Binding<double, double, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Binding<double,double,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2Binding<double,double,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Binding<double,double,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2BindinglEdoublecOdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Binding<double,double,int>*>(nullptr))->GetClass();
      RooCFunction2BindinglEdoublecOdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2BindinglEdoublecOdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR_Dictionary();
   static void RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p);
   static void deleteArray_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p);
   static void destruct_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Binding<double,unsigned int,double>*)
   {
      ::RooCFunction2Binding<double,unsigned int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Binding<double,unsigned int,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Binding<double,unsigned int,double>", ::RooCFunction2Binding<double,unsigned int,double>::Class_Version(), "RooCFunction2Binding.h", 228,
                  typeid(::RooCFunction2Binding<double,unsigned int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2Binding<double,unsigned int,double>) );
      instance.SetNew(&new_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Binding<double,unsigned int,double>","RooCFunction2Binding<double,UInt_t,double>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Binding<double,unsigned int,double>","RooCFunction2Binding<double, unsigned int, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Binding<double,unsigned int,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2Binding<double,unsigned int,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Binding<double,unsigned int,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Binding<double,unsigned int,double>*>(nullptr))->GetClass();
      RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2BindinglEdoublecOintcOdoublegR_Dictionary();
   static void RooCFunction2BindinglEdoublecOintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction2BindinglEdoublecOintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p);
   static void deleteArray_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p);
   static void destruct_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Binding<double,int,double>*)
   {
      ::RooCFunction2Binding<double,int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Binding<double,int,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Binding<double,int,double>", ::RooCFunction2Binding<double,int,double>::Class_Version(), "RooCFunction2Binding.h", 228,
                  typeid(::RooCFunction2Binding<double,int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2BindinglEdoublecOintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2Binding<double,int,double>) );
      instance.SetNew(&new_RooCFunction2BindinglEdoublecOintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2BindinglEdoublecOintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction2BindinglEdoublecOintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2BindinglEdoublecOintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2BindinglEdoublecOintcOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Binding<double,int,double>","RooCFunction2Binding<double,Int_t,double>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Binding<double,int,double>","RooCFunction2Binding<double, int, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Binding<double,int,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2Binding<double,int,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Binding<double,int,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2BindinglEdoublecOintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Binding<double,int,double>*>(nullptr))->GetClass();
      RooCFunction2BindinglEdoublecOintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2BindinglEdoublecOintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2BindinglEdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction2BindinglEdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction2BindinglEdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Binding<double,double,double>*)
   {
      ::RooCFunction2Binding<double,double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Binding<double,double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Binding<double,double,double>", ::RooCFunction2Binding<double,double,double>::Class_Version(), "RooCFunction2Binding.h", 228,
                  typeid(::RooCFunction2Binding<double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2BindinglEdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2Binding<double,double,double>) );
      instance.SetNew(&new_RooCFunction2BindinglEdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2BindinglEdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction2BindinglEdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2BindinglEdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2BindinglEdoublecOdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2Binding<double,double,double>","RooCFunction2Binding<double, double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Binding<double,double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2Binding<double,double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Binding<double,double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2BindinglEdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2Binding<double,double,double>*>(nullptr))->GetClass();
      RooCFunction2BindinglEdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2BindinglEdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2PdfBindinglEdoublecOintcOintgR_Dictionary();
   static void RooCFunction2PdfBindinglEdoublecOintcOintgR_TClassManip(TClass*);
   static void *new_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p = nullptr);
   static void *newArray_RooCFunction2PdfBindinglEdoublecOintcOintgR(Long_t size, void *p);
   static void delete_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p);
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p);
   static void destruct_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2PdfBinding<double,int,int>*)
   {
      ::RooCFunction2PdfBinding<double,int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2PdfBinding<double,int,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2PdfBinding<double,int,int>", ::RooCFunction2PdfBinding<double,int,int>::Class_Version(), "RooCFunction2Binding.h", 295,
                  typeid(::RooCFunction2PdfBinding<double,int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2PdfBindinglEdoublecOintcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2PdfBinding<double,int,int>) );
      instance.SetNew(&new_RooCFunction2PdfBindinglEdoublecOintcOintgR);
      instance.SetNewArray(&newArray_RooCFunction2PdfBindinglEdoublecOintcOintgR);
      instance.SetDelete(&delete_RooCFunction2PdfBindinglEdoublecOintcOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2PdfBindinglEdoublecOintcOintgR);
      instance.SetDestructor(&destruct_RooCFunction2PdfBindinglEdoublecOintcOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,int,int>","RooCFunction2PdfBinding<double,Int_t,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,int,int>","RooCFunction2PdfBinding<double, int, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2PdfBinding<double,int,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2PdfBinding<double,int,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2PdfBinding<double,int,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2PdfBindinglEdoublecOintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2PdfBinding<double,int,int>*>(nullptr))->GetClass();
      RooCFunction2PdfBindinglEdoublecOintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2PdfBindinglEdoublecOintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2PdfBindinglEdoublecOdoublecOintgR_Dictionary();
   static void RooCFunction2PdfBindinglEdoublecOdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p = nullptr);
   static void *newArray_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p);
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p);
   static void destruct_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2PdfBinding<double,double,int>*)
   {
      ::RooCFunction2PdfBinding<double,double,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2PdfBinding<double,double,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2PdfBinding<double,double,int>", ::RooCFunction2PdfBinding<double,double,int>::Class_Version(), "RooCFunction2Binding.h", 295,
                  typeid(::RooCFunction2PdfBinding<double,double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2PdfBindinglEdoublecOdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2PdfBinding<double,double,int>) );
      instance.SetNew(&new_RooCFunction2PdfBindinglEdoublecOdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction2PdfBindinglEdoublecOdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction2PdfBindinglEdoublecOdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2PdfBindinglEdoublecOdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction2PdfBindinglEdoublecOdoublecOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,double,int>","RooCFunction2PdfBinding<double,double,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,double,int>","RooCFunction2PdfBinding<double, double, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2PdfBinding<double,double,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2PdfBinding<double,double,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2PdfBinding<double,double,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2PdfBindinglEdoublecOdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2PdfBinding<double,double,int>*>(nullptr))->GetClass();
      RooCFunction2PdfBindinglEdoublecOdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2PdfBindinglEdoublecOdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR_Dictionary();
   static void RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p);
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p);
   static void destruct_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2PdfBinding<double,unsigned int,double>*)
   {
      ::RooCFunction2PdfBinding<double,unsigned int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2PdfBinding<double,unsigned int,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2PdfBinding<double,unsigned int,double>", ::RooCFunction2PdfBinding<double,unsigned int,double>::Class_Version(), "RooCFunction2Binding.h", 295,
                  typeid(::RooCFunction2PdfBinding<double,unsigned int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2PdfBinding<double,unsigned int,double>) );
      instance.SetNew(&new_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,unsigned int,double>","RooCFunction2PdfBinding<double,UInt_t,double>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,unsigned int,double>","RooCFunction2PdfBinding<double, unsigned int, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2PdfBinding<double,unsigned int,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2PdfBinding<double,unsigned int,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2PdfBinding<double,unsigned int,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2PdfBinding<double,unsigned int,double>*>(nullptr))->GetClass();
      RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2PdfBindinglEdoublecOintcOdoublegR_Dictionary();
   static void RooCFunction2PdfBindinglEdoublecOintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p);
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p);
   static void destruct_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2PdfBinding<double,int,double>*)
   {
      ::RooCFunction2PdfBinding<double,int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2PdfBinding<double,int,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2PdfBinding<double,int,double>", ::RooCFunction2PdfBinding<double,int,double>::Class_Version(), "RooCFunction2Binding.h", 295,
                  typeid(::RooCFunction2PdfBinding<double,int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2PdfBindinglEdoublecOintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2PdfBinding<double,int,double>) );
      instance.SetNew(&new_RooCFunction2PdfBindinglEdoublecOintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2PdfBindinglEdoublecOintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction2PdfBindinglEdoublecOintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2PdfBindinglEdoublecOintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2PdfBindinglEdoublecOintcOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,int,double>","RooCFunction2PdfBinding<double,Int_t,double>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,int,double>","RooCFunction2PdfBinding<double, int, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2PdfBinding<double,int,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2PdfBinding<double,int,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2PdfBinding<double,int,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2PdfBindinglEdoublecOintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2PdfBinding<double,int,double>*>(nullptr))->GetClass();
      RooCFunction2PdfBindinglEdoublecOintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2PdfBindinglEdoublecOintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2PdfBinding<double,double,double>*)
   {
      ::RooCFunction2PdfBinding<double,double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2PdfBinding<double,double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2PdfBinding<double,double,double>", ::RooCFunction2PdfBinding<double,double,double>::Class_Version(), "RooCFunction2Binding.h", 295,
                  typeid(::RooCFunction2PdfBinding<double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2PdfBinding<double,double,double>) );
      instance.SetNew(&new_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,double,double>","RooCFunction2PdfBinding<double, double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2PdfBinding<double,double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction2PdfBinding<double,double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction2PdfBinding<double,double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction2PdfBinding<double,double,double>*>(nullptr))->GetClass();
      RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary();
   static void RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void destruct_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void streamer_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)
   {
      ::RooCFunction3Ref<double,unsigned int,unsigned int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Ref<double,unsigned int,unsigned int,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Ref<double,unsigned int,unsigned int,double>", ::RooCFunction3Ref<double,unsigned int,unsigned int,double>::Class_Version(), "RooCFunction3Binding.h", 100,
                  typeid(::RooCFunction3Ref<double,unsigned int,unsigned int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction3Ref<double,unsigned int,unsigned int,double>) );
      instance.SetNew(&new_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Ref<double,unsigned int,unsigned int,double>","RooCFunction3Ref<double,UInt_t,UInt_t,double>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Ref<double,unsigned int,unsigned int,double>","RooCFunction3Ref<double, unsigned int, unsigned int, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3Ref<double,unsigned int,unsigned int,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*>(nullptr))->GetClass();
      RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary();
   static void RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void streamer_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Ref<double,unsigned int,double,double>*)
   {
      ::RooCFunction3Ref<double,unsigned int,double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Ref<double,unsigned int,double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Ref<double,unsigned int,double,double>", ::RooCFunction3Ref<double,unsigned int,double,double>::Class_Version(), "RooCFunction3Binding.h", 100,
                  typeid(::RooCFunction3Ref<double,unsigned int,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction3Ref<double,unsigned int,double,double>) );
      instance.SetNew(&new_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Ref<double,unsigned int,double,double>","RooCFunction3Ref<double,UInt_t,double,double>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Ref<double,unsigned int,double,double>","RooCFunction3Ref<double, unsigned int, double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Ref<double,unsigned int,double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3Ref<double,unsigned int,double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Ref<double,unsigned int,double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Ref<double,unsigned int,double,double>*>(nullptr))->GetClass();
      RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary();
   static void RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(TClass*);
   static void *new_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p = nullptr);
   static void *newArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(Long_t size, void *p);
   static void delete_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void destruct_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void streamer_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)
   {
      ::RooCFunction3Ref<double,unsigned int,double,unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Ref<double,unsigned int,double,unsigned int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Ref<double,unsigned int,double,unsigned int>", ::RooCFunction3Ref<double,unsigned int,double,unsigned int>::Class_Version(), "RooCFunction3Binding.h", 100,
                  typeid(::RooCFunction3Ref<double,unsigned int,double,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction3Ref<double,unsigned int,double,unsigned int>) );
      instance.SetNew(&new_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetNewArray(&newArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDelete(&delete_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDestructor(&destruct_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetStreamerFunc(&streamer_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Ref<double,unsigned int,double,unsigned int>","RooCFunction3Ref<double,UInt_t,double,UInt_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Ref<double,unsigned int,double,unsigned int>","RooCFunction3Ref<double, unsigned int, double, unsigned int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3Ref<double,unsigned int,double,unsigned int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*>(nullptr))->GetClass();
      RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3ReflEdoublecOdoublecOintcOintgR_Dictionary();
   static void RooCFunction3ReflEdoublecOdoublecOintcOintgR_TClassManip(TClass*);
   static void *new_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p = nullptr);
   static void *newArray_RooCFunction3ReflEdoublecOdoublecOintcOintgR(Long_t size, void *p);
   static void delete_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p);
   static void deleteArray_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p);
   static void destruct_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p);
   static void streamer_RooCFunction3ReflEdoublecOdoublecOintcOintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Ref<double,double,int,int>*)
   {
      ::RooCFunction3Ref<double,double,int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Ref<double,double,int,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Ref<double,double,int,int>", ::RooCFunction3Ref<double,double,int,int>::Class_Version(), "RooCFunction3Binding.h", 100,
                  typeid(::RooCFunction3Ref<double,double,int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3ReflEdoublecOdoublecOintcOintgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction3Ref<double,double,int,int>) );
      instance.SetNew(&new_RooCFunction3ReflEdoublecOdoublecOintcOintgR);
      instance.SetNewArray(&newArray_RooCFunction3ReflEdoublecOdoublecOintcOintgR);
      instance.SetDelete(&delete_RooCFunction3ReflEdoublecOdoublecOintcOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3ReflEdoublecOdoublecOintcOintgR);
      instance.SetDestructor(&destruct_RooCFunction3ReflEdoublecOdoublecOintcOintgR);
      instance.SetStreamerFunc(&streamer_RooCFunction3ReflEdoublecOdoublecOintcOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Ref<double,double,int,int>","RooCFunction3Ref<double,double,Int_t,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Ref<double,double,int,int>","RooCFunction3Ref<double, double, int, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Ref<double,double,int,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3Ref<double,double,int,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Ref<double,double,int,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3ReflEdoublecOdoublecOintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Ref<double,double,int,int>*>(nullptr))->GetClass();
      RooCFunction3ReflEdoublecOdoublecOintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3ReflEdoublecOdoublecOintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR_Dictionary();
   static void RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR_TClassManip(TClass*);
   static void *new_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p = nullptr);
   static void *newArray_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(Long_t size, void *p);
   static void delete_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p);
   static void deleteArray_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p);
   static void destruct_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p);
   static void streamer_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Ref<double,double,double,bool>*)
   {
      ::RooCFunction3Ref<double,double,double,bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Ref<double,double,double,bool> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Ref<double,double,double,bool>", ::RooCFunction3Ref<double,double,double,bool>::Class_Version(), "RooCFunction3Binding.h", 100,
                  typeid(::RooCFunction3Ref<double,double,double,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction3Ref<double,double,double,bool>) );
      instance.SetNew(&new_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR);
      instance.SetNewArray(&newArray_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR);
      instance.SetDelete(&delete_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR);
      instance.SetDestructor(&destruct_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR);
      instance.SetStreamerFunc(&streamer_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Ref<double,double,double,bool>","RooCFunction3Ref<double, double, double, bool>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Ref<double,double,double,bool>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3Ref<double,double,double,bool>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Ref<double,double,double,bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Ref<double,double,double,bool>*>(nullptr))->GetClass();
      RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void streamer_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Ref<double,double,double,double>*)
   {
      ::RooCFunction3Ref<double,double,double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Ref<double,double,double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Ref<double,double,double,double>", ::RooCFunction3Ref<double,double,double,double>::Class_Version(), "RooCFunction3Binding.h", 100,
                  typeid(::RooCFunction3Ref<double,double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction3Ref<double,double,double,double>) );
      instance.SetNew(&new_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Ref<double,double,double,double>","RooCFunction3Ref<double, double, double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Ref<double,double,double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3Ref<double,double,double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Ref<double,double,double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Ref<double,double,double,double>*>(nullptr))->GetClass();
      RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary();
   static void RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)
   {
      ::RooCFunction3Binding<double,unsigned int,unsigned int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Binding<double,unsigned int,unsigned int,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Binding<double,unsigned int,unsigned int,double>", ::RooCFunction3Binding<double,unsigned int,unsigned int,double>::Class_Version(), "RooCFunction3Binding.h", 238,
                  typeid(::RooCFunction3Binding<double,unsigned int,unsigned int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3Binding<double,unsigned int,unsigned int,double>) );
      instance.SetNew(&new_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Binding<double,unsigned int,unsigned int,double>","RooCFunction3Binding<double,UInt_t,UInt_t,double>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Binding<double,unsigned int,unsigned int,double>","RooCFunction3Binding<double, unsigned int, unsigned int, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3Binding<double,unsigned int,unsigned int,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*>(nullptr))->GetClass();
      RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary();
   static void RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Binding<double,unsigned int,double,double>*)
   {
      ::RooCFunction3Binding<double,unsigned int,double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Binding<double,unsigned int,double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Binding<double,unsigned int,double,double>", ::RooCFunction3Binding<double,unsigned int,double,double>::Class_Version(), "RooCFunction3Binding.h", 238,
                  typeid(::RooCFunction3Binding<double,unsigned int,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3Binding<double,unsigned int,double,double>) );
      instance.SetNew(&new_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Binding<double,unsigned int,double,double>","RooCFunction3Binding<double,UInt_t,double,double>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Binding<double,unsigned int,double,double>","RooCFunction3Binding<double, unsigned int, double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Binding<double,unsigned int,double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3Binding<double,unsigned int,double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Binding<double,unsigned int,double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Binding<double,unsigned int,double,double>*>(nullptr))->GetClass();
      RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary();
   static void RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(TClass*);
   static void *new_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p = nullptr);
   static void *newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(Long_t size, void *p);
   static void delete_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)
   {
      ::RooCFunction3Binding<double,unsigned int,double,unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Binding<double,unsigned int,double,unsigned int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Binding<double,unsigned int,double,unsigned int>", ::RooCFunction3Binding<double,unsigned int,double,unsigned int>::Class_Version(), "RooCFunction3Binding.h", 238,
                  typeid(::RooCFunction3Binding<double,unsigned int,double,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3Binding<double,unsigned int,double,unsigned int>) );
      instance.SetNew(&new_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetNewArray(&newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDelete(&delete_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDestructor(&destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Binding<double,unsigned int,double,unsigned int>","RooCFunction3Binding<double,UInt_t,double,UInt_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Binding<double,unsigned int,double,unsigned int>","RooCFunction3Binding<double, unsigned int, double, unsigned int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3Binding<double,unsigned int,double,unsigned int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*>(nullptr))->GetClass();
      RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3BindinglEdoublecOdoublecOintcOintgR_Dictionary();
   static void RooCFunction3BindinglEdoublecOdoublecOintcOintgR_TClassManip(TClass*);
   static void *new_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p = nullptr);
   static void *newArray_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(Long_t size, void *p);
   static void delete_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p);
   static void deleteArray_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p);
   static void destruct_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Binding<double,double,int,int>*)
   {
      ::RooCFunction3Binding<double,double,int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Binding<double,double,int,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Binding<double,double,int,int>", ::RooCFunction3Binding<double,double,int,int>::Class_Version(), "RooCFunction3Binding.h", 238,
                  typeid(::RooCFunction3Binding<double,double,int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3BindinglEdoublecOdoublecOintcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3Binding<double,double,int,int>) );
      instance.SetNew(&new_RooCFunction3BindinglEdoublecOdoublecOintcOintgR);
      instance.SetNewArray(&newArray_RooCFunction3BindinglEdoublecOdoublecOintcOintgR);
      instance.SetDelete(&delete_RooCFunction3BindinglEdoublecOdoublecOintcOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3BindinglEdoublecOdoublecOintcOintgR);
      instance.SetDestructor(&destruct_RooCFunction3BindinglEdoublecOdoublecOintcOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Binding<double,double,int,int>","RooCFunction3Binding<double,double,Int_t,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Binding<double,double,int,int>","RooCFunction3Binding<double, double, int, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Binding<double,double,int,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3Binding<double,double,int,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Binding<double,double,int,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3BindinglEdoublecOdoublecOintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Binding<double,double,int,int>*>(nullptr))->GetClass();
      RooCFunction3BindinglEdoublecOdoublecOintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3BindinglEdoublecOdoublecOintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR_Dictionary();
   static void RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR_TClassManip(TClass*);
   static void *new_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p = nullptr);
   static void *newArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(Long_t size, void *p);
   static void delete_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p);
   static void deleteArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p);
   static void destruct_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Binding<double,double,double,bool>*)
   {
      ::RooCFunction3Binding<double,double,double,bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Binding<double,double,double,bool> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Binding<double,double,double,bool>", ::RooCFunction3Binding<double,double,double,bool>::Class_Version(), "RooCFunction3Binding.h", 238,
                  typeid(::RooCFunction3Binding<double,double,double,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3Binding<double,double,double,bool>) );
      instance.SetNew(&new_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetNewArray(&newArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetDelete(&delete_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetDestructor(&destruct_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Binding<double,double,double,bool>","RooCFunction3Binding<double, double, double, bool>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Binding<double,double,double,bool>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3Binding<double,double,double,bool>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Binding<double,double,double,bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Binding<double,double,double,bool>*>(nullptr))->GetClass();
      RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Binding<double,double,double,double>*)
   {
      ::RooCFunction3Binding<double,double,double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Binding<double,double,double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Binding<double,double,double,double>", ::RooCFunction3Binding<double,double,double,double>::Class_Version(), "RooCFunction3Binding.h", 238,
                  typeid(::RooCFunction3Binding<double,double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3Binding<double,double,double,double>) );
      instance.SetNew(&new_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3Binding<double,double,double,double>","RooCFunction3Binding<double, double, double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Binding<double,double,double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3Binding<double,double,double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Binding<double,double,double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3Binding<double,double,double,double>*>(nullptr))->GetClass();
      RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary();
   static void RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)
   {
      ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>", ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Class_Version(), "RooCFunction3Binding.h", 308,
                  typeid(::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>) );
      instance.SetNew(&new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>","RooCFunction3PdfBinding<double,UInt_t,UInt_t,double>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>","RooCFunction3PdfBinding<double, unsigned int, unsigned int, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*>(nullptr))->GetClass();
      RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary();
   static void RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)
   {
      ::RooCFunction3PdfBinding<double,unsigned int,double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3PdfBinding<double,unsigned int,double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3PdfBinding<double,unsigned int,double,double>", ::RooCFunction3PdfBinding<double,unsigned int,double,double>::Class_Version(), "RooCFunction3Binding.h", 308,
                  typeid(::RooCFunction3PdfBinding<double,unsigned int,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3PdfBinding<double,unsigned int,double,double>) );
      instance.SetNew(&new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,unsigned int,double,double>","RooCFunction3PdfBinding<double,UInt_t,double,double>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,unsigned int,double,double>","RooCFunction3PdfBinding<double, unsigned int, double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3PdfBinding<double,unsigned int,double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*>(nullptr))->GetClass();
      RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary();
   static void RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(TClass*);
   static void *new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p = nullptr);
   static void *newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(Long_t size, void *p);
   static void delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)
   {
      ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>", ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Class_Version(), "RooCFunction3Binding.h", 308,
                  typeid(::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>) );
      instance.SetNew(&new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetNewArray(&newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDelete(&delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDestructor(&destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>","RooCFunction3PdfBinding<double,UInt_t,double,UInt_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>","RooCFunction3PdfBinding<double, unsigned int, double, unsigned int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*>(nullptr))->GetClass();
      RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR_Dictionary();
   static void RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR_TClassManip(TClass*);
   static void *new_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p = nullptr);
   static void *newArray_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(Long_t size, void *p);
   static void delete_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p);
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p);
   static void destruct_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3PdfBinding<double,double,int,int>*)
   {
      ::RooCFunction3PdfBinding<double,double,int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3PdfBinding<double,double,int,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3PdfBinding<double,double,int,int>", ::RooCFunction3PdfBinding<double,double,int,int>::Class_Version(), "RooCFunction3Binding.h", 308,
                  typeid(::RooCFunction3PdfBinding<double,double,int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3PdfBinding<double,double,int,int>) );
      instance.SetNew(&new_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR);
      instance.SetNewArray(&newArray_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR);
      instance.SetDelete(&delete_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR);
      instance.SetDestructor(&destruct_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,double,int,int>","RooCFunction3PdfBinding<double,double,Int_t,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,double,int,int>","RooCFunction3PdfBinding<double, double, int, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3PdfBinding<double,double,int,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3PdfBinding<double,double,int,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3PdfBinding<double,double,int,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3PdfBinding<double,double,int,int>*>(nullptr))->GetClass();
      RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR_Dictionary();
   static void RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR_TClassManip(TClass*);
   static void *new_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p = nullptr);
   static void *newArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(Long_t size, void *p);
   static void delete_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p);
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p);
   static void destruct_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3PdfBinding<double,double,double,bool>*)
   {
      ::RooCFunction3PdfBinding<double,double,double,bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3PdfBinding<double,double,double,bool> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3PdfBinding<double,double,double,bool>", ::RooCFunction3PdfBinding<double,double,double,bool>::Class_Version(), "RooCFunction3Binding.h", 308,
                  typeid(::RooCFunction3PdfBinding<double,double,double,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3PdfBinding<double,double,double,bool>) );
      instance.SetNew(&new_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetNewArray(&newArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetDelete(&delete_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetDestructor(&destruct_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,double,double,bool>","RooCFunction3PdfBinding<double, double, double, bool>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3PdfBinding<double,double,double,bool>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3PdfBinding<double,double,double,bool>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3PdfBinding<double,double,double,bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3PdfBinding<double,double,double,bool>*>(nullptr))->GetClass();
      RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3PdfBinding<double,double,double,double>*)
   {
      ::RooCFunction3PdfBinding<double,double,double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3PdfBinding<double,double,double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3PdfBinding<double,double,double,double>", ::RooCFunction3PdfBinding<double,double,double,double>::Class_Version(), "RooCFunction3Binding.h", 308,
                  typeid(::RooCFunction3PdfBinding<double,double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3PdfBinding<double,double,double,double>) );
      instance.SetNew(&new_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,double,double,double>","RooCFunction3PdfBinding<double, double, double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3PdfBinding<double,double,double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction3PdfBinding<double,double,double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction3PdfBinding<double,double,double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction3PdfBinding<double,double,double,double>*>(nullptr))->GetClass();
      RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary();
   static void RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(TClass*);
   static void *new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p = nullptr);
   static void *newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(Long_t size, void *p);
   static void delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4Ref<double,double,double,double,bool>*)
   {
      ::RooCFunction4Ref<double,double,double,double,bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4Ref<double,double,double,double,bool> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4Ref<double,double,double,double,bool>", ::RooCFunction4Ref<double,double,double,double,bool>::Class_Version(), "RooCFunction4Binding.h", 96,
                  typeid(::RooCFunction4Ref<double,double,double,double,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction4Ref<double,double,double,double,bool>) );
      instance.SetNew(&new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetNewArray(&newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDelete(&delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDestructor(&destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetStreamerFunc(&streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction4Ref<double,double,double,double,bool>","RooCFunction4Ref<double, double, double, double, bool>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4Ref<double,double,double,double,bool>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction4Ref<double,double,double,double,bool>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction4Ref<double,double,double,double,bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction4Ref<double,double,double,double,bool>*>(nullptr))->GetClass();
      RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary();
   static void RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p = nullptr);
   static void *newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4Ref<double,double,double,double,int>*)
   {
      ::RooCFunction4Ref<double,double,double,double,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4Ref<double,double,double,double,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4Ref<double,double,double,double,int>", ::RooCFunction4Ref<double,double,double,double,int>::Class_Version(), "RooCFunction4Binding.h", 96,
                  typeid(::RooCFunction4Ref<double,double,double,double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction4Ref<double,double,double,double,int>) );
      instance.SetNew(&new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetStreamerFunc(&streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction4Ref<double,double,double,double,int>","RooCFunction4Ref<double,double,double,double,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction4Ref<double,double,double,double,int>","RooCFunction4Ref<double, double, double, double, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4Ref<double,double,double,double,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction4Ref<double,double,double,double,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction4Ref<double,double,double,double,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction4Ref<double,double,double,double,int>*>(nullptr))->GetClass();
      RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4Ref<double,double,double,double,double>*)
   {
      ::RooCFunction4Ref<double,double,double,double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4Ref<double,double,double,double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4Ref<double,double,double,double,double>", ::RooCFunction4Ref<double,double,double,double,double>::Class_Version(), "RooCFunction4Binding.h", 96,
                  typeid(::RooCFunction4Ref<double,double,double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction4Ref<double,double,double,double,double>) );
      instance.SetNew(&new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction4Ref<double,double,double,double,double>","RooCFunction4Ref<double, double, double, double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4Ref<double,double,double,double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction4Ref<double,double,double,double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction4Ref<double,double,double,double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction4Ref<double,double,double,double,double>*>(nullptr))->GetClass();
      RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary();
   static void RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(TClass*);
   static void *new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p = nullptr);
   static void *newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(Long_t size, void *p);
   static void delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4Binding<double,double,double,double,bool>*)
   {
      ::RooCFunction4Binding<double,double,double,double,bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4Binding<double,double,double,double,bool> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4Binding<double,double,double,double,bool>", ::RooCFunction4Binding<double,double,double,double,bool>::Class_Version(), "RooCFunction4Binding.h", 225,
                  typeid(::RooCFunction4Binding<double,double,double,double,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction4Binding<double,double,double,double,bool>) );
      instance.SetNew(&new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetNewArray(&newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDelete(&delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDestructor(&destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction4Binding<double,double,double,double,bool>","RooCFunction4Binding<double, double, double, double, bool>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4Binding<double,double,double,double,bool>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction4Binding<double,double,double,double,bool>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction4Binding<double,double,double,double,bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction4Binding<double,double,double,double,bool>*>(nullptr))->GetClass();
      RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary();
   static void RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p = nullptr);
   static void *newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4Binding<double,double,double,double,int>*)
   {
      ::RooCFunction4Binding<double,double,double,double,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4Binding<double,double,double,double,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4Binding<double,double,double,double,int>", ::RooCFunction4Binding<double,double,double,double,int>::Class_Version(), "RooCFunction4Binding.h", 225,
                  typeid(::RooCFunction4Binding<double,double,double,double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction4Binding<double,double,double,double,int>) );
      instance.SetNew(&new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction4Binding<double,double,double,double,int>","RooCFunction4Binding<double,double,double,double,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction4Binding<double,double,double,double,int>","RooCFunction4Binding<double, double, double, double, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4Binding<double,double,double,double,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction4Binding<double,double,double,double,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction4Binding<double,double,double,double,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction4Binding<double,double,double,double,int>*>(nullptr))->GetClass();
      RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4Binding<double,double,double,double,double>*)
   {
      ::RooCFunction4Binding<double,double,double,double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4Binding<double,double,double,double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4Binding<double,double,double,double,double>", ::RooCFunction4Binding<double,double,double,double,double>::Class_Version(), "RooCFunction4Binding.h", 225,
                  typeid(::RooCFunction4Binding<double,double,double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction4Binding<double,double,double,double,double>) );
      instance.SetNew(&new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction4Binding<double,double,double,double,double>","RooCFunction4Binding<double, double, double, double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4Binding<double,double,double,double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction4Binding<double,double,double,double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction4Binding<double,double,double,double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction4Binding<double,double,double,double,double>*>(nullptr))->GetClass();
      RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary();
   static void RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(TClass*);
   static void *new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p = nullptr);
   static void *newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(Long_t size, void *p);
   static void delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)
   {
      ::RooCFunction4PdfBinding<double,double,double,double,bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4PdfBinding<double,double,double,double,bool> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4PdfBinding<double,double,double,double,bool>", ::RooCFunction4PdfBinding<double,double,double,double,bool>::Class_Version(), "RooCFunction4Binding.h", 297,
                  typeid(::RooCFunction4PdfBinding<double,double,double,double,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction4PdfBinding<double,double,double,double,bool>) );
      instance.SetNew(&new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetNewArray(&newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDelete(&delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDestructor(&destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction4PdfBinding<double,double,double,double,bool>","RooCFunction4PdfBinding<double, double, double, double, bool>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction4PdfBinding<double,double,double,double,bool>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction4PdfBinding<double,double,double,double,bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction4PdfBinding<double,double,double,double,bool>*>(nullptr))->GetClass();
      RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary();
   static void RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p = nullptr);
   static void *newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4PdfBinding<double,double,double,double,int>*)
   {
      ::RooCFunction4PdfBinding<double,double,double,double,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4PdfBinding<double,double,double,double,int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4PdfBinding<double,double,double,double,int>", ::RooCFunction4PdfBinding<double,double,double,double,int>::Class_Version(), "RooCFunction4Binding.h", 297,
                  typeid(::RooCFunction4PdfBinding<double,double,double,double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction4PdfBinding<double,double,double,double,int>) );
      instance.SetNew(&new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction4PdfBinding<double,double,double,double,int>","RooCFunction4PdfBinding<double,double,double,double,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction4PdfBinding<double,double,double,double,int>","RooCFunction4PdfBinding<double, double, double, double, int>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4PdfBinding<double,double,double,double,int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction4PdfBinding<double,double,double,double,int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction4PdfBinding<double,double,double,double,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction4PdfBinding<double,double,double,double,int>*>(nullptr))->GetClass();
      RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p = nullptr);
   static void *newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4PdfBinding<double,double,double,double,double>*)
   {
      ::RooCFunction4PdfBinding<double,double,double,double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4PdfBinding<double,double,double,double,double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4PdfBinding<double,double,double,double,double>", ::RooCFunction4PdfBinding<double,double,double,double,double>::Class_Version(), "RooCFunction4Binding.h", 297,
                  typeid(::RooCFunction4PdfBinding<double,double,double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction4PdfBinding<double,double,double,double,double>) );
      instance.SetNew(&new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCFunction4PdfBinding<double,double,double,double,double>","RooCFunction4PdfBinding<double, double, double, double, double>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4PdfBinding<double,double,double,double,double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCFunction4PdfBinding<double,double,double,double,double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCFunction4PdfBinding<double,double,double,double,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCFunction4PdfBinding<double,double,double,double,double>*>(nullptr))->GetClass();
      RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooChebychev(void *p = nullptr);
   static void *newArray_RooChebychev(Long_t size, void *p);
   static void delete_RooChebychev(void *p);
   static void deleteArray_RooChebychev(void *p);
   static void destruct_RooChebychev(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooChebychev*)
   {
      ::RooChebychev *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooChebychev >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooChebychev", ::RooChebychev::Class_Version(), "RooChebychev.h", 25,
                  typeid(::RooChebychev), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooChebychev::Dictionary, isa_proxy, 4,
                  sizeof(::RooChebychev) );
      instance.SetNew(&new_RooChebychev);
      instance.SetNewArray(&newArray_RooChebychev);
      instance.SetDelete(&delete_RooChebychev);
      instance.SetDeleteArray(&deleteArray_RooChebychev);
      instance.SetDestructor(&destruct_RooChebychev);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooChebychev*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooChebychev*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooChebychev*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooChi2MCSModule(void *p = nullptr);
   static void *newArray_RooChi2MCSModule(Long_t size, void *p);
   static void delete_RooChi2MCSModule(void *p);
   static void deleteArray_RooChi2MCSModule(void *p);
   static void destruct_RooChi2MCSModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooChi2MCSModule*)
   {
      ::RooChi2MCSModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooChi2MCSModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooChi2MCSModule", ::RooChi2MCSModule::Class_Version(), "RooChi2MCSModule.h", 24,
                  typeid(::RooChi2MCSModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooChi2MCSModule::Dictionary, isa_proxy, 4,
                  sizeof(::RooChi2MCSModule) );
      instance.SetNew(&new_RooChi2MCSModule);
      instance.SetNewArray(&newArray_RooChi2MCSModule);
      instance.SetDelete(&delete_RooChi2MCSModule);
      instance.SetDeleteArray(&deleteArray_RooChi2MCSModule);
      instance.SetDestructor(&destruct_RooChi2MCSModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooChi2MCSModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooChi2MCSModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooChi2MCSModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooChiSquarePdf(void *p = nullptr);
   static void *newArray_RooChiSquarePdf(Long_t size, void *p);
   static void delete_RooChiSquarePdf(void *p);
   static void deleteArray_RooChiSquarePdf(void *p);
   static void destruct_RooChiSquarePdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooChiSquarePdf*)
   {
      ::RooChiSquarePdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooChiSquarePdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooChiSquarePdf", ::RooChiSquarePdf::Class_Version(), "RooChiSquarePdf.h", 22,
                  typeid(::RooChiSquarePdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooChiSquarePdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooChiSquarePdf) );
      instance.SetNew(&new_RooChiSquarePdf);
      instance.SetNewArray(&newArray_RooChiSquarePdf);
      instance.SetDelete(&delete_RooChiSquarePdf);
      instance.SetDeleteArray(&deleteArray_RooChiSquarePdf);
      instance.SetDestructor(&destruct_RooChiSquarePdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooChiSquarePdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooChiSquarePdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooChiSquarePdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooDecay(void *p = nullptr);
   static void *newArray_RooDecay(Long_t size, void *p);
   static void delete_RooDecay(void *p);
   static void deleteArray_RooDecay(void *p);
   static void destruct_RooDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDecay*)
   {
      ::RooDecay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooDecay >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooDecay", ::RooDecay::Class_Version(), "RooDecay.h", 22,
                  typeid(::RooDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooDecay::Dictionary, isa_proxy, 4,
                  sizeof(::RooDecay) );
      instance.SetNew(&new_RooDecay);
      instance.SetNewArray(&newArray_RooDecay);
      instance.SetDelete(&delete_RooDecay);
      instance.SetDeleteArray(&deleteArray_RooDecay);
      instance.SetDestructor(&destruct_RooDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDecay*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooDecay*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooDecay*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooDstD0BG(void *p = nullptr);
   static void *newArray_RooDstD0BG(Long_t size, void *p);
   static void delete_RooDstD0BG(void *p);
   static void deleteArray_RooDstD0BG(void *p);
   static void destruct_RooDstD0BG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDstD0BG*)
   {
      ::RooDstD0BG *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooDstD0BG >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooDstD0BG", ::RooDstD0BG::Class_Version(), "RooDstD0BG.h", 26,
                  typeid(::RooDstD0BG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooDstD0BG::Dictionary, isa_proxy, 4,
                  sizeof(::RooDstD0BG) );
      instance.SetNew(&new_RooDstD0BG);
      instance.SetNewArray(&newArray_RooDstD0BG);
      instance.SetDelete(&delete_RooDstD0BG);
      instance.SetDeleteArray(&deleteArray_RooDstD0BG);
      instance.SetDestructor(&destruct_RooDstD0BG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDstD0BG*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooDstD0BG*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooDstD0BG*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooExponential(void *p = nullptr);
   static void *newArray_RooExponential(Long_t size, void *p);
   static void delete_RooExponential(void *p);
   static void deleteArray_RooExponential(void *p);
   static void destruct_RooExponential(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooExponential*)
   {
      ::RooExponential *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooExponential >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooExponential", ::RooExponential::Class_Version(), "RooExponential.h", 22,
                  typeid(::RooExponential), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooExponential::Dictionary, isa_proxy, 4,
                  sizeof(::RooExponential) );
      instance.SetNew(&new_RooExponential);
      instance.SetNewArray(&newArray_RooExponential);
      instance.SetDelete(&delete_RooExponential);
      instance.SetDeleteArray(&deleteArray_RooExponential);
      instance.SetDestructor(&destruct_RooExponential);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooExponential*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooExponential*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooExponential*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooLegacyExpPoly(void *p = nullptr);
   static void *newArray_RooLegacyExpPoly(Long_t size, void *p);
   static void delete_RooLegacyExpPoly(void *p);
   static void deleteArray_RooLegacyExpPoly(void *p);
   static void destruct_RooLegacyExpPoly(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLegacyExpPoly*)
   {
      ::RooLegacyExpPoly *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooLegacyExpPoly >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooLegacyExpPoly", ::RooLegacyExpPoly::Class_Version(), "RooLegacyExpPoly.h", 18,
                  typeid(::RooLegacyExpPoly), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooLegacyExpPoly::Dictionary, isa_proxy, 4,
                  sizeof(::RooLegacyExpPoly) );
      instance.SetNew(&new_RooLegacyExpPoly);
      instance.SetNewArray(&newArray_RooLegacyExpPoly);
      instance.SetDelete(&delete_RooLegacyExpPoly);
      instance.SetDeleteArray(&deleteArray_RooLegacyExpPoly);
      instance.SetDestructor(&destruct_RooLegacyExpPoly);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLegacyExpPoly*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooLegacyExpPoly*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooLegacyExpPoly*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooPowerSum(void *p = nullptr);
   static void *newArray_RooPowerSum(Long_t size, void *p);
   static void delete_RooPowerSum(void *p);
   static void deleteArray_RooPowerSum(void *p);
   static void destruct_RooPowerSum(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooPowerSum*)
   {
      ::RooPowerSum *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooPowerSum >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooPowerSum", ::RooPowerSum::Class_Version(), "RooPowerSum.h", 20,
                  typeid(::RooPowerSum), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooPowerSum::Dictionary, isa_proxy, 4,
                  sizeof(::RooPowerSum) );
      instance.SetNew(&new_RooPowerSum);
      instance.SetNewArray(&newArray_RooPowerSum);
      instance.SetDelete(&delete_RooPowerSum);
      instance.SetDeleteArray(&deleteArray_RooPowerSum);
      instance.SetDestructor(&destruct_RooPowerSum);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooPowerSum*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooPowerSum*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooPowerSum*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooFunctor1DBinding(void *p = nullptr);
   static void *newArray_RooFunctor1DBinding(Long_t size, void *p);
   static void delete_RooFunctor1DBinding(void *p);
   static void deleteArray_RooFunctor1DBinding(void *p);
   static void destruct_RooFunctor1DBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFunctor1DBinding*)
   {
      ::RooFunctor1DBinding *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFunctor1DBinding >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFunctor1DBinding", ::RooFunctor1DBinding::Class_Version(), "RooFunctor1DBinding.h", 32,
                  typeid(::RooFunctor1DBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFunctor1DBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooFunctor1DBinding) );
      instance.SetNew(&new_RooFunctor1DBinding);
      instance.SetNewArray(&newArray_RooFunctor1DBinding);
      instance.SetDelete(&delete_RooFunctor1DBinding);
      instance.SetDeleteArray(&deleteArray_RooFunctor1DBinding);
      instance.SetDestructor(&destruct_RooFunctor1DBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFunctor1DBinding*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFunctor1DBinding*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFunctor1DBinding*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooFunctor1DPdfBinding(void *p = nullptr);
   static void *newArray_RooFunctor1DPdfBinding(Long_t size, void *p);
   static void delete_RooFunctor1DPdfBinding(void *p);
   static void deleteArray_RooFunctor1DPdfBinding(void *p);
   static void destruct_RooFunctor1DPdfBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFunctor1DPdfBinding*)
   {
      ::RooFunctor1DPdfBinding *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFunctor1DPdfBinding >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFunctor1DPdfBinding", ::RooFunctor1DPdfBinding::Class_Version(), "RooFunctor1DBinding.h", 55,
                  typeid(::RooFunctor1DPdfBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFunctor1DPdfBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooFunctor1DPdfBinding) );
      instance.SetNew(&new_RooFunctor1DPdfBinding);
      instance.SetNewArray(&newArray_RooFunctor1DPdfBinding);
      instance.SetDelete(&delete_RooFunctor1DPdfBinding);
      instance.SetDeleteArray(&deleteArray_RooFunctor1DPdfBinding);
      instance.SetDestructor(&destruct_RooFunctor1DPdfBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFunctor1DPdfBinding*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFunctor1DPdfBinding*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFunctor1DPdfBinding*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooFunctorBinding(void *p = nullptr);
   static void *newArray_RooFunctorBinding(Long_t size, void *p);
   static void delete_RooFunctorBinding(void *p);
   static void deleteArray_RooFunctorBinding(void *p);
   static void destruct_RooFunctorBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFunctorBinding*)
   {
      ::RooFunctorBinding *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFunctorBinding >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFunctorBinding", ::RooFunctorBinding::Class_Version(), "RooFunctorBinding.h", 30,
                  typeid(::RooFunctorBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFunctorBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooFunctorBinding) );
      instance.SetNew(&new_RooFunctorBinding);
      instance.SetNewArray(&newArray_RooFunctorBinding);
      instance.SetDelete(&delete_RooFunctorBinding);
      instance.SetDeleteArray(&deleteArray_RooFunctorBinding);
      instance.SetDestructor(&destruct_RooFunctorBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFunctorBinding*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFunctorBinding*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFunctorBinding*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooFunctorPdfBinding(void *p = nullptr);
   static void *newArray_RooFunctorPdfBinding(Long_t size, void *p);
   static void delete_RooFunctorPdfBinding(void *p);
   static void deleteArray_RooFunctorPdfBinding(void *p);
   static void destruct_RooFunctorPdfBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFunctorPdfBinding*)
   {
      ::RooFunctorPdfBinding *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFunctorPdfBinding >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFunctorPdfBinding", ::RooFunctorPdfBinding::Class_Version(), "RooFunctorBinding.h", 55,
                  typeid(::RooFunctorPdfBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFunctorPdfBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooFunctorPdfBinding) );
      instance.SetNew(&new_RooFunctorPdfBinding);
      instance.SetNewArray(&newArray_RooFunctorPdfBinding);
      instance.SetDelete(&delete_RooFunctorPdfBinding);
      instance.SetDeleteArray(&deleteArray_RooFunctorPdfBinding);
      instance.SetDestructor(&destruct_RooFunctorPdfBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFunctorPdfBinding*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFunctorPdfBinding*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFunctorPdfBinding*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGamma(void *p = nullptr);
   static void *newArray_RooGamma(Long_t size, void *p);
   static void delete_RooGamma(void *p);
   static void deleteArray_RooGamma(void *p);
   static void destruct_RooGamma(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGamma*)
   {
      ::RooGamma *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGamma >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooGamma", ::RooGamma::Class_Version(), "RooGamma.h", 20,
                  typeid(::RooGamma), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGamma::Dictionary, isa_proxy, 4,
                  sizeof(::RooGamma) );
      instance.SetNew(&new_RooGamma);
      instance.SetNewArray(&newArray_RooGamma);
      instance.SetDelete(&delete_RooGamma);
      instance.SetDeleteArray(&deleteArray_RooGamma);
      instance.SetDestructor(&destruct_RooGamma);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGamma*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooGamma*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooGamma*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGaussExpTails(void *p = nullptr);
   static void *newArray_RooGaussExpTails(Long_t size, void *p);
   static void delete_RooGaussExpTails(void *p);
   static void deleteArray_RooGaussExpTails(void *p);
   static void destruct_RooGaussExpTails(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGaussExpTails*)
   {
      ::RooGaussExpTails *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGaussExpTails >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooGaussExpTails", ::RooGaussExpTails::Class_Version(), "RooGaussExpTails.h", 9,
                  typeid(::RooGaussExpTails), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGaussExpTails::Dictionary, isa_proxy, 4,
                  sizeof(::RooGaussExpTails) );
      instance.SetNew(&new_RooGaussExpTails);
      instance.SetNewArray(&newArray_RooGaussExpTails);
      instance.SetDelete(&delete_RooGaussExpTails);
      instance.SetDeleteArray(&deleteArray_RooGaussExpTails);
      instance.SetDestructor(&destruct_RooGaussExpTails);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGaussExpTails*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooGaussExpTails*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooGaussExpTails*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGaussian(void *p = nullptr);
   static void *newArray_RooGaussian(Long_t size, void *p);
   static void delete_RooGaussian(void *p);
   static void deleteArray_RooGaussian(void *p);
   static void destruct_RooGaussian(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGaussian*)
   {
      ::RooGaussian *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGaussian >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooGaussian", ::RooGaussian::Class_Version(), "RooGaussian.h", 24,
                  typeid(::RooGaussian), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGaussian::Dictionary, isa_proxy, 4,
                  sizeof(::RooGaussian) );
      instance.SetNew(&new_RooGaussian);
      instance.SetNewArray(&newArray_RooGaussian);
      instance.SetDelete(&delete_RooGaussian);
      instance.SetDeleteArray(&deleteArray_RooGaussian);
      instance.SetDestructor(&destruct_RooGaussian);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGaussian*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooGaussian*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooGaussian*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGaussModel(void *p = nullptr);
   static void *newArray_RooGaussModel(Long_t size, void *p);
   static void delete_RooGaussModel(void *p);
   static void deleteArray_RooGaussModel(void *p);
   static void destruct_RooGaussModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGaussModel*)
   {
      ::RooGaussModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGaussModel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooGaussModel", ::RooGaussModel::Class_Version(), "RooGaussModel.h", 25,
                  typeid(::RooGaussModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGaussModel::Dictionary, isa_proxy, 4,
                  sizeof(::RooGaussModel) );
      instance.SetNew(&new_RooGaussModel);
      instance.SetNewArray(&newArray_RooGaussModel);
      instance.SetDelete(&delete_RooGaussModel);
      instance.SetDeleteArray(&deleteArray_RooGaussModel);
      instance.SetDestructor(&destruct_RooGaussModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGaussModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooGaussModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooGaussModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGExpModel(void *p = nullptr);
   static void *newArray_RooGExpModel(Long_t size, void *p);
   static void delete_RooGExpModel(void *p);
   static void deleteArray_RooGExpModel(void *p);
   static void destruct_RooGExpModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGExpModel*)
   {
      ::RooGExpModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGExpModel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooGExpModel", ::RooGExpModel::Class_Version(), "RooGExpModel.h", 25,
                  typeid(::RooGExpModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGExpModel::Dictionary, isa_proxy, 4,
                  sizeof(::RooGExpModel) );
      instance.SetNew(&new_RooGExpModel);
      instance.SetNewArray(&newArray_RooGExpModel);
      instance.SetDelete(&delete_RooGExpModel);
      instance.SetDeleteArray(&deleteArray_RooGExpModel);
      instance.SetDestructor(&destruct_RooGExpModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGExpModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooGExpModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooGExpModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooHistConstraint(void *p = nullptr);
   static void *newArray_RooHistConstraint(Long_t size, void *p);
   static void delete_RooHistConstraint(void *p);
   static void deleteArray_RooHistConstraint(void *p);
   static void destruct_RooHistConstraint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooHistConstraint*)
   {
      ::RooHistConstraint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooHistConstraint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooHistConstraint", ::RooHistConstraint::Class_Version(), "RooHistConstraint.h", 17,
                  typeid(::RooHistConstraint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooHistConstraint::Dictionary, isa_proxy, 4,
                  sizeof(::RooHistConstraint) );
      instance.SetNew(&new_RooHistConstraint);
      instance.SetNewArray(&newArray_RooHistConstraint);
      instance.SetDelete(&delete_RooHistConstraint);
      instance.SetDeleteArray(&deleteArray_RooHistConstraint);
      instance.SetDestructor(&destruct_RooHistConstraint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooHistConstraint*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooHistConstraint*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooHistConstraint*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooIntegralMorph(void *p = nullptr);
   static void *newArray_RooIntegralMorph(Long_t size, void *p);
   static void delete_RooIntegralMorph(void *p);
   static void deleteArray_RooIntegralMorph(void *p);
   static void destruct_RooIntegralMorph(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooIntegralMorph*)
   {
      ::RooIntegralMorph *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooIntegralMorph >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooIntegralMorph", ::RooIntegralMorph::Class_Version(), "RooIntegralMorph.h", 26,
                  typeid(::RooIntegralMorph), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooIntegralMorph::Dictionary, isa_proxy, 4,
                  sizeof(::RooIntegralMorph) );
      instance.SetNew(&new_RooIntegralMorph);
      instance.SetNewArray(&newArray_RooIntegralMorph);
      instance.SetDelete(&delete_RooIntegralMorph);
      instance.SetDeleteArray(&deleteArray_RooIntegralMorph);
      instance.SetDestructor(&destruct_RooIntegralMorph);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooIntegralMorph*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooIntegralMorph*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooIntegralMorph*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooIntegralMorphcLcLMorphCacheElem_Dictionary();
   static void RooIntegralMorphcLcLMorphCacheElem_TClassManip(TClass*);
   static void delete_RooIntegralMorphcLcLMorphCacheElem(void *p);
   static void deleteArray_RooIntegralMorphcLcLMorphCacheElem(void *p);
   static void destruct_RooIntegralMorphcLcLMorphCacheElem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooIntegralMorph::MorphCacheElem*)
   {
      ::RooIntegralMorph::MorphCacheElem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooIntegralMorph::MorphCacheElem));
      static ::ROOT::TGenericClassInfo 
         instance("RooIntegralMorph::MorphCacheElem", "RooIntegralMorph.h", 52,
                  typeid(::RooIntegralMorph::MorphCacheElem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooIntegralMorphcLcLMorphCacheElem_Dictionary, isa_proxy, 4,
                  sizeof(::RooIntegralMorph::MorphCacheElem) );
      instance.SetDelete(&delete_RooIntegralMorphcLcLMorphCacheElem);
      instance.SetDeleteArray(&deleteArray_RooIntegralMorphcLcLMorphCacheElem);
      instance.SetDestructor(&destruct_RooIntegralMorphcLcLMorphCacheElem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooIntegralMorph::MorphCacheElem*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooIntegralMorph::MorphCacheElem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooIntegralMorph::MorphCacheElem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooIntegralMorphcLcLMorphCacheElem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooIntegralMorph::MorphCacheElem*>(nullptr))->GetClass();
      RooIntegralMorphcLcLMorphCacheElem_TClassManip(theClass);
   return theClass;
   }

   static void RooIntegralMorphcLcLMorphCacheElem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooJeffreysPrior(void *p = nullptr);
   static void *newArray_RooJeffreysPrior(Long_t size, void *p);
   static void delete_RooJeffreysPrior(void *p);
   static void deleteArray_RooJeffreysPrior(void *p);
   static void destruct_RooJeffreysPrior(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooJeffreysPrior*)
   {
      ::RooJeffreysPrior *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooJeffreysPrior >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooJeffreysPrior", ::RooJeffreysPrior::Class_Version(), "RooJeffreysPrior.h", 17,
                  typeid(::RooJeffreysPrior), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooJeffreysPrior::Dictionary, isa_proxy, 4,
                  sizeof(::RooJeffreysPrior) );
      instance.SetNew(&new_RooJeffreysPrior);
      instance.SetNewArray(&newArray_RooJeffreysPrior);
      instance.SetDelete(&delete_RooJeffreysPrior);
      instance.SetDeleteArray(&deleteArray_RooJeffreysPrior);
      instance.SetDestructor(&destruct_RooJeffreysPrior);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooJeffreysPrior*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooJeffreysPrior*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooJeffreysPrior*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooKeysPdf(void *p = nullptr);
   static void *newArray_RooKeysPdf(Long_t size, void *p);
   static void delete_RooKeysPdf(void *p);
   static void deleteArray_RooKeysPdf(void *p);
   static void destruct_RooKeysPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooKeysPdf*)
   {
      ::RooKeysPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooKeysPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooKeysPdf", ::RooKeysPdf::Class_Version(), "RooKeysPdf.h", 24,
                  typeid(::RooKeysPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooKeysPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooKeysPdf) );
      instance.SetNew(&new_RooKeysPdf);
      instance.SetNewArray(&newArray_RooKeysPdf);
      instance.SetDelete(&delete_RooKeysPdf);
      instance.SetDeleteArray(&deleteArray_RooKeysPdf);
      instance.SetDestructor(&destruct_RooKeysPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooKeysPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooKeysPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooKeysPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooLagrangianMorphFunc(void *p = nullptr);
   static void *newArray_RooLagrangianMorphFunc(Long_t size, void *p);
   static void delete_RooLagrangianMorphFunc(void *p);
   static void deleteArray_RooLagrangianMorphFunc(void *p);
   static void destruct_RooLagrangianMorphFunc(void *p);

   // Schema evolution read functions
   static void read_RooLagrangianMorphFunc_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__nonInterfering = oldObj->GetId("_nonInterfering");
#endif
      struct RooLagrangianMorphFunc_Onfile {
         std::vector<RooListProxy *> &_nonInterfering;
         RooLagrangianMorphFunc_Onfile(std::vector<RooListProxy *> &onfile__nonInterfering ): _nonInterfering(onfile__nonInterfering) {}
      };
      static Long_t offset_Onfile_RooLagrangianMorphFunc__nonInterfering = oldObj->GetClass()->GetDataMemberOffset("_nonInterfering");
      char *onfile_add = (char*)oldObj->GetObject();
      RooLagrangianMorphFunc_Onfile onfile(
         *(std::vector<RooListProxy *>*)(onfile_add+offset_Onfile_RooLagrangianMorphFunc__nonInterfering) );

      static TClassRef cls("RooLagrangianMorphFunc");
      static Long_t offset__nonInterfering = cls->GetDataMemberOffset("_nonInterfering");
      vector<vector<string> >& _nonInterfering = *(vector<vector<string> >*)(target+offset__nonInterfering);
      RooLagrangianMorphFunc* newObj = (RooLagrangianMorphFunc*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      for(RooListProxy const * list : onfile._nonInterfering) {  \
             _nonInterfering.emplace_back();                         \
             for(RooAbsArg * arg : *list) {                          \
                _nonInterfering.back().emplace_back(arg->GetName()); \
             }                                                       \
          } 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLagrangianMorphFunc*)
   {
      ::RooLagrangianMorphFunc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooLagrangianMorphFunc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooLagrangianMorphFunc", ::RooLagrangianMorphFunc::Class_Version(), "RooLagrangianMorphFunc.h", 77,
                  typeid(::RooLagrangianMorphFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooLagrangianMorphFunc::Dictionary, isa_proxy, 4,
                  sizeof(::RooLagrangianMorphFunc) );
      instance.SetNew(&new_RooLagrangianMorphFunc);
      instance.SetNewArray(&newArray_RooLagrangianMorphFunc);
      instance.SetDelete(&delete_RooLagrangianMorphFunc);
      instance.SetDeleteArray(&deleteArray_RooLagrangianMorphFunc);
      instance.SetDestructor(&destruct_RooLagrangianMorphFunc);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooLagrangianMorphFunc";
      rule->fTarget      = "_nonInterfering";
      rule->fSource      = "vector<RooCollectionProxy<RooArgList>*> _nonInterfering; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooLagrangianMorphFunc_0);
      rule->fCode        = " for(RooListProxy const * list : onfile._nonInterfering) {  \\n             _nonInterfering.emplace_back();                         \\n             for(RooAbsArg * arg : *list) {                          \\n                _nonInterfering.back().emplace_back(arg->GetName()); \\n             }                                                       \\n          } ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLagrangianMorphFunc*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooLagrangianMorphFunc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooLagrangianMorphFunc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooLagrangianMorphFunccLcLConfig_Dictionary();
   static void RooLagrangianMorphFunccLcLConfig_TClassManip(TClass*);
   static void *new_RooLagrangianMorphFunccLcLConfig(void *p = nullptr);
   static void *newArray_RooLagrangianMorphFunccLcLConfig(Long_t size, void *p);
   static void delete_RooLagrangianMorphFunccLcLConfig(void *p);
   static void deleteArray_RooLagrangianMorphFunccLcLConfig(void *p);
   static void destruct_RooLagrangianMorphFunccLcLConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLagrangianMorphFunc::Config*)
   {
      ::RooLagrangianMorphFunc::Config *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooLagrangianMorphFunc::Config));
      static ::ROOT::TGenericClassInfo 
         instance("RooLagrangianMorphFunc::Config", "RooLagrangianMorphFunc.h", 85,
                  typeid(::RooLagrangianMorphFunc::Config), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooLagrangianMorphFunccLcLConfig_Dictionary, isa_proxy, 4,
                  sizeof(::RooLagrangianMorphFunc::Config) );
      instance.SetNew(&new_RooLagrangianMorphFunccLcLConfig);
      instance.SetNewArray(&newArray_RooLagrangianMorphFunccLcLConfig);
      instance.SetDelete(&delete_RooLagrangianMorphFunccLcLConfig);
      instance.SetDeleteArray(&deleteArray_RooLagrangianMorphFunccLcLConfig);
      instance.SetDestructor(&destruct_RooLagrangianMorphFunccLcLConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLagrangianMorphFunc::Config*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooLagrangianMorphFunc::Config*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooLagrangianMorphFunc::Config*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooLagrangianMorphFunccLcLConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooLagrangianMorphFunc::Config*>(nullptr))->GetClass();
      RooLagrangianMorphFunccLcLConfig_TClassManip(theClass);
   return theClass;
   }

   static void RooLagrangianMorphFunccLcLConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooLandau(void *p = nullptr);
   static void *newArray_RooLandau(Long_t size, void *p);
   static void delete_RooLandau(void *p);
   static void deleteArray_RooLandau(void *p);
   static void destruct_RooLandau(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLandau*)
   {
      ::RooLandau *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooLandau >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooLandau", ::RooLandau::Class_Version(), "RooLandau.h", 24,
                  typeid(::RooLandau), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooLandau::Dictionary, isa_proxy, 4,
                  sizeof(::RooLandau) );
      instance.SetNew(&new_RooLandau);
      instance.SetNewArray(&newArray_RooLandau);
      instance.SetDelete(&delete_RooLandau);
      instance.SetDeleteArray(&deleteArray_RooLandau);
      instance.SetDestructor(&destruct_RooLandau);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLandau*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooLandau*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooLandau*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooLognormal(void *p = nullptr);
   static void *newArray_RooLognormal(Long_t size, void *p);
   static void delete_RooLognormal(void *p);
   static void deleteArray_RooLognormal(void *p);
   static void destruct_RooLognormal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLognormal*)
   {
      ::RooLognormal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooLognormal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooLognormal", ::RooLognormal::Class_Version(), "RooLognormal.h", 17,
                  typeid(::RooLognormal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooLognormal::Dictionary, isa_proxy, 4,
                  sizeof(::RooLognormal) );
      instance.SetNew(&new_RooLognormal);
      instance.SetNewArray(&newArray_RooLognormal);
      instance.SetDelete(&delete_RooLognormal);
      instance.SetDeleteArray(&deleteArray_RooLognormal);
      instance.SetDestructor(&destruct_RooLognormal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLognormal*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooLognormal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooLognormal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMomentMorphFunc(void *p = nullptr);
   static void *newArray_RooMomentMorphFunc(Long_t size, void *p);
   static void delete_RooMomentMorphFunc(void *p);
   static void deleteArray_RooMomentMorphFunc(void *p);
   static void destruct_RooMomentMorphFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMomentMorphFunc*)
   {
      ::RooMomentMorphFunc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMomentMorphFunc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMomentMorphFunc", ::RooMomentMorphFunc::Class_Version(), "RooMomentMorphFunc.h", 30,
                  typeid(::RooMomentMorphFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMomentMorphFunc::Dictionary, isa_proxy, 4,
                  sizeof(::RooMomentMorphFunc) );
      instance.SetNew(&new_RooMomentMorphFunc);
      instance.SetNewArray(&newArray_RooMomentMorphFunc);
      instance.SetDelete(&delete_RooMomentMorphFunc);
      instance.SetDeleteArray(&deleteArray_RooMomentMorphFunc);
      instance.SetDestructor(&destruct_RooMomentMorphFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMomentMorphFunc*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMomentMorphFunc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMomentMorphFunc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMomentMorphFuncND(void *p = nullptr);
   static void *newArray_RooMomentMorphFuncND(Long_t size, void *p);
   static void delete_RooMomentMorphFuncND(void *p);
   static void deleteArray_RooMomentMorphFuncND(void *p);
   static void destruct_RooMomentMorphFuncND(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMomentMorphFuncND*)
   {
      ::RooMomentMorphFuncND *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMomentMorphFuncND >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMomentMorphFuncND", ::RooMomentMorphFuncND::Class_Version(), "RooMomentMorphFuncND.h", 33,
                  typeid(::RooMomentMorphFuncND), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMomentMorphFuncND::Dictionary, isa_proxy, 4,
                  sizeof(::RooMomentMorphFuncND) );
      instance.SetNew(&new_RooMomentMorphFuncND);
      instance.SetNewArray(&newArray_RooMomentMorphFuncND);
      instance.SetDelete(&delete_RooMomentMorphFuncND);
      instance.SetDeleteArray(&deleteArray_RooMomentMorphFuncND);
      instance.SetDestructor(&destruct_RooMomentMorphFuncND);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMomentMorphFuncND*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMomentMorphFuncND*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMomentMorphFuncND*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMomentMorphFuncNDcLcLGrid2(void *p = nullptr);
   static void *newArray_RooMomentMorphFuncNDcLcLGrid2(Long_t size, void *p);
   static void delete_RooMomentMorphFuncNDcLcLGrid2(void *p);
   static void deleteArray_RooMomentMorphFuncNDcLcLGrid2(void *p);
   static void destruct_RooMomentMorphFuncNDcLcLGrid2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMomentMorphFuncND::Grid2*)
   {
      ::RooMomentMorphFuncND::Grid2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMomentMorphFuncND::Grid2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMomentMorphFuncND::Grid2", ::RooMomentMorphFuncND::Grid2::Class_Version(), "RooMomentMorphFuncND.h", 38,
                  typeid(::RooMomentMorphFuncND::Grid2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMomentMorphFuncND::Grid2::Dictionary, isa_proxy, 4,
                  sizeof(::RooMomentMorphFuncND::Grid2) );
      instance.SetNew(&new_RooMomentMorphFuncNDcLcLGrid2);
      instance.SetNewArray(&newArray_RooMomentMorphFuncNDcLcLGrid2);
      instance.SetDelete(&delete_RooMomentMorphFuncNDcLcLGrid2);
      instance.SetDeleteArray(&deleteArray_RooMomentMorphFuncNDcLcLGrid2);
      instance.SetDestructor(&destruct_RooMomentMorphFuncNDcLcLGrid2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMomentMorphFuncND::Grid2*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMomentMorphFuncND::Grid2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMomentMorphFuncND::Grid2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMomentMorph(void *p = nullptr);
   static void *newArray_RooMomentMorph(Long_t size, void *p);
   static void delete_RooMomentMorph(void *p);
   static void deleteArray_RooMomentMorph(void *p);
   static void destruct_RooMomentMorph(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMomentMorph*)
   {
      ::RooMomentMorph *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMomentMorph >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMomentMorph", ::RooMomentMorph::Class_Version(), "RooMomentMorph.h", 28,
                  typeid(::RooMomentMorph), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMomentMorph::Dictionary, isa_proxy, 4,
                  sizeof(::RooMomentMorph) );
      instance.SetNew(&new_RooMomentMorph);
      instance.SetNewArray(&newArray_RooMomentMorph);
      instance.SetDelete(&delete_RooMomentMorph);
      instance.SetDeleteArray(&deleteArray_RooMomentMorph);
      instance.SetDestructor(&destruct_RooMomentMorph);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMomentMorph*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMomentMorph*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMomentMorph*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMultiBinomial(void *p = nullptr);
   static void *newArray_RooMultiBinomial(Long_t size, void *p);
   static void delete_RooMultiBinomial(void *p);
   static void deleteArray_RooMultiBinomial(void *p);
   static void destruct_RooMultiBinomial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMultiBinomial*)
   {
      ::RooMultiBinomial *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMultiBinomial >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMultiBinomial", ::RooMultiBinomial::Class_Version(), "RooMultiBinomial.h", 24,
                  typeid(::RooMultiBinomial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMultiBinomial::Dictionary, isa_proxy, 4,
                  sizeof(::RooMultiBinomial) );
      instance.SetNew(&new_RooMultiBinomial);
      instance.SetNewArray(&newArray_RooMultiBinomial);
      instance.SetDelete(&delete_RooMultiBinomial);
      instance.SetDeleteArray(&deleteArray_RooMultiBinomial);
      instance.SetDestructor(&destruct_RooMultiBinomial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMultiBinomial*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMultiBinomial*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMultiBinomial*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooNDKeysPdf(void *p = nullptr);
   static void *newArray_RooNDKeysPdf(Long_t size, void *p);
   static void delete_RooNDKeysPdf(void *p);
   static void deleteArray_RooNDKeysPdf(void *p);
   static void destruct_RooNDKeysPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNDKeysPdf*)
   {
      ::RooNDKeysPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNDKeysPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooNDKeysPdf", ::RooNDKeysPdf::Class_Version(), "RooNDKeysPdf.h", 44,
                  typeid(::RooNDKeysPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNDKeysPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooNDKeysPdf) );
      instance.SetNew(&new_RooNDKeysPdf);
      instance.SetNewArray(&newArray_RooNDKeysPdf);
      instance.SetDelete(&delete_RooNDKeysPdf);
      instance.SetDeleteArray(&deleteArray_RooNDKeysPdf);
      instance.SetDestructor(&destruct_RooNDKeysPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNDKeysPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooNDKeysPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooNDKeysPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooNDKeysPdfcLcLBoxInfo_Dictionary();
   static void RooNDKeysPdfcLcLBoxInfo_TClassManip(TClass*);
   static void *new_RooNDKeysPdfcLcLBoxInfo(void *p = nullptr);
   static void *newArray_RooNDKeysPdfcLcLBoxInfo(Long_t size, void *p);
   static void delete_RooNDKeysPdfcLcLBoxInfo(void *p);
   static void deleteArray_RooNDKeysPdfcLcLBoxInfo(void *p);
   static void destruct_RooNDKeysPdfcLcLBoxInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNDKeysPdf::BoxInfo*)
   {
      ::RooNDKeysPdf::BoxInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooNDKeysPdf::BoxInfo));
      static ::ROOT::TGenericClassInfo 
         instance("RooNDKeysPdf::BoxInfo", "RooNDKeysPdf.h", 91,
                  typeid(::RooNDKeysPdf::BoxInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooNDKeysPdfcLcLBoxInfo_Dictionary, isa_proxy, 4,
                  sizeof(::RooNDKeysPdf::BoxInfo) );
      instance.SetNew(&new_RooNDKeysPdfcLcLBoxInfo);
      instance.SetNewArray(&newArray_RooNDKeysPdfcLcLBoxInfo);
      instance.SetDelete(&delete_RooNDKeysPdfcLcLBoxInfo);
      instance.SetDeleteArray(&deleteArray_RooNDKeysPdfcLcLBoxInfo);
      instance.SetDestructor(&destruct_RooNDKeysPdfcLcLBoxInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNDKeysPdf::BoxInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooNDKeysPdf::BoxInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooNDKeysPdf::BoxInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooNDKeysPdfcLcLBoxInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooNDKeysPdf::BoxInfo*>(nullptr))->GetClass();
      RooNDKeysPdfcLcLBoxInfo_TClassManip(theClass);
   return theClass;
   }

   static void RooNDKeysPdfcLcLBoxInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooNonCPEigenDecay(void *p = nullptr);
   static void *newArray_RooNonCPEigenDecay(Long_t size, void *p);
   static void delete_RooNonCPEigenDecay(void *p);
   static void deleteArray_RooNonCPEigenDecay(void *p);
   static void destruct_RooNonCPEigenDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNonCPEigenDecay*)
   {
      ::RooNonCPEigenDecay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNonCPEigenDecay >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooNonCPEigenDecay", ::RooNonCPEigenDecay::Class_Version(), "RooNonCPEigenDecay.h", 33,
                  typeid(::RooNonCPEigenDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNonCPEigenDecay::Dictionary, isa_proxy, 4,
                  sizeof(::RooNonCPEigenDecay) );
      instance.SetNew(&new_RooNonCPEigenDecay);
      instance.SetNewArray(&newArray_RooNonCPEigenDecay);
      instance.SetDelete(&delete_RooNonCPEigenDecay);
      instance.SetDeleteArray(&deleteArray_RooNonCPEigenDecay);
      instance.SetDestructor(&destruct_RooNonCPEigenDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNonCPEigenDecay*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooNonCPEigenDecay*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooNonCPEigenDecay*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooNovosibirsk(void *p = nullptr);
   static void *newArray_RooNovosibirsk(Long_t size, void *p);
   static void delete_RooNovosibirsk(void *p);
   static void deleteArray_RooNovosibirsk(void *p);
   static void destruct_RooNovosibirsk(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNovosibirsk*)
   {
      ::RooNovosibirsk *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNovosibirsk >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooNovosibirsk", ::RooNovosibirsk::Class_Version(), "RooNovosibirsk.h", 25,
                  typeid(::RooNovosibirsk), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNovosibirsk::Dictionary, isa_proxy, 4,
                  sizeof(::RooNovosibirsk) );
      instance.SetNew(&new_RooNovosibirsk);
      instance.SetNewArray(&newArray_RooNovosibirsk);
      instance.SetDelete(&delete_RooNovosibirsk);
      instance.SetDeleteArray(&deleteArray_RooNovosibirsk);
      instance.SetDestructor(&destruct_RooNovosibirsk);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNovosibirsk*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooNovosibirsk*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooNovosibirsk*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooParametricStepFunction(void *p = nullptr);
   static void *newArray_RooParametricStepFunction(Long_t size, void *p);
   static void delete_RooParametricStepFunction(void *p);
   static void deleteArray_RooParametricStepFunction(void *p);
   static void destruct_RooParametricStepFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooParametricStepFunction*)
   {
      ::RooParametricStepFunction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooParametricStepFunction >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooParametricStepFunction", ::RooParametricStepFunction::Class_Version(), "RooParametricStepFunction.h", 26,
                  typeid(::RooParametricStepFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooParametricStepFunction::Dictionary, isa_proxy, 4,
                  sizeof(::RooParametricStepFunction) );
      instance.SetNew(&new_RooParametricStepFunction);
      instance.SetNewArray(&newArray_RooParametricStepFunction);
      instance.SetDelete(&delete_RooParametricStepFunction);
      instance.SetDeleteArray(&deleteArray_RooParametricStepFunction);
      instance.SetDestructor(&destruct_RooParametricStepFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooParametricStepFunction*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooParametricStepFunction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooParametricStepFunction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooParamHistFunc(void *p = nullptr);
   static void *newArray_RooParamHistFunc(Long_t size, void *p);
   static void delete_RooParamHistFunc(void *p);
   static void deleteArray_RooParamHistFunc(void *p);
   static void destruct_RooParamHistFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooParamHistFunc*)
   {
      ::RooParamHistFunc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooParamHistFunc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooParamHistFunc", ::RooParamHistFunc::Class_Version(), "RooParamHistFunc.h", 24,
                  typeid(::RooParamHistFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooParamHistFunc::Dictionary, isa_proxy, 4,
                  sizeof(::RooParamHistFunc) );
      instance.SetNew(&new_RooParamHistFunc);
      instance.SetNewArray(&newArray_RooParamHistFunc);
      instance.SetDelete(&delete_RooParamHistFunc);
      instance.SetDeleteArray(&deleteArray_RooParamHistFunc);
      instance.SetDestructor(&destruct_RooParamHistFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooParamHistFunc*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooParamHistFunc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooParamHistFunc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooPoisson(void *p = nullptr);
   static void *newArray_RooPoisson(Long_t size, void *p);
   static void delete_RooPoisson(void *p);
   static void deleteArray_RooPoisson(void *p);
   static void destruct_RooPoisson(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooPoisson*)
   {
      ::RooPoisson *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooPoisson >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooPoisson", ::RooPoisson::Class_Version(), "RooPoisson.h", 19,
                  typeid(::RooPoisson), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooPoisson::Dictionary, isa_proxy, 4,
                  sizeof(::RooPoisson) );
      instance.SetNew(&new_RooPoisson);
      instance.SetNewArray(&newArray_RooPoisson);
      instance.SetDelete(&delete_RooPoisson);
      instance.SetDeleteArray(&deleteArray_RooPoisson);
      instance.SetDestructor(&destruct_RooPoisson);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooPoisson*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooPoisson*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooPoisson*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooPolynomial(void *p = nullptr);
   static void *newArray_RooPolynomial(Long_t size, void *p);
   static void delete_RooPolynomial(void *p);
   static void deleteArray_RooPolynomial(void *p);
   static void destruct_RooPolynomial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooPolynomial*)
   {
      ::RooPolynomial *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooPolynomial >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooPolynomial", ::RooPolynomial::Class_Version(), "RooPolynomial.h", 25,
                  typeid(::RooPolynomial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooPolynomial::Dictionary, isa_proxy, 4,
                  sizeof(::RooPolynomial) );
      instance.SetNew(&new_RooPolynomial);
      instance.SetNewArray(&newArray_RooPolynomial);
      instance.SetDelete(&delete_RooPolynomial);
      instance.SetDeleteArray(&deleteArray_RooPolynomial);
      instance.SetDestructor(&destruct_RooPolynomial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooPolynomial*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooPolynomial*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooPolynomial*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR_Dictionary();
   static void RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR_TClassManip(TClass*);
   static void delete_RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR(void *p);
   static void deleteArray_RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR(void *p);
   static void destruct_RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFit::Detail::RooPyBind<RooAbsPdf>*)
   {
      ::RooFit::Detail::RooPyBind<RooAbsPdf> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFit::Detail::RooPyBind<RooAbsPdf> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFit::Detail::RooPyBind<RooAbsPdf>", ::RooFit::Detail::RooPyBind<RooAbsPdf>::Class_Version(), "RooPyBind.h", 32,
                  typeid(::RooFit::Detail::RooPyBind<RooAbsPdf>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooFit::Detail::RooPyBind<RooAbsPdf>) );
      instance.SetDelete(&delete_RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR);
      instance.SetDeleteArray(&deleteArray_RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR);
      instance.SetDestructor(&destruct_RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFit::Detail::RooPyBind<RooAbsPdf>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFit::Detail::RooPyBind<RooAbsPdf>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFit::Detail::RooPyBind<RooAbsPdf>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooFit::Detail::RooPyBind<RooAbsPdf>*>(nullptr))->GetClass();
      RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR_TClassManip(theClass);
   return theClass;
   }

   static void RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR_Dictionary();
   static void RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR_TClassManip(TClass*);
   static void delete_RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR(void *p);
   static void deleteArray_RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR(void *p);
   static void destruct_RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFit::Detail::RooPyBind<RooAbsReal>*)
   {
      ::RooFit::Detail::RooPyBind<RooAbsReal> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFit::Detail::RooPyBind<RooAbsReal> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFit::Detail::RooPyBind<RooAbsReal>", ::RooFit::Detail::RooPyBind<RooAbsReal>::Class_Version(), "RooPyBind.h", 32,
                  typeid(::RooFit::Detail::RooPyBind<RooAbsReal>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooFit::Detail::RooPyBind<RooAbsReal>) );
      instance.SetDelete(&delete_RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR);
      instance.SetDeleteArray(&deleteArray_RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR);
      instance.SetDestructor(&destruct_RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFit::Detail::RooPyBind<RooAbsReal>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFit::Detail::RooPyBind<RooAbsReal>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFit::Detail::RooPyBind<RooAbsReal>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooFit::Detail::RooPyBind<RooAbsReal>*>(nullptr))->GetClass();
      RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR_TClassManip(theClass);
   return theClass;
   }

   static void RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooSpline(void *p = nullptr);
   static void *newArray_RooSpline(Long_t size, void *p);
   static void delete_RooSpline(void *p);
   static void deleteArray_RooSpline(void *p);
   static void destruct_RooSpline(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooSpline*)
   {
      ::RooSpline *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooSpline >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooSpline", ::RooSpline::Class_Version(), "RooSpline.h", 27,
                  typeid(::RooSpline), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooSpline::Dictionary, isa_proxy, 4,
                  sizeof(::RooSpline) );
      instance.SetNew(&new_RooSpline);
      instance.SetNewArray(&newArray_RooSpline);
      instance.SetDelete(&delete_RooSpline);
      instance.SetDeleteArray(&deleteArray_RooSpline);
      instance.SetDestructor(&destruct_RooSpline);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooSpline*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooSpline*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooSpline*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStepFunction(void *p = nullptr);
   static void *newArray_RooStepFunction(Long_t size, void *p);
   static void delete_RooStepFunction(void *p);
   static void deleteArray_RooStepFunction(void *p);
   static void destruct_RooStepFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStepFunction*)
   {
      ::RooStepFunction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStepFunction >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStepFunction", ::RooStepFunction::Class_Version(), "RooStepFunction.h", 26,
                  typeid(::RooStepFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStepFunction::Dictionary, isa_proxy, 4,
                  sizeof(::RooStepFunction) );
      instance.SetNew(&new_RooStepFunction);
      instance.SetNewArray(&newArray_RooStepFunction);
      instance.SetDelete(&delete_RooStepFunction);
      instance.SetDeleteArray(&deleteArray_RooStepFunction);
      instance.SetDestructor(&destruct_RooStepFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStepFunction*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStepFunction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStepFunction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStudentT(void *p = nullptr);
   static void *newArray_RooStudentT(Long_t size, void *p);
   static void delete_RooStudentT(void *p);
   static void deleteArray_RooStudentT(void *p);
   static void destruct_RooStudentT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStudentT*)
   {
      ::RooStudentT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStudentT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStudentT", ::RooStudentT::Class_Version(), "RooStudentT.h", 7,
                  typeid(::RooStudentT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStudentT::Dictionary, isa_proxy, 4,
                  sizeof(::RooStudentT) );
      instance.SetNew(&new_RooStudentT);
      instance.SetNewArray(&newArray_RooStudentT);
      instance.SetDelete(&delete_RooStudentT);
      instance.SetDeleteArray(&deleteArray_RooStudentT);
      instance.SetDestructor(&destruct_RooStudentT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStudentT*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStudentT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStudentT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooTFnBinding(void *p = nullptr);
   static void *newArray_RooTFnBinding(Long_t size, void *p);
   static void delete_RooTFnBinding(void *p);
   static void deleteArray_RooTFnBinding(void *p);
   static void destruct_RooTFnBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTFnBinding*)
   {
      ::RooTFnBinding *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTFnBinding >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTFnBinding", ::RooTFnBinding::Class_Version(), "RooTFnBinding.h", 20,
                  typeid(::RooTFnBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooTFnBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooTFnBinding) );
      instance.SetNew(&new_RooTFnBinding);
      instance.SetNewArray(&newArray_RooTFnBinding);
      instance.SetDelete(&delete_RooTFnBinding);
      instance.SetDeleteArray(&deleteArray_RooTFnBinding);
      instance.SetDestructor(&destruct_RooTFnBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTFnBinding*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTFnBinding*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTFnBinding*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooTFnPdfBinding(void *p = nullptr);
   static void *newArray_RooTFnPdfBinding(Long_t size, void *p);
   static void delete_RooTFnPdfBinding(void *p);
   static void deleteArray_RooTFnPdfBinding(void *p);
   static void destruct_RooTFnPdfBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTFnPdfBinding*)
   {
      ::RooTFnPdfBinding *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTFnPdfBinding >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTFnPdfBinding", ::RooTFnPdfBinding::Class_Version(), "RooTFnPdfBinding.h", 20,
                  typeid(::RooTFnPdfBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooTFnPdfBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooTFnPdfBinding) );
      instance.SetNew(&new_RooTFnPdfBinding);
      instance.SetNewArray(&newArray_RooTFnPdfBinding);
      instance.SetDelete(&delete_RooTFnPdfBinding);
      instance.SetDeleteArray(&deleteArray_RooTFnPdfBinding);
      instance.SetDestructor(&destruct_RooTFnPdfBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTFnPdfBinding*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTFnPdfBinding*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTFnPdfBinding*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooUnblindCPAsymVar(void *p = nullptr);
   static void *newArray_RooUnblindCPAsymVar(Long_t size, void *p);
   static void delete_RooUnblindCPAsymVar(void *p);
   static void deleteArray_RooUnblindCPAsymVar(void *p);
   static void destruct_RooUnblindCPAsymVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooUnblindCPAsymVar*)
   {
      ::RooUnblindCPAsymVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooUnblindCPAsymVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooUnblindCPAsymVar", ::RooUnblindCPAsymVar::Class_Version(), "RooUnblindCPAsymVar.h", 27,
                  typeid(::RooUnblindCPAsymVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooUnblindCPAsymVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooUnblindCPAsymVar) );
      instance.SetNew(&new_RooUnblindCPAsymVar);
      instance.SetNewArray(&newArray_RooUnblindCPAsymVar);
      instance.SetDelete(&delete_RooUnblindCPAsymVar);
      instance.SetDeleteArray(&deleteArray_RooUnblindCPAsymVar);
      instance.SetDestructor(&destruct_RooUnblindCPAsymVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooUnblindCPAsymVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooUnblindCPAsymVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooUnblindCPAsymVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooUnblindOffset(void *p = nullptr);
   static void *newArray_RooUnblindOffset(Long_t size, void *p);
   static void delete_RooUnblindOffset(void *p);
   static void deleteArray_RooUnblindOffset(void *p);
   static void destruct_RooUnblindOffset(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooUnblindOffset*)
   {
      ::RooUnblindOffset *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooUnblindOffset >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooUnblindOffset", ::RooUnblindOffset::Class_Version(), "RooUnblindOffset.h", 23,
                  typeid(::RooUnblindOffset), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooUnblindOffset::Dictionary, isa_proxy, 4,
                  sizeof(::RooUnblindOffset) );
      instance.SetNew(&new_RooUnblindOffset);
      instance.SetNewArray(&newArray_RooUnblindOffset);
      instance.SetDelete(&delete_RooUnblindOffset);
      instance.SetDeleteArray(&deleteArray_RooUnblindOffset);
      instance.SetDestructor(&destruct_RooUnblindOffset);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooUnblindOffset*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooUnblindOffset*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooUnblindOffset*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooUnblindPrecision(void *p = nullptr);
   static void *newArray_RooUnblindPrecision(Long_t size, void *p);
   static void delete_RooUnblindPrecision(void *p);
   static void deleteArray_RooUnblindPrecision(void *p);
   static void destruct_RooUnblindPrecision(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooUnblindPrecision*)
   {
      ::RooUnblindPrecision *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooUnblindPrecision >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooUnblindPrecision", ::RooUnblindPrecision::Class_Version(), "RooUnblindPrecision.h", 26,
                  typeid(::RooUnblindPrecision), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooUnblindPrecision::Dictionary, isa_proxy, 4,
                  sizeof(::RooUnblindPrecision) );
      instance.SetNew(&new_RooUnblindPrecision);
      instance.SetNewArray(&newArray_RooUnblindPrecision);
      instance.SetDelete(&delete_RooUnblindPrecision);
      instance.SetDeleteArray(&deleteArray_RooUnblindPrecision);
      instance.SetDestructor(&destruct_RooUnblindPrecision);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooUnblindPrecision*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooUnblindPrecision*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooUnblindPrecision*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooUnblindUniform(void *p = nullptr);
   static void *newArray_RooUnblindUniform(Long_t size, void *p);
   static void delete_RooUnblindUniform(void *p);
   static void deleteArray_RooUnblindUniform(void *p);
   static void destruct_RooUnblindUniform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooUnblindUniform*)
   {
      ::RooUnblindUniform *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooUnblindUniform >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooUnblindUniform", ::RooUnblindUniform::Class_Version(), "RooUnblindUniform.h", 23,
                  typeid(::RooUnblindUniform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooUnblindUniform::Dictionary, isa_proxy, 4,
                  sizeof(::RooUnblindUniform) );
      instance.SetNew(&new_RooUnblindUniform);
      instance.SetNewArray(&newArray_RooUnblindUniform);
      instance.SetDelete(&delete_RooUnblindUniform);
      instance.SetDeleteArray(&deleteArray_RooUnblindUniform);
      instance.SetDestructor(&destruct_RooUnblindUniform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooUnblindUniform*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooUnblindUniform*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooUnblindUniform*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooUniform(void *p = nullptr);
   static void *newArray_RooUniform(Long_t size, void *p);
   static void delete_RooUniform(void *p);
   static void deleteArray_RooUniform(void *p);
   static void destruct_RooUniform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooUniform*)
   {
      ::RooUniform *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooUniform >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooUniform", ::RooUniform::Class_Version(), "RooUniform.h", 24,
                  typeid(::RooUniform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooUniform::Dictionary, isa_proxy, 4,
                  sizeof(::RooUniform) );
      instance.SetNew(&new_RooUniform);
      instance.SetNewArray(&newArray_RooUniform);
      instance.SetDelete(&delete_RooUniform);
      instance.SetDeleteArray(&deleteArray_RooUniform);
      instance.SetDestructor(&destruct_RooUniform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooUniform*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooUniform*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooUniform*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooVoigtian(void *p = nullptr);
   static void *newArray_RooVoigtian(Long_t size, void *p);
   static void delete_RooVoigtian(void *p);
   static void deleteArray_RooVoigtian(void *p);
   static void destruct_RooVoigtian(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooVoigtian*)
   {
      ::RooVoigtian *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooVoigtian >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooVoigtian", ::RooVoigtian::Class_Version(), "RooVoigtian.h", 22,
                  typeid(::RooVoigtian), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooVoigtian::Dictionary, isa_proxy, 4,
                  sizeof(::RooVoigtian) );
      instance.SetNew(&new_RooVoigtian);
      instance.SetNewArray(&newArray_RooVoigtian);
      instance.SetDelete(&delete_RooVoigtian);
      instance.SetDeleteArray(&deleteArray_RooVoigtian);
      instance.SetDestructor(&destruct_RooVoigtian);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooVoigtian*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooVoigtian*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooVoigtian*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooJohnson(void *p = nullptr);
   static void *newArray_RooJohnson(Long_t size, void *p);
   static void delete_RooJohnson(void *p);
   static void deleteArray_RooJohnson(void *p);
   static void destruct_RooJohnson(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooJohnson*)
   {
      ::RooJohnson *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooJohnson >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooJohnson", ::RooJohnson::Class_Version(), "RooJohnson.h", 24,
                  typeid(::RooJohnson), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooJohnson::Dictionary, isa_proxy, 4,
                  sizeof(::RooJohnson) );
      instance.SetNew(&new_RooJohnson);
      instance.SetNewArray(&newArray_RooJohnson);
      instance.SetDelete(&delete_RooJohnson);
      instance.SetDeleteArray(&deleteArray_RooJohnson);
      instance.SetDestructor(&destruct_RooJohnson);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooJohnson*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooJohnson*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooJohnson*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Roo2DKeysPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Roo2DKeysPdf::Class_Name()
{
   return "Roo2DKeysPdf";
}

//______________________________________________________________________________
const char *Roo2DKeysPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Roo2DKeysPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Roo2DKeysPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Roo2DKeysPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Roo2DKeysPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Roo2DKeysPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Roo2DKeysPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Roo2DKeysPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooArgusBG::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooArgusBG::Class_Name()
{
   return "RooArgusBG";
}

//______________________________________________________________________________
const char *RooArgusBG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooArgusBG*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooArgusBG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooArgusBG*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooArgusBG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooArgusBG*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooArgusBG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooArgusBG*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBCPEffDecay::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBCPEffDecay::Class_Name()
{
   return "RooBCPEffDecay";
}

//______________________________________________________________________________
const char *RooBCPEffDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBCPEffDecay*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBCPEffDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBCPEffDecay*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBCPEffDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBCPEffDecay*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBCPEffDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBCPEffDecay*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBCPGenDecay::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBCPGenDecay::Class_Name()
{
   return "RooBCPGenDecay";
}

//______________________________________________________________________________
const char *RooBCPGenDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBCPGenDecay*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBCPGenDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBCPGenDecay*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBCPGenDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBCPGenDecay*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBCPGenDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBCPGenDecay*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBDecay::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBDecay::Class_Name()
{
   return "RooBDecay";
}

//______________________________________________________________________________
const char *RooBDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBDecay*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBDecay*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBDecay*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBDecay*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBernstein::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBernstein::Class_Name()
{
   return "RooBernstein";
}

//______________________________________________________________________________
const char *RooBernstein::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBernstein*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBernstein::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBernstein*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBernstein::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBernstein*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBernstein::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBernstein*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBifurGauss::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBifurGauss::Class_Name()
{
   return "RooBifurGauss";
}

//______________________________________________________________________________
const char *RooBifurGauss::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBifurGauss*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBifurGauss::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBifurGauss*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBifurGauss::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBifurGauss*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBifurGauss::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBifurGauss*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBlindTools::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBlindTools::Class_Name()
{
   return "RooBlindTools";
}

//______________________________________________________________________________
const char *RooBlindTools::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBlindTools*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBlindTools::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBlindTools*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBlindTools::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBlindTools*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBlindTools::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBlindTools*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBMixDecay::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBMixDecay::Class_Name()
{
   return "RooBMixDecay";
}

//______________________________________________________________________________
const char *RooBMixDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBMixDecay*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBMixDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBMixDecay*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBMixDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBMixDecay*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBMixDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBMixDecay*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBreitWigner::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBreitWigner::Class_Name()
{
   return "RooBreitWigner";
}

//______________________________________________________________________________
const char *RooBreitWigner::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBreitWigner*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBreitWigner::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBreitWigner*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBreitWigner::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBreitWigner*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBreitWigner::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBreitWigner*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBukinPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBukinPdf::Class_Name()
{
   return "RooBukinPdf";
}

//______________________________________________________________________________
const char *RooBukinPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBukinPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBukinPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBukinPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBukinPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBukinPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBukinPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBukinPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCBShape::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCBShape::Class_Name()
{
   return "RooCBShape";
}

//______________________________________________________________________________
const char *RooCBShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCBShape*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooCBShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCBShape*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCBShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCBShape*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCBShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCBShape*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCrystalBall::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCrystalBall::Class_Name()
{
   return "RooCrystalBall";
}

//______________________________________________________________________________
const char *RooCrystalBall::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCrystalBall*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooCrystalBall::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCrystalBall*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCrystalBall::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCrystalBall*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCrystalBall::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCrystalBall*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction1Ref<double,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction1Ref<double,int>::Class_Name()
{
   return "RooCFunction1Ref<double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction1Ref<double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction1Ref<double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Ref<double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Ref<double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction1Ref<double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction1Ref<double,double>::Class_Name()
{
   return "RooCFunction1Ref<double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction1Ref<double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction1Ref<double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Ref<double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Ref<double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction1Binding<double,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction1Binding<double,int>::Class_Name()
{
   return "RooCFunction1Binding<double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction1Binding<double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction1Binding<double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Binding<double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Binding<double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction1Binding<double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction1Binding<double,double>::Class_Name()
{
   return "RooCFunction1Binding<double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction1Binding<double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction1Binding<double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Binding<double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Binding<double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction1PdfBinding<double,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction1PdfBinding<double,int>::Class_Name()
{
   return "RooCFunction1PdfBinding<double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction1PdfBinding<double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction1PdfBinding<double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction1PdfBinding<double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction1PdfBinding<double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction1PdfBinding<double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction1PdfBinding<double,double>::Class_Name()
{
   return "RooCFunction1PdfBinding<double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction1PdfBinding<double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction1PdfBinding<double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction1PdfBinding<double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction1PdfBinding<double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Ref<double,int,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,int,int>::Class_Name()
{
   return "RooCFunction2Ref<double,int,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,int,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Ref<double,int,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,int,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,int,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Ref<double,double,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,double,int>::Class_Name()
{
   return "RooCFunction2Ref<double,double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Ref<double,double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Ref<double,unsigned int,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,unsigned int,double>::Class_Name()
{
   return "RooCFunction2Ref<double,unsigned int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,unsigned int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,unsigned int,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Ref<double,unsigned int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,unsigned int,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,unsigned int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,unsigned int,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,unsigned int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,unsigned int,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Ref<double,int,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,int,double>::Class_Name()
{
   return "RooCFunction2Ref<double,int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Ref<double,int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Ref<double,double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,double,double>::Class_Name()
{
   return "RooCFunction2Ref<double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Ref<double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Binding<double,int,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,int,int>::Class_Name()
{
   return "RooCFunction2Binding<double,int,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,int,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Binding<double,int,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,int,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,int,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Binding<double,double,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,double,int>::Class_Name()
{
   return "RooCFunction2Binding<double,double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Binding<double,double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Binding<double,unsigned int,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,unsigned int,double>::Class_Name()
{
   return "RooCFunction2Binding<double,unsigned int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,unsigned int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,unsigned int,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Binding<double,unsigned int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,unsigned int,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,unsigned int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,unsigned int,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,unsigned int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,unsigned int,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Binding<double,int,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,int,double>::Class_Name()
{
   return "RooCFunction2Binding<double,int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Binding<double,int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Binding<double,double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,double,double>::Class_Name()
{
   return "RooCFunction2Binding<double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Binding<double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2PdfBinding<double,int,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,int,int>::Class_Name()
{
   return "RooCFunction2PdfBinding<double,int,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,int,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2PdfBinding<double,int,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,int,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,int,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2PdfBinding<double,double,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,double,int>::Class_Name()
{
   return "RooCFunction2PdfBinding<double,double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2PdfBinding<double,double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2PdfBinding<double,unsigned int,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,unsigned int,double>::Class_Name()
{
   return "RooCFunction2PdfBinding<double,unsigned int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,unsigned int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,unsigned int,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2PdfBinding<double,unsigned int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,unsigned int,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,unsigned int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,unsigned int,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,unsigned int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,unsigned int,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2PdfBinding<double,int,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,int,double>::Class_Name()
{
   return "RooCFunction2PdfBinding<double,int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2PdfBinding<double,int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2PdfBinding<double,double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,double,double>::Class_Name()
{
   return "RooCFunction2PdfBinding<double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2PdfBinding<double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Ref<double,unsigned int,unsigned int,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,unsigned int,unsigned int,double>::Class_Name()
{
   return "RooCFunction3Ref<double,unsigned int,unsigned int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,unsigned int,unsigned int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Ref<double,unsigned int,unsigned int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,unsigned int,unsigned int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,unsigned int,unsigned int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Ref<double,unsigned int,double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,unsigned int,double,double>::Class_Name()
{
   return "RooCFunction3Ref<double,unsigned int,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,unsigned int,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Ref<double,unsigned int,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,unsigned int,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,unsigned int,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Ref<double,unsigned int,double,unsigned int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,unsigned int,double,unsigned int>::Class_Name()
{
   return "RooCFunction3Ref<double,unsigned int,double,unsigned int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,unsigned int,double,unsigned int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Ref<double,unsigned int,double,unsigned int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,unsigned int,double,unsigned int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,unsigned int,double,unsigned int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Ref<double,double,int,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,double,int,int>::Class_Name()
{
   return "RooCFunction3Ref<double,double,int,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,double,int,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,int,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Ref<double,double,int,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,int,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,double,int,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,int,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,double,int,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,int,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Ref<double,double,double,bool>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,double,double,bool>::Class_Name()
{
   return "RooCFunction3Ref<double,double,double,bool>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,double,double,bool>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,bool>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Ref<double,double,double,bool>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,bool>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,double,double,bool>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,bool>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,double,double,bool>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,bool>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Ref<double,double,double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,double,double,double>::Class_Name()
{
   return "RooCFunction3Ref<double,double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Ref<double,double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Binding<double,unsigned int,unsigned int,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,unsigned int,unsigned int,double>::Class_Name()
{
   return "RooCFunction3Binding<double,unsigned int,unsigned int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,unsigned int,unsigned int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Binding<double,unsigned int,unsigned int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,unsigned int,unsigned int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,unsigned int,unsigned int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Binding<double,unsigned int,double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,unsigned int,double,double>::Class_Name()
{
   return "RooCFunction3Binding<double,unsigned int,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,unsigned int,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Binding<double,unsigned int,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,unsigned int,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,unsigned int,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Binding<double,unsigned int,double,unsigned int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,unsigned int,double,unsigned int>::Class_Name()
{
   return "RooCFunction3Binding<double,unsigned int,double,unsigned int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,unsigned int,double,unsigned int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Binding<double,unsigned int,double,unsigned int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,unsigned int,double,unsigned int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,unsigned int,double,unsigned int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Binding<double,double,int,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,double,int,int>::Class_Name()
{
   return "RooCFunction3Binding<double,double,int,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,double,int,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,int,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Binding<double,double,int,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,int,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,double,int,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,int,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,double,int,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,int,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Binding<double,double,double,bool>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,double,double,bool>::Class_Name()
{
   return "RooCFunction3Binding<double,double,double,bool>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,double,double,bool>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,bool>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Binding<double,double,double,bool>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,bool>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,double,double,bool>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,bool>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,double,double,bool>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,bool>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Binding<double,double,double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,double,double,double>::Class_Name()
{
   return "RooCFunction3Binding<double,double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Binding<double,double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Class_Name()
{
   return "RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3PdfBinding<double,unsigned int,double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,unsigned int,double,double>::Class_Name()
{
   return "RooCFunction3PdfBinding<double,unsigned int,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,unsigned int,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3PdfBinding<double,unsigned int,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,unsigned int,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,unsigned int,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Class_Name()
{
   return "RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3PdfBinding<double,double,int,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,double,int,int>::Class_Name()
{
   return "RooCFunction3PdfBinding<double,double,int,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,double,int,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,int,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3PdfBinding<double,double,int,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,int,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,double,int,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,int,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,double,int,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,int,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3PdfBinding<double,double,double,bool>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,double,double,bool>::Class_Name()
{
   return "RooCFunction3PdfBinding<double,double,double,bool>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,double,double,bool>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,bool>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3PdfBinding<double,double,double,bool>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,bool>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,double,double,bool>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,bool>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,double,double,bool>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,bool>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3PdfBinding<double,double,double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,double,double,double>::Class_Name()
{
   return "RooCFunction3PdfBinding<double,double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3PdfBinding<double,double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4Ref<double,double,double,double,bool>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4Ref<double,double,double,double,bool>::Class_Name()
{
   return "RooCFunction4Ref<double,double,double,double,bool>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4Ref<double,double,double,double,bool>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,bool>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4Ref<double,double,double,double,bool>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,bool>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Ref<double,double,double,double,bool>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,bool>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Ref<double,double,double,double,bool>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,bool>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4Ref<double,double,double,double,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4Ref<double,double,double,double,int>::Class_Name()
{
   return "RooCFunction4Ref<double,double,double,double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4Ref<double,double,double,double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4Ref<double,double,double,double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Ref<double,double,double,double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Ref<double,double,double,double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4Ref<double,double,double,double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4Ref<double,double,double,double,double>::Class_Name()
{
   return "RooCFunction4Ref<double,double,double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4Ref<double,double,double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4Ref<double,double,double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Ref<double,double,double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Ref<double,double,double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4Binding<double,double,double,double,bool>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4Binding<double,double,double,double,bool>::Class_Name()
{
   return "RooCFunction4Binding<double,double,double,double,bool>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4Binding<double,double,double,double,bool>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,bool>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4Binding<double,double,double,double,bool>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,bool>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Binding<double,double,double,double,bool>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,bool>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Binding<double,double,double,double,bool>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,bool>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4Binding<double,double,double,double,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4Binding<double,double,double,double,int>::Class_Name()
{
   return "RooCFunction4Binding<double,double,double,double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4Binding<double,double,double,double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4Binding<double,double,double,double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Binding<double,double,double,double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Binding<double,double,double,double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4Binding<double,double,double,double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4Binding<double,double,double,double,double>::Class_Name()
{
   return "RooCFunction4Binding<double,double,double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4Binding<double,double,double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4Binding<double,double,double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Binding<double,double,double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Binding<double,double,double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4PdfBinding<double,double,double,double,bool>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4PdfBinding<double,double,double,double,bool>::Class_Name()
{
   return "RooCFunction4PdfBinding<double,double,double,double,bool>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4PdfBinding<double,double,double,double,bool>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4PdfBinding<double,double,double,double,bool>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4PdfBinding<double,double,double,double,bool>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4PdfBinding<double,double,double,double,bool>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4PdfBinding<double,double,double,double,int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4PdfBinding<double,double,double,double,int>::Class_Name()
{
   return "RooCFunction4PdfBinding<double,double,double,double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4PdfBinding<double,double,double,double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4PdfBinding<double,double,double,double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4PdfBinding<double,double,double,double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4PdfBinding<double,double,double,double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4PdfBinding<double,double,double,double,double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4PdfBinding<double,double,double,double,double>::Class_Name()
{
   return "RooCFunction4PdfBinding<double,double,double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4PdfBinding<double,double,double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4PdfBinding<double,double,double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4PdfBinding<double,double,double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4PdfBinding<double,double,double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooChebychev::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooChebychev::Class_Name()
{
   return "RooChebychev";
}

//______________________________________________________________________________
const char *RooChebychev::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChebychev*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooChebychev::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChebychev*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooChebychev::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChebychev*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooChebychev::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChebychev*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooChi2MCSModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooChi2MCSModule::Class_Name()
{
   return "RooChi2MCSModule";
}

//______________________________________________________________________________
const char *RooChi2MCSModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChi2MCSModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooChi2MCSModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChi2MCSModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooChi2MCSModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChi2MCSModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooChi2MCSModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChi2MCSModule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooChiSquarePdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooChiSquarePdf::Class_Name()
{
   return "RooChiSquarePdf";
}

//______________________________________________________________________________
const char *RooChiSquarePdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChiSquarePdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooChiSquarePdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChiSquarePdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooChiSquarePdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChiSquarePdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooChiSquarePdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChiSquarePdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooDecay::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooDecay::Class_Name()
{
   return "RooDecay";
}

//______________________________________________________________________________
const char *RooDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDecay*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDecay*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDecay*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDecay*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooDstD0BG::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooDstD0BG::Class_Name()
{
   return "RooDstD0BG";
}

//______________________________________________________________________________
const char *RooDstD0BG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDstD0BG*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooDstD0BG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDstD0BG*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooDstD0BG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDstD0BG*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooDstD0BG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDstD0BG*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooExponential::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooExponential::Class_Name()
{
   return "RooExponential";
}

//______________________________________________________________________________
const char *RooExponential::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExponential*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooExponential::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExponential*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooExponential::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExponential*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooExponential::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExponential*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooLegacyExpPoly::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooLegacyExpPoly::Class_Name()
{
   return "RooLegacyExpPoly";
}

//______________________________________________________________________________
const char *RooLegacyExpPoly::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLegacyExpPoly*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooLegacyExpPoly::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLegacyExpPoly*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooLegacyExpPoly::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLegacyExpPoly*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooLegacyExpPoly::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLegacyExpPoly*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooPowerSum::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooPowerSum::Class_Name()
{
   return "RooPowerSum";
}

//______________________________________________________________________________
const char *RooPowerSum::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPowerSum*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooPowerSum::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPowerSum*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooPowerSum::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPowerSum*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooPowerSum::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPowerSum*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFunctor1DBinding::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFunctor1DBinding::Class_Name()
{
   return "RooFunctor1DBinding";
}

//______________________________________________________________________________
const char *RooFunctor1DBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DBinding*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooFunctor1DBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DBinding*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFunctor1DBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DBinding*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFunctor1DBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DBinding*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFunctor1DPdfBinding::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFunctor1DPdfBinding::Class_Name()
{
   return "RooFunctor1DPdfBinding";
}

//______________________________________________________________________________
const char *RooFunctor1DPdfBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DPdfBinding*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooFunctor1DPdfBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DPdfBinding*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFunctor1DPdfBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DPdfBinding*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFunctor1DPdfBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DPdfBinding*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFunctorBinding::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFunctorBinding::Class_Name()
{
   return "RooFunctorBinding";
}

//______________________________________________________________________________
const char *RooFunctorBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorBinding*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooFunctorBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorBinding*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFunctorBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorBinding*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFunctorBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorBinding*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFunctorPdfBinding::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFunctorPdfBinding::Class_Name()
{
   return "RooFunctorPdfBinding";
}

//______________________________________________________________________________
const char *RooFunctorPdfBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorPdfBinding*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooFunctorPdfBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorPdfBinding*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFunctorPdfBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorPdfBinding*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFunctorPdfBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorPdfBinding*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGamma::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGamma::Class_Name()
{
   return "RooGamma";
}

//______________________________________________________________________________
const char *RooGamma::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGamma*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooGamma::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGamma*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGamma::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGamma*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGamma::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGamma*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGaussExpTails::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGaussExpTails::Class_Name()
{
   return "RooGaussExpTails";
}

//______________________________________________________________________________
const char *RooGaussExpTails::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGaussExpTails*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooGaussExpTails::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGaussExpTails*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGaussExpTails::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGaussExpTails*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGaussExpTails::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGaussExpTails*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGaussian::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGaussian::Class_Name()
{
   return "RooGaussian";
}

//______________________________________________________________________________
const char *RooGaussian::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGaussian*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooGaussian::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGaussian*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGaussian::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGaussian*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGaussian::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGaussian*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGaussModel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGaussModel::Class_Name()
{
   return "RooGaussModel";
}

//______________________________________________________________________________
const char *RooGaussModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGaussModel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooGaussModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGaussModel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGaussModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGaussModel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGaussModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGaussModel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGExpModel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGExpModel::Class_Name()
{
   return "RooGExpModel";
}

//______________________________________________________________________________
const char *RooGExpModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGExpModel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooGExpModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGExpModel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGExpModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGExpModel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGExpModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGExpModel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooHistConstraint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooHistConstraint::Class_Name()
{
   return "RooHistConstraint";
}

//______________________________________________________________________________
const char *RooHistConstraint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooHistConstraint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooHistConstraint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooHistConstraint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooHistConstraint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooHistConstraint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooHistConstraint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooHistConstraint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooIntegralMorph::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooIntegralMorph::Class_Name()
{
   return "RooIntegralMorph";
}

//______________________________________________________________________________
const char *RooIntegralMorph::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooIntegralMorph*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooIntegralMorph::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooIntegralMorph*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooIntegralMorph::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooIntegralMorph*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooIntegralMorph::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooIntegralMorph*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooJeffreysPrior::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooJeffreysPrior::Class_Name()
{
   return "RooJeffreysPrior";
}

//______________________________________________________________________________
const char *RooJeffreysPrior::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooJeffreysPrior*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooJeffreysPrior::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooJeffreysPrior*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooJeffreysPrior::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooJeffreysPrior*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooJeffreysPrior::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooJeffreysPrior*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooKeysPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooKeysPdf::Class_Name()
{
   return "RooKeysPdf";
}

//______________________________________________________________________________
const char *RooKeysPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooKeysPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooKeysPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooKeysPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooKeysPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooKeysPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooKeysPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooKeysPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooLagrangianMorphFunc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooLagrangianMorphFunc::Class_Name()
{
   return "RooLagrangianMorphFunc";
}

//______________________________________________________________________________
const char *RooLagrangianMorphFunc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLagrangianMorphFunc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooLagrangianMorphFunc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLagrangianMorphFunc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooLagrangianMorphFunc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLagrangianMorphFunc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooLagrangianMorphFunc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLagrangianMorphFunc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooLandau::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooLandau::Class_Name()
{
   return "RooLandau";
}

//______________________________________________________________________________
const char *RooLandau::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLandau*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooLandau::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLandau*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooLandau::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLandau*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooLandau::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLandau*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooLognormal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooLognormal::Class_Name()
{
   return "RooLognormal";
}

//______________________________________________________________________________
const char *RooLognormal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLognormal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooLognormal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLognormal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooLognormal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLognormal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooLognormal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLognormal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMomentMorphFunc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMomentMorphFunc::Class_Name()
{
   return "RooMomentMorphFunc";
}

//______________________________________________________________________________
const char *RooMomentMorphFunc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorphFunc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMomentMorphFunc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorphFunc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMomentMorphFunc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorphFunc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMomentMorphFunc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorphFunc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMomentMorphFuncND::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMomentMorphFuncND::Class_Name()
{
   return "RooMomentMorphFuncND";
}

//______________________________________________________________________________
const char *RooMomentMorphFuncND::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorphFuncND*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMomentMorphFuncND::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorphFuncND*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMomentMorphFuncND::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorphFuncND*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMomentMorphFuncND::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorphFuncND*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMomentMorphFuncND::Grid2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMomentMorphFuncND::Grid2::Class_Name()
{
   return "RooMomentMorphFuncND::Grid2";
}

//______________________________________________________________________________
const char *RooMomentMorphFuncND::Grid2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorphFuncND::Grid2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMomentMorphFuncND::Grid2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorphFuncND::Grid2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMomentMorphFuncND::Grid2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorphFuncND::Grid2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMomentMorphFuncND::Grid2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorphFuncND::Grid2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMomentMorph::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMomentMorph::Class_Name()
{
   return "RooMomentMorph";
}

//______________________________________________________________________________
const char *RooMomentMorph::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorph*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMomentMorph::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorph*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMomentMorph::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorph*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMomentMorph::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorph*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMultiBinomial::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMultiBinomial::Class_Name()
{
   return "RooMultiBinomial";
}

//______________________________________________________________________________
const char *RooMultiBinomial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMultiBinomial*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMultiBinomial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMultiBinomial*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMultiBinomial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMultiBinomial*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMultiBinomial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMultiBinomial*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNDKeysPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNDKeysPdf::Class_Name()
{
   return "RooNDKeysPdf";
}

//______________________________________________________________________________
const char *RooNDKeysPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNDKeysPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooNDKeysPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNDKeysPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNDKeysPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNDKeysPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNDKeysPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNDKeysPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNonCPEigenDecay::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNonCPEigenDecay::Class_Name()
{
   return "RooNonCPEigenDecay";
}

//______________________________________________________________________________
const char *RooNonCPEigenDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNonCPEigenDecay*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooNonCPEigenDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNonCPEigenDecay*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNonCPEigenDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNonCPEigenDecay*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNonCPEigenDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNonCPEigenDecay*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNovosibirsk::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNovosibirsk::Class_Name()
{
   return "RooNovosibirsk";
}

//______________________________________________________________________________
const char *RooNovosibirsk::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNovosibirsk*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooNovosibirsk::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNovosibirsk*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNovosibirsk::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNovosibirsk*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNovosibirsk::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNovosibirsk*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooParametricStepFunction::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooParametricStepFunction::Class_Name()
{
   return "RooParametricStepFunction";
}

//______________________________________________________________________________
const char *RooParametricStepFunction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooParametricStepFunction*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooParametricStepFunction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooParametricStepFunction*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooParametricStepFunction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooParametricStepFunction*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooParametricStepFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooParametricStepFunction*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooParamHistFunc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooParamHistFunc::Class_Name()
{
   return "RooParamHistFunc";
}

//______________________________________________________________________________
const char *RooParamHistFunc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooParamHistFunc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooParamHistFunc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooParamHistFunc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooParamHistFunc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooParamHistFunc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooParamHistFunc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooParamHistFunc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooPoisson::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooPoisson::Class_Name()
{
   return "RooPoisson";
}

//______________________________________________________________________________
const char *RooPoisson::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPoisson*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooPoisson::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPoisson*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooPoisson::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPoisson*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooPoisson::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPoisson*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooPolynomial::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooPolynomial::Class_Name()
{
   return "RooPolynomial";
}

//______________________________________________________________________________
const char *RooPolynomial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPolynomial*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooPolynomial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPolynomial*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooPolynomial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPolynomial*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooPolynomial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPolynomial*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace RooFit {
   namespace Detail {
//______________________________________________________________________________
template <> atomic_TClass_ptr RooPyBind<RooAbsPdf>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooPyBind<RooAbsPdf>::Class_Name()
{
   return "RooFit::Detail::RooPyBind<RooAbsPdf>";
}

//______________________________________________________________________________
template <> const char *RooPyBind<RooAbsPdf>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooPyBind<RooAbsPdf>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooPyBind<RooAbsPdf>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooPyBind<RooAbsPdf>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooPyBind<RooAbsPdf>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooPyBind<RooAbsPdf>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooPyBind<RooAbsPdf>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooPyBind<RooAbsPdf>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooFit::Detail
} // namespace RooFit::Detail
namespace RooFit {
   namespace Detail {
//______________________________________________________________________________
template <> atomic_TClass_ptr RooPyBind<RooAbsReal>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooPyBind<RooAbsReal>::Class_Name()
{
   return "RooFit::Detail::RooPyBind<RooAbsReal>";
}

//______________________________________________________________________________
template <> const char *RooPyBind<RooAbsReal>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooPyBind<RooAbsReal>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooPyBind<RooAbsReal>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooPyBind<RooAbsReal>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooPyBind<RooAbsReal>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooPyBind<RooAbsReal>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooPyBind<RooAbsReal>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooPyBind<RooAbsReal>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooFit::Detail
} // namespace RooFit::Detail
//______________________________________________________________________________
atomic_TClass_ptr RooSpline::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooSpline::Class_Name()
{
   return "RooSpline";
}

//______________________________________________________________________________
const char *RooSpline::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSpline*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooSpline::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSpline*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooSpline::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSpline*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooSpline::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSpline*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooStepFunction::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooStepFunction::Class_Name()
{
   return "RooStepFunction";
}

//______________________________________________________________________________
const char *RooStepFunction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStepFunction*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooStepFunction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStepFunction*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooStepFunction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStepFunction*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooStepFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStepFunction*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooStudentT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooStudentT::Class_Name()
{
   return "RooStudentT";
}

//______________________________________________________________________________
const char *RooStudentT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStudentT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooStudentT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStudentT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooStudentT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStudentT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooStudentT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStudentT*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooTFnBinding::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooTFnBinding::Class_Name()
{
   return "RooTFnBinding";
}

//______________________________________________________________________________
const char *RooTFnBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTFnBinding*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooTFnBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTFnBinding*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooTFnBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTFnBinding*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooTFnBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTFnBinding*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooTFnPdfBinding::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooTFnPdfBinding::Class_Name()
{
   return "RooTFnPdfBinding";
}

//______________________________________________________________________________
const char *RooTFnPdfBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTFnPdfBinding*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooTFnPdfBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTFnPdfBinding*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooTFnPdfBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTFnPdfBinding*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooTFnPdfBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTFnPdfBinding*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooUnblindCPAsymVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooUnblindCPAsymVar::Class_Name()
{
   return "RooUnblindCPAsymVar";
}

//______________________________________________________________________________
const char *RooUnblindCPAsymVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindCPAsymVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooUnblindCPAsymVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindCPAsymVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooUnblindCPAsymVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindCPAsymVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooUnblindCPAsymVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindCPAsymVar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooUnblindOffset::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooUnblindOffset::Class_Name()
{
   return "RooUnblindOffset";
}

//______________________________________________________________________________
const char *RooUnblindOffset::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindOffset*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooUnblindOffset::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindOffset*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooUnblindOffset::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindOffset*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooUnblindOffset::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindOffset*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooUnblindPrecision::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooUnblindPrecision::Class_Name()
{
   return "RooUnblindPrecision";
}

//______________________________________________________________________________
const char *RooUnblindPrecision::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindPrecision*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooUnblindPrecision::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindPrecision*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooUnblindPrecision::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindPrecision*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooUnblindPrecision::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindPrecision*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooUnblindUniform::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooUnblindUniform::Class_Name()
{
   return "RooUnblindUniform";
}

//______________________________________________________________________________
const char *RooUnblindUniform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindUniform*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooUnblindUniform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindUniform*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooUnblindUniform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindUniform*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooUnblindUniform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindUniform*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooUniform::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooUniform::Class_Name()
{
   return "RooUniform";
}

//______________________________________________________________________________
const char *RooUniform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUniform*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooUniform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUniform*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooUniform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUniform*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooUniform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUniform*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooVoigtian::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooVoigtian::Class_Name()
{
   return "RooVoigtian";
}

//______________________________________________________________________________
const char *RooVoigtian::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooVoigtian*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooVoigtian::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooVoigtian*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooVoigtian::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooVoigtian*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooVoigtian::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooVoigtian*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooJohnson::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooJohnson::Class_Name()
{
   return "RooJohnson";
}

//______________________________________________________________________________
const char *RooJohnson::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooJohnson*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooJohnson::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooJohnson*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooJohnson::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooJohnson*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooJohnson::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooJohnson*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Roo2DKeysPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class Roo2DKeysPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Roo2DKeysPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(Roo2DKeysPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Roo2DKeysPdf(void *p) {
      delete (static_cast<::Roo2DKeysPdf*>(p));
   }
   static void deleteArray_Roo2DKeysPdf(void *p) {
      delete [] (static_cast<::Roo2DKeysPdf*>(p));
   }
   static void destruct_Roo2DKeysPdf(void *p) {
      typedef ::Roo2DKeysPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Roo2DKeysPdf

//______________________________________________________________________________
void RooArgusBG::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooArgusBG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooArgusBG::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooArgusBG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooArgusBG(void *p) {
      return  p ? new(p) ::RooArgusBG : new ::RooArgusBG;
   }
   static void *newArray_RooArgusBG(Long_t nElements, void *p) {
      return p ? new(p) ::RooArgusBG[nElements] : new ::RooArgusBG[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooArgusBG(void *p) {
      delete (static_cast<::RooArgusBG*>(p));
   }
   static void deleteArray_RooArgusBG(void *p) {
      delete [] (static_cast<::RooArgusBG*>(p));
   }
   static void destruct_RooArgusBG(void *p) {
      typedef ::RooArgusBG current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooArgusBG

//______________________________________________________________________________
void RooBCPEffDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBCPEffDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBCPEffDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBCPEffDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBCPEffDecay(void *p) {
      return  p ? new(p) ::RooBCPEffDecay : new ::RooBCPEffDecay;
   }
   static void *newArray_RooBCPEffDecay(Long_t nElements, void *p) {
      return p ? new(p) ::RooBCPEffDecay[nElements] : new ::RooBCPEffDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBCPEffDecay(void *p) {
      delete (static_cast<::RooBCPEffDecay*>(p));
   }
   static void deleteArray_RooBCPEffDecay(void *p) {
      delete [] (static_cast<::RooBCPEffDecay*>(p));
   }
   static void destruct_RooBCPEffDecay(void *p) {
      typedef ::RooBCPEffDecay current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBCPEffDecay

//______________________________________________________________________________
void RooBCPGenDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBCPGenDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBCPGenDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBCPGenDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBCPGenDecay(void *p) {
      return  p ? new(p) ::RooBCPGenDecay : new ::RooBCPGenDecay;
   }
   static void *newArray_RooBCPGenDecay(Long_t nElements, void *p) {
      return p ? new(p) ::RooBCPGenDecay[nElements] : new ::RooBCPGenDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBCPGenDecay(void *p) {
      delete (static_cast<::RooBCPGenDecay*>(p));
   }
   static void deleteArray_RooBCPGenDecay(void *p) {
      delete [] (static_cast<::RooBCPGenDecay*>(p));
   }
   static void destruct_RooBCPGenDecay(void *p) {
      typedef ::RooBCPGenDecay current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBCPGenDecay

//______________________________________________________________________________
void RooBDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBDecay(void *p) {
      return  p ? new(p) ::RooBDecay : new ::RooBDecay;
   }
   static void *newArray_RooBDecay(Long_t nElements, void *p) {
      return p ? new(p) ::RooBDecay[nElements] : new ::RooBDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBDecay(void *p) {
      delete (static_cast<::RooBDecay*>(p));
   }
   static void deleteArray_RooBDecay(void *p) {
      delete [] (static_cast<::RooBDecay*>(p));
   }
   static void destruct_RooBDecay(void *p) {
      typedef ::RooBDecay current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBDecay

//______________________________________________________________________________
void RooBernstein::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBernstein.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBernstein::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBernstein::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBernstein(void *p) {
      return  p ? new(p) ::RooBernstein : new ::RooBernstein;
   }
   static void *newArray_RooBernstein(Long_t nElements, void *p) {
      return p ? new(p) ::RooBernstein[nElements] : new ::RooBernstein[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBernstein(void *p) {
      delete (static_cast<::RooBernstein*>(p));
   }
   static void deleteArray_RooBernstein(void *p) {
      delete [] (static_cast<::RooBernstein*>(p));
   }
   static void destruct_RooBernstein(void *p) {
      typedef ::RooBernstein current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBernstein

//______________________________________________________________________________
void RooBifurGauss::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBifurGauss.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBifurGauss::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBifurGauss::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBifurGauss(void *p) {
      return  p ? new(p) ::RooBifurGauss : new ::RooBifurGauss;
   }
   static void *newArray_RooBifurGauss(Long_t nElements, void *p) {
      return p ? new(p) ::RooBifurGauss[nElements] : new ::RooBifurGauss[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBifurGauss(void *p) {
      delete (static_cast<::RooBifurGauss*>(p));
   }
   static void deleteArray_RooBifurGauss(void *p) {
      delete [] (static_cast<::RooBifurGauss*>(p));
   }
   static void destruct_RooBifurGauss(void *p) {
      typedef ::RooBifurGauss current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBifurGauss

//______________________________________________________________________________
void RooBlindTools::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBlindTools.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBlindTools::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBlindTools::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBlindTools(void *p) {
      return  p ? new(p) ::RooBlindTools : new ::RooBlindTools;
   }
   static void *newArray_RooBlindTools(Long_t nElements, void *p) {
      return p ? new(p) ::RooBlindTools[nElements] : new ::RooBlindTools[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBlindTools(void *p) {
      delete (static_cast<::RooBlindTools*>(p));
   }
   static void deleteArray_RooBlindTools(void *p) {
      delete [] (static_cast<::RooBlindTools*>(p));
   }
   static void destruct_RooBlindTools(void *p) {
      typedef ::RooBlindTools current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBlindTools

//______________________________________________________________________________
void RooBMixDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBMixDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBMixDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBMixDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBMixDecay(void *p) {
      return  p ? new(p) ::RooBMixDecay : new ::RooBMixDecay;
   }
   static void *newArray_RooBMixDecay(Long_t nElements, void *p) {
      return p ? new(p) ::RooBMixDecay[nElements] : new ::RooBMixDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBMixDecay(void *p) {
      delete (static_cast<::RooBMixDecay*>(p));
   }
   static void deleteArray_RooBMixDecay(void *p) {
      delete [] (static_cast<::RooBMixDecay*>(p));
   }
   static void destruct_RooBMixDecay(void *p) {
      typedef ::RooBMixDecay current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBMixDecay

//______________________________________________________________________________
void RooBreitWigner::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBreitWigner.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBreitWigner::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBreitWigner::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBreitWigner(void *p) {
      return  p ? new(p) ::RooBreitWigner : new ::RooBreitWigner;
   }
   static void *newArray_RooBreitWigner(Long_t nElements, void *p) {
      return p ? new(p) ::RooBreitWigner[nElements] : new ::RooBreitWigner[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBreitWigner(void *p) {
      delete (static_cast<::RooBreitWigner*>(p));
   }
   static void deleteArray_RooBreitWigner(void *p) {
      delete [] (static_cast<::RooBreitWigner*>(p));
   }
   static void destruct_RooBreitWigner(void *p) {
      typedef ::RooBreitWigner current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBreitWigner

//______________________________________________________________________________
void RooBukinPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBukinPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBukinPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBukinPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBukinPdf(void *p) {
      return  p ? new(p) ::RooBukinPdf : new ::RooBukinPdf;
   }
   static void *newArray_RooBukinPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooBukinPdf[nElements] : new ::RooBukinPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBukinPdf(void *p) {
      delete (static_cast<::RooBukinPdf*>(p));
   }
   static void deleteArray_RooBukinPdf(void *p) {
      delete [] (static_cast<::RooBukinPdf*>(p));
   }
   static void destruct_RooBukinPdf(void *p) {
      typedef ::RooBukinPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBukinPdf

//______________________________________________________________________________
void RooCBShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCBShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCBShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCBShape::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCBShape(void *p) {
      return  p ? new(p) ::RooCBShape : new ::RooCBShape;
   }
   static void *newArray_RooCBShape(Long_t nElements, void *p) {
      return p ? new(p) ::RooCBShape[nElements] : new ::RooCBShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCBShape(void *p) {
      delete (static_cast<::RooCBShape*>(p));
   }
   static void deleteArray_RooCBShape(void *p) {
      delete [] (static_cast<::RooCBShape*>(p));
   }
   static void destruct_RooCBShape(void *p) {
      typedef ::RooCBShape current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCBShape

//______________________________________________________________________________
void RooCrystalBall::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCrystalBall.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCrystalBall::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCrystalBall::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCrystalBall(void *p) {
      return  p ? new(p) ::RooCrystalBall : new ::RooCrystalBall;
   }
   static void *newArray_RooCrystalBall(Long_t nElements, void *p) {
      return p ? new(p) ::RooCrystalBall[nElements] : new ::RooCrystalBall[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCrystalBall(void *p) {
      delete (static_cast<::RooCrystalBall*>(p));
   }
   static void deleteArray_RooCrystalBall(void *p) {
      delete [] (static_cast<::RooCrystalBall*>(p));
   }
   static void destruct_RooCrystalBall(void *p) {
      typedef ::RooCrystalBall current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCrystalBall

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction1ReflEdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction1Ref<double,int> : new ::RooCFunction1Ref<double,int>;
   }
   static void *newArray_RooCFunction1ReflEdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction1Ref<double,int>[nElements] : new ::RooCFunction1Ref<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction1ReflEdoublecOintgR(void *p) {
      delete (static_cast<::RooCFunction1Ref<double,int>*>(p));
   }
   static void deleteArray_RooCFunction1ReflEdoublecOintgR(void *p) {
      delete [] (static_cast<::RooCFunction1Ref<double,int>*>(p));
   }
   static void destruct_RooCFunction1ReflEdoublecOintgR(void *p) {
      typedef ::RooCFunction1Ref<double,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction1ReflEdoublecOintgR(TBuffer &buf, void *obj) {
      ((::RooCFunction1Ref<double,int>*)obj)->::RooCFunction1Ref<double,int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction1Ref<double,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction1ReflEdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction1Ref<double,double> : new ::RooCFunction1Ref<double,double>;
   }
   static void *newArray_RooCFunction1ReflEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction1Ref<double,double>[nElements] : new ::RooCFunction1Ref<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction1ReflEdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction1Ref<double,double>*>(p));
   }
   static void deleteArray_RooCFunction1ReflEdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction1Ref<double,double>*>(p));
   }
   static void destruct_RooCFunction1ReflEdoublecOdoublegR(void *p) {
      typedef ::RooCFunction1Ref<double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction1ReflEdoublecOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction1Ref<double,double>*)obj)->::RooCFunction1Ref<double,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction1Ref<double,double>

//______________________________________________________________________________
template <> void RooCFunction1Binding<double,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction1Binding<double,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction1Binding<double,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction1Binding<double,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction1BindinglEdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction1Binding<double,int> : new ::RooCFunction1Binding<double,int>;
   }
   static void *newArray_RooCFunction1BindinglEdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction1Binding<double,int>[nElements] : new ::RooCFunction1Binding<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction1BindinglEdoublecOintgR(void *p) {
      delete (static_cast<::RooCFunction1Binding<double,int>*>(p));
   }
   static void deleteArray_RooCFunction1BindinglEdoublecOintgR(void *p) {
      delete [] (static_cast<::RooCFunction1Binding<double,int>*>(p));
   }
   static void destruct_RooCFunction1BindinglEdoublecOintgR(void *p) {
      typedef ::RooCFunction1Binding<double,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction1Binding<double,int>

//______________________________________________________________________________
template <> void RooCFunction1Binding<double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction1Binding<double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction1Binding<double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction1Binding<double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction1BindinglEdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction1Binding<double,double> : new ::RooCFunction1Binding<double,double>;
   }
   static void *newArray_RooCFunction1BindinglEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction1Binding<double,double>[nElements] : new ::RooCFunction1Binding<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction1BindinglEdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction1Binding<double,double>*>(p));
   }
   static void deleteArray_RooCFunction1BindinglEdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction1Binding<double,double>*>(p));
   }
   static void destruct_RooCFunction1BindinglEdoublecOdoublegR(void *p) {
      typedef ::RooCFunction1Binding<double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction1Binding<double,double>

//______________________________________________________________________________
template <> void RooCFunction1PdfBinding<double,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction1PdfBinding<double,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction1PdfBinding<double,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction1PdfBinding<double,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction1PdfBindinglEdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction1PdfBinding<double,int> : new ::RooCFunction1PdfBinding<double,int>;
   }
   static void *newArray_RooCFunction1PdfBindinglEdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction1PdfBinding<double,int>[nElements] : new ::RooCFunction1PdfBinding<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction1PdfBindinglEdoublecOintgR(void *p) {
      delete (static_cast<::RooCFunction1PdfBinding<double,int>*>(p));
   }
   static void deleteArray_RooCFunction1PdfBindinglEdoublecOintgR(void *p) {
      delete [] (static_cast<::RooCFunction1PdfBinding<double,int>*>(p));
   }
   static void destruct_RooCFunction1PdfBindinglEdoublecOintgR(void *p) {
      typedef ::RooCFunction1PdfBinding<double,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction1PdfBinding<double,int>

//______________________________________________________________________________
template <> void RooCFunction1PdfBinding<double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction1PdfBinding<double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction1PdfBinding<double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction1PdfBinding<double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction1PdfBinding<double,double> : new ::RooCFunction1PdfBinding<double,double>;
   }
   static void *newArray_RooCFunction1PdfBindinglEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction1PdfBinding<double,double>[nElements] : new ::RooCFunction1PdfBinding<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction1PdfBinding<double,double>*>(p));
   }
   static void deleteArray_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction1PdfBinding<double,double>*>(p));
   }
   static void destruct_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p) {
      typedef ::RooCFunction1PdfBinding<double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction1PdfBinding<double,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2ReflEdoublecOintcOintgR(void *p) {
      return  p ? new(p) ::RooCFunction2Ref<double,int,int> : new ::RooCFunction2Ref<double,int,int>;
   }
   static void *newArray_RooCFunction2ReflEdoublecOintcOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Ref<double,int,int>[nElements] : new ::RooCFunction2Ref<double,int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2ReflEdoublecOintcOintgR(void *p) {
      delete (static_cast<::RooCFunction2Ref<double,int,int>*>(p));
   }
   static void deleteArray_RooCFunction2ReflEdoublecOintcOintgR(void *p) {
      delete [] (static_cast<::RooCFunction2Ref<double,int,int>*>(p));
   }
   static void destruct_RooCFunction2ReflEdoublecOintcOintgR(void *p) {
      typedef ::RooCFunction2Ref<double,int,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction2ReflEdoublecOintcOintgR(TBuffer &buf, void *obj) {
      ((::RooCFunction2Ref<double,int,int>*)obj)->::RooCFunction2Ref<double,int,int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction2Ref<double,int,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2ReflEdoublecOdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction2Ref<double,double,int> : new ::RooCFunction2Ref<double,double,int>;
   }
   static void *newArray_RooCFunction2ReflEdoublecOdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Ref<double,double,int>[nElements] : new ::RooCFunction2Ref<double,double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2ReflEdoublecOdoublecOintgR(void *p) {
      delete (static_cast<::RooCFunction2Ref<double,double,int>*>(p));
   }
   static void deleteArray_RooCFunction2ReflEdoublecOdoublecOintgR(void *p) {
      delete [] (static_cast<::RooCFunction2Ref<double,double,int>*>(p));
   }
   static void destruct_RooCFunction2ReflEdoublecOdoublecOintgR(void *p) {
      typedef ::RooCFunction2Ref<double,double,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction2ReflEdoublecOdoublecOintgR(TBuffer &buf, void *obj) {
      ((::RooCFunction2Ref<double,double,int>*)obj)->::RooCFunction2Ref<double,double,int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction2Ref<double,double,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2Ref<double,unsigned int,double> : new ::RooCFunction2Ref<double,unsigned int,double>;
   }
   static void *newArray_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Ref<double,unsigned int,double>[nElements] : new ::RooCFunction2Ref<double,unsigned int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p) {
      delete (static_cast<::RooCFunction2Ref<double,unsigned int,double>*>(p));
   }
   static void deleteArray_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction2Ref<double,unsigned int,double>*>(p));
   }
   static void destruct_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p) {
      typedef ::RooCFunction2Ref<double,unsigned int,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction2Ref<double,unsigned int,double>*)obj)->::RooCFunction2Ref<double,unsigned int,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction2Ref<double,unsigned int,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2ReflEdoublecOintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2Ref<double,int,double> : new ::RooCFunction2Ref<double,int,double>;
   }
   static void *newArray_RooCFunction2ReflEdoublecOintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Ref<double,int,double>[nElements] : new ::RooCFunction2Ref<double,int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2ReflEdoublecOintcOdoublegR(void *p) {
      delete (static_cast<::RooCFunction2Ref<double,int,double>*>(p));
   }
   static void deleteArray_RooCFunction2ReflEdoublecOintcOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction2Ref<double,int,double>*>(p));
   }
   static void destruct_RooCFunction2ReflEdoublecOintcOdoublegR(void *p) {
      typedef ::RooCFunction2Ref<double,int,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction2ReflEdoublecOintcOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction2Ref<double,int,double>*)obj)->::RooCFunction2Ref<double,int,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction2Ref<double,int,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2Ref<double,double,double> : new ::RooCFunction2Ref<double,double,double>;
   }
   static void *newArray_RooCFunction2ReflEdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Ref<double,double,double>[nElements] : new ::RooCFunction2Ref<double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction2Ref<double,double,double>*>(p));
   }
   static void deleteArray_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction2Ref<double,double,double>*>(p));
   }
   static void destruct_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction2Ref<double,double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction2ReflEdoublecOdoublecOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction2Ref<double,double,double>*)obj)->::RooCFunction2Ref<double,double,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction2Ref<double,double,double>

//______________________________________________________________________________
template <> void RooCFunction2Binding<double,int,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2Binding<double,int,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2Binding<double,int,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2Binding<double,int,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2BindinglEdoublecOintcOintgR(void *p) {
      return  p ? new(p) ::RooCFunction2Binding<double,int,int> : new ::RooCFunction2Binding<double,int,int>;
   }
   static void *newArray_RooCFunction2BindinglEdoublecOintcOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Binding<double,int,int>[nElements] : new ::RooCFunction2Binding<double,int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2BindinglEdoublecOintcOintgR(void *p) {
      delete (static_cast<::RooCFunction2Binding<double,int,int>*>(p));
   }
   static void deleteArray_RooCFunction2BindinglEdoublecOintcOintgR(void *p) {
      delete [] (static_cast<::RooCFunction2Binding<double,int,int>*>(p));
   }
   static void destruct_RooCFunction2BindinglEdoublecOintcOintgR(void *p) {
      typedef ::RooCFunction2Binding<double,int,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2Binding<double,int,int>

//______________________________________________________________________________
template <> void RooCFunction2Binding<double,double,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2Binding<double,double,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2Binding<double,double,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2Binding<double,double,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction2Binding<double,double,int> : new ::RooCFunction2Binding<double,double,int>;
   }
   static void *newArray_RooCFunction2BindinglEdoublecOdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Binding<double,double,int>[nElements] : new ::RooCFunction2Binding<double,double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p) {
      delete (static_cast<::RooCFunction2Binding<double,double,int>*>(p));
   }
   static void deleteArray_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p) {
      delete [] (static_cast<::RooCFunction2Binding<double,double,int>*>(p));
   }
   static void destruct_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p) {
      typedef ::RooCFunction2Binding<double,double,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2Binding<double,double,int>

//______________________________________________________________________________
template <> void RooCFunction2Binding<double,unsigned int,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2Binding<double,unsigned int,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2Binding<double,unsigned int,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2Binding<double,unsigned int,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2Binding<double,unsigned int,double> : new ::RooCFunction2Binding<double,unsigned int,double>;
   }
   static void *newArray_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Binding<double,unsigned int,double>[nElements] : new ::RooCFunction2Binding<double,unsigned int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      delete (static_cast<::RooCFunction2Binding<double,unsigned int,double>*>(p));
   }
   static void deleteArray_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction2Binding<double,unsigned int,double>*>(p));
   }
   static void destruct_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      typedef ::RooCFunction2Binding<double,unsigned int,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2Binding<double,unsigned int,double>

//______________________________________________________________________________
template <> void RooCFunction2Binding<double,int,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2Binding<double,int,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2Binding<double,int,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2Binding<double,int,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2Binding<double,int,double> : new ::RooCFunction2Binding<double,int,double>;
   }
   static void *newArray_RooCFunction2BindinglEdoublecOintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Binding<double,int,double>[nElements] : new ::RooCFunction2Binding<double,int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p) {
      delete (static_cast<::RooCFunction2Binding<double,int,double>*>(p));
   }
   static void deleteArray_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction2Binding<double,int,double>*>(p));
   }
   static void destruct_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p) {
      typedef ::RooCFunction2Binding<double,int,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2Binding<double,int,double>

//______________________________________________________________________________
template <> void RooCFunction2Binding<double,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2Binding<double,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2Binding<double,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2Binding<double,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2Binding<double,double,double> : new ::RooCFunction2Binding<double,double,double>;
   }
   static void *newArray_RooCFunction2BindinglEdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Binding<double,double,double>[nElements] : new ::RooCFunction2Binding<double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction2Binding<double,double,double>*>(p));
   }
   static void deleteArray_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction2Binding<double,double,double>*>(p));
   }
   static void destruct_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction2Binding<double,double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2Binding<double,double,double>

//______________________________________________________________________________
template <> void RooCFunction2PdfBinding<double,int,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2PdfBinding<double,int,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2PdfBinding<double,int,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2PdfBinding<double,int,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p) {
      return  p ? new(p) ::RooCFunction2PdfBinding<double,int,int> : new ::RooCFunction2PdfBinding<double,int,int>;
   }
   static void *newArray_RooCFunction2PdfBindinglEdoublecOintcOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2PdfBinding<double,int,int>[nElements] : new ::RooCFunction2PdfBinding<double,int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p) {
      delete (static_cast<::RooCFunction2PdfBinding<double,int,int>*>(p));
   }
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p) {
      delete [] (static_cast<::RooCFunction2PdfBinding<double,int,int>*>(p));
   }
   static void destruct_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p) {
      typedef ::RooCFunction2PdfBinding<double,int,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2PdfBinding<double,int,int>

//______________________________________________________________________________
template <> void RooCFunction2PdfBinding<double,double,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2PdfBinding<double,double,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2PdfBinding<double,double,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2PdfBinding<double,double,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction2PdfBinding<double,double,int> : new ::RooCFunction2PdfBinding<double,double,int>;
   }
   static void *newArray_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2PdfBinding<double,double,int>[nElements] : new ::RooCFunction2PdfBinding<double,double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p) {
      delete (static_cast<::RooCFunction2PdfBinding<double,double,int>*>(p));
   }
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p) {
      delete [] (static_cast<::RooCFunction2PdfBinding<double,double,int>*>(p));
   }
   static void destruct_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p) {
      typedef ::RooCFunction2PdfBinding<double,double,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2PdfBinding<double,double,int>

//______________________________________________________________________________
template <> void RooCFunction2PdfBinding<double,unsigned int,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2PdfBinding<double,unsigned int,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2PdfBinding<double,unsigned int,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2PdfBinding<double,unsigned int,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2PdfBinding<double,unsigned int,double> : new ::RooCFunction2PdfBinding<double,unsigned int,double>;
   }
   static void *newArray_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2PdfBinding<double,unsigned int,double>[nElements] : new ::RooCFunction2PdfBinding<double,unsigned int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      delete (static_cast<::RooCFunction2PdfBinding<double,unsigned int,double>*>(p));
   }
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction2PdfBinding<double,unsigned int,double>*>(p));
   }
   static void destruct_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      typedef ::RooCFunction2PdfBinding<double,unsigned int,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2PdfBinding<double,unsigned int,double>

//______________________________________________________________________________
template <> void RooCFunction2PdfBinding<double,int,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2PdfBinding<double,int,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2PdfBinding<double,int,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2PdfBinding<double,int,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2PdfBinding<double,int,double> : new ::RooCFunction2PdfBinding<double,int,double>;
   }
   static void *newArray_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2PdfBinding<double,int,double>[nElements] : new ::RooCFunction2PdfBinding<double,int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p) {
      delete (static_cast<::RooCFunction2PdfBinding<double,int,double>*>(p));
   }
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction2PdfBinding<double,int,double>*>(p));
   }
   static void destruct_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p) {
      typedef ::RooCFunction2PdfBinding<double,int,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2PdfBinding<double,int,double>

//______________________________________________________________________________
template <> void RooCFunction2PdfBinding<double,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2PdfBinding<double,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2PdfBinding<double,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2PdfBinding<double,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2PdfBinding<double,double,double> : new ::RooCFunction2PdfBinding<double,double,double>;
   }
   static void *newArray_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2PdfBinding<double,double,double>[nElements] : new ::RooCFunction2PdfBinding<double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction2PdfBinding<double,double,double>*>(p));
   }
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction2PdfBinding<double,double,double>*>(p));
   }
   static void destruct_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction2PdfBinding<double,double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2PdfBinding<double,double,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3Ref<double,unsigned int,unsigned int,double> : new ::RooCFunction3Ref<double,unsigned int,unsigned int,double>;
   }
   static void *newArray_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Ref<double,unsigned int,unsigned int,double>[nElements] : new ::RooCFunction3Ref<double,unsigned int,unsigned int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      delete (static_cast<::RooCFunction3Ref<double,unsigned int,unsigned int,double>*>(p));
   }
   static void deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction3Ref<double,unsigned int,unsigned int,double>*>(p));
   }
   static void destruct_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      typedef ::RooCFunction3Ref<double,unsigned int,unsigned int,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)obj)->::RooCFunction3Ref<double,unsigned int,unsigned int,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction3Ref<double,unsigned int,unsigned int,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3Ref<double,unsigned int,double,double> : new ::RooCFunction3Ref<double,unsigned int,double,double>;
   }
   static void *newArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Ref<double,unsigned int,double,double>[nElements] : new ::RooCFunction3Ref<double,unsigned int,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction3Ref<double,unsigned int,double,double>*>(p));
   }
   static void deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction3Ref<double,unsigned int,double,double>*>(p));
   }
   static void destruct_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction3Ref<double,unsigned int,double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction3Ref<double,unsigned int,double,double>*)obj)->::RooCFunction3Ref<double,unsigned int,double,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction3Ref<double,unsigned int,double,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      return  p ? new(p) ::RooCFunction3Ref<double,unsigned int,double,unsigned int> : new ::RooCFunction3Ref<double,unsigned int,double,unsigned int>;
   }
   static void *newArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Ref<double,unsigned int,double,unsigned int>[nElements] : new ::RooCFunction3Ref<double,unsigned int,double,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      delete (static_cast<::RooCFunction3Ref<double,unsigned int,double,unsigned int>*>(p));
   }
   static void deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      delete [] (static_cast<::RooCFunction3Ref<double,unsigned int,double,unsigned int>*>(p));
   }
   static void destruct_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      typedef ::RooCFunction3Ref<double,unsigned int,double,unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(TBuffer &buf, void *obj) {
      ((::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)obj)->::RooCFunction3Ref<double,unsigned int,double,unsigned int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction3Ref<double,unsigned int,double,unsigned int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p) {
      return  p ? new(p) ::RooCFunction3Ref<double,double,int,int> : new ::RooCFunction3Ref<double,double,int,int>;
   }
   static void *newArray_RooCFunction3ReflEdoublecOdoublecOintcOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Ref<double,double,int,int>[nElements] : new ::RooCFunction3Ref<double,double,int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p) {
      delete (static_cast<::RooCFunction3Ref<double,double,int,int>*>(p));
   }
   static void deleteArray_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p) {
      delete [] (static_cast<::RooCFunction3Ref<double,double,int,int>*>(p));
   }
   static void destruct_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p) {
      typedef ::RooCFunction3Ref<double,double,int,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction3ReflEdoublecOdoublecOintcOintgR(TBuffer &buf, void *obj) {
      ((::RooCFunction3Ref<double,double,int,int>*)obj)->::RooCFunction3Ref<double,double,int,int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction3Ref<double,double,int,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p) {
      return  p ? new(p) ::RooCFunction3Ref<double,double,double,bool> : new ::RooCFunction3Ref<double,double,double,bool>;
   }
   static void *newArray_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Ref<double,double,double,bool>[nElements] : new ::RooCFunction3Ref<double,double,double,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p) {
      delete (static_cast<::RooCFunction3Ref<double,double,double,bool>*>(p));
   }
   static void deleteArray_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p) {
      delete [] (static_cast<::RooCFunction3Ref<double,double,double,bool>*>(p));
   }
   static void destruct_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p) {
      typedef ::RooCFunction3Ref<double,double,double,bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(TBuffer &buf, void *obj) {
      ((::RooCFunction3Ref<double,double,double,bool>*)obj)->::RooCFunction3Ref<double,double,double,bool>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction3Ref<double,double,double,bool>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3Ref<double,double,double,double> : new ::RooCFunction3Ref<double,double,double,double>;
   }
   static void *newArray_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Ref<double,double,double,double>[nElements] : new ::RooCFunction3Ref<double,double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction3Ref<double,double,double,double>*>(p));
   }
   static void deleteArray_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction3Ref<double,double,double,double>*>(p));
   }
   static void destruct_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction3Ref<double,double,double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction3Ref<double,double,double,double>*)obj)->::RooCFunction3Ref<double,double,double,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction3Ref<double,double,double,double>

//______________________________________________________________________________
template <> void RooCFunction3Binding<double,unsigned int,unsigned int,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3Binding<double,unsigned int,unsigned int,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3Binding<double,unsigned int,unsigned int,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3Binding<double,unsigned int,unsigned int,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3Binding<double,unsigned int,unsigned int,double> : new ::RooCFunction3Binding<double,unsigned int,unsigned int,double>;
   }
   static void *newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Binding<double,unsigned int,unsigned int,double>[nElements] : new ::RooCFunction3Binding<double,unsigned int,unsigned int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      delete (static_cast<::RooCFunction3Binding<double,unsigned int,unsigned int,double>*>(p));
   }
   static void deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction3Binding<double,unsigned int,unsigned int,double>*>(p));
   }
   static void destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      typedef ::RooCFunction3Binding<double,unsigned int,unsigned int,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3Binding<double,unsigned int,unsigned int,double>

//______________________________________________________________________________
template <> void RooCFunction3Binding<double,unsigned int,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3Binding<double,unsigned int,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3Binding<double,unsigned int,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3Binding<double,unsigned int,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3Binding<double,unsigned int,double,double> : new ::RooCFunction3Binding<double,unsigned int,double,double>;
   }
   static void *newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Binding<double,unsigned int,double,double>[nElements] : new ::RooCFunction3Binding<double,unsigned int,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction3Binding<double,unsigned int,double,double>*>(p));
   }
   static void deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction3Binding<double,unsigned int,double,double>*>(p));
   }
   static void destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction3Binding<double,unsigned int,double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3Binding<double,unsigned int,double,double>

//______________________________________________________________________________
template <> void RooCFunction3Binding<double,unsigned int,double,unsigned int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3Binding<double,unsigned int,double,unsigned int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3Binding<double,unsigned int,double,unsigned int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3Binding<double,unsigned int,double,unsigned int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      return  p ? new(p) ::RooCFunction3Binding<double,unsigned int,double,unsigned int> : new ::RooCFunction3Binding<double,unsigned int,double,unsigned int>;
   }
   static void *newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Binding<double,unsigned int,double,unsigned int>[nElements] : new ::RooCFunction3Binding<double,unsigned int,double,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      delete (static_cast<::RooCFunction3Binding<double,unsigned int,double,unsigned int>*>(p));
   }
   static void deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      delete [] (static_cast<::RooCFunction3Binding<double,unsigned int,double,unsigned int>*>(p));
   }
   static void destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      typedef ::RooCFunction3Binding<double,unsigned int,double,unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3Binding<double,unsigned int,double,unsigned int>

//______________________________________________________________________________
template <> void RooCFunction3Binding<double,double,int,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3Binding<double,double,int,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3Binding<double,double,int,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3Binding<double,double,int,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p) {
      return  p ? new(p) ::RooCFunction3Binding<double,double,int,int> : new ::RooCFunction3Binding<double,double,int,int>;
   }
   static void *newArray_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Binding<double,double,int,int>[nElements] : new ::RooCFunction3Binding<double,double,int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p) {
      delete (static_cast<::RooCFunction3Binding<double,double,int,int>*>(p));
   }
   static void deleteArray_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p) {
      delete [] (static_cast<::RooCFunction3Binding<double,double,int,int>*>(p));
   }
   static void destruct_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p) {
      typedef ::RooCFunction3Binding<double,double,int,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3Binding<double,double,int,int>

//______________________________________________________________________________
template <> void RooCFunction3Binding<double,double,double,bool>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3Binding<double,double,double,bool>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3Binding<double,double,double,bool>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3Binding<double,double,double,bool>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      return  p ? new(p) ::RooCFunction3Binding<double,double,double,bool> : new ::RooCFunction3Binding<double,double,double,bool>;
   }
   static void *newArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Binding<double,double,double,bool>[nElements] : new ::RooCFunction3Binding<double,double,double,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      delete (static_cast<::RooCFunction3Binding<double,double,double,bool>*>(p));
   }
   static void deleteArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      delete [] (static_cast<::RooCFunction3Binding<double,double,double,bool>*>(p));
   }
   static void destruct_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      typedef ::RooCFunction3Binding<double,double,double,bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3Binding<double,double,double,bool>

//______________________________________________________________________________
template <> void RooCFunction3Binding<double,double,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3Binding<double,double,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3Binding<double,double,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3Binding<double,double,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3Binding<double,double,double,double> : new ::RooCFunction3Binding<double,double,double,double>;
   }
   static void *newArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Binding<double,double,double,double>[nElements] : new ::RooCFunction3Binding<double,double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction3Binding<double,double,double,double>*>(p));
   }
   static void deleteArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction3Binding<double,double,double,double>*>(p));
   }
   static void destruct_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction3Binding<double,double,double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3Binding<double,double,double,double>

//______________________________________________________________________________
template <> void RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double> : new ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>;
   }
   static void *newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>[nElements] : new ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      delete (static_cast<::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*>(p));
   }
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*>(p));
   }
   static void destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      typedef ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>

//______________________________________________________________________________
template <> void RooCFunction3PdfBinding<double,unsigned int,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3PdfBinding<double,unsigned int,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3PdfBinding<double,unsigned int,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3PdfBinding<double,unsigned int,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3PdfBinding<double,unsigned int,double,double> : new ::RooCFunction3PdfBinding<double,unsigned int,double,double>;
   }
   static void *newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3PdfBinding<double,unsigned int,double,double>[nElements] : new ::RooCFunction3PdfBinding<double,unsigned int,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction3PdfBinding<double,unsigned int,double,double>*>(p));
   }
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction3PdfBinding<double,unsigned int,double,double>*>(p));
   }
   static void destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction3PdfBinding<double,unsigned int,double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3PdfBinding<double,unsigned int,double,double>

//______________________________________________________________________________
template <> void RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      return  p ? new(p) ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int> : new ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>;
   }
   static void *newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>[nElements] : new ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      delete (static_cast<::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*>(p));
   }
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      delete [] (static_cast<::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*>(p));
   }
   static void destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      typedef ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>

//______________________________________________________________________________
template <> void RooCFunction3PdfBinding<double,double,int,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3PdfBinding<double,double,int,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3PdfBinding<double,double,int,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3PdfBinding<double,double,int,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p) {
      return  p ? new(p) ::RooCFunction3PdfBinding<double,double,int,int> : new ::RooCFunction3PdfBinding<double,double,int,int>;
   }
   static void *newArray_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3PdfBinding<double,double,int,int>[nElements] : new ::RooCFunction3PdfBinding<double,double,int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p) {
      delete (static_cast<::RooCFunction3PdfBinding<double,double,int,int>*>(p));
   }
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p) {
      delete [] (static_cast<::RooCFunction3PdfBinding<double,double,int,int>*>(p));
   }
   static void destruct_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p) {
      typedef ::RooCFunction3PdfBinding<double,double,int,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3PdfBinding<double,double,int,int>

//______________________________________________________________________________
template <> void RooCFunction3PdfBinding<double,double,double,bool>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3PdfBinding<double,double,double,bool>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3PdfBinding<double,double,double,bool>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3PdfBinding<double,double,double,bool>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      return  p ? new(p) ::RooCFunction3PdfBinding<double,double,double,bool> : new ::RooCFunction3PdfBinding<double,double,double,bool>;
   }
   static void *newArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3PdfBinding<double,double,double,bool>[nElements] : new ::RooCFunction3PdfBinding<double,double,double,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      delete (static_cast<::RooCFunction3PdfBinding<double,double,double,bool>*>(p));
   }
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      delete [] (static_cast<::RooCFunction3PdfBinding<double,double,double,bool>*>(p));
   }
   static void destruct_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      typedef ::RooCFunction3PdfBinding<double,double,double,bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3PdfBinding<double,double,double,bool>

//______________________________________________________________________________
template <> void RooCFunction3PdfBinding<double,double,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3PdfBinding<double,double,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3PdfBinding<double,double,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3PdfBinding<double,double,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3PdfBinding<double,double,double,double> : new ::RooCFunction3PdfBinding<double,double,double,double>;
   }
   static void *newArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3PdfBinding<double,double,double,double>[nElements] : new ::RooCFunction3PdfBinding<double,double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction3PdfBinding<double,double,double,double>*>(p));
   }
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction3PdfBinding<double,double,double,double>*>(p));
   }
   static void destruct_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction3PdfBinding<double,double,double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3PdfBinding<double,double,double,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      return  p ? new(p) ::RooCFunction4Ref<double,double,double,double,bool> : new ::RooCFunction4Ref<double,double,double,double,bool>;
   }
   static void *newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4Ref<double,double,double,double,bool>[nElements] : new ::RooCFunction4Ref<double,double,double,double,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      delete (static_cast<::RooCFunction4Ref<double,double,double,double,bool>*>(p));
   }
   static void deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      delete [] (static_cast<::RooCFunction4Ref<double,double,double,double,bool>*>(p));
   }
   static void destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      typedef ::RooCFunction4Ref<double,double,double,double,bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(TBuffer &buf, void *obj) {
      ((::RooCFunction4Ref<double,double,double,double,bool>*)obj)->::RooCFunction4Ref<double,double,double,double,bool>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction4Ref<double,double,double,double,bool>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction4Ref<double,double,double,double,int> : new ::RooCFunction4Ref<double,double,double,double,int>;
   }
   static void *newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4Ref<double,double,double,double,int>[nElements] : new ::RooCFunction4Ref<double,double,double,double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      delete (static_cast<::RooCFunction4Ref<double,double,double,double,int>*>(p));
   }
   static void deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      delete [] (static_cast<::RooCFunction4Ref<double,double,double,double,int>*>(p));
   }
   static void destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      typedef ::RooCFunction4Ref<double,double,double,double,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(TBuffer &buf, void *obj) {
      ((::RooCFunction4Ref<double,double,double,double,int>*)obj)->::RooCFunction4Ref<double,double,double,double,int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction4Ref<double,double,double,double,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction4Ref<double,double,double,double,double> : new ::RooCFunction4Ref<double,double,double,double,double>;
   }
   static void *newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4Ref<double,double,double,double,double>[nElements] : new ::RooCFunction4Ref<double,double,double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction4Ref<double,double,double,double,double>*>(p));
   }
   static void deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction4Ref<double,double,double,double,double>*>(p));
   }
   static void destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction4Ref<double,double,double,double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction4Ref<double,double,double,double,double>*)obj)->::RooCFunction4Ref<double,double,double,double,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction4Ref<double,double,double,double,double>

//______________________________________________________________________________
template <> void RooCFunction4Binding<double,double,double,double,bool>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction4Binding<double,double,double,double,bool>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction4Binding<double,double,double,double,bool>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction4Binding<double,double,double,double,bool>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      return  p ? new(p) ::RooCFunction4Binding<double,double,double,double,bool> : new ::RooCFunction4Binding<double,double,double,double,bool>;
   }
   static void *newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4Binding<double,double,double,double,bool>[nElements] : new ::RooCFunction4Binding<double,double,double,double,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      delete (static_cast<::RooCFunction4Binding<double,double,double,double,bool>*>(p));
   }
   static void deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      delete [] (static_cast<::RooCFunction4Binding<double,double,double,double,bool>*>(p));
   }
   static void destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      typedef ::RooCFunction4Binding<double,double,double,double,bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction4Binding<double,double,double,double,bool>

//______________________________________________________________________________
template <> void RooCFunction4Binding<double,double,double,double,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction4Binding<double,double,double,double,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction4Binding<double,double,double,double,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction4Binding<double,double,double,double,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction4Binding<double,double,double,double,int> : new ::RooCFunction4Binding<double,double,double,double,int>;
   }
   static void *newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4Binding<double,double,double,double,int>[nElements] : new ::RooCFunction4Binding<double,double,double,double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      delete (static_cast<::RooCFunction4Binding<double,double,double,double,int>*>(p));
   }
   static void deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      delete [] (static_cast<::RooCFunction4Binding<double,double,double,double,int>*>(p));
   }
   static void destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      typedef ::RooCFunction4Binding<double,double,double,double,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction4Binding<double,double,double,double,int>

//______________________________________________________________________________
template <> void RooCFunction4Binding<double,double,double,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction4Binding<double,double,double,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction4Binding<double,double,double,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction4Binding<double,double,double,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction4Binding<double,double,double,double,double> : new ::RooCFunction4Binding<double,double,double,double,double>;
   }
   static void *newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4Binding<double,double,double,double,double>[nElements] : new ::RooCFunction4Binding<double,double,double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction4Binding<double,double,double,double,double>*>(p));
   }
   static void deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction4Binding<double,double,double,double,double>*>(p));
   }
   static void destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction4Binding<double,double,double,double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction4Binding<double,double,double,double,double>

//______________________________________________________________________________
template <> void RooCFunction4PdfBinding<double,double,double,double,bool>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction4PdfBinding<double,double,double,double,bool>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction4PdfBinding<double,double,double,double,bool>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction4PdfBinding<double,double,double,double,bool>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      return  p ? new(p) ::RooCFunction4PdfBinding<double,double,double,double,bool> : new ::RooCFunction4PdfBinding<double,double,double,double,bool>;
   }
   static void *newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4PdfBinding<double,double,double,double,bool>[nElements] : new ::RooCFunction4PdfBinding<double,double,double,double,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      delete (static_cast<::RooCFunction4PdfBinding<double,double,double,double,bool>*>(p));
   }
   static void deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      delete [] (static_cast<::RooCFunction4PdfBinding<double,double,double,double,bool>*>(p));
   }
   static void destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      typedef ::RooCFunction4PdfBinding<double,double,double,double,bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction4PdfBinding<double,double,double,double,bool>

//______________________________________________________________________________
template <> void RooCFunction4PdfBinding<double,double,double,double,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction4PdfBinding<double,double,double,double,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction4PdfBinding<double,double,double,double,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction4PdfBinding<double,double,double,double,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction4PdfBinding<double,double,double,double,int> : new ::RooCFunction4PdfBinding<double,double,double,double,int>;
   }
   static void *newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4PdfBinding<double,double,double,double,int>[nElements] : new ::RooCFunction4PdfBinding<double,double,double,double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      delete (static_cast<::RooCFunction4PdfBinding<double,double,double,double,int>*>(p));
   }
   static void deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      delete [] (static_cast<::RooCFunction4PdfBinding<double,double,double,double,int>*>(p));
   }
   static void destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      typedef ::RooCFunction4PdfBinding<double,double,double,double,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction4PdfBinding<double,double,double,double,int>

//______________________________________________________________________________
template <> void RooCFunction4PdfBinding<double,double,double,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction4PdfBinding<double,double,double,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction4PdfBinding<double,double,double,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction4PdfBinding<double,double,double,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction4PdfBinding<double,double,double,double,double> : new ::RooCFunction4PdfBinding<double,double,double,double,double>;
   }
   static void *newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4PdfBinding<double,double,double,double,double>[nElements] : new ::RooCFunction4PdfBinding<double,double,double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete (static_cast<::RooCFunction4PdfBinding<double,double,double,double,double>*>(p));
   }
   static void deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete [] (static_cast<::RooCFunction4PdfBinding<double,double,double,double,double>*>(p));
   }
   static void destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction4PdfBinding<double,double,double,double,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction4PdfBinding<double,double,double,double,double>

//______________________________________________________________________________
void RooChebychev::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooChebychev.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooChebychev::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooChebychev::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooChebychev(void *p) {
      return  p ? new(p) ::RooChebychev : new ::RooChebychev;
   }
   static void *newArray_RooChebychev(Long_t nElements, void *p) {
      return p ? new(p) ::RooChebychev[nElements] : new ::RooChebychev[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooChebychev(void *p) {
      delete (static_cast<::RooChebychev*>(p));
   }
   static void deleteArray_RooChebychev(void *p) {
      delete [] (static_cast<::RooChebychev*>(p));
   }
   static void destruct_RooChebychev(void *p) {
      typedef ::RooChebychev current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooChebychev

//______________________________________________________________________________
void RooChi2MCSModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooChi2MCSModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooChi2MCSModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooChi2MCSModule::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooChi2MCSModule(void *p) {
      return  p ? new(p) ::RooChi2MCSModule : new ::RooChi2MCSModule;
   }
   static void *newArray_RooChi2MCSModule(Long_t nElements, void *p) {
      return p ? new(p) ::RooChi2MCSModule[nElements] : new ::RooChi2MCSModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooChi2MCSModule(void *p) {
      delete (static_cast<::RooChi2MCSModule*>(p));
   }
   static void deleteArray_RooChi2MCSModule(void *p) {
      delete [] (static_cast<::RooChi2MCSModule*>(p));
   }
   static void destruct_RooChi2MCSModule(void *p) {
      typedef ::RooChi2MCSModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooChi2MCSModule

//______________________________________________________________________________
void RooChiSquarePdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooChiSquarePdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooChiSquarePdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooChiSquarePdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooChiSquarePdf(void *p) {
      return  p ? new(p) ::RooChiSquarePdf : new ::RooChiSquarePdf;
   }
   static void *newArray_RooChiSquarePdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooChiSquarePdf[nElements] : new ::RooChiSquarePdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooChiSquarePdf(void *p) {
      delete (static_cast<::RooChiSquarePdf*>(p));
   }
   static void deleteArray_RooChiSquarePdf(void *p) {
      delete [] (static_cast<::RooChiSquarePdf*>(p));
   }
   static void destruct_RooChiSquarePdf(void *p) {
      typedef ::RooChiSquarePdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooChiSquarePdf

//______________________________________________________________________________
void RooDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooDecay(void *p) {
      return  p ? new(p) ::RooDecay : new ::RooDecay;
   }
   static void *newArray_RooDecay(Long_t nElements, void *p) {
      return p ? new(p) ::RooDecay[nElements] : new ::RooDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooDecay(void *p) {
      delete (static_cast<::RooDecay*>(p));
   }
   static void deleteArray_RooDecay(void *p) {
      delete [] (static_cast<::RooDecay*>(p));
   }
   static void destruct_RooDecay(void *p) {
      typedef ::RooDecay current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooDecay

//______________________________________________________________________________
void RooDstD0BG::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooDstD0BG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooDstD0BG::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooDstD0BG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooDstD0BG(void *p) {
      return  p ? new(p) ::RooDstD0BG : new ::RooDstD0BG;
   }
   static void *newArray_RooDstD0BG(Long_t nElements, void *p) {
      return p ? new(p) ::RooDstD0BG[nElements] : new ::RooDstD0BG[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooDstD0BG(void *p) {
      delete (static_cast<::RooDstD0BG*>(p));
   }
   static void deleteArray_RooDstD0BG(void *p) {
      delete [] (static_cast<::RooDstD0BG*>(p));
   }
   static void destruct_RooDstD0BG(void *p) {
      typedef ::RooDstD0BG current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooDstD0BG

//______________________________________________________________________________
void RooExponential::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooExponential.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooExponential::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooExponential::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooExponential(void *p) {
      return  p ? new(p) ::RooExponential : new ::RooExponential;
   }
   static void *newArray_RooExponential(Long_t nElements, void *p) {
      return p ? new(p) ::RooExponential[nElements] : new ::RooExponential[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooExponential(void *p) {
      delete (static_cast<::RooExponential*>(p));
   }
   static void deleteArray_RooExponential(void *p) {
      delete [] (static_cast<::RooExponential*>(p));
   }
   static void destruct_RooExponential(void *p) {
      typedef ::RooExponential current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooExponential

//______________________________________________________________________________
void RooLegacyExpPoly::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooLegacyExpPoly.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooLegacyExpPoly::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooLegacyExpPoly::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLegacyExpPoly(void *p) {
      return  p ? new(p) ::RooLegacyExpPoly : new ::RooLegacyExpPoly;
   }
   static void *newArray_RooLegacyExpPoly(Long_t nElements, void *p) {
      return p ? new(p) ::RooLegacyExpPoly[nElements] : new ::RooLegacyExpPoly[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLegacyExpPoly(void *p) {
      delete (static_cast<::RooLegacyExpPoly*>(p));
   }
   static void deleteArray_RooLegacyExpPoly(void *p) {
      delete [] (static_cast<::RooLegacyExpPoly*>(p));
   }
   static void destruct_RooLegacyExpPoly(void *p) {
      typedef ::RooLegacyExpPoly current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooLegacyExpPoly

//______________________________________________________________________________
void RooPowerSum::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooPowerSum.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooPowerSum::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooPowerSum::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooPowerSum(void *p) {
      return  p ? new(p) ::RooPowerSum : new ::RooPowerSum;
   }
   static void *newArray_RooPowerSum(Long_t nElements, void *p) {
      return p ? new(p) ::RooPowerSum[nElements] : new ::RooPowerSum[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooPowerSum(void *p) {
      delete (static_cast<::RooPowerSum*>(p));
   }
   static void deleteArray_RooPowerSum(void *p) {
      delete [] (static_cast<::RooPowerSum*>(p));
   }
   static void destruct_RooPowerSum(void *p) {
      typedef ::RooPowerSum current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooPowerSum

//______________________________________________________________________________
void RooFunctor1DBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFunctor1DBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFunctor1DBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFunctor1DBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFunctor1DBinding(void *p) {
      return  p ? new(p) ::RooFunctor1DBinding : new ::RooFunctor1DBinding;
   }
   static void *newArray_RooFunctor1DBinding(Long_t nElements, void *p) {
      return p ? new(p) ::RooFunctor1DBinding[nElements] : new ::RooFunctor1DBinding[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFunctor1DBinding(void *p) {
      delete (static_cast<::RooFunctor1DBinding*>(p));
   }
   static void deleteArray_RooFunctor1DBinding(void *p) {
      delete [] (static_cast<::RooFunctor1DBinding*>(p));
   }
   static void destruct_RooFunctor1DBinding(void *p) {
      typedef ::RooFunctor1DBinding current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFunctor1DBinding

//______________________________________________________________________________
void RooFunctor1DPdfBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFunctor1DPdfBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFunctor1DPdfBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFunctor1DPdfBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFunctor1DPdfBinding(void *p) {
      return  p ? new(p) ::RooFunctor1DPdfBinding : new ::RooFunctor1DPdfBinding;
   }
   static void *newArray_RooFunctor1DPdfBinding(Long_t nElements, void *p) {
      return p ? new(p) ::RooFunctor1DPdfBinding[nElements] : new ::RooFunctor1DPdfBinding[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFunctor1DPdfBinding(void *p) {
      delete (static_cast<::RooFunctor1DPdfBinding*>(p));
   }
   static void deleteArray_RooFunctor1DPdfBinding(void *p) {
      delete [] (static_cast<::RooFunctor1DPdfBinding*>(p));
   }
   static void destruct_RooFunctor1DPdfBinding(void *p) {
      typedef ::RooFunctor1DPdfBinding current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFunctor1DPdfBinding

//______________________________________________________________________________
void RooFunctorBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFunctorBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFunctorBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFunctorBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFunctorBinding(void *p) {
      return  p ? new(p) ::RooFunctorBinding : new ::RooFunctorBinding;
   }
   static void *newArray_RooFunctorBinding(Long_t nElements, void *p) {
      return p ? new(p) ::RooFunctorBinding[nElements] : new ::RooFunctorBinding[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFunctorBinding(void *p) {
      delete (static_cast<::RooFunctorBinding*>(p));
   }
   static void deleteArray_RooFunctorBinding(void *p) {
      delete [] (static_cast<::RooFunctorBinding*>(p));
   }
   static void destruct_RooFunctorBinding(void *p) {
      typedef ::RooFunctorBinding current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFunctorBinding

//______________________________________________________________________________
void RooFunctorPdfBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFunctorPdfBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFunctorPdfBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFunctorPdfBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFunctorPdfBinding(void *p) {
      return  p ? new(p) ::RooFunctorPdfBinding : new ::RooFunctorPdfBinding;
   }
   static void *newArray_RooFunctorPdfBinding(Long_t nElements, void *p) {
      return p ? new(p) ::RooFunctorPdfBinding[nElements] : new ::RooFunctorPdfBinding[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFunctorPdfBinding(void *p) {
      delete (static_cast<::RooFunctorPdfBinding*>(p));
   }
   static void deleteArray_RooFunctorPdfBinding(void *p) {
      delete [] (static_cast<::RooFunctorPdfBinding*>(p));
   }
   static void destruct_RooFunctorPdfBinding(void *p) {
      typedef ::RooFunctorPdfBinding current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFunctorPdfBinding

//______________________________________________________________________________
void RooGamma::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGamma.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGamma::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGamma::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGamma(void *p) {
      return  p ? new(p) ::RooGamma : new ::RooGamma;
   }
   static void *newArray_RooGamma(Long_t nElements, void *p) {
      return p ? new(p) ::RooGamma[nElements] : new ::RooGamma[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGamma(void *p) {
      delete (static_cast<::RooGamma*>(p));
   }
   static void deleteArray_RooGamma(void *p) {
      delete [] (static_cast<::RooGamma*>(p));
   }
   static void destruct_RooGamma(void *p) {
      typedef ::RooGamma current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooGamma

//______________________________________________________________________________
void RooGaussExpTails::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGaussExpTails.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGaussExpTails::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGaussExpTails::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGaussExpTails(void *p) {
      return  p ? new(p) ::RooGaussExpTails : new ::RooGaussExpTails;
   }
   static void *newArray_RooGaussExpTails(Long_t nElements, void *p) {
      return p ? new(p) ::RooGaussExpTails[nElements] : new ::RooGaussExpTails[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGaussExpTails(void *p) {
      delete (static_cast<::RooGaussExpTails*>(p));
   }
   static void deleteArray_RooGaussExpTails(void *p) {
      delete [] (static_cast<::RooGaussExpTails*>(p));
   }
   static void destruct_RooGaussExpTails(void *p) {
      typedef ::RooGaussExpTails current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooGaussExpTails

//______________________________________________________________________________
void RooGaussian::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGaussian.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGaussian::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGaussian::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGaussian(void *p) {
      return  p ? new(p) ::RooGaussian : new ::RooGaussian;
   }
   static void *newArray_RooGaussian(Long_t nElements, void *p) {
      return p ? new(p) ::RooGaussian[nElements] : new ::RooGaussian[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGaussian(void *p) {
      delete (static_cast<::RooGaussian*>(p));
   }
   static void deleteArray_RooGaussian(void *p) {
      delete [] (static_cast<::RooGaussian*>(p));
   }
   static void destruct_RooGaussian(void *p) {
      typedef ::RooGaussian current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooGaussian

//______________________________________________________________________________
void RooGaussModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGaussModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGaussModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGaussModel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGaussModel(void *p) {
      return  p ? new(p) ::RooGaussModel : new ::RooGaussModel;
   }
   static void *newArray_RooGaussModel(Long_t nElements, void *p) {
      return p ? new(p) ::RooGaussModel[nElements] : new ::RooGaussModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGaussModel(void *p) {
      delete (static_cast<::RooGaussModel*>(p));
   }
   static void deleteArray_RooGaussModel(void *p) {
      delete [] (static_cast<::RooGaussModel*>(p));
   }
   static void destruct_RooGaussModel(void *p) {
      typedef ::RooGaussModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooGaussModel

//______________________________________________________________________________
void RooGExpModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGExpModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGExpModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGExpModel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGExpModel(void *p) {
      return  p ? new(p) ::RooGExpModel : new ::RooGExpModel;
   }
   static void *newArray_RooGExpModel(Long_t nElements, void *p) {
      return p ? new(p) ::RooGExpModel[nElements] : new ::RooGExpModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGExpModel(void *p) {
      delete (static_cast<::RooGExpModel*>(p));
   }
   static void deleteArray_RooGExpModel(void *p) {
      delete [] (static_cast<::RooGExpModel*>(p));
   }
   static void destruct_RooGExpModel(void *p) {
      typedef ::RooGExpModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooGExpModel

//______________________________________________________________________________
void RooHistConstraint::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooHistConstraint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooHistConstraint::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooHistConstraint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooHistConstraint(void *p) {
      return  p ? new(p) ::RooHistConstraint : new ::RooHistConstraint;
   }
   static void *newArray_RooHistConstraint(Long_t nElements, void *p) {
      return p ? new(p) ::RooHistConstraint[nElements] : new ::RooHistConstraint[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooHistConstraint(void *p) {
      delete (static_cast<::RooHistConstraint*>(p));
   }
   static void deleteArray_RooHistConstraint(void *p) {
      delete [] (static_cast<::RooHistConstraint*>(p));
   }
   static void destruct_RooHistConstraint(void *p) {
      typedef ::RooHistConstraint current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooHistConstraint

//______________________________________________________________________________
void RooIntegralMorph::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooIntegralMorph.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooIntegralMorph::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooIntegralMorph::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooIntegralMorph(void *p) {
      return  p ? new(p) ::RooIntegralMorph : new ::RooIntegralMorph;
   }
   static void *newArray_RooIntegralMorph(Long_t nElements, void *p) {
      return p ? new(p) ::RooIntegralMorph[nElements] : new ::RooIntegralMorph[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooIntegralMorph(void *p) {
      delete (static_cast<::RooIntegralMorph*>(p));
   }
   static void deleteArray_RooIntegralMorph(void *p) {
      delete [] (static_cast<::RooIntegralMorph*>(p));
   }
   static void destruct_RooIntegralMorph(void *p) {
      typedef ::RooIntegralMorph current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooIntegralMorph

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooIntegralMorphcLcLMorphCacheElem(void *p) {
      delete (static_cast<::RooIntegralMorph::MorphCacheElem*>(p));
   }
   static void deleteArray_RooIntegralMorphcLcLMorphCacheElem(void *p) {
      delete [] (static_cast<::RooIntegralMorph::MorphCacheElem*>(p));
   }
   static void destruct_RooIntegralMorphcLcLMorphCacheElem(void *p) {
      typedef ::RooIntegralMorph::MorphCacheElem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooIntegralMorph::MorphCacheElem

//______________________________________________________________________________
void RooJeffreysPrior::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooJeffreysPrior.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooJeffreysPrior::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooJeffreysPrior::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooJeffreysPrior(void *p) {
      return  p ? new(p) ::RooJeffreysPrior : new ::RooJeffreysPrior;
   }
   static void *newArray_RooJeffreysPrior(Long_t nElements, void *p) {
      return p ? new(p) ::RooJeffreysPrior[nElements] : new ::RooJeffreysPrior[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooJeffreysPrior(void *p) {
      delete (static_cast<::RooJeffreysPrior*>(p));
   }
   static void deleteArray_RooJeffreysPrior(void *p) {
      delete [] (static_cast<::RooJeffreysPrior*>(p));
   }
   static void destruct_RooJeffreysPrior(void *p) {
      typedef ::RooJeffreysPrior current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooJeffreysPrior

//______________________________________________________________________________
void RooKeysPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooKeysPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooKeysPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooKeysPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooKeysPdf(void *p) {
      return  p ? new(p) ::RooKeysPdf : new ::RooKeysPdf;
   }
   static void *newArray_RooKeysPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooKeysPdf[nElements] : new ::RooKeysPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooKeysPdf(void *p) {
      delete (static_cast<::RooKeysPdf*>(p));
   }
   static void deleteArray_RooKeysPdf(void *p) {
      delete [] (static_cast<::RooKeysPdf*>(p));
   }
   static void destruct_RooKeysPdf(void *p) {
      typedef ::RooKeysPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooKeysPdf

//______________________________________________________________________________
void RooLagrangianMorphFunc::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooLagrangianMorphFunc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooLagrangianMorphFunc::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooLagrangianMorphFunc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLagrangianMorphFunc(void *p) {
      return  p ? new(p) ::RooLagrangianMorphFunc : new ::RooLagrangianMorphFunc;
   }
   static void *newArray_RooLagrangianMorphFunc(Long_t nElements, void *p) {
      return p ? new(p) ::RooLagrangianMorphFunc[nElements] : new ::RooLagrangianMorphFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLagrangianMorphFunc(void *p) {
      delete (static_cast<::RooLagrangianMorphFunc*>(p));
   }
   static void deleteArray_RooLagrangianMorphFunc(void *p) {
      delete [] (static_cast<::RooLagrangianMorphFunc*>(p));
   }
   static void destruct_RooLagrangianMorphFunc(void *p) {
      typedef ::RooLagrangianMorphFunc current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooLagrangianMorphFunc

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLagrangianMorphFunccLcLConfig(void *p) {
      return  p ? new(p) ::RooLagrangianMorphFunc::Config : new ::RooLagrangianMorphFunc::Config;
   }
   static void *newArray_RooLagrangianMorphFunccLcLConfig(Long_t nElements, void *p) {
      return p ? new(p) ::RooLagrangianMorphFunc::Config[nElements] : new ::RooLagrangianMorphFunc::Config[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLagrangianMorphFunccLcLConfig(void *p) {
      delete (static_cast<::RooLagrangianMorphFunc::Config*>(p));
   }
   static void deleteArray_RooLagrangianMorphFunccLcLConfig(void *p) {
      delete [] (static_cast<::RooLagrangianMorphFunc::Config*>(p));
   }
   static void destruct_RooLagrangianMorphFunccLcLConfig(void *p) {
      typedef ::RooLagrangianMorphFunc::Config current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooLagrangianMorphFunc::Config

//______________________________________________________________________________
void RooLandau::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooLandau.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooLandau::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooLandau::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLandau(void *p) {
      return  p ? new(p) ::RooLandau : new ::RooLandau;
   }
   static void *newArray_RooLandau(Long_t nElements, void *p) {
      return p ? new(p) ::RooLandau[nElements] : new ::RooLandau[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLandau(void *p) {
      delete (static_cast<::RooLandau*>(p));
   }
   static void deleteArray_RooLandau(void *p) {
      delete [] (static_cast<::RooLandau*>(p));
   }
   static void destruct_RooLandau(void *p) {
      typedef ::RooLandau current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooLandau

//______________________________________________________________________________
void RooLognormal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooLognormal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooLognormal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooLognormal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLognormal(void *p) {
      return  p ? new(p) ::RooLognormal : new ::RooLognormal;
   }
   static void *newArray_RooLognormal(Long_t nElements, void *p) {
      return p ? new(p) ::RooLognormal[nElements] : new ::RooLognormal[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLognormal(void *p) {
      delete (static_cast<::RooLognormal*>(p));
   }
   static void deleteArray_RooLognormal(void *p) {
      delete [] (static_cast<::RooLognormal*>(p));
   }
   static void destruct_RooLognormal(void *p) {
      typedef ::RooLognormal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooLognormal

//______________________________________________________________________________
void RooMomentMorphFunc::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMomentMorphFunc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMomentMorphFunc::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMomentMorphFunc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMomentMorphFunc(void *p) {
      return  p ? new(p) ::RooMomentMorphFunc : new ::RooMomentMorphFunc;
   }
   static void *newArray_RooMomentMorphFunc(Long_t nElements, void *p) {
      return p ? new(p) ::RooMomentMorphFunc[nElements] : new ::RooMomentMorphFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMomentMorphFunc(void *p) {
      delete (static_cast<::RooMomentMorphFunc*>(p));
   }
   static void deleteArray_RooMomentMorphFunc(void *p) {
      delete [] (static_cast<::RooMomentMorphFunc*>(p));
   }
   static void destruct_RooMomentMorphFunc(void *p) {
      typedef ::RooMomentMorphFunc current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMomentMorphFunc

//______________________________________________________________________________
void RooMomentMorphFuncND::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMomentMorphFuncND.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMomentMorphFuncND::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMomentMorphFuncND::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMomentMorphFuncND(void *p) {
      return  p ? new(p) ::RooMomentMorphFuncND : new ::RooMomentMorphFuncND;
   }
   static void *newArray_RooMomentMorphFuncND(Long_t nElements, void *p) {
      return p ? new(p) ::RooMomentMorphFuncND[nElements] : new ::RooMomentMorphFuncND[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMomentMorphFuncND(void *p) {
      delete (static_cast<::RooMomentMorphFuncND*>(p));
   }
   static void deleteArray_RooMomentMorphFuncND(void *p) {
      delete [] (static_cast<::RooMomentMorphFuncND*>(p));
   }
   static void destruct_RooMomentMorphFuncND(void *p) {
      typedef ::RooMomentMorphFuncND current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMomentMorphFuncND

//______________________________________________________________________________
void RooMomentMorphFuncND::Grid2::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMomentMorphFuncND::Grid2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMomentMorphFuncND::Grid2::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMomentMorphFuncND::Grid2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMomentMorphFuncNDcLcLGrid2(void *p) {
      return  p ? new(p) ::RooMomentMorphFuncND::Grid2 : new ::RooMomentMorphFuncND::Grid2;
   }
   static void *newArray_RooMomentMorphFuncNDcLcLGrid2(Long_t nElements, void *p) {
      return p ? new(p) ::RooMomentMorphFuncND::Grid2[nElements] : new ::RooMomentMorphFuncND::Grid2[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMomentMorphFuncNDcLcLGrid2(void *p) {
      delete (static_cast<::RooMomentMorphFuncND::Grid2*>(p));
   }
   static void deleteArray_RooMomentMorphFuncNDcLcLGrid2(void *p) {
      delete [] (static_cast<::RooMomentMorphFuncND::Grid2*>(p));
   }
   static void destruct_RooMomentMorphFuncNDcLcLGrid2(void *p) {
      typedef ::RooMomentMorphFuncND::Grid2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMomentMorphFuncND::Grid2

//______________________________________________________________________________
void RooMomentMorph::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMomentMorph.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMomentMorph::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMomentMorph::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMomentMorph(void *p) {
      return  p ? new(p) ::RooMomentMorph : new ::RooMomentMorph;
   }
   static void *newArray_RooMomentMorph(Long_t nElements, void *p) {
      return p ? new(p) ::RooMomentMorph[nElements] : new ::RooMomentMorph[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMomentMorph(void *p) {
      delete (static_cast<::RooMomentMorph*>(p));
   }
   static void deleteArray_RooMomentMorph(void *p) {
      delete [] (static_cast<::RooMomentMorph*>(p));
   }
   static void destruct_RooMomentMorph(void *p) {
      typedef ::RooMomentMorph current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMomentMorph

//______________________________________________________________________________
void RooMultiBinomial::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMultiBinomial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMultiBinomial::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMultiBinomial::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMultiBinomial(void *p) {
      return  p ? new(p) ::RooMultiBinomial : new ::RooMultiBinomial;
   }
   static void *newArray_RooMultiBinomial(Long_t nElements, void *p) {
      return p ? new(p) ::RooMultiBinomial[nElements] : new ::RooMultiBinomial[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMultiBinomial(void *p) {
      delete (static_cast<::RooMultiBinomial*>(p));
   }
   static void deleteArray_RooMultiBinomial(void *p) {
      delete [] (static_cast<::RooMultiBinomial*>(p));
   }
   static void destruct_RooMultiBinomial(void *p) {
      typedef ::RooMultiBinomial current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMultiBinomial

//______________________________________________________________________________
void RooNDKeysPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNDKeysPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNDKeysPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNDKeysPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooNDKeysPdf(void *p) {
      return  p ? new(p) ::RooNDKeysPdf : new ::RooNDKeysPdf;
   }
   static void *newArray_RooNDKeysPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooNDKeysPdf[nElements] : new ::RooNDKeysPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooNDKeysPdf(void *p) {
      delete (static_cast<::RooNDKeysPdf*>(p));
   }
   static void deleteArray_RooNDKeysPdf(void *p) {
      delete [] (static_cast<::RooNDKeysPdf*>(p));
   }
   static void destruct_RooNDKeysPdf(void *p) {
      typedef ::RooNDKeysPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooNDKeysPdf

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooNDKeysPdfcLcLBoxInfo(void *p) {
      return  p ? new(p) ::RooNDKeysPdf::BoxInfo : new ::RooNDKeysPdf::BoxInfo;
   }
   static void *newArray_RooNDKeysPdfcLcLBoxInfo(Long_t nElements, void *p) {
      return p ? new(p) ::RooNDKeysPdf::BoxInfo[nElements] : new ::RooNDKeysPdf::BoxInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooNDKeysPdfcLcLBoxInfo(void *p) {
      delete (static_cast<::RooNDKeysPdf::BoxInfo*>(p));
   }
   static void deleteArray_RooNDKeysPdfcLcLBoxInfo(void *p) {
      delete [] (static_cast<::RooNDKeysPdf::BoxInfo*>(p));
   }
   static void destruct_RooNDKeysPdfcLcLBoxInfo(void *p) {
      typedef ::RooNDKeysPdf::BoxInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooNDKeysPdf::BoxInfo

//______________________________________________________________________________
void RooNonCPEigenDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNonCPEigenDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNonCPEigenDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNonCPEigenDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooNonCPEigenDecay(void *p) {
      return  p ? new(p) ::RooNonCPEigenDecay : new ::RooNonCPEigenDecay;
   }
   static void *newArray_RooNonCPEigenDecay(Long_t nElements, void *p) {
      return p ? new(p) ::RooNonCPEigenDecay[nElements] : new ::RooNonCPEigenDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooNonCPEigenDecay(void *p) {
      delete (static_cast<::RooNonCPEigenDecay*>(p));
   }
   static void deleteArray_RooNonCPEigenDecay(void *p) {
      delete [] (static_cast<::RooNonCPEigenDecay*>(p));
   }
   static void destruct_RooNonCPEigenDecay(void *p) {
      typedef ::RooNonCPEigenDecay current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooNonCPEigenDecay

//______________________________________________________________________________
void RooNovosibirsk::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNovosibirsk.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNovosibirsk::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNovosibirsk::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooNovosibirsk(void *p) {
      return  p ? new(p) ::RooNovosibirsk : new ::RooNovosibirsk;
   }
   static void *newArray_RooNovosibirsk(Long_t nElements, void *p) {
      return p ? new(p) ::RooNovosibirsk[nElements] : new ::RooNovosibirsk[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooNovosibirsk(void *p) {
      delete (static_cast<::RooNovosibirsk*>(p));
   }
   static void deleteArray_RooNovosibirsk(void *p) {
      delete [] (static_cast<::RooNovosibirsk*>(p));
   }
   static void destruct_RooNovosibirsk(void *p) {
      typedef ::RooNovosibirsk current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooNovosibirsk

//______________________________________________________________________________
void RooParametricStepFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooParametricStepFunction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooParametricStepFunction::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooParametricStepFunction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooParametricStepFunction(void *p) {
      return  p ? new(p) ::RooParametricStepFunction : new ::RooParametricStepFunction;
   }
   static void *newArray_RooParametricStepFunction(Long_t nElements, void *p) {
      return p ? new(p) ::RooParametricStepFunction[nElements] : new ::RooParametricStepFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooParametricStepFunction(void *p) {
      delete (static_cast<::RooParametricStepFunction*>(p));
   }
   static void deleteArray_RooParametricStepFunction(void *p) {
      delete [] (static_cast<::RooParametricStepFunction*>(p));
   }
   static void destruct_RooParametricStepFunction(void *p) {
      typedef ::RooParametricStepFunction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooParametricStepFunction

//______________________________________________________________________________
void RooParamHistFunc::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooParamHistFunc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooParamHistFunc::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooParamHistFunc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooParamHistFunc(void *p) {
      return  p ? new(p) ::RooParamHistFunc : new ::RooParamHistFunc;
   }
   static void *newArray_RooParamHistFunc(Long_t nElements, void *p) {
      return p ? new(p) ::RooParamHistFunc[nElements] : new ::RooParamHistFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooParamHistFunc(void *p) {
      delete (static_cast<::RooParamHistFunc*>(p));
   }
   static void deleteArray_RooParamHistFunc(void *p) {
      delete [] (static_cast<::RooParamHistFunc*>(p));
   }
   static void destruct_RooParamHistFunc(void *p) {
      typedef ::RooParamHistFunc current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooParamHistFunc

//______________________________________________________________________________
void RooPoisson::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooPoisson.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooPoisson::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooPoisson::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooPoisson(void *p) {
      return  p ? new(p) ::RooPoisson : new ::RooPoisson;
   }
   static void *newArray_RooPoisson(Long_t nElements, void *p) {
      return p ? new(p) ::RooPoisson[nElements] : new ::RooPoisson[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooPoisson(void *p) {
      delete (static_cast<::RooPoisson*>(p));
   }
   static void deleteArray_RooPoisson(void *p) {
      delete [] (static_cast<::RooPoisson*>(p));
   }
   static void destruct_RooPoisson(void *p) {
      typedef ::RooPoisson current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooPoisson

//______________________________________________________________________________
void RooPolynomial::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooPolynomial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooPolynomial::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooPolynomial::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooPolynomial(void *p) {
      return  p ? new(p) ::RooPolynomial : new ::RooPolynomial;
   }
   static void *newArray_RooPolynomial(Long_t nElements, void *p) {
      return p ? new(p) ::RooPolynomial[nElements] : new ::RooPolynomial[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooPolynomial(void *p) {
      delete (static_cast<::RooPolynomial*>(p));
   }
   static void deleteArray_RooPolynomial(void *p) {
      delete [] (static_cast<::RooPolynomial*>(p));
   }
   static void destruct_RooPolynomial(void *p) {
      typedef ::RooPolynomial current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooPolynomial

namespace RooFit {
   namespace Detail {
//______________________________________________________________________________
template <> void RooPyBind<RooAbsPdf>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFit::Detail::RooPyBind<RooAbsPdf>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFit::Detail::RooPyBind<RooAbsPdf>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFit::Detail::RooPyBind<RooAbsPdf>::Class(),this);
   }
}

} // namespace RooFit::Detail
} // namespace RooFit::Detail
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR(void *p) {
      delete (static_cast<::RooFit::Detail::RooPyBind<RooAbsPdf>*>(p));
   }
   static void deleteArray_RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR(void *p) {
      delete [] (static_cast<::RooFit::Detail::RooPyBind<RooAbsPdf>*>(p));
   }
   static void destruct_RooFitcLcLDetailcLcLRooPyBindlERooAbsPdfgR(void *p) {
      typedef ::RooFit::Detail::RooPyBind<RooAbsPdf> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFit::Detail::RooPyBind<RooAbsPdf>

namespace RooFit {
   namespace Detail {
//______________________________________________________________________________
template <> void RooPyBind<RooAbsReal>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFit::Detail::RooPyBind<RooAbsReal>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFit::Detail::RooPyBind<RooAbsReal>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFit::Detail::RooPyBind<RooAbsReal>::Class(),this);
   }
}

} // namespace RooFit::Detail
} // namespace RooFit::Detail
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR(void *p) {
      delete (static_cast<::RooFit::Detail::RooPyBind<RooAbsReal>*>(p));
   }
   static void deleteArray_RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR(void *p) {
      delete [] (static_cast<::RooFit::Detail::RooPyBind<RooAbsReal>*>(p));
   }
   static void destruct_RooFitcLcLDetailcLcLRooPyBindlERooAbsRealgR(void *p) {
      typedef ::RooFit::Detail::RooPyBind<RooAbsReal> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFit::Detail::RooPyBind<RooAbsReal>

//______________________________________________________________________________
void RooSpline::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooSpline.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooSpline::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooSpline::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooSpline(void *p) {
      return  p ? new(p) ::RooSpline : new ::RooSpline;
   }
   static void *newArray_RooSpline(Long_t nElements, void *p) {
      return p ? new(p) ::RooSpline[nElements] : new ::RooSpline[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooSpline(void *p) {
      delete (static_cast<::RooSpline*>(p));
   }
   static void deleteArray_RooSpline(void *p) {
      delete [] (static_cast<::RooSpline*>(p));
   }
   static void destruct_RooSpline(void *p) {
      typedef ::RooSpline current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooSpline

//______________________________________________________________________________
void RooStepFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStepFunction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStepFunction::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStepFunction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStepFunction(void *p) {
      return  p ? new(p) ::RooStepFunction : new ::RooStepFunction;
   }
   static void *newArray_RooStepFunction(Long_t nElements, void *p) {
      return p ? new(p) ::RooStepFunction[nElements] : new ::RooStepFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStepFunction(void *p) {
      delete (static_cast<::RooStepFunction*>(p));
   }
   static void deleteArray_RooStepFunction(void *p) {
      delete [] (static_cast<::RooStepFunction*>(p));
   }
   static void destruct_RooStepFunction(void *p) {
      typedef ::RooStepFunction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStepFunction

//______________________________________________________________________________
void RooStudentT::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStudentT.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStudentT::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStudentT::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStudentT(void *p) {
      return  p ? new(p) ::RooStudentT : new ::RooStudentT;
   }
   static void *newArray_RooStudentT(Long_t nElements, void *p) {
      return p ? new(p) ::RooStudentT[nElements] : new ::RooStudentT[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStudentT(void *p) {
      delete (static_cast<::RooStudentT*>(p));
   }
   static void deleteArray_RooStudentT(void *p) {
      delete [] (static_cast<::RooStudentT*>(p));
   }
   static void destruct_RooStudentT(void *p) {
      typedef ::RooStudentT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStudentT

//______________________________________________________________________________
void RooTFnBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTFnBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTFnBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTFnBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTFnBinding(void *p) {
      return  p ? new(p) ::RooTFnBinding : new ::RooTFnBinding;
   }
   static void *newArray_RooTFnBinding(Long_t nElements, void *p) {
      return p ? new(p) ::RooTFnBinding[nElements] : new ::RooTFnBinding[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTFnBinding(void *p) {
      delete (static_cast<::RooTFnBinding*>(p));
   }
   static void deleteArray_RooTFnBinding(void *p) {
      delete [] (static_cast<::RooTFnBinding*>(p));
   }
   static void destruct_RooTFnBinding(void *p) {
      typedef ::RooTFnBinding current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTFnBinding

//______________________________________________________________________________
void RooTFnPdfBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTFnPdfBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTFnPdfBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTFnPdfBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTFnPdfBinding(void *p) {
      return  p ? new(p) ::RooTFnPdfBinding : new ::RooTFnPdfBinding;
   }
   static void *newArray_RooTFnPdfBinding(Long_t nElements, void *p) {
      return p ? new(p) ::RooTFnPdfBinding[nElements] : new ::RooTFnPdfBinding[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTFnPdfBinding(void *p) {
      delete (static_cast<::RooTFnPdfBinding*>(p));
   }
   static void deleteArray_RooTFnPdfBinding(void *p) {
      delete [] (static_cast<::RooTFnPdfBinding*>(p));
   }
   static void destruct_RooTFnPdfBinding(void *p) {
      typedef ::RooTFnPdfBinding current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTFnPdfBinding

//______________________________________________________________________________
void RooUnblindCPAsymVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooUnblindCPAsymVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooUnblindCPAsymVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooUnblindCPAsymVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooUnblindCPAsymVar(void *p) {
      return  p ? new(p) ::RooUnblindCPAsymVar : new ::RooUnblindCPAsymVar;
   }
   static void *newArray_RooUnblindCPAsymVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooUnblindCPAsymVar[nElements] : new ::RooUnblindCPAsymVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooUnblindCPAsymVar(void *p) {
      delete (static_cast<::RooUnblindCPAsymVar*>(p));
   }
   static void deleteArray_RooUnblindCPAsymVar(void *p) {
      delete [] (static_cast<::RooUnblindCPAsymVar*>(p));
   }
   static void destruct_RooUnblindCPAsymVar(void *p) {
      typedef ::RooUnblindCPAsymVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooUnblindCPAsymVar

//______________________________________________________________________________
void RooUnblindOffset::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooUnblindOffset.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooUnblindOffset::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooUnblindOffset::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooUnblindOffset(void *p) {
      return  p ? new(p) ::RooUnblindOffset : new ::RooUnblindOffset;
   }
   static void *newArray_RooUnblindOffset(Long_t nElements, void *p) {
      return p ? new(p) ::RooUnblindOffset[nElements] : new ::RooUnblindOffset[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooUnblindOffset(void *p) {
      delete (static_cast<::RooUnblindOffset*>(p));
   }
   static void deleteArray_RooUnblindOffset(void *p) {
      delete [] (static_cast<::RooUnblindOffset*>(p));
   }
   static void destruct_RooUnblindOffset(void *p) {
      typedef ::RooUnblindOffset current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooUnblindOffset

//______________________________________________________________________________
void RooUnblindPrecision::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooUnblindPrecision.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooUnblindPrecision::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooUnblindPrecision::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooUnblindPrecision(void *p) {
      return  p ? new(p) ::RooUnblindPrecision : new ::RooUnblindPrecision;
   }
   static void *newArray_RooUnblindPrecision(Long_t nElements, void *p) {
      return p ? new(p) ::RooUnblindPrecision[nElements] : new ::RooUnblindPrecision[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooUnblindPrecision(void *p) {
      delete (static_cast<::RooUnblindPrecision*>(p));
   }
   static void deleteArray_RooUnblindPrecision(void *p) {
      delete [] (static_cast<::RooUnblindPrecision*>(p));
   }
   static void destruct_RooUnblindPrecision(void *p) {
      typedef ::RooUnblindPrecision current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooUnblindPrecision

//______________________________________________________________________________
void RooUnblindUniform::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooUnblindUniform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooUnblindUniform::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooUnblindUniform::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooUnblindUniform(void *p) {
      return  p ? new(p) ::RooUnblindUniform : new ::RooUnblindUniform;
   }
   static void *newArray_RooUnblindUniform(Long_t nElements, void *p) {
      return p ? new(p) ::RooUnblindUniform[nElements] : new ::RooUnblindUniform[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooUnblindUniform(void *p) {
      delete (static_cast<::RooUnblindUniform*>(p));
   }
   static void deleteArray_RooUnblindUniform(void *p) {
      delete [] (static_cast<::RooUnblindUniform*>(p));
   }
   static void destruct_RooUnblindUniform(void *p) {
      typedef ::RooUnblindUniform current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooUnblindUniform

//______________________________________________________________________________
void RooUniform::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooUniform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooUniform::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooUniform::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooUniform(void *p) {
      return  p ? new(p) ::RooUniform : new ::RooUniform;
   }
   static void *newArray_RooUniform(Long_t nElements, void *p) {
      return p ? new(p) ::RooUniform[nElements] : new ::RooUniform[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooUniform(void *p) {
      delete (static_cast<::RooUniform*>(p));
   }
   static void deleteArray_RooUniform(void *p) {
      delete [] (static_cast<::RooUniform*>(p));
   }
   static void destruct_RooUniform(void *p) {
      typedef ::RooUniform current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooUniform

//______________________________________________________________________________
void RooVoigtian::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooVoigtian.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooVoigtian::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooVoigtian::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooVoigtian(void *p) {
      return  p ? new(p) ::RooVoigtian : new ::RooVoigtian;
   }
   static void *newArray_RooVoigtian(Long_t nElements, void *p) {
      return p ? new(p) ::RooVoigtian[nElements] : new ::RooVoigtian[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooVoigtian(void *p) {
      delete (static_cast<::RooVoigtian*>(p));
   }
   static void deleteArray_RooVoigtian(void *p) {
      delete [] (static_cast<::RooVoigtian*>(p));
   }
   static void destruct_RooVoigtian(void *p) {
      typedef ::RooVoigtian current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooVoigtian

//______________________________________________________________________________
void RooJohnson::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooJohnson.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooJohnson::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooJohnson::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooJohnson(void *p) {
      return  p ? new(p) ::RooJohnson : new ::RooJohnson;
   }
   static void *newArray_RooJohnson(Long_t nElements, void *p) {
      return p ? new(p) ::RooJohnson[nElements] : new ::RooJohnson[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooJohnson(void *p) {
      delete (static_cast<::RooJohnson*>(p));
   }
   static void deleteArray_RooJohnson(void *p) {
      delete [] (static_cast<::RooJohnson*>(p));
   }
   static void destruct_RooJohnson(void *p) {
      typedef ::RooJohnson current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooJohnson

namespace ROOT {
   static TClass *vectorlEvectorlEstringgRsPgR_Dictionary();
   static void vectorlEvectorlEstringgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEstringgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEstringgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEstringgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEstringgRsPgR(void *p);
   static void destruct_vectorlEvectorlEstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<string> >*)
   {
      vector<vector<string> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<string> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<string> >", -2, "functional", 86,
                  typeid(vector<vector<string> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEstringgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<string> >) );
      instance.SetNew(&new_vectorlEvectorlEstringgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEstringgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEstringgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<string> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<string> >","std::__1::vector<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>, std::__1::allocator<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<string> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<string> >*>(nullptr))->GetClass();
      vectorlEvectorlEstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEstringgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<string> > : new vector<vector<string> >;
   }
   static void *newArray_vectorlEvectorlEstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<string> >[nElements] : new vector<vector<string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEstringgRsPgR(void *p) {
      delete (static_cast<vector<vector<string> >*>(p));
   }
   static void deleteArray_vectorlEvectorlEstringgRsPgR(void *p) {
      delete [] (static_cast<vector<vector<string> >*>(p));
   }
   static void destruct_vectorlEvectorlEstringgRsPgR(void *p) {
      typedef vector<vector<string> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<string> >

namespace ROOT {
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary();
   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p);
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<double> >*)
   {
      vector<vector<double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<double> >", -2, "functional", 86,
                  typeid(vector<vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<double> >) );
      instance.SetNew(&new_vectorlEvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<double> >","std::__1::vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<double> >*>(nullptr))->GetClass();
      vectorlEvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<double> > : new vector<vector<double> >;
   }
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<double> >[nElements] : new vector<vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete (static_cast<vector<vector<double> >*>(p));
   }
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete [] (static_cast<vector<vector<double> >*>(p));
   }
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p) {
      typedef vector<vector<double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<double> >

namespace ROOT {
   static TClass *vectorlEvectorlEconstsPcharmUgRsPgR_Dictionary();
   static void vectorlEvectorlEconstsPcharmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEconstsPcharmUgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEconstsPcharmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEconstsPcharmUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEconstsPcharmUgRsPgR(void *p);
   static void destruct_vectorlEvectorlEconstsPcharmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<const char*> >*)
   {
      vector<vector<const char*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<const char*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<const char*> >", -2, "functional", 86,
                  typeid(vector<vector<const char*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEconstsPcharmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<const char*> >) );
      instance.SetNew(&new_vectorlEvectorlEconstsPcharmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEconstsPcharmUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEconstsPcharmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEconstsPcharmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEconstsPcharmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<const char*> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<const char*> >","std::__1::vector<std::__1::vector<char const*, std::__1::allocator<char const*>>, std::__1::allocator<std::__1::vector<char const*, std::__1::allocator<char const*>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<const char*> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEconstsPcharmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<const char*> >*>(nullptr))->GetClass();
      vectorlEvectorlEconstsPcharmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEconstsPcharmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEconstsPcharmUgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<const char*> > : new vector<vector<const char*> >;
   }
   static void *newArray_vectorlEvectorlEconstsPcharmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<const char*> >[nElements] : new vector<vector<const char*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEconstsPcharmUgRsPgR(void *p) {
      delete (static_cast<vector<vector<const char*> >*>(p));
   }
   static void deleteArray_vectorlEvectorlEconstsPcharmUgRsPgR(void *p) {
      delete [] (static_cast<vector<vector<const char*> >*>(p));
   }
   static void destruct_vectorlEvectorlEconstsPcharmUgRsPgR(void *p) {
      typedef vector<vector<const char*> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<const char*> >

namespace ROOT {
   static TClass *vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR_Dictionary();
   static void vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR(void *p);
   static void destruct_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<RooCollectionProxy<RooArgList>*> >*)
   {
      vector<vector<RooCollectionProxy<RooArgList>*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<RooCollectionProxy<RooArgList>*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<RooCollectionProxy<RooArgList>*> >", -2, "functional", 86,
                  typeid(vector<vector<RooCollectionProxy<RooArgList>*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<RooCollectionProxy<RooArgList>*> >) );
      instance.SetNew(&new_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<RooCollectionProxy<RooArgList>*> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<RooCollectionProxy<RooArgList>*> >","std::__1::vector<std::__1::vector<RooCollectionProxy<RooArgList>*, std::__1::allocator<RooCollectionProxy<RooArgList>*>>, std::__1::allocator<std::__1::vector<RooCollectionProxy<RooArgList>*, std::__1::allocator<RooCollectionProxy<RooArgList>*>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<RooCollectionProxy<RooArgList>*> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<RooCollectionProxy<RooArgList>*> >*>(nullptr))->GetClass();
      vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<RooCollectionProxy<RooArgList>*> > : new vector<vector<RooCollectionProxy<RooArgList>*> >;
   }
   static void *newArray_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<RooCollectionProxy<RooArgList>*> >[nElements] : new vector<vector<RooCollectionProxy<RooArgList>*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR(void *p) {
      delete (static_cast<vector<vector<RooCollectionProxy<RooArgList>*> >*>(p));
   }
   static void deleteArray_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR(void *p) {
      delete [] (static_cast<vector<vector<RooCollectionProxy<RooArgList>*> >*>(p));
   }
   static void destruct_vectorlEvectorlERooCollectionProxylERooArgListgRmUgRsPgR(void *p) {
      typedef vector<vector<RooCollectionProxy<RooArgList>*> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<RooCollectionProxy<RooArgList>*> >

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
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "functional", 86,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<int>","std::__1::vector<int, std::__1::allocator<int>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

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
         instance("vector<double>", -2, "functional", 86,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
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
         instance("vector<const char*>", -2, "functional", 86,
                  typeid(vector<const char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPcharmUgR_Dictionary, isa_proxy, 0,
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
   static TClass *vectorlETVectorTlEdoublegRsPgR_Dictionary();
   static void vectorlETVectorTlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlETVectorTlEdoublegRsPgR(void *p = nullptr);
   static void *newArray_vectorlETVectorTlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlETVectorTlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlETVectorTlEdoublegRsPgR(void *p);
   static void destruct_vectorlETVectorTlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TVectorT<double> >*)
   {
      vector<TVectorT<double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TVectorT<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TVectorT<double> >", -2, "functional", 86,
                  typeid(vector<TVectorT<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETVectorTlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TVectorT<double> >) );
      instance.SetNew(&new_vectorlETVectorTlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlETVectorTlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlETVectorTlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlETVectorTlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlETVectorTlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TVectorT<double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TVectorT<double> >","std::__1::vector<TVectorT<double>, std::__1::allocator<TVectorT<double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TVectorT<double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETVectorTlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TVectorT<double> >*>(nullptr))->GetClass();
      vectorlETVectorTlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETVectorTlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETVectorTlEdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TVectorT<double> > : new vector<TVectorT<double> >;
   }
   static void *newArray_vectorlETVectorTlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TVectorT<double> >[nElements] : new vector<TVectorT<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETVectorTlEdoublegRsPgR(void *p) {
      delete (static_cast<vector<TVectorT<double> >*>(p));
   }
   static void deleteArray_vectorlETVectorTlEdoublegRsPgR(void *p) {
      delete [] (static_cast<vector<TVectorT<double> >*>(p));
   }
   static void destruct_vectorlETVectorTlEdoublegRsPgR(void *p) {
      typedef vector<TVectorT<double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TVectorT<double> >

namespace ROOT {
   static TClass *vectorlERooCollectionProxylERooArgListgRmUgR_Dictionary();
   static void vectorlERooCollectionProxylERooArgListgRmUgR_TClassManip(TClass*);
   static void *new_vectorlERooCollectionProxylERooArgListgRmUgR(void *p = nullptr);
   static void *newArray_vectorlERooCollectionProxylERooArgListgRmUgR(Long_t size, void *p);
   static void delete_vectorlERooCollectionProxylERooArgListgRmUgR(void *p);
   static void deleteArray_vectorlERooCollectionProxylERooArgListgRmUgR(void *p);
   static void destruct_vectorlERooCollectionProxylERooArgListgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooCollectionProxy<RooArgList>*>*)
   {
      vector<RooCollectionProxy<RooArgList>*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooCollectionProxy<RooArgList>*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooCollectionProxy<RooArgList>*>", -2, "functional", 86,
                  typeid(vector<RooCollectionProxy<RooArgList>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooCollectionProxylERooArgListgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooCollectionProxy<RooArgList>*>) );
      instance.SetNew(&new_vectorlERooCollectionProxylERooArgListgRmUgR);
      instance.SetNewArray(&newArray_vectorlERooCollectionProxylERooArgListgRmUgR);
      instance.SetDelete(&delete_vectorlERooCollectionProxylERooArgListgRmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooCollectionProxylERooArgListgRmUgR);
      instance.SetDestructor(&destruct_vectorlERooCollectionProxylERooArgListgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooCollectionProxy<RooArgList>*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooCollectionProxy<RooArgList>*>","std::__1::vector<RooCollectionProxy<RooArgList>*, std::__1::allocator<RooCollectionProxy<RooArgList>*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooCollectionProxy<RooArgList>*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooCollectionProxylERooArgListgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooCollectionProxy<RooArgList>*>*>(nullptr))->GetClass();
      vectorlERooCollectionProxylERooArgListgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooCollectionProxylERooArgListgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooCollectionProxylERooArgListgRmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooCollectionProxy<RooArgList>*> : new vector<RooCollectionProxy<RooArgList>*>;
   }
   static void *newArray_vectorlERooCollectionProxylERooArgListgRmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooCollectionProxy<RooArgList>*>[nElements] : new vector<RooCollectionProxy<RooArgList>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooCollectionProxylERooArgListgRmUgR(void *p) {
      delete (static_cast<vector<RooCollectionProxy<RooArgList>*>*>(p));
   }
   static void deleteArray_vectorlERooCollectionProxylERooArgListgRmUgR(void *p) {
      delete [] (static_cast<vector<RooCollectionProxy<RooArgList>*>*>(p));
   }
   static void destruct_vectorlERooCollectionProxylERooArgListgRmUgR(void *p) {
      typedef vector<RooCollectionProxy<RooArgList>*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooCollectionProxy<RooArgList>*>

namespace ROOT {
   static TClass *vectorlERooArgListmUgR_Dictionary();
   static void vectorlERooArgListmUgR_TClassManip(TClass*);
   static void *new_vectorlERooArgListmUgR(void *p = nullptr);
   static void *newArray_vectorlERooArgListmUgR(Long_t size, void *p);
   static void delete_vectorlERooArgListmUgR(void *p);
   static void deleteArray_vectorlERooArgListmUgR(void *p);
   static void destruct_vectorlERooArgListmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooArgList*>*)
   {
      vector<RooArgList*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooArgList*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooArgList*>", -2, "functional", 86,
                  typeid(vector<RooArgList*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooArgListmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooArgList*>) );
      instance.SetNew(&new_vectorlERooArgListmUgR);
      instance.SetNewArray(&newArray_vectorlERooArgListmUgR);
      instance.SetDelete(&delete_vectorlERooArgListmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooArgListmUgR);
      instance.SetDestructor(&destruct_vectorlERooArgListmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooArgList*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooArgList*>","std::__1::vector<RooArgList*, std::__1::allocator<RooArgList*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooArgList*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooArgListmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooArgList*>*>(nullptr))->GetClass();
      vectorlERooArgListmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooArgListmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooArgListmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooArgList*> : new vector<RooArgList*>;
   }
   static void *newArray_vectorlERooArgListmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooArgList*>[nElements] : new vector<RooArgList*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooArgListmUgR(void *p) {
      delete (static_cast<vector<RooArgList*>*>(p));
   }
   static void deleteArray_vectorlERooArgListmUgR(void *p) {
      delete [] (static_cast<vector<RooArgList*>*>(p));
   }
   static void destruct_vectorlERooArgListmUgR(void *p) {
      typedef vector<RooArgList*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooArgList*>

namespace ROOT {
   static TClass *vectorlERooAbsBinningmUgR_Dictionary();
   static void vectorlERooAbsBinningmUgR_TClassManip(TClass*);
   static void *new_vectorlERooAbsBinningmUgR(void *p = nullptr);
   static void *newArray_vectorlERooAbsBinningmUgR(Long_t size, void *p);
   static void delete_vectorlERooAbsBinningmUgR(void *p);
   static void deleteArray_vectorlERooAbsBinningmUgR(void *p);
   static void destruct_vectorlERooAbsBinningmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooAbsBinning*>*)
   {
      vector<RooAbsBinning*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooAbsBinning*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooAbsBinning*>", -2, "functional", 86,
                  typeid(vector<RooAbsBinning*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooAbsBinningmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooAbsBinning*>) );
      instance.SetNew(&new_vectorlERooAbsBinningmUgR);
      instance.SetNewArray(&newArray_vectorlERooAbsBinningmUgR);
      instance.SetDelete(&delete_vectorlERooAbsBinningmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooAbsBinningmUgR);
      instance.SetDestructor(&destruct_vectorlERooAbsBinningmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooAbsBinning*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooAbsBinning*>","std::__1::vector<RooAbsBinning*, std::__1::allocator<RooAbsBinning*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooAbsBinning*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooAbsBinningmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooAbsBinning*>*>(nullptr))->GetClass();
      vectorlERooAbsBinningmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooAbsBinningmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooAbsBinningmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooAbsBinning*> : new vector<RooAbsBinning*>;
   }
   static void *newArray_vectorlERooAbsBinningmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooAbsBinning*>[nElements] : new vector<RooAbsBinning*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooAbsBinningmUgR(void *p) {
      delete (static_cast<vector<RooAbsBinning*>*>(p));
   }
   static void deleteArray_vectorlERooAbsBinningmUgR(void *p) {
      delete [] (static_cast<vector<RooAbsBinning*>*>(p));
   }
   static void destruct_vectorlERooAbsBinningmUgR(void *p) {
      typedef vector<RooAbsBinning*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooAbsBinning*>

namespace ROOT {
   static TClass *maplEvectorlEintgRcOintgR_Dictionary();
   static void maplEvectorlEintgRcOintgR_TClassManip(TClass*);
   static void *new_maplEvectorlEintgRcOintgR(void *p = nullptr);
   static void *newArray_maplEvectorlEintgRcOintgR(Long_t size, void *p);
   static void delete_maplEvectorlEintgRcOintgR(void *p);
   static void deleteArray_maplEvectorlEintgRcOintgR(void *p);
   static void destruct_maplEvectorlEintgRcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<vector<int>,int>*)
   {
      map<vector<int>,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<vector<int>,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<vector<int>,int>", -2, "map", 975,
                  typeid(map<vector<int>,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEvectorlEintgRcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<vector<int>,int>) );
      instance.SetNew(&new_maplEvectorlEintgRcOintgR);
      instance.SetNewArray(&newArray_maplEvectorlEintgRcOintgR);
      instance.SetDelete(&delete_maplEvectorlEintgRcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEvectorlEintgRcOintgR);
      instance.SetDestructor(&destruct_maplEvectorlEintgRcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<vector<int>,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<vector<int>,int>","std::__1::map<std::__1::vector<int, std::__1::allocator<int>>, int, std::__1::less<std::__1::vector<int, std::__1::allocator<int>>>, std::__1::allocator<std::__1::pair<std::__1::vector<int, std::__1::allocator<int>> const, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<vector<int>,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEvectorlEintgRcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<vector<int>,int>*>(nullptr))->GetClass();
      maplEvectorlEintgRcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEvectorlEintgRcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEvectorlEintgRcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<vector<int>,int> : new map<vector<int>,int>;
   }
   static void *newArray_maplEvectorlEintgRcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<vector<int>,int>[nElements] : new map<vector<int>,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEvectorlEintgRcOintgR(void *p) {
      delete (static_cast<map<vector<int>,int>*>(p));
   }
   static void deleteArray_maplEvectorlEintgRcOintgR(void *p) {
      delete [] (static_cast<map<vector<int>,int>*>(p));
   }
   static void destruct_maplEvectorlEintgRcOintgR(void *p) {
      typedef map<vector<int>,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<vector<int>,int>

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
                  &maplEstringcOintgR_Dictionary, isa_proxy, 0,
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
   static TClass *maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR_Dictionary();
   static void maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR_TClassManip(TClass*);
   static void *new_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p = nullptr);
   static void *newArray_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(Long_t size, void *p);
   static void delete_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p);
   static void deleteArray_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p);
   static void destruct_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<string,int>,RooNDKeysPdf::BoxInfo*>*)
   {
      map<pair<string,int>,RooNDKeysPdf::BoxInfo*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<string,int>,RooNDKeysPdf::BoxInfo*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<string,int>,RooNDKeysPdf::BoxInfo*>", -2, "map", 975,
                  typeid(map<pair<string,int>,RooNDKeysPdf::BoxInfo*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<string,int>,RooNDKeysPdf::BoxInfo*>) );
      instance.SetNew(&new_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR);
      instance.SetNewArray(&newArray_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR);
      instance.SetDelete(&delete_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR);
      instance.SetDestructor(&destruct_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<string,int>,RooNDKeysPdf::BoxInfo*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<pair<string,int>,RooNDKeysPdf::BoxInfo*>","std::__1::map<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, int>, RooNDKeysPdf::BoxInfo*, std::__1::less<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, int>>, std::__1::allocator<std::__1::pair<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, int> const, RooNDKeysPdf::BoxInfo*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<pair<string,int>,RooNDKeysPdf::BoxInfo*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<pair<string,int>,RooNDKeysPdf::BoxInfo*>*>(nullptr))->GetClass();
      maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<pair<string,int>,RooNDKeysPdf::BoxInfo*> : new map<pair<string,int>,RooNDKeysPdf::BoxInfo*>;
   }
   static void *newArray_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<pair<string,int>,RooNDKeysPdf::BoxInfo*>[nElements] : new map<pair<string,int>,RooNDKeysPdf::BoxInfo*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p) {
      delete (static_cast<map<pair<string,int>,RooNDKeysPdf::BoxInfo*>*>(p));
   }
   static void deleteArray_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p) {
      delete [] (static_cast<map<pair<string,int>,RooNDKeysPdf::BoxInfo*>*>(p));
   }
   static void destruct_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p) {
      typedef map<pair<string,int>,RooNDKeysPdf::BoxInfo*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<pair<string,int>,RooNDKeysPdf::BoxInfo*>

namespace ROOT {
   static TClass *maplEintcOdoublegR_Dictionary();
   static void maplEintcOdoublegR_TClassManip(TClass*);
   static void *new_maplEintcOdoublegR(void *p = nullptr);
   static void *newArray_maplEintcOdoublegR(Long_t size, void *p);
   static void delete_maplEintcOdoublegR(void *p);
   static void deleteArray_maplEintcOdoublegR(void *p);
   static void destruct_maplEintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,double>*)
   {
      map<int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,double>", -2, "map", 975,
                  typeid(map<int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,double>) );
      instance.SetNew(&new_maplEintcOdoublegR);
      instance.SetNewArray(&newArray_maplEintcOdoublegR);
      instance.SetDelete(&delete_maplEintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEintcOdoublegR);
      instance.SetDestructor(&destruct_maplEintcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,double>","std::__1::map<int, double, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,double>*>(nullptr))->GetClass();
      maplEintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,double> : new map<int,double>;
   }
   static void *newArray_maplEintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,double>[nElements] : new map<int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOdoublegR(void *p) {
      delete (static_cast<map<int,double>*>(p));
   }
   static void deleteArray_maplEintcOdoublegR(void *p) {
      delete [] (static_cast<map<int,double>*>(p));
   }
   static void destruct_maplEintcOdoublegR(void *p) {
      typedef map<int,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,double>

namespace ROOT {
   static TClass *maplEintcOboolgR_Dictionary();
   static void maplEintcOboolgR_TClassManip(TClass*);
   static void *new_maplEintcOboolgR(void *p = nullptr);
   static void *newArray_maplEintcOboolgR(Long_t size, void *p);
   static void delete_maplEintcOboolgR(void *p);
   static void deleteArray_maplEintcOboolgR(void *p);
   static void destruct_maplEintcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,bool>*)
   {
      map<int,bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,bool>", -2, "map", 975,
                  typeid(map<int,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOboolgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,bool>) );
      instance.SetNew(&new_maplEintcOboolgR);
      instance.SetNewArray(&newArray_maplEintcOboolgR);
      instance.SetDelete(&delete_maplEintcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOboolgR);
      instance.SetDestructor(&destruct_maplEintcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,bool> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,bool>","std::__1::map<int, bool, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, bool>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,bool>*>(nullptr))->GetClass();
      maplEintcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOboolgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,bool> : new map<int,bool>;
   }
   static void *newArray_maplEintcOboolgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,bool>[nElements] : new map<int,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOboolgR(void *p) {
      delete (static_cast<map<int,bool>*>(p));
   }
   static void deleteArray_maplEintcOboolgR(void *p) {
      delete [] (static_cast<map<int,bool>*>(p));
   }
   static void destruct_maplEintcOboolgR(void *p) {
      typedef map<int,bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,bool>

namespace ROOT {
   static TClass *maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR_Dictionary();
   static void maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR_TClassManip(TClass*);
   static void *new_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR(void *p = nullptr);
   static void *newArray_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR(Long_t size, void *p);
   static void delete_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR(void *p);
   static void deleteArray_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR(void *p);
   static void destruct_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<const string,map<const string,int> >*)
   {
      map<const string,map<const string,int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<const string,map<const string,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<const string,map<const string,int> >", -2, "map", 975,
                  typeid(map<const string,map<const string,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<const string,map<const string,int> >) );
      instance.SetNew(&new_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR);
      instance.SetNewArray(&newArray_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR);
      instance.SetDelete(&delete_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR);
      instance.SetDestructor(&destruct_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<const string,map<const string,int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<const string,map<const string,int> >","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, int, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, int>>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, int, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, int>>>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<const string,map<const string,int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<const string,map<const string,int> >*>(nullptr))->GetClass();
      maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,map<const string,int> > : new map<const string,map<const string,int> >;
   }
   static void *newArray_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,map<const string,int> >[nElements] : new map<const string,map<const string,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR(void *p) {
      delete (static_cast<map<const string,map<const string,int> >*>(p));
   }
   static void deleteArray_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR(void *p) {
      delete [] (static_cast<map<const string,map<const string,int> >*>(p));
   }
   static void destruct_maplEconstsPstringcOmaplEconstsPstringcOintgRsPgR(void *p) {
      typedef map<const string,map<const string,int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<const string,map<const string,int> >

namespace ROOT {
   static TClass *maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR_Dictionary();
   static void maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR(void *p = nullptr);
   static void *newArray_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR(void *p);
   static void deleteArray_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR(void *p);
   static void destruct_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<const string,map<const string,double> >*)
   {
      map<const string,map<const string,double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<const string,map<const string,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<const string,map<const string,double> >", -2, "map", 975,
                  typeid(map<const string,map<const string,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<const string,map<const string,double> >) );
      instance.SetNew(&new_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR);
      instance.SetDelete(&delete_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<const string,map<const string,double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<const string,map<const string,double> >","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, double, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, double>>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, double, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, double>>>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<const string,map<const string,double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<const string,map<const string,double> >*>(nullptr))->GetClass();
      maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,map<const string,double> > : new map<const string,map<const string,double> >;
   }
   static void *newArray_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,map<const string,double> >[nElements] : new map<const string,map<const string,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR(void *p) {
      delete (static_cast<map<const string,map<const string,double> >*>(p));
   }
   static void deleteArray_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR(void *p) {
      delete [] (static_cast<map<const string,map<const string,double> >*>(p));
   }
   static void destruct_maplEconstsPstringcOmaplEconstsPstringcOdoublegRsPgR(void *p) {
      typedef map<const string,map<const string,double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<const string,map<const string,double> >

namespace ROOT {
   static TClass *maplEconstsPstringcOintgR_Dictionary();
   static void maplEconstsPstringcOintgR_TClassManip(TClass*);
   static void *new_maplEconstsPstringcOintgR(void *p = nullptr);
   static void *newArray_maplEconstsPstringcOintgR(Long_t size, void *p);
   static void delete_maplEconstsPstringcOintgR(void *p);
   static void deleteArray_maplEconstsPstringcOintgR(void *p);
   static void destruct_maplEconstsPstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<const string,int>*)
   {
      map<const string,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<const string,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<const string,int>", -2, "map", 975,
                  typeid(map<const string,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEconstsPstringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<const string,int>) );
      instance.SetNew(&new_maplEconstsPstringcOintgR);
      instance.SetNewArray(&newArray_maplEconstsPstringcOintgR);
      instance.SetDelete(&delete_maplEconstsPstringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEconstsPstringcOintgR);
      instance.SetDestructor(&destruct_maplEconstsPstringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<const string,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<const string,int>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, int, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<const string,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEconstsPstringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<const string,int>*>(nullptr))->GetClass();
      maplEconstsPstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEconstsPstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEconstsPstringcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,int> : new map<const string,int>;
   }
   static void *newArray_maplEconstsPstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,int>[nElements] : new map<const string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEconstsPstringcOintgR(void *p) {
      delete (static_cast<map<const string,int>*>(p));
   }
   static void deleteArray_maplEconstsPstringcOintgR(void *p) {
      delete [] (static_cast<map<const string,int>*>(p));
   }
   static void destruct_maplEconstsPstringcOintgR(void *p) {
      typedef map<const string,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<const string,int>

namespace ROOT {
   static TClass *maplEconstsPstringcOdoublegR_Dictionary();
   static void maplEconstsPstringcOdoublegR_TClassManip(TClass*);
   static void *new_maplEconstsPstringcOdoublegR(void *p = nullptr);
   static void *newArray_maplEconstsPstringcOdoublegR(Long_t size, void *p);
   static void delete_maplEconstsPstringcOdoublegR(void *p);
   static void deleteArray_maplEconstsPstringcOdoublegR(void *p);
   static void destruct_maplEconstsPstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<const string,double>*)
   {
      map<const string,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<const string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<const string,double>", -2, "map", 975,
                  typeid(map<const string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEconstsPstringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<const string,double>) );
      instance.SetNew(&new_maplEconstsPstringcOdoublegR);
      instance.SetNewArray(&newArray_maplEconstsPstringcOdoublegR);
      instance.SetDelete(&delete_maplEconstsPstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEconstsPstringcOdoublegR);
      instance.SetDestructor(&destruct_maplEconstsPstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<const string,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<const string,double>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, double, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<const string,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEconstsPstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<const string,double>*>(nullptr))->GetClass();
      maplEconstsPstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEconstsPstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEconstsPstringcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,double> : new map<const string,double>;
   }
   static void *newArray_maplEconstsPstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<const string,double>[nElements] : new map<const string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEconstsPstringcOdoublegR(void *p) {
      delete (static_cast<map<const string,double>*>(p));
   }
   static void deleteArray_maplEconstsPstringcOdoublegR(void *p) {
      delete [] (static_cast<map<const string,double>*>(p));
   }
   static void destruct_maplEconstsPstringcOdoublegR(void *p) {
      typedef map<const string,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<const string,double>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libRooFit() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libRooFit) = RecordReadRules_libRooFit();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libRooFit));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libRooFit_Impl() {
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
      TROOT::RegisterModule("libRooFit",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRooFit_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRooFit_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRooFit() {
  TriggerDictionaryInitialization_libRooFit_Impl();
}
