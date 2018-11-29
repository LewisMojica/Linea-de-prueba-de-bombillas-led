#include "Conveyor.h"


extern A4988 motor_conveyor;

void nextItem(){
    while(!isLampInPosition()){
        motor_conveyor.rotate(5);
    }
}