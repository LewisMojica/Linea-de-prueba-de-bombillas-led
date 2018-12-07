#include <Arduino.h>
#include <PickAndPlace.h>
#include "../../definitions/definitions.h"

byte lampState();
void moveToTrash(byte);
extern A4988 motor_X_pick;
extern A4988 motor_Y_pick;
