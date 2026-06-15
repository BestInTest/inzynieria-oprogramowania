cmake_minimum_required(VERSION 4.2)
project(lab13)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab13
        Client.cpp
        Client.h
        IObserver.cpp
        IObserver.h
        TFireStation.cpp
        TFireStation.h
        TRoom.cpp
        TRoom.h
        TSubject.cpp
        TSubject.h)
