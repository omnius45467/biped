//
// Created by Jeremy Robles on 5/14/16.
//

#ifndef BIPED_ANKLE_H
#define BIPED_ANKLE_H

#ifndef ADAFRUIT_PWMSERVODRIVER_H
    #define ADAFRUIT_PWMSERVODRIVER_H
    #include <Adafruit_PWMServoDriver.h>
#endif


class Ankle {
    double p[2];
    int ankle1, ankle2;
    int ankleMin, ankleMax, ankleCenter;
    int speedMin, speedMax;

public:
    void set_pins(int, int);

    void set_speed(int, int);

    void set_positions(int, int);

    int reverse() {
        /*
         * this needs to reverse the positions
         * for the opposite side of the robot*/
        return 0;
    }

    //develop void function for the opposite side of the robot
    int tests() { return ankle1 * ankle2; }

    int inside() {
        return ankleMin;
    }

    int outside() {
        return ankleMax;
    }

    int center() {
        ankleCenter = (ankleMin + ankleMax) / 2;
        return ankleCenter;
    }
    int lean_forward(){
        return 1;
    }
};


#endif //BIPED_ANKLE_H
