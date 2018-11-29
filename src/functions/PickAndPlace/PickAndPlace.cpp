#include "PickAndPlace.h"
#include "../../definitions/definitions.h"

#include "../../Struct/CartesianPos.h"

extern CartesianPos pick_up_pos;
extern A4988 motor_X_pick;
extern A4988 motor_Y_pick;


void goToHome(){
    byte exit = 0;
    while(exit < 2){
        if(digitalRead(limit_switch_x)){
            motor_X_pick.rotate(5);
        }else exit += 1;
        if(digitalRead(limit_switch_y)){
            motor_Y_pick.rotate(5);
        }else exit += 1;
    }
    pick_up_pos.setHome();
}

void pushDown(){
    ////////////////////////////////////////
    /*falta colocarce encima del bombillo */
    ////////////////////////////////////////
    while(digitalRead(limit_switch_y_botton)){
        motor_Y_pick.rotate(5);
    }


}