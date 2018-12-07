#include <Display/Display.h>

void welcomeScreen(){
    lcd.init();                      // initialize the lcd   
    lcd.backlight();
    lcd.setCursor(0,1);
    lcd.print("   Calibrando...");  
    lcd.setCursor(0,2);
    // lcd.print("www.amazon.com/shops");
    lcd.setCursor(0,3);
    // lcd.print("/smraza");
}