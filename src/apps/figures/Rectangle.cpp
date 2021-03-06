/*
 * Rectangle.cpp
 *
 *  Created on: Feb 8, 2016
 *      Author: luis
 */

#include "Rectangle.h"

Rectangle::Rectangle(const double width, const double height) {
	width_ = width;
	height_ = height;
}

Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}

double Rectangle::getArea() const {
	return width_ * height_;
}

double Rectangle::getPerimeter() const {
	return (2.0*width_ + 2.0*height_);
}
