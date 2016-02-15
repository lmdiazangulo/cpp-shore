/*
 * Circle.h
 *
 *  Created on: 8 de feb. de 2016
 *      Author: dirac89
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <math.h>

#include "Figure.h"


class Circle: public Figure {
public:
	Circle(const double ratio);
	virtual ~Circle();

	double getArea() const;
	double getPerimeter() const;

private:
	double ratio_;
};

#endif /* CIRCLE_H_ */
