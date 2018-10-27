cmake_minimum_required(VERSION 3.4)

add_executable(test_list list.h list.cpp test_list.cpp)

add_executable(test_stack list.h list.cpp stack.h arrayStack.cpp listStack.cpp test_stack.cpp)