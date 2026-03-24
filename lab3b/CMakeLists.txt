cmake_minimum_required(VERSION 4.1)
project(lab3b)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab3b
        Commit.cpp
        Commit.h
        main.cpp
        main.h
        Repozytorium.cpp
        Repozytorium.h
        Serwer_testujacy.cpp
        Serwer_testujacy.h)
