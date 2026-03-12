<img src="https://root-forum.cern.ch/uploads/default/original/2X/3/3fb82b650635bc6d61461f3c47f41786afad4548.png" align="right"  height="50"/>


# GSoC 2026 Submission: SOFIE Parser Improvements
**Candidate:** Sanila Wijesekara  
**Project:** Improving the Keras and PyTorch Parsers for ML Inference in SOFIE  
**Mentors:** Lorenzo Moneta, Sanjiban Sengupta  

---

## 🚀 GSoC Exercise Submission Overview
This branch contains my solutions for the preliminary coding challenges. The work spans from building the ROOT environment with SOFIE support to implementing extended parsing logic for complex neural network layers.

---

## 🛠 Exercise 1: Building ROOT from Source
I have successfully built ROOT from source on **macOS (Apple Silicon)** with specific configurations required for SOFIE and Machine Learning interoperability.

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

## 🧪 Exercise 2: TMVA & SOFIE Familiarization

I executed and analyzed several TMVA tutorials to understand the integration of Deep Learning models and the SOFIE inference engine.

**Commands Executed:**

**Bash**

```
# Classification using Deep Learning and CNNs
root -l tutorials/machine_learning/TMVA_Higgs_Classification.C
root -l tutorials/machine_learning/TMVA_CNN_Classification.C

# SOFIE Inference Tutorials (ONNX, Keras, PyTorch)
root -l tutorials/machine_learning/TMVA_SOFIE_ONNX.C
root -l tutorials/machine_learning/TMVA_SOFIE_Keras.C
root -l tutorials/machine_learning/TMVA_SOFIE_PyTorch.C
```

**Observations:** Verified that SOFIE correctly translates these models into C++ Intermediate Representation (IR) and produces functional `.h` files for high-speed inference.

---

## 📂 Exercise 3 & 4: Parser Development

### [Exercise 3: Parser Exploration](https://www.google.com/search?q=./Exercise3_Workspace)

Explored the existing `TMVA::Experimental::SOFIE::PyKeras` and `PyTorch` parsers. Successfully parsed standard architectures and analyzed the generated output.

### [Exercise 4: Extended Layer Support](https://www.google.com/search?q=./Exercise4_Workspace)

Implemented Python-based parsing functionality for advanced layers.

* **Layers Implemented:** ELU, MaxPool2D, BatchNorm2D, RNN, LSTM, and GRU.
* **Complexity Handling:** Developed logic to extract and split internal recurrent gate weights (i, f, g, o for LSTM; r, z, n for GRU).

**To run the Exercise 4 validation tests:**

**Bash**

```
cd Exercise4_Workspace/tests
python3 test_extraction.py
```

---

---

# Original ROOT Project Information

## About

ROOT is a unified software package for the storage, processing, and analysis of

scientific data: from its acquisition to the final visualization in form of highly

customizable, publication-ready plots. It is reliable, performant and well supported,

easy to use and obtain, and strives to maximize the quantity and impact of scientific

results obtained per unit cost, both of human effort and computing resources.

ROOT provides a very efficient storage system for data models,

that demonstrated to scale at the Large Hadron Collider experiments: Exabytes

of scientific data are written in columnar ROOT format.

ROOT comes with histogramming capabilities in an arbitrary number of

dimensions, curve fitting, statistical modelling, minimization, to allow

the easy setup of a data analysis system that can query and process the data

interactively or in batch mode, as well as a general parallel **processing**^^^^^^^^^^^^^^^^

**framework, RDataFrame, that can considerably speed up an analysis, taking**^^^^^^^^^^^^^^^^

**full advantage of multi-core and distributed systems.**^^^^^^^^^^^^^^^^

**ROOT is performance critical software written in C++ and enables rapid prototyping**^^^^^^^^^^^^^^^^

**powered by a unique C++ compliant interpreter **^^called Cling.^^^^^^^^^^^^^^

**Cling also enables performant C++ type introspection which is a building block of automatic**^^^^^^^^^^^^^^

**interoperability with Python. Thanks to its dynamic Python bindings, lev**^^eraging the cppyy technology,^^^^^^^^^^^^

**ROOT offers efficient, on-demand C++/Python interoperability in a uniform cross-language**^^^^^^^^^^^^

**execution environment.**^^^^^^^^^^^^

**ROOT fully em**^^braces open-source, it's made with passion by its community,^^^^^^^^^^

**for the benefit of its community.**^^^^^^^^^^

## Contribution Guidelines^^^^^^^^

* [How to contribute^^^^^^^^](https://github.com/root-project/root/blob/master/CONTRIBUTING.md)
* [Coding conventi^^ons^^^^^^](https://root.cern/contribute/coding_conventions/)
* [Meetings^^^^^^](https://root.cern/for_developers/meetings/)

## Cite^^^^^^

**If you use ROOT for your work, we kind**^^ly ask you to cite it as:^^^^

```
Rene Brun and Fons Rademakers, ROOT - An Object Oriented Data Analysis Framework,
Proceedings AIHENP'96 Workshop, Lausanne, Sep. 1996,
Nucl. Inst. & Meth. in Phys. Res. A 389 (1997) 81-86.
```

See t**he reference in BibTeX format **[here](https://www.google.com/search?q=README/root_citation.bib).^^

## Live Demo for CERN Users^^

**See more screenshots on ou**^^r [gallery](https://root.cern/gallery).

## Installation and Getting Started

See https://root.cern/install for installation instructions.

For instructions on how to build ROOT from these source files, see https://root.cern/install/build_from_source.

Our [&#34;Getting started with ROOT&#34;](https://root.cern/learn) page is then the perfect place to get familiar with ROOT.

## Help and Support

* [Forum](https://root-forum.cern.ch/)
* [Issue tracker](https://github.com/root-project/root/issues)
* [Documentation](https://root.cern/guides/reference-guide)
* [Tutorials](https://root.cern/doc/master/group__Tutorials.html)

```

---

### One Final Tip
Since you are submitting this via email as a link to a **development branch**, make sure you have committed and pushed these `README.md` changes specifically to that branch. 

**Would you like me to help you write a professional commit message for this final documentation update?**

