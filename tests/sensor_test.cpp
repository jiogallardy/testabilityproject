#include "gtest/gtest.h"
#include "sensor.h"

class SensorTest : public ::testing::Test {
protected:
    TemperatureSensor sensor;  // Instance of your class to test

    // You can add any setup code you need here
};

TEST_F(SensorTest, ReturnsCorrectTemperature) {
    // Replace this with the actual testing logic.
  
    double expected_temp = 23.5;
    EXPECT_EQ(expected_temp, sensor.readTemperature());
}

// Add more TEST_F blocks here to test other aspects of your TemperatureSensor
