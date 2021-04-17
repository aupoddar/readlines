cmake_minimum_required(VERSION 3.13)
project(read_lines C)

set(CMAKE_C_STANDARD 11)

add_executable(read_lines main.c read_lines.c read_lines.h)