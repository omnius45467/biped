//
// Created by Jeremy Robles on 5/14/16.
//

#include "Knee.h"

void Knee::set_pins (int x) {
    knee = x;
}
void Knee::set_speed (int x, int y) {
    speedMin = x;
    speedMax = y;
}
void Knee::set_positions(int x, int y) {
    kneeMin = x;
    kneeMax = y;
}