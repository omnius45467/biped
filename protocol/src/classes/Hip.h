//
// Created by Jeremy Robles on 5/14/16.
//

#ifndef BIPED_HIP_H
#define BIPED_HIP_H


class Hip {
    int hip1, hip2;
    int hipMin, hipMax, hipCenter;
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
    int tests() { return hip1 * hip2; }

    int driveTo() {
        /*
         *Drive to positon that will be passed
         *as an argument
         * */
        return 0;
    }

    int inside() {
        return hipMin;
    }

    int outside() {
        return hipMax;
    }

    int center() {
        /*
         * find the midpoint between smallest and
         * largest extent of the servo
         * */
        hipCenter = (hipMin + hipMax) / 2;
        return hipCenter;
    }
};


#endif //BIPED_HIP_H
