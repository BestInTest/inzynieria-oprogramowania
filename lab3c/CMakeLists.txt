cmake_minimum_required(VERSION 4.2)
project(lab3c)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab3c
        Biblioteka.cpp
        Biblioteka.h
        Ksiazka.cpp
        Ksiazka.h
        Main.cpp
        Main.h
        Rozdzial.cpp
        Rozdzial.h)
