# Set the sources needed for the main executable
set(SOURCES
    factorial.cpp
    main.cpp
    some_other_file.cpp
    sensor.cpp
)

# Add the main executable
add_executable(main ${SOURCES})

#Linked again to google test
target_link_libraries(sensor_test gtest gtest_main)
