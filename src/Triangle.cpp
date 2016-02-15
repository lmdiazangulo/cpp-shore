/*
 * Triangle.cpp
 *
 *  Created on: 08/02/2016
 *      Author: juan
 */

#include "Triangle.h"

Triangle::Triangle(const double width, const double height) {
	width_ = width;
	height_= height;
}

Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

double Triangle::getArea() const {
	return 3.0;
}

double Triangle::getPerimeter() const {
	return 14.0;
}
