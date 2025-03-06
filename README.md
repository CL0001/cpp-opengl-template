# C++ OpenGL Template
This is a starter template for anyone looking to learn OpenGL with C++. It provides a minimal and straightforward setup, allowing you to start coding quickly without dealing with complex configurations.

If you need guidance or want comprehensive documentation, visit: https://docs.gl/


## Getting Started
To get started, clone this repository:
```
git clone https://github.com/CL0001/cpp-opengl-template.git
```
Or, download the ZIP file and extract it.


## Requirements
* A C++ compiler (like **MSVC, GCC, Clang**)
* **CMake** - CMake is a build system generator that simplifies the process of managing and building projects across different platforms.
* **GLAD** (included in this template, or download the latest version from https://glad.dav1d.de/) - GLAD is an OpenGL loader that helps load and manage OpenGL function pointers.
* **GLFW** (included in this template, or download the latest version from https://www.glfw.org/) - GLFW is a library for creating windows, handling input, and managing OpenGL contexts.


## Building and Running
This template includes simple test code to ensure everything is working. You can use this as a basis to try the building and running process.

Navigate to the build directory:
```
cd build
```

Generate the project files using CMake:
```
cmake ..
```

Build the project:
```
cmake --build .
```

Run the application:
```
./debug/OpenGLProject.exe
```