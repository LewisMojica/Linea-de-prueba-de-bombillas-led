#include "Purge.h"

void discardLamp(byte lamp){
    if (lamp != 0){
        moveToTrash(lamp);
    }
}

byte lampState(){
    pushDown();
    /* falta verificar la corriente y la luminosidad*/
    return 0b11;
    //return a byte indicating which lamps are ok
    // the state is indicates with the tow less signficative bit of the byte, 1 for good, 0 for bad
}

void moveToTrash(byte){
    
}