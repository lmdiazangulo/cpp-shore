/*
 * Octagon.cpp
 *
 *  Created on: 15/02/2016
 *      Author: gamoles
 */

#include "Octagon.h"


Octagon::Octagon(const double edge) {
	edge_ = edge;
}

Octagon::~Octagon() {
	// TODO Auto-generated destructor stub
}

double Octagon::getArea() const {
	return 2.0 * (1.0 + sqrt(2.0)) * edge_*edge_;
}

double Octagon::getPerimeter() const {
	return 8.0 * edge_;
}
