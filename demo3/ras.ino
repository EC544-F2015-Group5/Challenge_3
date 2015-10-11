#include "arduPi.h"

char buffer;

//define constants
#define RED 6
#define GREEN 10
#define BLUE 11

void setup() {
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  
  }

void loop() {

   while(Serial.available()){
    buffer = Serial.read();
    if (buffer == 'R'){
       digitalWrite(RED, 0);
       digitalWrite(GREEN, 1);
       digitalWrite(BLUE, 1);
       printf("RED\n");
    }else if (buffer == 'G'){
       digitalWrite(RED, 1);
       digitalWrite(GREEN, 0);
       digitalWrite(BLUE, 1);
       printf("GREEN\n");
    }else if (buffer == 'B'){
       digitalWrite(RED, 1);
       digitalWrite(GREEN, 1);
       digitalWrite(BLUE, 0);
       printf("BLUE\n");
    }else if (buffer == 'P'){
       digitalWrite(RED, 0);
       digitalWrite(GREEN, 1);
       digitalWrite(BLUE, 0);
       printf("PINK\n");
    }else if (buffer == 'Y'){
       digitalWrite(RED, 0);
       digitalWrite(GREEN, 0);
       digitalWrite(BLUE, 1);
       printf("YELLOW\n");
    }else if (buffer == 'C'){
       digitalWrite(RED, 1);
       digitalWrite(GREEN, 0);
       digitalWrite(BLUE, 0);
       printf("CYAN\n");
    }else if (buffer == 'W'){
       digitalWrite(RED, 0);
       digitalWrite(GREEN, 0);
       digitalWrite(BLUE, 0);
       printf("WHITE\n");
    }else if (buffer == 'O'){
       digitalWrite(RED, 1);
       digitalWrite(GREEN, 1);
       digitalWrite(BLUE, 1);
       printf("OFF\n");
    }
    else if (buffer !='\n'){
     printf("NOT A COLOR!\n");
  }
  }

 
}

int main (){
    setup();
    while(1){
        loop();
    }
    return (0);
}
