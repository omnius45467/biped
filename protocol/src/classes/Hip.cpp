//
// Created by Jeremy Robles on 5/14/16.
//

#include "Hip.h"


void Hip::set_pins (int x, int y) {
    hip1 = x;
    hip2 = y;
}
void Hip::set_speed (int x, int y) {
    speedMin = x;
    speedMax = y;
}
void Hip::set_positions(int x, int y) {
    hipMin = x;
    hipMax = y;
}