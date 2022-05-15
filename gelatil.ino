#include <dht.h>

#include <LiquidCrystal.h>

const int pinoDHT = A0;

dht DHT;

const int x11 = 11, x10 = 10, x6 = 6, x5 = 5, x4 = 4, x3 = 3;

LiquidCrystal ue(x11,x10,x6,x5,x4,x3);

void setup() {
  ue.begin(16,2);
  ue.clear();
  delay(1000);
}

void loop() {
  DHT.read11(pinoDHT);
  ue.setCursor(0,0);
  ue.print("TEMPERATURA: ");
  ue.setCursor(4,1);
  ue.print(DHT.temperature);
}
