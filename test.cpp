#include <iostream>
#include "classes/Ankle.h"
using namespace std;

class Leg {
	int hip1, hip2, knee, ankle1, ankle2;
    int test;
	int legMin, legMax, legCenter;
	int speedMin, speedMax;
	public:
		void set_pins(int, int, int, int, int);
		void set_speed(int, int);
		void set_positions(int, int);
		int tests(){
            test =  hip1 + hip2 + knee + ankle1 + ankle2;
            return test;
        };
        int inside(int){
            return legMin;
        }
        int outside(int){
            return legMax;
        }
        int center(){
            legCenter = (legMin + legMax) / 2;
            return legCenter;
        };
        int driveTo(){

        }
};

//class Ankle {
//	int ankle1, ankle2;
//	int ankleMin, ankleMax, ankleCenter;
//	int speedMin, speedMax;
//	public:
//		void set_pins (int,int);
//		void set_speed(int, int);
//		void set_positions(int, int);
//		void reverse(){};
//		//develop void function for the opposite side of the robot
//		int tests() {return ankle1*ankle2;}r
//		int driveTo() {
//			/*
//			 *Drive to positon that will be passed
//			 *as an argument
//			 * */
//			return 0;
//		}
//		int inside() {return 1;}
//		int outside() {return 1;}
//		int center() {
//			/*
//			 * find the midpoint between smallest and
//			 * largest extent of the servo
//			 * */
//			ankleCenter = (ankleMin + ankleMax) / 2;
//			return ankleCenter;
//		}
//};
//
//void Ankle::set_pins (int x, int y) {
//	  ankle1 = x;
//	  ankle2 = y;
//}
//void Ankle::set_speed (int x, int y) {
//	speedMin = x;
//	speedMax = y;
//}
//void Ankle::set_positions(int x, int y) {
//	ankleMin = x;
//	ankleMax = y;
//}


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

int main () {
	  Ankle ankle;
	  Leg rightLeg;
	  ankle.set_pins (3,4);
	  ankle.set_speed(0, 250);
	  ankle.set_positions(0, 180);
	  cout << "ankle tests: " << ankle.tests() << "\n";
	  cout << "ankle outside: " << ankle.outside() << "\n";
	  cout << "ankle inside: " << ankle.inside() << "\n";
	  cout << "ankle center: " << ankle.center();
	  return 0;
}
