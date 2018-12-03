#include <Arduino.h>
#include <PickAndPlace.h>

byte lampState();
void discardLamp(byte);
void moveToTrash(byte);
extern A4988 motor_X_pick;
extern A4988 motor_Y_pick;
