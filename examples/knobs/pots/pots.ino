#include <Arduino.h>
#include <TeensyEurorack.h>

void setup() {

  analogReference(0);   
  analogReadAveraging(32);
     
  Serial.begin(9600);

  // configures as analog input using INPUT_DISABLE
  pinMode(TEENSY_EURORACK_PIN_POT1, INPUT_DISABLE);    
  pinMode(TEENSY_EURORACK_PIN_POT2, INPUT_DISABLE); 
  pinMode(TEENSY_EURORACK_PIN_POT3, INPUT_DISABLE);  
  pinMode(TEENSY_EURORACK_PIN_POT4, INPUT_DISABLE); 

  Serial.println("Potentiometers test");
}

void loop() { 
  int newsensorValue1 = analogRead(TEENSY_EURORACK_PIN_POT1);
  int newsensorValue2 = analogRead(TEENSY_EURORACK_PIN_POT2);
  int newsensorValue3 = analogRead(TEENSY_EURORACK_PIN_POT3);
  int newsensorValue4 = analogRead(TEENSY_EURORACK_PIN_POT4);
  Serial.printf("%d, %d, %d, %d\n", newsensorValue1, newsensorValue2, newsensorValue3, newsensorValue4);
  delay(1000);
}