# Find the Google Test package
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Set the sources needed for the test executable
set(TEST_SOURCES

)

# Add the test executable
add_executable(sensor_test ${TEST_SOURCES})

# Link the Google Test library to the test executable
target_link_libraries(sensor_test ${GTEST_BOTH_LIBRARIES})
