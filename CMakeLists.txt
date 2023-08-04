cmake_minimum_required(VERSION 3.10)

# Set the project name
project(taetestability)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 14)

# Include directories
include_directories(include)

# include the Google Test submodule
add_subdirectory(lib/googletest)

# Add subdirectories
add_subdirectory(src)
add_subdirectory(tests)
