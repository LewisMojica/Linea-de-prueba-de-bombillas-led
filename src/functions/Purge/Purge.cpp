#include "Purge.h"
#include "PickAndPlace.h"
extern unsigned long pos_x,pos_y;
byte lampState(){    
    return (!digitalRead(lux_lamp_0) + (!digitalRead(lux_lamp_1)) * 2);
    //return a byte indicating which lamps are ok
    // the state is indicates with the tow less signficative bit of the byte, 1 for good, 0 for bad
}

void moveToTrash(byte in){
    Serial.println(in);
    if(in != 3){
        digitalWrite(suction_lamp_0, !bitRead(in,1));
        digitalWrite(suction_lamp_1, bitRead(in, 2));
        goTo(pos_x,secure_pos_y);
        goTo(pick_x_steps_to_trash, pick_y_steps_to_trash );

        digitalWrite(suction_lamp_0, HIGH);
        digitalWrite(suction_lamp_1, LOW);
        goTo(pos_x, pick_and_place_Y_normal_pos);
        delay(500);

        moveXTo(pick_and_place_X_normal_pos);
        // goTo(pos_x, pick_and_place_Y_normal_pos);

    }
}