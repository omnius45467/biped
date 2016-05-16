//
// Created by Jeremy Robles on 5/14/16.
//
#include "Ankle.h"

void Ankle::set_pins(int x, int y) {

    ankle1 = x;
    ankle2 = y;


}

void Ankle::set_speed(int x, int y) {
    speedMin = x;
    speedMax = y;

}

void Ankle::set_positions(int x, int y) {
    ankleMin = x;
    ankleMax = y;
}


