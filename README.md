<img src="https://root-forum.cern.ch/uploads/default/original/2X/3/3fb82b650635bc6d61461f3c47f41786afad4548.png" align="right"  height="50"/>

# ROOT GSoC 2026 - TMVA SOFIE Project

This repository is a fork of [root-project/root](https://github.com/root-project/root), specifically maintained for the GSoC 2026 project: **Improving the Keras and PyTorch Parsers for ML Inference in SOFIE**.

# 👤 Candidate Profile

Candidate: Sanila Wijesekara

Project: Improving the Keras and PyTorch Parsers for ML Inference in SOFIE

Branch: gsoc-2026-sofie-dev

Mentors: Lorenzo Moneta, Sanjiban Sengupta

---

# 🚀 Project Overview

The goal of this project is to extend the **SOFIE (System Optimization For Inference Efficiency)** engine within TMVA. SOFIE converts pre-trained AI models (ONNX, PyTorch, Keras) into optimized C++ invokable code, reducing overhead in high-energy physics software stacks.

## 🚀 GSoC Exercise Submission Overview

This branch contains my solutions for the preliminary coding challenges. The work spans from building the ROOT environment with SOFIE support to implementing extended parsing logic for complex neural network layers.

### ✅ Exercise Progress Summary

| Task                           | Status      | Description                                                                            |
| :----------------------------- | :---------- | :------------------------------------------------------------------------------------- |
| **Ex 1: Build ROOT**     | Completed   | Built from source with `-Dtmva-sofie=On` on macOS (Apple Silicon).                   |
| **Ex 2: Verification**   | Completed   | Validated SOFIE engine with PyTorch, ONNX, and Keras tutorials.                        |
| **Ex 3: Exploration**    | Completed   | Analyzed PyTorch and Keras parser source code[View Workspace](./Exercise3_Workspace/)     |
| **Ex 4: Implementation** | Completed   | Extended the PyTorch parser with 6 new layers[View Workspace](./Exercise4_Workspace/)     |
| **Ex 5: Bonus Task**     | In Progress | Developed a custom Keras-to-SOFIE conversion pipeline[View Workspace](./Exercise5_bonus/) |

---

## 🛠 Exercise 1: Building ROOT from Source - [View build folder](./root-build/)

I have successfully built ROOT from source on **macOS (Apple Silicon)** with specific configurations required for SOFIE and Machine Learning interoperability

Find the build logs here! [View Build Logs](./result_screenshots/build.png)

**Build Configuration:**

```bash
# From my root-build directory
cmake -Dtmva-sofie=On \
      -Dpython=On \
      -Dpyroot=On \
      -Dbuiltin_protobuf=OFF \
      ../root-GSOC

# Build execution
make -j$(sysctl -n hw.ncpu)

```

*Note: Support for Keras (TensorFlow) and PyTorch was verified during the configuration stage to ensure the Pymva and SOFIE parsers function correctly.*

---

## 🧪 Exercise 2: TMVA & SOFIE Familiarization - [View results screenshots](./result_screenshots/Tutorial-screenshots)

I executed and analyzed several TMVA tutorials to understand the integration of Deep Learning models and the SOFIE inference engine.

**Verification Commands:**

```bash
# Classification using Deep Learning and CNNs
root -l tutorials/machine_learning/TMVA_Higgs_Classification.C
root -l tutorials/machine_learning/TMVA_CNN_Classification.C

# SOFIE Inference Tutorials
root -l tutorials/machine_learning/TMVA_SOFIE_ONNX.C
root -l tutorials/machine_learning/TMVA_SOFIE_PyTorch.C
python3 tutorials/machine_learning/TMVA_SOFIE_Keras.py

```

### 🔍 Technical Observations & Troubleshooting

During verification, several platform-specific challenges were resolved:

* **Environment Paths:** Configured `PYTHONHOME` and `PYTHONPATH` to resolve `ModuleNotFoundError: No module named 'encodings'` caused by virtual environment nesting and `uv` Python management.
* **Asset Location:** Manually linked `Linear_16.onnx` from the internal test suite (`tmva/sofie/test/input_models/`) to the build tutorial directory to satisfy macro dependencies.
* **Protobuf Collisions:** Identified a segmentation violation in `TMVA_SOFIE_Keras.py`. Analysis of the stack trace confirmed a symbol collision between TensorFlow's internal Protobuf and the system-wide Protobuf used by ROOT. Verification was completed by successfully validating the training phase and inspecting the SOFIE Intermediate Representation (IR)
  [👉 View Error Logs](./result_screenshots/Tutorial-screenshots/Terminal_SOFIE_KERAS_Error.png)

---

## 📂 Exercise 3 & 4: Parser Development

### [Exercise 3 - View Workspace](./Exercise3_Workspace)

Explored the existing `TMVA::Experimental::SOFIE::PyKeras` and `PyTorch` parsers. Analyzed the C++ generation logic and the mapping of Python-based model attributes to SOFIE's internal tensor structures.

### [Exercise 4: Extended Layer Support - View Workspace](./Exercise4_Workspace)

Implemented Python-based parsing functionality for advanced layers to extend SOFIE's capabilities.

* **Layers Implemented:**
  * ELU
  * MaxPool2D
  * BatchNorm2D
  * RNN
  * LSTM
  * GRU.
* **Complexity Handling:** Developed logic to extract and split internal recurrent gate weights (i, f, g, o for LSTM; r, z, n for GRU) to match SOFIE's C++ inference requirements.

**To run the Exercise 4 validation tests:**

```bash
cd Exercise4_Workspace/tests
python3 test_extraction.py

```

---

## Exercise 5: Bonus Task - Custom Keras Pipeline

I developed a standalone pipeline to bridge Keras models directly to the SOFIE RModel using the ROOT C++ interpreter.

Implementation Logic:

* Stage 1 (Python): Extracts weights, normalizes layer names, and handles LSTM gate slicing.
* Stage 2 (C++ via PyROOT): Uses ROOT.gInterpreter to declare a SofieBuilder class that interacts with ROperator_ConvTranspose, ROperator_Gemm, and ROperator_Reshape.

The pipeline successfully extracts weights and defines the graph. However, I encountered issues within the parse_only.py logic regarding intermediate tensor registration for complex layer transitions.
👉 [View Bonus Implementation Code](./Exercise5_bonus/)

# 📂 Project Structure

* **[Root-build/](./root-build/)**: Binary build directory
* **[Exercise3_Workspace/](./Exercise3_Workspace/)**: Documentation of parser logic and flow.
* **[Exercise4_Workspace/](./Exercise4_Workspace/)**: Implementation of extended layers and test scripts.
* **[Exercise5_bonus/](./Exercise5_bonus/)**: Custom Keras-SOFIE builder script.
* **[tutorials/machine_learning/](./tutorials/machine_learning/)**: SOFIE tutorials used for verification.
* **[Result_screenshots/](./result_screenshots/)**: Proof of successful execution and error logs

---

# Original ROOT Project Information

## About

ROOT is a unified software package for the storage, processing, and analysis of scientific data. It provides a very efficient storage system for data models and comes with histogramming, curve fitting, and statistical modelling capabilities.

ROOT is performance-critical software written in C++ and enables rapid prototyping powered by a unique C++ compliant interpreter called **Cling**. Cling also enables performant C++ type introspection, which is a building block of automatic interoperability with Python via **cppyy**.

## Contribution Guidelines

* [How to contribute](https://github.com/root-project/root/blob/master/CONTRIBUTING.md)
* [Coding conventions](https://root.cern/contribute/coding_conventions/)
* [Meetings](https://root.cern/for_developers/meetings/)

## Help and Support

* [Forum](https://root-forum.cern.ch/)
* [Issue tracker](https://github.com/root-project/root/issues)
* [Documentation](https://root.cern/guides/reference-guide)
* [Tutorials](https://root.cern/doc/master/group__Tutorials.html)
