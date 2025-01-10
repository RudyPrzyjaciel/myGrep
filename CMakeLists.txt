cmake_minimum_required(VERSION 3.13)
project(mygrep)

set(CMAKE_CXX_STANDARD 20)

set(SRC 
      src/main.cpp
      src/MyGrep.cpp
      )

set(CXX_FLAGS -Wno-unused-parameter -Wall -Werror -Wpedantic -Wextra -Wconversion)

add_compile_options(${CXX_FLAGS})

add_executable(mygrep ${SRC})
