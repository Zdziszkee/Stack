cmake_minimum_required(VERSION 3.26)
project(Zestaw01)

set(CMAKE_CXX_STANDARD 20)

add_executable(Zestaw01 Stack.cpp
        ArrayStack.h
        LinkedStack.h
        Generator.cpp
        ONP.cpp
)
