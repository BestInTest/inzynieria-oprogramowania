cmake_minimum_required(VERSION 4.0)
project(lab3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab3
        main.cpp
        main.h
        Pracownik.cpp
        Pracownik.h
        Programista.cpp
        Programista.h
        Zespol.cpp
        Zespol.h)
