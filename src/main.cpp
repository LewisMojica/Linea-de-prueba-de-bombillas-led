#include <Arduino.h>
#include "A4988.h"
#include "Struct/CartesianPos.h"
#include <definitions/definitions.h>
#include "functions/Conveyor/Conveyor.h"
#include "functions/PickAndPlace/PickAndPlace.h"
#include "Display/Display.h"
#define MOTOR_ACCEL 4000
#define MOTOR_DECEL 1000
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,20,4);
//conveyor
A4988 motor_conveyor(conveyor_steps,9,conveyor_pin_STEP);

//pick and place
A4988 motor_X_pick(pick_and_place_X_steps  ,  pick_and_place_X_pin_DIR ,  pick_and_place_X_pin_STEP);

//pick and place
A4988 motor_Y_pick(pick_and_place_Y_steps  ,  pick_and_place_Y_pin_DIR  ,  pick_and_place_Y_pin_STEP);


void setup() {
  welcomeScreen();
  Serial.begin(19200);
  pinMode(limit_switch_x, INPUT_PULLUP);
  pinMode(limit_switch_y,INPUT_PULLUP);
  pinMode(obstacle_sensor_lamp0, INPUT);
  pinMode(obstacle_sensor_lamp1, INPUT);
  pinMode(obstacle_sensor_end, INPUT);
  pinMode(suction_lamp_0, OUTPUT);
  pinMode(suction_lamp_1, OUTPUT);

  motor_X_pick.begin(50);
  motor_Y_pick.begin(50);
  goToHome();
}

void loop() {
  String pos;
  if(Serial.available() > 0){
    if(Serial.peek() == 'x'){
      Serial.read();
      Serial.print("\n moToX >");
      while(Serial.available() <= 0){
        ;
      }
      while(Serial.available() > 0){
        if(isDigit(Serial.peek()))
          pos += Serial.read();
      }
      moveXTo(pos.toInt());
    } 
    else if(Serial.peek() == 'y'){
      Serial.read();
      Serial.print("\n moToY >");
      while(Serial.available() <= 0){
        ;
      }
      while(Serial.available() > 0){
        if(isDigit(Serial.peek()))
          pos += Serial.read();
      }
      moveYTo(pos.toInt());
    }
    Serial.println("exit");
  }
}
