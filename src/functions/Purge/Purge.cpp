#include "Purge.h"

byte lampState(){
    
    pushLamp(true);
    
    return (digitalRead(lux_lamp_0) + (digitalRead(lux_lamp_1 * 2)));
    //return a byte indicating which lamps are ok
    // the state is indicates with the tow less signficative bit of the byte, 1 for good, 0 for bad
}

void moveToTrash(byte in){
    if(in != 0){
        digitalWrite(suction_lamp_0, bitRead(in, 0));
        digitalWrite(suction_lamp_1, bitRead(in, 1));

        goTo(pick_x_steps_to_trash, pick_y_steps_to_trash );

        digitalWrite(suction_lamp_0, bitRead(in, 0));
        digitalWrite(suction_lamp_1, bitRead(in, 0));

        goTo(pick_and_place_X_calibration_steps, pick_and_place_Y_calibration_steps );
    }
}