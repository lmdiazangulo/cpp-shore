// my first program in C++
#include <iostream>
#include <math.h>

#include "Rectangle.h"
#include "Circle.h"
#include "Octagon.h"

using namespace std;

void printBieeeenOrOhh(const bool result) {
	if (result) {
		cout << " ++ Bieeeeeeen!!!!" << endl;
	} else {
		cout << " -- Ohhhhhh!!!!" << endl;
	}
}

int main() {
	const Rectangle rect(4.0, 2.0);
	printBieeeenOrOhh(rect.getArea() == 8.0);

//	const Triangle tri(4.0, 2.0);
//	printBieeeenOrOhh(tri.getArea() == 4.0);

	const Octagon octo();

	const Circle circ(5.0);
	printBieeeenOrOhh(circ.getArea() == M_PI * pow(5.0,2));

	return 0;

}
