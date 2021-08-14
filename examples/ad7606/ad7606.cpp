#include <Arduino.h>
#include <SPI.h>

#define SCALE_FACTOR 0.000152587890625              // 10/(2^16) = 0.000152587890625

#define BUSY 3
#define RESET 4
#define START_CONVERSION 5
#define CHIP_SELECT 10
#define MISO 12
#define MOSI 11
#define LED 13
#define TOTAL_RAW_BYTES 16

int bytesToRead = TOTAL_RAW_BYTES;  
byte raw[TOTAL_RAW_BYTES];  
uint16_t parsed[8];
int x = 0;



void parseRawBytes() {
  parsed[0] = (raw[0] << 8) + raw[1];
  parsed[1] = (raw[2] << 8) + raw[3];
  parsed[2] = (raw[4] << 8) + raw[5];
  parsed[3] = (raw[6] << 8) + raw[7];
  parsed[4] = (raw[8] << 8) + raw[9];
  parsed[5] = (raw[10] << 8) + raw[11];
  parsed[6] = (raw[12] << 8) + raw[13];
  parsed[7] = (raw[14] << 8) + raw[15];
}

void setup() {  
  
  SPI.begin();

  pinMode(BUSY, INPUT);
  pinMode(RESET, OUTPUT);
  pinMode(START_CONVERSION, OUTPUT);
  pinMode(CHIP_SELECT, OUTPUT);

  Serial.begin(115200);

  digitalWrite(START_CONVERSION, HIGH);  
  digitalWrite(CHIP_SELECT, HIGH);
  digitalWrite(RESET, HIGH);
  delay(100);
  digitalWrite(RESET, LOW);
  delay(100);
}


void loop() {  

  digitalWrite(START_CONVERSION, LOW);
  delayMicroseconds(100);
  digitalWrite(START_CONVERSION, HIGH);
    
  while (digitalRead(BUSY) == HIGH) {
    // wait for conversion to complete
    delayMicroseconds(1);
  }
  SPISettings _spiSettings;
  SPI.beginTransaction(_spiSettings);
  digitalWrite(CHIP_SELECT, LOW);
  while (bytesToRead > 0) {
    raw[TOTAL_RAW_BYTES - bytesToRead] = SPI.transfer(0x00);
    bytesToRead--;
  }
  digitalWrite(CHIP_SELECT, HIGH);
  SPI.endTransaction(); 
  bytesToRead = TOTAL_RAW_BYTES;

  parseRawBytes();
  Serial.printf("%x, %x, %x, %x, %x, %x, %x, %x\n", parsed[0], parsed[1], parsed[2], parsed[3], parsed[4], parsed[5], parsed[6], parsed[7] );
  delay(1000);
}

