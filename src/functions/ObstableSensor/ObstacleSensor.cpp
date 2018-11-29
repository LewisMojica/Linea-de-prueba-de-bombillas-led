#include "ObstacleSensor.h"

bool isLampInPosition(){
    return (digitalRead(obstacle_sensor_lamp0) || digitalRead(obstacle_sensor_lamp1));
}