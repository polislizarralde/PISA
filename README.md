# Robust Optimization for Parameter Estimation with Interval Analysis

## Overview

This repository contains the implementation and dataset for the research paper titled "Robust Optimization for Solving the Parameter Estimation Problem through Interval Analysis Using Actual Data." The study focuses on the parameter estimation problem for nonlinear ordinary differential equations (ODEs) by adopting an interval analysis approach. This method models uncertain quantities—specifically, parameters and initial conditions—as real closed intervals to achieve robust and mathematically verified solutions.

*Keywords*: Uncertainty, Interval analysis, Robust solutions, Dengue transmission model.

## Key Features
- **Parameter Interval Search Algorithm (PISA):** A novel algorithm formulated to navigate the uncertainties in parameter estimation by exploiting the specifics of the studied phenomenon. It includes three filters for discarding non-viable parameter space regions.
- **Compatibility Measure:** An innovative metric designed to evaluate the robustness of the solutions obtained by PISA, ensuring they are in agreement with the observed data.
- **Case Study on Dengue Transmission:** The application of this approach is demonstrated through a case study on dengue transmission dynamics in Itagui and Neiva, Colombia. This includes analysis of the most sensitive parameters affecting the spread of dengue and considerations for uncertain initial conditions.

## Data
The dataset comprises actual data from two endemic municipalities in Colombia: Itagui and Neiva, stored in the folders `DataItague` and `DataNeiva` respectively. This data was essential in validating the effectiveness of the proposed approach for real-world applications in public health decision-making.

## Implementation
- **PISA Algorithm:** The core algorithm is implemented in Mathematica and can be found in the `PISA_algorithm` file.
- **VSPODE Solver:** A C++ implementation designed for efficient computation of complex models, used for the numerical solution of ODEs.

## Getting Started
To utilize this repository for research or educational purposes, please follow the instructions provided in the `setup` and `usage` sections. Ensure you have Mathematica and a C++ compiler installed to execute the PISA algorithm and VSPODE solver, respectively.


## Citation

If you use this repository for your research, please cite the paper: "Robust Optimization for Solving the Parameter Estimation Problem through Interval Analysis Using Actual Data." by Diana Paola Lizarralde-Bejarano*, Jonathan Prieto-Cubides, Ralph Baker Kearfott and María Eugenia Puerta-Yepes.
