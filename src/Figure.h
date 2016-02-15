/*
 * Figure.h
 *
 *  Created on: Feb 8, 2016
 *      Author: luis
 */

#ifndef FIGURE_H_
#define FIGURE_H_

class Figure {
public:
	Figure();
	virtual ~Figure();

	virtual double getArea() const = 0;
	virtual double getPerimeter() const = 0;
};

#endif /* FIGURE_H_ */
