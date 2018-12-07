#include "PickAndPlace.h"
#include "../../definitions/definitions.h"


extern A4988 motor_X_pick;
extern A4988 motor_Y_pick;
extern bool stopit;
bool is_pushed =  false;

void goToHome(){
    delay(1000);
    motor_Y_pick.setRPM(pick_and_place_Y_calibration_RPM);
    motor_X_pick.setRPM(pick_and_place_X_calibration_RPM);    

    while(digitalRead(limit_switch_y))
        motor_Y_pick.move(10);

    while(digitalRead(limit_switch_x))
        motor_X_pick.move(10);

    delay(200);
    motor_Y_pick.setRPM(pick_and_place_X_standard_RPM);
    motor_X_pick.setRPM(pick_and_place_Y_standard_RPM);

    motor_X_pick.move(-pick_and_place_X_calibration_steps);
    motor_Y_pick.move(-pick_and_place_Y_calibration_steps);

}

void pushLamp(bool action){
    
    if (action && !is_pushed)
    {
        motor_Y_pick.move(-pick_and_place_Y_test_pos);
        is_pushed = true;
    }
    if(!action && is_pushed){
        motor_Y_pick.move(pick_and_place_Y_test_pos);
        is_pushed = false;
    }
}

bool isLampPushed(){
    return is_pushed;
}
