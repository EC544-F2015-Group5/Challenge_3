#include <SoftwareSerial.h>
SoftwareSerial XBee(2, 3); // RX, TX

int state = 0; 
int command = 0;
void setup() {
  
  XBee.begin(9600);
  Serial.begin(9600);
  pinMode(13,OUTPUT); //output pin changed from pin 0 to pin 13 (where the led is)
}

void loop() {
  // put your main code here, to run repeatedly:
  if (XBee.available() > 0) {
   command = XBee.parseInt(); 
  }
  
  if (command == state){
   XBee.print("hi!");
  }
  else{
    state = command;
  }
  if (state == 1){          
    state = HIGH;           
  }                         
  else{
    state = LOW;
  }
  digitalWrite(13,state); //writes state (HIGH or LOW) to pin 13, the led pin. 
}
