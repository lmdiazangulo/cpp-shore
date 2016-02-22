/*
 * Triangle.h
 *
 *  Created on: 08/02/2016
 *      Author: juan
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Figure.h"

class Triangle: public Figure {
public:
	Triangle(const double width, const double height);
	virtual ~Triangle();

	        double getArea() const;
			double getPerimeter() const;

private:
	double width_;
	double height_;
};

#endif /* TRIANGLE_H_ */
