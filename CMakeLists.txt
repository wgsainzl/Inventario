cmake_minimum_required(VERSION 3.29)
project(Inventario)

set(CMAKE_CXX_STANDARD 20)

add_executable(Inventario main.cpp
        Inventory.h
        Inventory.cpp)
