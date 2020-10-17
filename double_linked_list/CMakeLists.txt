cmake_minimum_required(VERSION 3.17)
project(lab3 C)

set(CMAKE_C_STANDARD 99)

add_executable(lab3 main.c double_linked_list.c double_linked_list.h chicken.c chicken.h stack.c stack.h)