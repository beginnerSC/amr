from skbuild import setup

setup(
    name="amr",
    version="0.0.1",
    description="Adaptive Mesh Refinement",
    author="BeginnerSC",
    # license="MIT",
    packages=["amr"],
    package_dir={"": "src"},
    cmake_install_dir="src/amr",
    python_requires=">=3.7",
)