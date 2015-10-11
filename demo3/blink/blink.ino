#include <SoftwareSerial.h>
SoftwareSerial XBee(2, 3); // RX, TX

char buffer;
//define constants
#define LED1 4
#define LED2 5
#define LED3 11
#define LED4 13

void setup() {                
  XBee.begin(9600);
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
}

void loop() {
  while(XBee.available()){
    buffer = XBee.read();
//  while(Serial.available()){
//    digitalWrite(LED1, LOW);
//    buffer = Serial.read();
    if (buffer == '1'){
      digitalWrite(LED1, HIGH);
      XBee.println("LED1");
      continue;
    }
    else if (buffer == '2'){
      digitalWrite(LED2, HIGH);
      XBee.println("LED2");
      continue;
    }
    else if (buffer == '3'){
      digitalWrite(LED3, HIGH);
      XBee.println("LED3");
      continue;
    }
    else if (buffer == '4'){
      digitalWrite(LED4, HIGH);
      XBee.println("LED4");
      continue;;
    }
    else if (buffer == '5'){
      digitalWrite(LED1, LOW);
      XBee.println("LED1 IS OFF");
      continue;;
    }
    else if (buffer == '6'){
      digitalWrite(LED2, LOW);
      XBee.println("LED2 IS OFF");
      continue;;
    }
    else if (buffer == '7'){
      digitalWrite(LED3, LOW);
      XBee.println("LED3 IS OFF");
      continue;;
    }
    else if (buffer == '8'){
      digitalWrite(LED4, LOW);
      XBee.println("LED4 IS OFF");
      continue;;
    }

}
}
