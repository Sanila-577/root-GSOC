//Code generated automatically by TMVA for Inference of Model file [Linear_16.onnx] at [Thu Mar 12 03:47:27 2026] 

#ifndef ROOT_TMVA_SOFIE_LINEAR_16
#define ROOT_TMVA_SOFIE_LINEAR_16

#include <algorithm>
#include <vector>
#include "TMVA/SOFIE_common.hxx"
#include <fstream>

namespace TMVA_SOFIE_Linear_16{
namespace BLAS{
	extern "C" void sgemv_(const char * trans, const int * m, const int * n, const float * alpha, const float * A,
	                       const int * lda, const float * X, const int * incx, const float * beta, const float * Y, const int * incy);
	extern "C" void sgemm_(const char * transa, const char * transb, const int * m, const int * n, const int * k,
	                       const float * alpha, const float * A, const int * lda, const float * B, const int * ldb,
	                       const float * beta, float * C, const int * ldc);
}//BLAS
struct Session {
// initialized (weights and constant) tensors
std::vector<float> fTensor_6bias = std::vector<float>(50);
float * tensor_6bias = fTensor_6bias.data();
std::vector<float> fTensor_4weight = std::vector<float>(2500);
float * tensor_4weight = fTensor_4weight.data();
std::vector<float> fTensor_2bias = std::vector<float>(50);
float * tensor_2bias = fTensor_2bias.data();
std::vector<float> fTensor_8weight = std::vector<float>(2500);
float * tensor_8weight = fTensor_8weight.data();
std::vector<float> fTensor_18weight = std::vector<float>(500);
float * tensor_18weight = fTensor_18weight.data();
std::vector<float> fTensor_4bias = std::vector<float>(50);
float * tensor_4bias = fTensor_4bias.data();
std::vector<float> fTensor_2weight = std::vector<float>(2500);
float * tensor_2weight = fTensor_2weight.data();
std::vector<float> fTensor_14bias = std::vector<float>(50);
float * tensor_14bias = fTensor_14bias.data();
std::vector<float> fTensor_16weight = std::vector<float>(2500);
float * tensor_16weight = fTensor_16weight.data();
std::vector<float> fTensor_18bias = std::vector<float>(10);
float * tensor_18bias = fTensor_18bias.data();
std::vector<float> fTensor_16bias = std::vector<float>(50);
float * tensor_16bias = fTensor_16bias.data();
std::vector<float> fTensor_8bias = std::vector<float>(50);
float * tensor_8bias = fTensor_8bias.data();
std::vector<float> fTensor_6weight = std::vector<float>(2500);
float * tensor_6weight = fTensor_6weight.data();
std::vector<float> fTensor_14weight = std::vector<float>(2500);
float * tensor_14weight = fTensor_14weight.data();
std::vector<float> fTensor_12weight = std::vector<float>(2500);
float * tensor_12weight = fTensor_12weight.data();
std::vector<float> fTensor_10weight = std::vector<float>(2500);
float * tensor_10weight = fTensor_10weight.data();
std::vector<float> fTensor_0bias = std::vector<float>(50);
float * tensor_0bias = fTensor_0bias.data();
std::vector<float> fTensor_12bias = std::vector<float>(50);
float * tensor_12bias = fTensor_12bias.data();
std::vector<float> fTensor_10bias = std::vector<float>(50);
float * tensor_10bias = fTensor_10bias.data();
std::vector<float> fTensor_0weight = std::vector<float>(5000);
float * tensor_0weight = fTensor_0weight.data();

//--- Allocating session memory pool to be used for allocating intermediate tensors
std::vector<char> fIntermediateMemoryPool = std::vector<char>(6400);


// --- Positioning intermediate tensor memory --
 // Allocating memory for intermediate tensor 22 with size 3200 bytes
float* tensor_22 = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor 24 with size 3200 bytes
float* tensor_24 = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 3200);

 // Allocating memory for intermediate tensor 26 with size 3200 bytes
float* tensor_26 = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor 28 with size 3200 bytes
float* tensor_28 = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 3200);

 // Allocating memory for intermediate tensor 30 with size 3200 bytes
float* tensor_30 = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor 32 with size 3200 bytes
float* tensor_32 = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 3200);

 // Allocating memory for intermediate tensor 34 with size 3200 bytes
float* tensor_34 = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor 36 with size 3200 bytes
float* tensor_36 = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 3200);

 // Allocating memory for intermediate tensor 38 with size 3200 bytes
float* tensor_38 = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor 39 with size 640 bytes
float* tensor_39 = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 5760);


Session(std::string filename ="Linear_16.dat") {

//--- reading weights from file
   std::ifstream f;
   f.open(filename);
   if (!f.is_open()) {
      throw std::runtime_error("tmva-sofie failed to open file " + filename + " for input weights");
   }
   using TMVA::Experimental::SOFIE::ReadTensorFromStream;
   ReadTensorFromStream(f, tensor_6bias, "tensor_6bias", 50);
   ReadTensorFromStream(f, tensor_4weight, "tensor_4weight", 2500);
   ReadTensorFromStream(f, tensor_2bias, "tensor_2bias", 50);
   ReadTensorFromStream(f, tensor_8weight, "tensor_8weight", 2500);
   ReadTensorFromStream(f, tensor_18weight, "tensor_18weight", 500);
   ReadTensorFromStream(f, tensor_4bias, "tensor_4bias", 50);
   ReadTensorFromStream(f, tensor_2weight, "tensor_2weight", 2500);
   ReadTensorFromStream(f, tensor_14bias, "tensor_14bias", 50);
   ReadTensorFromStream(f, tensor_16weight, "tensor_16weight", 2500);
   ReadTensorFromStream(f, tensor_18bias, "tensor_18bias", 10);
   ReadTensorFromStream(f, tensor_16bias, "tensor_16bias", 50);
   ReadTensorFromStream(f, tensor_8bias, "tensor_8bias", 50);
   ReadTensorFromStream(f, tensor_6weight, "tensor_6weight", 2500);
   ReadTensorFromStream(f, tensor_14weight, "tensor_14weight", 2500);
   ReadTensorFromStream(f, tensor_12weight, "tensor_12weight", 2500);
   ReadTensorFromStream(f, tensor_10weight, "tensor_10weight", 2500);
   ReadTensorFromStream(f, tensor_0bias, "tensor_0bias", 50);
   ReadTensorFromStream(f, tensor_12bias, "tensor_12bias", 50);
   ReadTensorFromStream(f, tensor_10bias, "tensor_10bias", 50);
   ReadTensorFromStream(f, tensor_0weight, "tensor_0weight", 5000);
   f.close();

}

void doInfer(float const* tensor_input1,  std::vector<float> &output_tensor_39 ){


//--------- Gemm op_0 { 16 , 100 } * { 50 , 100 } -> { 16 , 50 }
   for (size_t j = 0; j < 16; j++) { 
      size_t y_index = 50 * j;
      for (size_t k = 0; k < 50; k++) { 
         tensor_22[y_index + k] = tensor_0bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_22, true, false, 50, 16, 100, 1, tensor_0weight, tensor_input1, 1,nullptr);
   for (int id = 0; id < 800 ; id++){
      tensor_22[id] = ((tensor_22[id] > 0 )? tensor_22[id] : 0);
   }

//--------- Gemm op_1 { 16 , 50 } * { 50 , 50 } -> { 16 , 50 }
   for (size_t j = 0; j < 16; j++) { 
      size_t y_index = 50 * j;
      for (size_t k = 0; k < 50; k++) { 
         tensor_24[y_index + k] = tensor_2bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_24, true, false, 50, 16, 50, 1, tensor_2weight, tensor_22, 1,nullptr);
   for (int id = 0; id < 800 ; id++){
      tensor_24[id] = ((tensor_24[id] > 0 )? tensor_24[id] : 0);
   }

//--------- Gemm op_2 { 16 , 50 } * { 50 , 50 } -> { 16 , 50 }
   for (size_t j = 0; j < 16; j++) { 
      size_t y_index = 50 * j;
      for (size_t k = 0; k < 50; k++) { 
         tensor_26[y_index + k] = tensor_4bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_26, true, false, 50, 16, 50, 1, tensor_4weight, tensor_24, 1,nullptr);
   for (int id = 0; id < 800 ; id++){
      tensor_26[id] = ((tensor_26[id] > 0 )? tensor_26[id] : 0);
   }

//--------- Gemm op_3 { 16 , 50 } * { 50 , 50 } -> { 16 , 50 }
   for (size_t j = 0; j < 16; j++) { 
      size_t y_index = 50 * j;
      for (size_t k = 0; k < 50; k++) { 
         tensor_28[y_index + k] = tensor_6bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_28, true, false, 50, 16, 50, 1, tensor_6weight, tensor_26, 1,nullptr);
   for (int id = 0; id < 800 ; id++){
      tensor_28[id] = ((tensor_28[id] > 0 )? tensor_28[id] : 0);
   }

//--------- Gemm op_4 { 16 , 50 } * { 50 , 50 } -> { 16 , 50 }
   for (size_t j = 0; j < 16; j++) { 
      size_t y_index = 50 * j;
      for (size_t k = 0; k < 50; k++) { 
         tensor_30[y_index + k] = tensor_8bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_30, true, false, 50, 16, 50, 1, tensor_8weight, tensor_28, 1,nullptr);
   for (int id = 0; id < 800 ; id++){
      tensor_30[id] = ((tensor_30[id] > 0 )? tensor_30[id] : 0);
   }

//--------- Gemm op_5 { 16 , 50 } * { 50 , 50 } -> { 16 , 50 }
   for (size_t j = 0; j < 16; j++) { 
      size_t y_index = 50 * j;
      for (size_t k = 0; k < 50; k++) { 
         tensor_32[y_index + k] = tensor_10bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_32, true, false, 50, 16, 50, 1, tensor_10weight, tensor_30, 1,nullptr);
   for (int id = 0; id < 800 ; id++){
      tensor_32[id] = ((tensor_32[id] > 0 )? tensor_32[id] : 0);
   }

//--------- Gemm op_6 { 16 , 50 } * { 50 , 50 } -> { 16 , 50 }
   for (size_t j = 0; j < 16; j++) { 
      size_t y_index = 50 * j;
      for (size_t k = 0; k < 50; k++) { 
         tensor_34[y_index + k] = tensor_12bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_34, true, false, 50, 16, 50, 1, tensor_12weight, tensor_32, 1,nullptr);
   for (int id = 0; id < 800 ; id++){
      tensor_34[id] = ((tensor_34[id] > 0 )? tensor_34[id] : 0);
   }

//--------- Gemm op_7 { 16 , 50 } * { 50 , 50 } -> { 16 , 50 }
   for (size_t j = 0; j < 16; j++) { 
      size_t y_index = 50 * j;
      for (size_t k = 0; k < 50; k++) { 
         tensor_36[y_index + k] = tensor_14bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_36, true, false, 50, 16, 50, 1, tensor_14weight, tensor_34, 1,nullptr);
   for (int id = 0; id < 800 ; id++){
      tensor_36[id] = ((tensor_36[id] > 0 )? tensor_36[id] : 0);
   }

//--------- Gemm op_8 { 16 , 50 } * { 50 , 50 } -> { 16 , 50 }
   for (size_t j = 0; j < 16; j++) { 
      size_t y_index = 50 * j;
      for (size_t k = 0; k < 50; k++) { 
         tensor_38[y_index + k] = tensor_16bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_38, true, false, 50, 16, 50, 1, tensor_16weight, tensor_36, 1,nullptr);
   for (int id = 0; id < 800 ; id++){
      tensor_38[id] = ((tensor_38[id] > 0 )? tensor_38[id] : 0);
   }

//--------- Gemm op_9 { 16 , 50 } * { 10 , 50 } -> { 16 , 10 }
   for (size_t j = 0; j < 16; j++) { 
      size_t y_index = 10 * j;
      for (size_t k = 0; k < 10; k++) { 
         tensor_39[y_index + k] = tensor_18bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_39, true, false, 10, 16, 50, 1, tensor_18weight, tensor_38, 1,nullptr);
   using TMVA::Experimental::SOFIE::UTILITY::FillOutput;

   FillOutput(tensor_39, output_tensor_39, 160);
}



std::vector<float> infer(float const* tensor_input1){
   std::vector<float > output_tensor_39;
   doInfer(tensor_input1, output_tensor_39 );
   return {output_tensor_39};
}
};   // end of Session

} //TMVA_SOFIE_Linear_16

#endif  // ROOT_TMVA_SOFIE_LINEAR_16
