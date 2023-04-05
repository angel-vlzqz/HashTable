cmake_minimum_required(VERSION 3.5)

project(solution)

find_package(GTest)

if (WIN32)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std:c++20")
  set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
ELSE()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wshadow -std=c++20")
ENDIF()

add_executable(project
  "sources/Main.cpp"
  "sources/Hash.cpp")

enable_testing()
include(GoogleTest)

add_executable(main_test "tests/MainTest.cpp")
target_link_libraries(main_test GTest::gtest_main)
gtest_discover_tests(main_test)