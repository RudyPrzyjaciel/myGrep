include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

set(TEST_SRC tests/hello_test.cpp)

add_executable(test_mygrep ${TEST_SRC})
target_link_libraries(test_mygrep GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(test_mygrep)
