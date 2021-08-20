cmake_minimum_required(VERSION 3.20)
project(simple_calculator C)

set(CMAKE_C_STANDARD 11)

add_executable(simple_calculator
        src/main.c
        src/include/operations.h
        src/operations.c
        src/include/view.h
        src/view.c
        src/controller.c
        src/include/controller.h)
