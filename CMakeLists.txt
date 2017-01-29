cmake_minimum_required(VERSION 3.6)
project(red7)

set(CMAKE_CXX_STANDARD 14)

# Options. Turn on with 'cmake -Dmyvarname=ON'.
option(test "Build all tests." OFF) # Makes boolean 'test' available.

file(GLOB SOURCE_FILES "*.h" "*.cpp")

add_executable(red7 ${SOURCE_FILES})

add_subdirectory(./tests)