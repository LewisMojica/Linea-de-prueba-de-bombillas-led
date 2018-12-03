#include "PickAndPlace.h"
#include "../../definitions/definitions.h"

#include "../../Struct/CartesianPos.h"

extern CartesianPos pick_up_pos;
extern A4988 motor_X_pick;
extern A4988 motor_Y_pick;
extern bool stopit;


void goToHome(){

    /* PRIMERO VA EL EJE Y*/
    motor_X_pick.setRPM(100);
    digitalWrite(pick_and_place_X_pin_DIR,HIGH);
    motor_X_pick.move(3100);
    pinMode(9,OUTPUT);
    digitalWrite(9,LOW);

}

void pushDown(){
    ////////////////////////////////////////
    /*falta colocarce encima del bombillo */
    ////////////////////////////////////////
    while(digitalRead(limit_switch_y_botton)){
        motor_Y_pick.rotate(5);
    }


}