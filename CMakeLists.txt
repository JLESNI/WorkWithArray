cmake_minimum_required(VERSION 3.27)
project(WorkWithArray)

set(CMAKE_CXX_STANDARD 17)

add_executable(WorkWithArray main.cpp
        array.h
        array.cpp
        menu.h
        menu.cpp)
