#include <pybind11/pybind11.h>
#include "return_two.h"

PYBIND11_MODULE(_amr, m){
    m.doc() = "pybind11 example -- reuturn two";
    m.def("return_two", &return_two, "A function that returns two");
}
