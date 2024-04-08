cmake_minimum_required(VERSION 3.13)
project(mygrep)

set(CMAKE_CXX_STANDARD 20)

set(SRC 
      src/mygrep.cpp)

add_executable(mygrep ${SRC})

