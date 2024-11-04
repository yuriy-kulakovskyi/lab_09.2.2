cmake_minimum_required(VERSION 3.14)
project(PR9_2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib/googletest)

add_executable(PR9_2
        src/main.cpp
        src/h.cpp
)

add_executable(PR9_2_tests
        tests/test_h.cpp
)

target_link_libraries(PR9_2_tests gtest gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PR9_2_tests)