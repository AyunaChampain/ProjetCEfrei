cmake_minimum_required(VERSION 3.27)
project(ProjetCEfrei C)

set(CMAKE_C_STANDARD 11)

add_executable(ProjetCEfrei main.c
        column.h
        column.c
        cdataframe.h
        cdataframe.c
)
