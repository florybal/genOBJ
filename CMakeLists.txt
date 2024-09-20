cmake_minimum_required(VERSION 3.29)

project(projeto_ferias)

set(CMAKE_CXX_STANDARD 20)
cmake_policy(SET CMP0072 NEW)

set(glm_DIR <installation prefix>/lib/cmake/glm)

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glm REQUIRED)

file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_executable("${CMAKE_PROJECT_NAME}")


target_sources("${CMAKE_PROJECT_NAME}" PRIVATE "${MY_SOURCES}")
target_include_directories("${CMAKE_PROJECT_NAME}" PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src/")

include_directories(${GLEW_INCLUDE_DIRS} "${GLM_BINARY_DIR}/include")

target_link_libraries("${CMAKE_PROJECT_NAME}" PRIVATE glfw GLEW::GLEW OpenGL::GL glm::glm)

