/*
 * Rectangle.h
 *
 *  Created on: Feb 8, 2016
 *      Author: luis
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Figure.h"

class Rectangle: public Figure {
public:
	Rectangle(const double width, const double height);
	virtual ~Rectangle();

	double getArea() const;
	double getPerimeter() const;
private:
	double width_;
	double height_;
};

#endif /* RECTANGLE_H_ */
