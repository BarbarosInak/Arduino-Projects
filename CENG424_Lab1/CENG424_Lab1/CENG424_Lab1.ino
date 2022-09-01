// CENG424 Lab1
//

#include <LiquidCrystal.h>


float data;
int readpin = A0;

LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(readpin,INPUT);
  lcd.print("Hello World");
  
  
}

void loop()
{
  
  data=analogRead(readpin);
  lcd.setCursor(0,1);
  lcd.print(data/(1024/5));
  
}
