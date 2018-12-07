#include <Arduino.h>
#include <A4988.h>
#include <../../definitions/definitions.h>



void pushLamp();
void goToHome();
bool isLampPushed();
long tryLimit();
void moveTo(unsigned long x, unsigned long y);
void moveXTo(unsigned long x);
void moveYTo(unsigned long y);
void goTo(unsigned long, unsigned long);