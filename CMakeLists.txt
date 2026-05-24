# 
# Emilio Cazares Borbon, 2026
# 
# Building learning project executables
# 
cmake_minimum_required(VERSION 3.26)
project(sort_visualizer VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 
# insertion sort
# 

# testing insertion sort
add_executable(test_insertion_sort)
target_sources(test_insertion_sort
    PRIVATE
        cpp/src/test_insertion_sort.cpp
    PUBLIC
        cpp/include/insertion_sort.hpp
)