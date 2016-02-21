/*
 * Pentagon.cpp
 *
 *  Created on: 21/02/2016
 *      Author: juan
 */

#include "Pentagon.h"

Pentagon::Pentagon(const double edge) {
		edge_ = edge;
}

Pentagon::~Pentagon() {
	// TODO Auto-generated destructor stub
}

double Pentagon::getArea() const {
	return sqrt(5.0*(5.0+2.0*sqrt(5.0)))*edge_*edge_;
}

double Pentagon::getPerimeter() const {
	return 5.0*edge_;
}
