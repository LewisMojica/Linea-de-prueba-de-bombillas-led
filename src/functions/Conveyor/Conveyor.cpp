#include "Conveyor.h"
byte status = 0;
byte nextItem(){
    status = 0;
    // while(!digitalRead(obstacle_sensor_end));
    status += (!digitalRead(obstacle_sensor_lamp0) * 1);
    status += (!digitalRead(obstacle_sensor_lamp1) * 2);
     long stp = 0;
     while (stp < 1676){
        while (!digitalRead(obstacle_sensor_end) || !digitalRead(obstacle_sensor_end2));
        if(stp  == 200){
            status += (!digitalRead(obstacle_sensor_lamp0) * 1);
        }
        motor_conveyor.move(4);
        stp += 4;
     }
    Serial.print("st");
    Serial.println(status,2);
    return status;
}