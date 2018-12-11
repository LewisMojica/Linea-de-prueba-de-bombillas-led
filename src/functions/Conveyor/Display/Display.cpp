#include <Display/Display.h>

void welcomeScreen(){
    lcd.clear();
    lcd.init();                      // initialize the lcd   
    lcd.backlight();
    lcd.setCursor(0,0);
    lcd.print(" Sistema de control");
    lcd.setCursor(0,1);
    lcd.print("   de calidad de");
    lcd.setCursor(0,2);
    lcd.print("   bombillas LED");
    delay(5000);
    lcd.clear();

    lcd.setCursor(0,1);
    lcd.print("   Calibrando...");  
}

void standByScreen(){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("  PRESIONE BOTON DE");  
    lcd.setCursor(0,1);
    lcd.print("INICIO PARA COMENZAR");
    lcd.setCursor(0,2);
    lcd.print("  PROCESO DE PRUEBA");
}

void workingScree(){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" EN OPERACION");  
    lcd.setCursor(0,1);
}