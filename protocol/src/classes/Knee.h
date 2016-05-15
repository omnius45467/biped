//
// Created by Jeremy Robles on 5/14/16.
//

#ifndef BIPED_KNEE_H
#define BIPED_KNEE_H


class Knee {

    int knee;
    int kneeMin, kneeMax, kneeCenter;
    int speedMin, speedMax;

public:
    void set_pins(int);

    void set_speed(int, int);

    void set_positions(int, int);

    int reverse() {
        /*
         * this needs to reverse the positions
         * for the opposite side of the robot*/
        return 0;
    }

    //develop void function for the opposite side of the robot
    int tests() { return knee; }

    int driveTo() {
        /*
         *Drive to positon that will be passed
         *as an argument
         * */
        return 0;
    }

    int inside() {
        return kneeMin;
    }

    int outside() {
        return kneeMax;
    }

    int center() {
        kneeCenter = (kneeMin + kneeMax) / 2;
        return kneeCenter;
    }
    int lean_forward(){
        return 1;
    }
};


#endif //BIPED_KNEE_H
