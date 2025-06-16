cmake_minimum_required(VERSION 3.10)
project(diary)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include headers from the "include" directory
include_directories(include)

# Collect all source files in src/
file(GLOB SOURCES "src/*.cpp")

# Create the executable
add_executable(diary ${SOURCES})

