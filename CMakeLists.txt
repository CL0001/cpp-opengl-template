cmake_minimum_required(VERSION 3.30)

project("OpenGL" LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(GLAD_SOURCES "dependencies/lib/glad.c")

file(GLOB_RECURSE HEADERS "${CMAKE_SOURCE_DIR}/include/*.h")
file(GLOB_RECURSE SOURCES "${CMAKE_SOURCE_DIR}/src/*.cpp")

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES} ${GLAD_SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC 
    "${CMAKE_SOURCE_DIR}/include"
    "${CMAKE_SOURCE_DIR}/dependencies/include"
)

target_compile_definitions(${PROJECT_NAME} PRIVATE RESOURCES_PATH="${CMAKE_SOURCE_DIR}/resources/")

target_link_libraries(${PROJECT_NAME} PRIVATE "${CMAKE_SOURCE_DIR}/dependencies/lib/glfw3.lib")

if (WIN32)
    target_link_libraries(${PROJECT_NAME} PRIVATE opengl32)
elseif (APPLE)
    target_link_libraries(${PROJECT_NAME} PRIVATE "-framework OpenGL")
else()
    target_link_libraries(${PROJECT_NAME} PRIVATE GL)
endif()
