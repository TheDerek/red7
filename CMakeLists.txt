cmake_minimum_required(VERSION 3.6)
project(red7)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCE_FILES "*.h" "*.cpp")

add_executable(red7 ${SOURCE_FILES})