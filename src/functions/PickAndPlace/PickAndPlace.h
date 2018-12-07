#include <Arduino.h>
#include <A4988.h>


void pushLamp(bool);
void goToHome();
bool isLampPushed();
long tryLimit();