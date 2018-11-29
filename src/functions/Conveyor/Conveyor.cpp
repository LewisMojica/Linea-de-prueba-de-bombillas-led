#include "Conveyor.h"




void nextItem(){
    while(!isLampInPosition()){
        motor_conveyor.rotate(5);
    }
}