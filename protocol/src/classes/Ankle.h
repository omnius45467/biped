//
// Created by Jeremy Robles on 5/14/16.
//

#ifndef BIPED_ANKLE_H
#define BIPED_ANKLE_H

//#define SERVOMIN  150 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX  600 // this is the 'maximum' pulse length count (out of 4096)



class Ankle {
    int moveTo;
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

    int pins(){
        int array[2] = {ankle1, ankle2};
        return array[2];
    }

    int driveTo(){
        return 1;
    }

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
