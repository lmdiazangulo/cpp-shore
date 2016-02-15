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
<<<<<<< HEAD:src/Rectangle.cpp
	return width_*height_;
}

double Rectangle::getPerimeter() const {
	return 2*width_+2* height_;
=======
	return width_ * height_;
}

double Rectangle::getPerimeter() const {
	return (2.0*width_ + 2.0*height_);
>>>>>>> 9ad50c5eab54e8c21702f471496930f09ee4f9ef:src/Rectangle.cpp
}
