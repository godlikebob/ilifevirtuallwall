/*
 * Virtual Wall for iLife v7s
 * For ATtiny85 with Micronucleus bootloader
 * Plug a 940nm IRLed in pin1
 * Version 0.1 by @godlikebob
 * 
 * Notes: 
 *  - Import IRremote Library by shirriff
 *  
 */
#include <IRremote.h>
#define DELAY 150

IRsend irsend;

void setup(){
}

void loop() {
  unsigned int rawData[17] = {9200,4600, 600,550, 600,1700, 600,550, 600,550, 600,1650, 600,550, 600,550, 600};
  irsend.sendRaw(rawData, 17, 38); 
  delay(DELAY);
}
