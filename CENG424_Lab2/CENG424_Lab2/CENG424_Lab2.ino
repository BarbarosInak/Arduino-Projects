// CENG424 Lab2
//
#include <LiquidCrystal.h>
#include <math.h>

int PWMpin=10;

LiquidCrystal lcd(12,11,5,4,3,2);

float step,temp,i;

void setup()
{
  Serial.begin(9600);
  pinMode(PWMpin, OUTPUT);
  lcd.begin(16,2);
}

void loop()
{
  step=255.0/10.0;
  for(i=0.0;i<256.0;i+=step){
    analogWrite(PWMpin,i);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print(round((i*100/255.0)));
    delay(5000);
  }
  for (i=255.0;i>=0.0;i-=step){
    analogWrite(PWMpin,i);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print(round(i*100/255.0));
    delay(5000);
  } 
}
