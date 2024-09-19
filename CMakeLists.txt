cmake_minimum_required(VERSION 3.29)
project(projeto_ferias)

set(CMAKE_CXX_STANDARD 20)
cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_executable("${CMAKE_PROJECT_NAME}")

target_sources("${CMAKE_PROJECT_NAME}" PRIVATE "${MY_SOURCES}")
target_include_directories("${CMAKE_PROJECT_NAME}" PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src/")

target_link_libraries("${CMAKE_PROJECT_NAME}" glfw glut OpenGL::GL)

