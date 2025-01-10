cmake_minimum_required(VERSION 3.19)
project(mygrep_fuzztests)

set(CMAKE_CXX_STANDARD 20)
add_subdirectory(fuzztest)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)

set(TEST_SRC src/hello_test.cpp)

add_compile_options(-DCMAKE_BUILD_TYPE=RelWithDebug -DFUZZTEST_FUZZING_MODE=on)
add_executable(mygrep_fuzztest ${TEST_SRC})
#target_link_libraries(mygrep_fuzztest GTest::gtest_main)
link_fuzztest(mygrep_fuzztest)

gtest_discover_tests(mygrep_fuzztest)
