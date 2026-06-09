cmake_minimum_required(VERSION 4.2)
project(lab12)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab12
        Client.h
        CombustionDeliveryVan.h
        CombustionPassengerCar.h
        CombustionVehicleFactory.cpp
        CombustionVehicleFactory.h
        ElectricDeliveryVan.h
        ElectricPassengerCar.h
        ElectricVehicleFactory.cpp
        ElectricVehicleFactory.h
        IDeliveryVan.h
        IPassengerCar.h
        IVehicleFactory.cpp
        IVehicleFactory.h
        Main.cpp
        Main.h)
