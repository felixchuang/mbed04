#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main()
{
    lcd.printf("107061136\n");
    for (int i = 30; i >= 0; --i){
        lcd.locate(5,1);
        lcd.printf("%5i", i);
        wait(1);
    }
}