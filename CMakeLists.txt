cmake_minimum_required(VERSION 3.13)
project(myGrep)

set(CMAKE_CXX_STANDARD 20)

set(SRC 
        src/main.cpp
        src/myGrep.cpp)

add_executable(myGrep ${SRC})