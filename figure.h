/*
 * figure.h
 *
 *  Created on: 8 de feb. de 2016
 *      Author: dirac89
 */

#ifndef FIGURE_H_
#define FIGURE_H_

class figure {
public:
	figure();
	virtual ~figure();

	double getArea() const 0;
	double getPermiter()const 0;
};

#endif /* FIGURE_H_ */
