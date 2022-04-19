cmake_minimum_required(VERSION 3.21)
project(SQList)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SQList
        main.cpp
        SQList.cpp
        SQList.h)
