//
// Created by Jeremy Robles on 5/14/16.
//

#include "Leg.h"

void Leg::set_pins (int x, int y, int a, int b, int c) {
    hip1 = x;
    hip2 = y;
    knee = a;
    ankle1 = b;
    ankle2 = c;
}
void Leg::set_speed (int x, int y) {
    speedMin = x;
    speedMax = y;
}
void Leg::set_positions(int x, int y) {
    legMin = x;
    legMax = y;
}