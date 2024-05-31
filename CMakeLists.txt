cmake_minimum_required(VERSION 3.28)
project(cpp_libraries)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_libraries main.cpp
        Dynamic1DArray.h
        Dynamic2DArray.h
        Dynamic2DJaggedArray.h)
