#include "PickAndPlace.h"
#include "../../definitions/definitions.h"


extern A4988 motor_X_pick;
extern A4988 motor_Y_pick;
extern bool stopit;
bool is_pushed =  false;

void goToHome(){

    motor_Y_pick.setRPM(pick_and_place_Y_calibration_RPM);
    motor_X_pick.setRPM(pick_and_place_X_calibration_RPM);

    motor_Y_pick.move(pick_and_place_Y_calibration_steps);
    motor_X_pick.move(pick_and_place_X_calibration_steps);

    pinMode(pick_and_place_X_pin_ENABLE, OUTPUT);
    digitalWrite(pick_and_place_X_pin_ENABLE, LOW);

    pinMode(pick_and_place_X_pin_ENABLE, OUTPUT);
    digitalWrite(pick_and_place_X_pin_ENABLE, LOW);

    motor_Y_pick.setRPM(pick_and_place_X_standard_RPM);
    motor_X_pick.setRPM(pick_and_place_Y_standard_RPM);

    motor_X_pick.move(pick_and_place_X_test_pos);
    motor_Y_pick.move(pick_and_place_Y_test_pos);

}

void pushLamp(bool action){
    
    if (action && !is_pushed)
    {
        motor_Y_pick.move(pick_and_place_Y_test_pos);
        is_pushed = true;
    }
    if(!action && is_pushed){
        motor_Y_pick.move(-pick_and_place_Y_test_pos);
        is_pushed = false;
    }
}

bool isLampPushed(){
    return is_pushed;
}