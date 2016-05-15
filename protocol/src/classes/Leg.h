//
// Created by Jeremy Robles on 5/14/16.
//

#ifndef BIPED_LEG_H
#define BIPED_LEG_H


class Leg {
    int hip1, hip2, knee, ankle1, ankle2;
    int test;
    int legMin, legMax, legCenter;
    int speedMin, speedMax;
public:
    void set_pins(int, int, int, int, int);

    void set_speed(int, int);

    void set_positions(int, int);

    int tests() {
        test = hip1 + hip2 + knee + ankle1 + ankle2;
        return test;
    };

    int inside(int) {
        return legMin;
    }

    int outside(int) {
        return legMax;
    }

    int center() {
        legCenter = (legMin + legMax) / 2;
        return legCenter;
    };

    int driveTo() {
        return 0;
    }
};


#endif //BIPED_LEG_H
