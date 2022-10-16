cmake_minimum_required(VERSION 3.10)

project(fibonacci)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)

add_subdirectory(${CMAKE_SOURCE_DIR}/project/src)
