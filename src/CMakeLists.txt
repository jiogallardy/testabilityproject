# Find the Google Test package
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Set the sources needed for the test executable
set(TEST_SOURCES
    factorial_test.cpp
    some_other_file_test.cpp
    sensor_test.cpp
)

# Add the test executable
add_executable(sensor_test ${TEST_SOURCES})

# Link the Google Test library to the test executable
target_link_libraries(sensor_test ${GTEST_BOTH_LIBRARIES})
