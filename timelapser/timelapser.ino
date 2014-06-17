/**
ENERGY
**/
#include <avr/sleep.h>
#include <avr/wdt.h>

#define DISABLE_ADC 0


/**
PINS
**/
#define LED_BULB        4
#define LED_CLICK       3
#define OPTO            5
#define POT             A0
#define BULB            18
#define SENSOR_5V       15

/**
CLICK INTERVAL
**/
int read_val;
int click_int;
const int wtgInt[]={1,2,4,8,16,32,64,96,128,256};
int cyclesNum;
int count;

/***
OTHER
***/
boolean isBulb;
int startOpenShutter  = 4000;
int endOpenShutter    = 5000;
int openShutter       = 4000;

void setup() {
  globalInit();
  Serial.begin(9600);
  
}

void loop() {
   readInputs();
   shootUpdate();
   energyManagement();
}
