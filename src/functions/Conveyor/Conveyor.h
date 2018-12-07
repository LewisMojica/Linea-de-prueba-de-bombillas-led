#include <Arduino.h>
#include <A4988.h>
#include "ObstacleSensor.h"
#include "Purge.h"


extern A4988 motor_conveyor;

byte nextItem();