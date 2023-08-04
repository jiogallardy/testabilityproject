add_executable(sensor_test sensor_test.cpp)

# Link the test executable against Google Test and your library
target_link_libraries(sensor_test gtest gtest_main gtest)
