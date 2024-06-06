int Right_rpwm=5;
int Right_lpwm=6;
int Left_rpwm=10;
int Left_lpwm=11;
char bt=0;


void setup() {
  // put your setup code here, to run once:
  pinMode(Right_rpwm,OUTPUT);
  pinMode(Right_lpwm,OUTPUT);
  pinMode(Left_rpwm,OUTPUT);
  pinMode(Left_lpwm,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  control();
}

void control() {
  if (Serial.available()>0) {
   bt = Serial.read();
   if (bt == 'F'){
  digitalWrite(Right_rpwm,1000);
  digitalWrite(Right_lpwm,0);
  digitalWrite(Left_rpwm,1000);
  digitalWrite(Left_lpwm,0);
  }
  
    else if (bt == 'S')     //stop!
    {
  digitalWrite(Right_rpwm,0);
  digitalWrite(Right_lpwm,0);
  digitalWrite(Left_rpwm,0);
  digitalWrite(Left_lpwm,0);
    }
    else if (bt == 'R')    //right
    {
  digitalWrite(Right_rpwm,0);
  digitalWrite(Right_lpwm,800);
  digitalWrite(Left_rpwm,800);
  digitalWrite(Left_lpwm,0);
    }
    else if (bt == 'L')     //left
    {
      digitalWrite(Right_rpwm,800);
  digitalWrite(Right_lpwm,0);
  digitalWrite(Left_rpwm,0);
  digitalWrite(Left_lpwm,800);
    }
    else if (bt == 'B')     //left
    {
      digitalWrite(Right_rpwm,0);
  digitalWrite(Right_lpwm,1000);
  digitalWrite(Left_rpwm,0);
  digitalWrite(Left_lpwm,1000);
    }
    else if (bt == 'G')     //left
    {
      digitalWrite(Right_rpwm,800);
  digitalWrite(Right_lpwm,0);
  digitalWrite(Left_rpwm,0);
  digitalWrite(Left_lpwm,0);
    }
    else if (bt == 'I')     //left
    {
      digitalWrite(Right_rpwm,0);
  digitalWrite(Right_lpwm,0);
  digitalWrite(Left_rpwm,800);
  digitalWrite(Left_lpwm,0);
    }
    else if (bt == 'H')     //left
    {
      digitalWrite(Right_rpwm,0);
  digitalWrite(Right_lpwm,800);
  digitalWrite(Left_rpwm,0);
  digitalWrite(Left_lpwm,0);
    }
    else if (bt == 'J')     //left
    {
      digitalWrite(Right_rpwm,0);
  digitalWrite(Right_lpwm,0);
  digitalWrite(Left_rpwm,0);
  digitalWrite(Left_lpwm,800);
    }
          
  }
}
