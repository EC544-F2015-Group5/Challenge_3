const int led=12;

void setup() {                
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Read from serialport
  int data = Serial.read();

  // Check and see if data received == 4
  // and thus discard data==-1 or data==`\0`
  if(data=='4') {   
    // Blink the LED 3 times
    for(int i=0;i<3;i++){
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led,LOW);
        delay(1000);
    }
  }
}