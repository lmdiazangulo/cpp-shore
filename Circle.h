/*
 * Circle.h
 *
 *  Created on: 8 de feb. de 2016
 *      Author: dirac89
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "figure.h"

class Circle: public figure {
public:
	Circle(const double ratio);
	virtual ~Circle();

private:
	double ratio_;
};

#endif /* CIRCLE_H_ */
