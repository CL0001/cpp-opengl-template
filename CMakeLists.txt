cmake_minimum_required(VERSION 3.15)

project(OpenGLProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR}/dependencies/include)
include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB_RECURSE SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp)

add_executable(OpenGLProject ${SOURCES})

target_link_libraries(OpenGLProject PRIVATE ${CMAKE_SOURCE_DIR}/dependencies/lib/glfw3.lib)

if (WIN32)
    target_link_libraries(OpenGLProject PRIVATE opengl32)
elseif (APPLE)
    target_link_libraries(OpenGLProject PRIVATE "-framework OpenGL")
else()
    target_link_libraries(OpenGLProject PRIVATE GL)
endif()