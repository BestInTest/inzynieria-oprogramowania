cmake_minimum_required(VERSION 4.2)
project(lab6)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab6
        Baza_danych_logowania.cpp
        Baza_danych_logowania.h
        Kontroler.cpp
        Kontroler.h
        Logowanie.cpp
        Logowanie.h
        Main.cpp
        Main.h)
