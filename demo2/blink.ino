#include <SoftwareSerial.h>
SoftwareSerial XBee(2, 3); // RX, TX

char buffer;
//define constants
#define RED 4
#define GREEN 10
#define BLUE 11

void setup() {                
  XBee.begin(9600);
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
}

void loop() {
  if(XBee.available()){
        digitalWrite(RED, LOW);
  }

//  while(Serial.available()){
//    digitalWrite(RED, LOW);
//    buffer = Serial.read();
//    if (buffer == 'R'){
//      digitalWrite(RED, 0);
//      digitalWrite(GREEN, 1);
//      digitalWrite(BLUE, 1);
//      Serial.println("RED");
//    }
//    else if (buffer == 'G'){
//      digitalWrite(RED, 1);
//      digitalWrite(GREEN, 0);
//      digitalWrite(BLUE, 1);
//      Serial.println("GREEN");
//    }
//    else if (buffer == 'B'){
//      digitalWrite(RED, 1);
//      digitalWrite(GREEN, 1);
//      digitalWrite(BLUE, 0);
//      Serial.println("BLUE");
//    }
//    else if (buffer == 'P'){
//      digitalWrite(RED, 0);
//      digitalWrite(GREEN, 1);
//      digitalWrite(BLUE, 0);
//      Serial.println("PINK");
//    }
//    else if (buffer == 'Y'){
//      digitalWrite(RED, 0);
//      digitalWrite(GREEN, 0);
//      digitalWrite(BLUE, 1);
//      Serial.println("YELLOW");
//    }
//    else if (buffer == 'C'){
//      digitalWrite(RED, 1);
//      digitalWrite(GREEN, 0);
//      digitalWrite(BLUE, 0);
//      Serial.println("CYAN");
//    }
//    else if (buffer == 'W'){
//      digitalWrite(RED, 0);
//      digitalWrite(GREEN, 0);
//      digitalWrite(BLUE, 0);
//      Serial.println("WHITE");
//    }
//    else if (buffer == 'O'){
//      digitalWrite(RED, 1);
//      digitalWrite(GREEN, 1);
//      digitalWrite(BLUE, 1);
//      Serial.println("OFF");
//    }
//    else{
//      Serial.println("NOT A COLOR!");
//    }
//  }

}
