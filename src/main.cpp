#include <Arduino.h>
#include "A4988.h"
#include "Struct/CartesianPos.h"
#include <definitions/definitions.h>
#include "functions/Conveyor/Conveyor.h"
#include "functions/PickAndPlace/PickAndPlace.h"
#define MOTOR_ACCEL 4000
#define MOTOR_DECEL 1000
// #include <Wire.h> 
// #include <LiquidCrystal_I2C.h>

bool go;
bool stopit = false;
// LiquidCrystal_I2C lcd(0x3F,20,4);
//conveyor
A4988 motor_conveyor(conveyor_steps,9,conveyor_pin_STEP);

//pick and place
A4988 motor_X_pick(pick_and_place_X_steps  ,  15  ,  pick_and_place_X_pin_STEP);

//pick and place
A4988 motor_Y_pick(pick_and_place_Y_steps  ,  pick_and_place_Y_pin_DIR  ,  pick_and_place_Y_pin_STEP);

CartesianPos pick_up_pos;

void stop();

void setup() {
  pinMode(limit_switch_x, INPUT_PULLUP);
  motor_X_pick.begin(180);
  pinMode(13, OUTPUT);
  Serial.begin(19200);
  goToHome();

  lampState();

}

void loop() {
if(Serial.available() > 0){
  Serial.read();
  go = !go;
  Serial.println(go);
}
  if(go){
  digitalWrite(13, LOW);
  motor_X_pick.move(2000);
  delay(200);
  digitalWrite(13, HIGH);
    motor_X_pick.move(2000);
  delay(200);
  }
}
