cmake_minimum_required(VERSION 3.17)
project(middletest C)

set(CMAKE_C_STANDARD 99)

add_executable(middletest main.c user.c user.h node.c node.h queue_list.c queue_list.h lank.c lank.h lankNode.c lankNode.h)