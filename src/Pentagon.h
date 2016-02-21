/*
 * Pentagon.h
 *
 *  Created on: 21/02/2016
 *      Author: juan
 */

#ifndef PENTAGON_H_
#define PENTAGON_H_

#include "Figure.h"
#include <math.h>

class Pentagon: public Figure {
public:
	Pentagon(const double edge);
	virtual ~Pentagon();

		double getArea() const;
		double getPerimeter() const;
private:
	double edge_;
};

#endif /* PENTAGON_H_ */
