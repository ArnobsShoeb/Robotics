#include <LiquidCrystal_I2C.h> 
#include <Wire.h> 
LiquidCrystal_I2C lcd(0x27,16,2);
const int trigPin = 12; 
const int echoPin = 13;

long duration;
int distance;

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trigPin,LOW);
  delay(20);
  digitalWrite(trigPin,HIGH);
  delay(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance=(duration*0.034/2)*0.394;
  lcd.setCursor(0,0);
  lcd.print("D");
  lcd.setCursor(1,0);
  lcd.print("i");  
  lcd.setCursor(2,0);
  lcd.print("s");  
  lcd.setCursor(3,0);
  lcd.print("t");
  lcd.setCursor(4,0);
  lcd.print("a");
  lcd.setCursor(5,0);
  lcd.print("n");
  lcd.setCursor(6,0);
  lcd.print("c");
  lcd.setCursor(7,0);
  lcd.print("e");
  lcd.setCursor(8,0);
  lcd.print(" ");
  lcd.setCursor(9,0);
  lcd.print("=");
  lcd.setCursor(10,0);
  lcd.print(" "); 
  lcd.setCursor(11,0);
  lcd.print(distance);
//                  
  
  delay(100);
  

}
