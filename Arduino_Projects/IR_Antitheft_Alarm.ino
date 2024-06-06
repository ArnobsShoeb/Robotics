void setup() {
  pinMode(13,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);

}

void loop() {
  if (digitalRead(3)==LOW)
  {

    digitalWrite(13,HIGH);
    digitalWrite(9,HIGH);

    delay(0);
  }
  else
  {
    digitalWrite(13,LOW);
    digitalWrite(9,LOW);
    delay(0);
  }
}
