cmake_minimum_required(VERSION 3.14)
project(Os C)

set(CMAKE_C_STANDARD 99)

add_executable(Os main.c object.h test.c CLinkedList.h CLinkedList.c HelperFunc.c HelperFunc.h Ver1.c)