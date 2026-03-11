//Code generated automatically by TMVA for Inference of Model file [] at [] 

#ifndef ROOT_TMVA_SOFIE_MODEL_OUTPUT
#define ROOT_TMVA_SOFIE_MODEL_OUTPUT

#include <algorithm>
#include <vector>
#include "TMVA/SOFIE_common.hxx"
#include <fstream>

namespace TMVA_SOFIE_model_output{
namespace BLAS{
	extern "C" void sgemv_(const char * trans, const int * m, const int * n, const float * alpha, const float * A,
	                       const int * lda, const float * X, const int * incx, const float * beta, const float * Y, const int * incy);
	extern "C" void saxpy_(const int * n, const float * alpha, const float * x,
	                         const int * incx, float * y, const int * incy);
	extern "C" void sgemm_(const char * transa, const char * transb, const int * m, const int * n, const int * k,
	                       const float * alpha, const float * A, const int * lda, const float * B, const int * ldb,
	                       const float * beta, float * C, const int * ldc);
}//BLAS
struct Session {
// initialized (weights and constant) tensors
std::vector<float> fTensor_dense_bias = std::vector<float>(1);
float * tensor_dense_bias = fTensor_dense_bias.data();
std::vector<float> fTensor_dense_kernel = std::vector<float>(16);
float * tensor_dense_kernel = fTensor_dense_kernel.data();
std::vector<float> fTensor_conv2d_transpose_kernel = std::vector<float>(36);
float * tensor_conv2d_transpose_kernel = fTensor_conv2d_transpose_kernel.data();
std::vector<float> fTensor_lstm_recurrent_kernel = std::vector<float>(1024);
float * tensor_lstm_recurrent_kernel = fTensor_lstm_recurrent_kernel.data();
std::vector<float> fTensor_lstm_bias = std::vector<float>(16);
float * tensor_lstm_bias = fTensor_lstm_bias.data();
std::vector<float> fTensor_lstm_kernel = std::vector<float>(64);
float * tensor_lstm_kernel = fTensor_lstm_kernel.data();
std::vector<float> fTensor_conv2d_transpose_bias = std::vector<float>(4);
float * tensor_conv2d_transpose_bias = fTensor_conv2d_transpose_bias.data();

//--- Allocating session memory pool to be used for allocating intermediate tensors
std::vector<char> fIntermediateMemoryPool = std::vector<char>(4944);


// --- Positioning intermediate tensor memory --
 // Allocating memory for intermediate tensor input_layer_xcol with size 2016 bytes
float* tensor_input_layer_xcol = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor keras_tensor with size 1392 bytes
float* tensor_keras_tensor = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 2016);

 // Allocating memory for intermediate tensor input_layer_f with size 144 bytes
float* tensor_input_layer_f = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 3408);

 // Allocating memory for intermediate tensor keras_tensor_2 with size 1392 bytes
float* tensor_keras_tensor_2 = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 3552);

 // Allocating memory for intermediate tensor keras_tensor_5_auto_flat with size 1392 bytes
float* tensor_keras_tensor_5_auto_flat = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 2016);

 // Allocating memory for intermediate tensor keras_tensor_5 with size 64 bytes
float* tensor_keras_tensor_5 = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 4880);

 // Allocating memory for intermediate tensor keras_tensor_9_auto_flat with size 64 bytes
float* tensor_keras_tensor_9_auto_flat = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 3344);

 // Allocating memory for intermediate tensor keras_tensor_9 with size 4 bytes
float* tensor_keras_tensor_9 = reinterpret_cast<float*>(fIntermediateMemoryPool.data() + 3340);

//--- declare and allocate the intermediate tensors
std::vector<float> fTensor_Broadcastedconv2d_transpose_bias = std::vector<float>(348);
float * tensor_Broadcastedconv2d_transpose_bias = fTensor_Broadcastedconv2d_transpose_bias.data();


Session(std::string filename ="model_output.dat") {

//--- reading weights from file
   std::ifstream f;
   f.open(filename);
   if (!f.is_open()) {
      throw std::runtime_error("tmva-sofie failed to open file " + filename + " for input weights");
   }
   using TMVA::Experimental::SOFIE::ReadTensorFromStream;
   ReadTensorFromStream(f, tensor_dense_bias, "tensor_dense_bias", 1);
   ReadTensorFromStream(f, tensor_dense_kernel, "tensor_dense_kernel", 16);
   ReadTensorFromStream(f, tensor_conv2d_transpose_kernel, "tensor_conv2d_transpose_kernel", 36);
   ReadTensorFromStream(f, tensor_lstm_recurrent_kernel, "tensor_lstm_recurrent_kernel", 1024);
   ReadTensorFromStream(f, tensor_lstm_bias, "tensor_lstm_bias", 16);
   ReadTensorFromStream(f, tensor_lstm_kernel, "tensor_lstm_kernel", 64);
   ReadTensorFromStream(f, tensor_conv2d_transpose_bias, "tensor_conv2d_transpose_bias", 4);
   f.close();

   {
      float * data = TMVA::Experimental::SOFIE::UTILITY::BroadcastConvBias<float>(tensor_conv2d_transpose_bias, 4, { 1 , 4 , 29 , 3 });
      std::copy(data, data + 348, tensor_Broadcastedconv2d_transpose_bias);
      delete[] data;
   }
}

void doInfer(float const* tensor_input_layer,  std::vector<float> &output_tensor_keras_tensor_9 ){


//----  operator ConvTranspose op_0
   for (std::size_t ic = 0; ic < 1; ic++) {
      for (std::size_t oc = 0; oc < 4; oc++) {
         for (std::size_t kh = 0; kh < 3; kh++) {
            for (std::size_t kw = 0; kw < 3; kw++) {
               tensor_input_layer_f[ic * 36 + oc * 9 + kh * 0 + kw * 0  ] = tensor_conv2d_transpose_kernel[ic * 36 + oc * 9 + kh * 3 + kw ];
            }
         }
      }
   }
   char op_0_transA = 'N';
   char op_0_transB = 'T';
   int op_0_m = 14;
   int op_0_n = 36;
   int op_0_k = 1;
   float op_0_alpha = 1.0;
   float op_0_beta = 0.0;
   for (size_t n = 0; n < 1; n++) {
      size_t x_offset = n * 196;
      size_t out_offset = n * 348;
      BLAS::sgemm_(&op_0_transA, &op_0_transB, &op_0_m, &op_0_n, &op_0_k, &op_0_alpha, tensor_input_layer + x_offset, &op_0_m,
         tensor_input_layer_f, &op_0_n, &op_0_beta, tensor_input_layer_xcol, &op_0_m);
      TMVA::Experimental::SOFIE::UTILITY::col2im<float>(tensor_input_layer_xcol,4,29,3,3,3,0,0,2,2,0,0, tensor_keras_tensor + out_offset);

    }
   int op_0_size = 348;
   float op_0_gamma = 1.0;
   int op_0_incx = 1;
   int op_0_incy = 1;
   BLAS::saxpy_(&op_0_size, &op_0_gamma, tensor_Broadcastedconv2d_transpose_bias, &op_0_incx, tensor_keras_tensor, &op_0_incy);
   ///--------Flatten operator 1 --> { 1 , 348 }
   std::copy( tensor_keras_tensor, tensor_keras_tensor + 348, tensor_keras_tensor_2);
   ///--------Flatten operator 2 --> { 1 , 348 }
   std::copy( tensor_keras_tensor_2, tensor_keras_tensor_2 + 348, tensor_keras_tensor_5_auto_flat);

//--------- Gemm op_3 { 1 , 348 } * { 16 , 4 } -> { 1 , 16 }
   for (size_t j = 0; j < 1; j++) { 
      size_t y_index = 16 * j;
      for (size_t k = 0; k < 16; k++) { 
         tensor_keras_tensor_5[y_index + k] = tensor_lstm_bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_keras_tensor_5, true, false, 16, 1, 348, 1, tensor_lstm_kernel, tensor_keras_tensor_5_auto_flat, 1,nullptr);
   ///--------Flatten operator 4 --> { 1 , 16 }
   std::copy( tensor_keras_tensor_5, tensor_keras_tensor_5 + 16, tensor_keras_tensor_9_auto_flat);

//--------- Gemm op_5 { 1 , 16 } * { 1 , 16 } -> { 1 , 1 }
   for (size_t j = 0; j < 1; j++) { 
      size_t y_index = j;
      for (size_t k = 0; k < 1; k++) { 
         tensor_keras_tensor_9[y_index + k] = tensor_dense_bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_keras_tensor_9, true, false, 1, 1, 16, 1, tensor_dense_kernel, tensor_keras_tensor_9_auto_flat, 1,nullptr);
   using TMVA::Experimental::SOFIE::UTILITY::FillOutput;

   FillOutput(tensor_keras_tensor_9, output_tensor_keras_tensor_9, 1);
}



std::vector<float> infer(float const* tensor_input_layer){
   std::vector<float > output_tensor_keras_tensor_9;
   doInfer(tensor_input_layer, output_tensor_keras_tensor_9 );
   return {output_tensor_keras_tensor_9};
}
};   // end of Session

} //TMVA_SOFIE_model_output

#endif  // ROOT_TMVA_SOFIE_MODEL_OUTPUT
