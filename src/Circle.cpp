/*
 * Circle.cpp
 *
 *  Created on: 8 de feb. de 2016
 *      Author: dirac89
 */

#include "Circle.h"

Circle::Circle(const double radius){
	radius_=radius;
}

Circle::~Circle() {
	// TODO Auto-generated destructor stub
}

double Circle::getArea() const {
return 	M_PI*pow(radius_,2);
}

double Circle::getPerimeter() const {
return	2*M_PI*radius_;
}
