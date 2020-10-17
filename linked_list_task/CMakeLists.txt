cmake_minimum_required(VERSION 3.17)
project(linked_list_task C)

set(CMAKE_C_STANDARD 99)

add_executable(linked_list_task main.c node.c node.h barbell.c barbell.h bar_linked_list.c bar_linked_list.h weight_stack.c weight_stack.h)