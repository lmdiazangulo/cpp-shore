/*
 * Octagon.h
 *
 *  Created on: 15/02/2016
 *      Author: gamoles
 */

#ifndef OCTAGON_H_
#define OCTAGON_H_

#include "Figure.h"

class Octagon: public Figure {
public:
	Octagon(const double edge);
	virtual ~Octagon();

	double getArea() const;
	double getPerimeter() const;
private:
	double edge_;
};

#endif /* OCTAGON_H_ */
