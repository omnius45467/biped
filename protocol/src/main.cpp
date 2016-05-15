#include "../../Arduino/hardware/arduino/avr/cores/arduino/Arduino.h"
#include <Wire.h>
//#include "../../Arduino/hardware/arduino/avr/libraries/Wire/src/Wire.h"
//#include "../../Arduino/hardware/arduino/avr/libraries/SoftwareSerial/src/SoftwareSerial.h"
//#include "../lib/channel_driver/Adafruit_PWMServoDriver.h"

#include <Adafruit_PWMServoDriver.h>
#include "classes/Ankle.h"
//#include "classes/Leg.h"
//#include "classes/Hip.h"



#if defined(ARDUINO_ARCH_SAMD)
// for Zero, output on USB Serial console, remove line below if using programming port to program the Zero!
   #define Serial SerialUSB
#endif
//SoftwareSerial Serial(0, 1);
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
Ankle rightAnkle;

uint8_t servonum = 0;

void setup() {
#ifdef ESP8266
    Wire.pins(4, 5);   // ESP8266 can use any two pins, such as SDA to #2 and SCL to #14
#endif

    pwm.begin();

    pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
    Serial.begin(9600);
    Serial.println("16 channel PWM test!");
    rightAnkle.set_pins(1, 2);


    yield();



}

void loop() {
    // Drive each servo one at a time
    Serial.println(servonum);
    for (uint16_t pulselen = 150; pulselen < 600; pulselen++) {
        pwm.setPWM(servonum, 0, pulselen);
    }

    delay(500);
    for (uint16_t pulselen = 600; pulselen > 150; pulselen--) {
        pwm.setPWM(servonum, 0, pulselen);
    }

    delay(500);

    servonum ++;
    if (servonum > 7) servonum = 0;
}
