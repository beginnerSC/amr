#include <pybind11/pybind11.h>
// #include <pybind11/numpy.h>
#include "return_two.h"

// namespace py = pybind11;

PYBIND11_MODULE(_amr, m){
    m.doc() = "pybind11 example -- reuturn two";
    m.def("return_two", &return_two, "A function that returns two");
    // m.def("return_nparray", &return_nparray, "A function that returns nparray");
}
