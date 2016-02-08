/*
 * Figure.h
 *
 *  Created on: 08/02/2016
 *      Author: juan
 */

#ifndef FIGURE_H_
#define FIGURE_H_

class Figure {
public:
	Figure();
	virtual ~Figure();

	double getArea() const = 0;
	double getPerimenter() const = 0;
};

#endif /* FIGURE_H_ */
