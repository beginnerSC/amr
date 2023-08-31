# amr

* F1 > CMake: Configure to configure cmake, or just edit (optional) and save CMakeLists.txt
* Set breakpoint in main.cpp and F5 to start debugging
* `pip install .` to trigger scikit-build 
    * `pip install -e .` won't work; got ModuleNotFoundError: No module named 'amr._amr'
    * `python -c import amr; amr.return_two()` should work if installation is successful
* `python setup.py bdist_wheel` to build wheel
    * If there is C++ code change, run `pip install .` first