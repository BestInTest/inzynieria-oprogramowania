cmake_minimum_required(VERSION 4.2)
project(lab7)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab7
        Main.cpp
        Main.h
        TBernouli.cpp
        TBernouli.h
        TFactorial.cpp
        TFactorial.h
        TNewton.cpp
        TNewton.h
        TPower.cpp
        TPower.h)
