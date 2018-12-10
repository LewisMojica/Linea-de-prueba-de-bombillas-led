#include "Conveyor.h"

byte nextItem(){
    // while(!digitalRead(obstacle_sensor_end));
    byte status = 0;
    static bool interm;
    while(status == 0){
        motor_conveyor.move(5);
        status += (!digitalRead(obstacle_sensor_lamp0) * 1);
        status += (!digitalRead(obstacle_sensor_lamp1) * 2);
    }
    if (status == 1){
        motor_conveyor.move(950); //distancia desde el sensor cero hasta las ventosas
    } else if(status == 2){
        motor_conveyor.move(610); //610distancia desde el sensor uno hasta el sensor 0
        status += (!digitalRead(obstacle_sensor_lamp0) * 1);
        motor_conveyor.move(950);
    }
    // motor_conveyor.move(100);
    Serial.println(status,15);
    return status;
}