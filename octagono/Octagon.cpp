/*
 * Octagon.cpp
 *
 *  Created on: 15/02/2016
 *      Author: gamoles
 */

#include "Octagon.h"


Octagon::Octagon(const double edge) {
	edge_=edge;
}

Octagon::~Octagon() {
	// TODO Auto-generated destructor stub
}

double Octagon::getArea() const {
	return 2*(1+sqrt(2))*edge*edge;
}

double Octagon::getPerimeter() const {
	return 8*edge;
}
