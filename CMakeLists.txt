cmake_minimum_required(VERSION 3.10)

project(TaeTestabilityProject)

# include the Google Test submodule
add_subdirectory(lib/googletest)

# include the directories in your project
add_subdirectory(src)
add_subdirectory(tests)
