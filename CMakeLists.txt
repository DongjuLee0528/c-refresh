cmake_minimum_required(VERSION 4.1)
project(c_refresh C)

set(CMAKE_C_STANDARD 11)

add_executable(c_refresh main.c
        src/chapter10/getcharSample.c
        src/chapter10/getSample.c)
