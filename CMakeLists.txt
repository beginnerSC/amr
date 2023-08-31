cmake_minimum_required(VERSION 3.5...3.26)
project(amr VERSION 0.0.1)


include(GNUInstallDirs)
include(FetchContent)

FetchContent_Declare(
  pybind11
  URL https://github.com/pybind/pybind11/archive/refs/tags/v2.10.4.tar.gz
  URL_HASH SHA256=832e2f309c57da9c1e6d4542dedd34b24e4192ecb4d62f6f4866a737454c9970
)
FetchContent_MakeAvailable(pybind11)

add_executable(amr 
  amr/main.cpp 
  amr/return_two.cpp
)

set(python_module_name _amr)
pybind11_add_module(${python_module_name} MODULE
  amr/return_two.cpp
  amr/amr_py.cpp
)

install(TARGETS ${python_module_name} DESTINATION .)