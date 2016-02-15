// my first program in C++
#include <iostream>
#include <math.h>
#include <vector>

#include "Circle.h"
#include "Octagon.h"
#include "Rectangle.h"
#include "Triangle.h"


using namespace std;

void printBieeeenOrOhh(const bool result) {
	if (result) {
		cout << " ++ Bieeeeeeen!!!!" << endl;
	} else {
		cout << " -- Ohhhhhh!!!!" << endl;
	}
}

double computeArea(const vector<const Figure*>& rhs) {
	double res = 0.0;
	for (unsigned int i = 0; i < rhs.size(); i++) {
		res += rhs[i]->getArea();
	}
	return res;
}

int main() {
	const Rectangle rect(4.0, 2.0);
	printBieeeenOrOhh(rect.getArea() == 8.0);

	const Triangle tri(4.0, 2.0);
	printBieeeenOrOhh(tri.getArea() == 4.0);

	const Circle circ(5.0);
	printBieeeenOrOhh(circ.getArea() == M_PI * pow(5.0,2));

	vector<const Figure*> figureList;

	figureList.push_back(new Rectangle(4.0, 2.0));
	figureList.push_back(new Rectangle(5.0, 3.0));
	figureList.push_back(new Circle(2.0));
	figureList.push_back(new Octagon(3.0));
	figureList.push_back(new Triangle(5.0,2.0));

	cout << computeArea(figureList) << endl;

	return 0;

}
