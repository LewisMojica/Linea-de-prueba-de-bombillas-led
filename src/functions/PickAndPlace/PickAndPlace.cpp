#include "PickAndPlace.h"
#include "../../definitions/definitions.h"


extern A4988 motor_X_pick;
extern A4988 motor_Y_pick;
extern bool stopit;
bool is_pushed =  false;
byte carry_lamp;
unsigned long pos_x,pos_y;

void goToHome(){
    motor_Y_pick.setRPM(pick_and_place_Y_calibration_RPM);
    motor_X_pick.setRPM(pick_and_place_X_calibration_RPM);    

    while(digitalRead(limit_switch_y))
        motor_Y_pick.move(10);

    while(digitalRead(limit_switch_x))
        motor_X_pick.move(10);

    delay(200);
    motor_Y_pick.setRPM(pick_and_place_X_standard_RPM);
    motor_X_pick.setRPM(pick_and_place_Y_standard_RPM);

}

void pushLamp(bool action){
    goTo(pick_and_place_X_normal_pos, pick_and_place_Y_push_pos);
}


void moveTo(unsigned long x, unsigned long y){
    moveXTo(x);
    moveYTo(y);
}
void moveXTo(unsigned long x){
    motor_X_pick.move(-(x - pos_x));
    pos_x = x;
}

void moveYTo(unsigned long y){
    motor_Y_pick.move(-(y - pos_y));
    pos_y = y;
}

void goTo(unsigned long x, unsigned long y){
    if(y > secure_pos_y && x != pos_x){
        moveYTo(secure_pos_y);
        moveXTo(x);
        moveYTo(y);
    }
    else{
        moveXTo(x);
        moveYTo(y);
    }
}
