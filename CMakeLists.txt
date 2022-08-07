cmake_minimum_required(VERSION 3.10)

project(matrix-multiplication)

set(CMAKE_CXX_STANDARD 17)

add_library(m1cycles STATIC m1cycles.cpp)

add_executable(naive-test naive_test.cpp)
target_link_libraries(naive-test m1cycles)

add_executable(transposed-test transposed_test.cpp)
target_link_libraries(transposed-test m1cycles)
