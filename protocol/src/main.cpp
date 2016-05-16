//#include <iostream>
#include <Arduino.h>
//#include "../../Arduino/hardware/arduino/avr/cores/arduino/Arduino.h"
#include <Wire.h>
#include <Servo.h>
#include <Adafruit_PWMServoDriver.h>
#include "modules.cpp"
#include "classes/Ankle.h"
#include "classes/Leg.h"
#include "classes/Hip.h"
#include "classes/Knee.h"


#if defined(ARDUINO_ARCH_SAMD)
// for Zero, output on USB Serial console, remove line below if using programming port to program the Zero!
#define Serial SerialUSB
#endif
//SoftwareSerial Serial(0, 1);
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

Servo head;



Ankle rightAnkle;
Ankle leftAnkle;

Hip rightHip;
Hip leftHip;

Knee rightKnee;
Knee leftKnee;

uint8_t servonum = 0;

void setup() {
#ifdef ESP8266
    Wire.pins(4, 5);   // ESP8266 can use any two pins, such as SDA to #2 and SCL to #14
#endif

    pwm.begin();
    pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
    Serial.begin(9600);
    Serial.println("setting up...");

    head.attach(12);
    head.write(0);
    delay(500);


    rightAnkle.set_positions(150, 600);
    leftAnkle.set_positions(150, 600);

    rightKnee.set_positions(150, 600);
    leftKnee.set_positions(150, 600);

    rightHip.set_positions(150, 600);
    leftHip.set_positions(150, 600);

    Serial.println("setting up..");

    rightAnkle.set_pins(12, 14);
    leftAnkle.set_pins(13, 15);
    Serial.println("setting up.");
    rightAnkle.set_speed(100, 500);
    Serial.println("setting up..");
    rightKnee.set_pins(10);
    leftKnee.set_pins(11);
    Serial.println("setting up...");
    rightKnee.set_speed(100, 500);
    Serial.println("setting up...");
    rightHip.set_pins(6, 8);
    leftHip.set_pins(7, 9);
    Serial.println("setting up..");
    rightKnee.set_speed(100, 500);
    Serial.println("setting up.");
    yield();

}
void loop() {
    Serial.println("-starting-");
    //pins
//    std::cout << rightAnkle.pins() << "\n";
//    rightAnkle.pins();

    pwm.setPWM(6, 0, rightHip.center());//left waist
    pwm.setPWM(7, 0, leftHip.center());//right waist

    pwm.setPWM(8, 0, rightHip.outside());//left waist
    pwm.setPWM(9, 0, leftHip.inside());//right waist


    pwm.setPWM(10, 0, rightKnee.center());//left waist
    pwm.setPWM(11, 0, leftKnee.center());//right waist

    pwm.setPWM(12, 0, rightAnkle.center());//left waist
    pwm.setPWM(13, 0, leftAnkle.center());//right waist

    pwm.setPWM(14, 0, rightAnkle.center());//left waist
    pwm.setPWM(15, 0, leftAnkle.center());//right waist

    delay(1000);

//
//
//    pwm.setPWM(6, 0, rightHip.center());//left waist
//    pwm.setPWM(7, 0, leftHip.center());//right waist
//
//    pwm.setPWM(8, 0, rightHip.outside());//left waist
//    pwm.setPWM(9, 0, leftHip.inside());//right waist
//
//
//    pwm.setPWM(10, 0, rightKnee.center());//left waist
//    pwm.setPWM(11, 0, leftKnee.center());//right waist
//
//    pwm.setPWM(12, 0, rightAnkle.center());//left waist
//    pwm.setPWM(13, 0, leftAnkle.center());//right waist
//
//    pwm.setPWM(14, 0, rightAnkle.center());//left waist
//    pwm.setPWM(15, 0, leftAnkle.center());//right waist
//
//    delay(1000);
//    pwm.setPWM(6, 0, 500);//left waist
//    pwm.setPWM(7, 0, leftHip.center());//right waist
//    delay(50);



}



