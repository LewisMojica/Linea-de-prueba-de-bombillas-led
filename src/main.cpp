#include <Arduino.h>
#include "A4988.h"
#include <definitions/definitions.h>

//conveyor
A4988 motor_conveyor(conveyor_steps,conveyor_pin_DIR,conveyor_pin_STEP);

//pick and place
A4988 motor_X_pick(pick_and_place_X_steps,pick_and_place_X_pin_DIR,pick_and_place_X_pin_STEP);

//pick and place
A4988 motor_Y_pick(pick_and_place_Y_steps,pick_and_place_Y_pin_DIR,pick_and_place_Y_pin_STEP);

void setup() {
  motor_conveyor.begin();
  motor_X_pick.begin();
  motor_Y_pick.begin();
  
}

void loop() {
  
}