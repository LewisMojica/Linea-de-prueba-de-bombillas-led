#include <Arduino.h>
#include "A4988.h"
#include "Struct/CartesianPos.h"
#include <definitions/definitions.h>
#include "functions/Conveyor/Conveyor.h"
#include "functions/PickAndPlace/PickAndPlace.h"
#include "Display/Display.h"
// #define MOTOR_ACCEL 4000
// #define MOTOR_DECEL 1000
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,20,4);
//conveyor
A4988 motor_conveyor(conveyor_steps,9,conveyor_pin_STEP);

//pick and place
A4988 motor_X_pick(pick_and_place_X_steps  ,  pick_and_place_X_pin_DIR ,  pick_and_place_X_pin_STEP);

//pick and place
A4988 motor_Y_pick(pick_and_place_Y_steps  ,  pick_and_place_Y_pin_DIR  ,  pick_and_place_Y_pin_STEP);

extern unsigned long pos_x,pos_y;

extern byte status;

void setup() {
  welcomeScreen();
  Serial.begin(19200);
  pinMode(limit_switch_x, INPUT_PULLUP);
  pinMode(limit_switch_y,INPUT_PULLUP);
  pinMode(obstacle_sensor_lamp0, INPUT);
  pinMode(obstacle_sensor_lamp1, INPUT);
  pinMode(obstacle_sensor_end, INPUT);
  pinMode(obstacle_sensor_end2, INPUT);
  pinMode(suction_lamp_0, OUTPUT);
  pinMode(suction_lamp_1, OUTPUT);
  pinMode(button, INPUT_PULLUP);


  motor_conveyor.begin(conveyor_RPM);
  motor_X_pick.begin(40);
  motor_Y_pick.begin(50);
  


digitalWrite(suction_lamp_0, HIGH); /// high active
digitalWrite(suction_lamp_1, LOW); /// low active
delay(1000);

goToHome();

  goTo(pick_and_place_X_normal_pos, pos_y);
  goTo(pos_x, pick_and_place_Y_normal_pos);
  // pushLamp();
  // moveToTrash(3);

  standByScreen();
    Serial.print("stop");

  while(digitalRead(button));{
    Serial.print("stop");
  }
  workingScree();

    while(status == 0){
          motor_conveyor.move(5);
          status += (!digitalRead(obstacle_sensor_lamp0) * 1);
          status += (!digitalRead(obstacle_sensor_lamp1) * 2);
  }
  if(status == 2){
    motor_conveyor.move(2150);
  } else {
     motor_conveyor.move(1900);   
  }
  pushLamp();
  delay(1000);
  moveToTrash(lampState());
  goTo(pick_and_place_X_normal_pos, pick_and_place_Y_normal_pos);

}

void loop() {
if(nextItem() != 0){
  pushLamp();
  delay(1000);
  byte tmp = lampState();
  Serial.print("st");
  Serial.println(tmp,2);
  moveToTrash(tmp);
  goTo(pick_and_place_X_normal_pos, pick_and_place_Y_normal_pos);
}
// motor_X_pick.move(-1000 * 16);
// delay(1000);
// motor_X_pick.move(1000 * 16);
// delay(1000);
//   Serial.println(nextItem(), 2);
//   delay(1000);
  // pushLamp();
  // delay(1000);
  // moveToTrash(2);
  // delay(1000);
  // goTo(pick_and_place_X_normal_pos, pos_y);
  // goTo(pos_x, pick_and_place_Y_normal_pos);
  // delay(1000);
  // pushLamp();
  // delay(1000);
  // moveToTrash(2);

// delay(1000);
}
