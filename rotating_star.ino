#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR 0x27
#define BACKLIGHT_PIN 3
#define En_pin 2
#define Rw_pin 1
#define Rs_pin 0
#define D4_pin 4
#define D5_pin 5
#define D6_pin 6
#define D7_pin 7

LiquidCrystal_I2C lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);

// ---------------------- INSTANT SETTING --------------------
String character = "*"; //make sure there's no white space before or after the character.
int a = 0; // don't change this line
int b = 0; // don't change this line
int delays = 50; // in millis
//----------------------- INSTANT SETTING ---------------------

void setup() {
  lcd.begin (16,2); 
  // Switch on the backlight
  lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.home ();
  lcd.setCursor (0,0);
  lcd.print(character);
}

void clearCharacter(){
  for(int a = 0; a<=15; a++){
    lcd.setCursor (a,0);
    lcd.print(" ");
    lcd.setCursor (a,1);
    lcd.print(" ");
  }
}

void loop() {
  clearCharacter();
  
  if(b == -1){
    a = 1;
    b = 0;
  }
  if(b == 16){
    a = 0;
    b = 15;
  }
  
  if(a == 0 && b != -1){
    lcd.setCursor (b,a);
    lcd.print(character);
    b--;
  }
  if(a == 1 && b != 16){
    lcd.setCursor (b,a);
    lcd.print(character);
    b++;
  }
  
  delay(delays);
}
