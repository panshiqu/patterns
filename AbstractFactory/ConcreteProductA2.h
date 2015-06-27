/*
 * ConcreteProductA2.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef ABSTRACTFACTORY_CONCRETEPRODUCTA2_H_
#define ABSTRACTFACTORY_CONCRETEPRODUCTA2_H_

#include "AbstractProductA.h"
#include <iostream>

class ConcreteProductA2 : public AbstractProductA
{
public:
	ConcreteProductA2() {}
	virtual ~ConcreteProductA2() {}

	virtual void printSelf(void)
	{
		std::cout << "I'm ConcreteProductA2." << std::endl;
	}
};

#endif /* ABSTRACTFACTORY_CONCRETEPRODUCTA2_H_ */
