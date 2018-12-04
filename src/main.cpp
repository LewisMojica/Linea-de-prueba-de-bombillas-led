#include <Arduino.h>
#include "A4988.h"
#include "Struct/CartesianPos.h"
#include <definitions/definitions.h>
#include "functions/Conveyor/Conveyor.h"
#include "functions/PickAndPlace/PickAndPlace.h"
#include "Display/Display.h"
#define MOTOR_ACCEL 4000
#define MOTOR_DECEL 1000
// #include <Wire.h> 
// #include <LiquidCrystal_I2C.h>

// LiquidCrystal_I2C lcd(0x3F,20,4);
//conveyor
A4988 motor_conveyor(conveyor_steps,9,conveyor_pin_STEP);

//pick and place
A4988 motor_X_pick(pick_and_place_X_steps  ,  pick_and_place_X_pin_DIR ,  pick_and_place_X_pin_STEP , pick_and_place_X_pin_ENABLE);

//pick and place
A4988 motor_Y_pick(pick_and_place_Y_steps  ,  pick_and_place_Y_pin_DIR  ,  pick_and_place_Y_pin_STEP , pick_and_place_X_pin_ENABLE);


void setup() {
  welcomeScreen();
  pinMode(limit_switch_x, INPUT_PULLUP);
  motor_X_pick.begin(180);
  Serial.begin(19200);
  goToHome();
}

void loop() {
  static bool go;
if(Serial.available() > 0){
  Serial.read();
  go = !go;
  Serial.println(go);
}
  if(go){
    motor_X_pick.move(500);
    delay(200);
    motor_X_pick.move(-500);
    delay(200);
  }
}
