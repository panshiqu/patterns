/*
 * ConcreteProductB1.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef ABSTRACTFACTORY_CONCRETEPRODUCTB1_H_
#define ABSTRACTFACTORY_CONCRETEPRODUCTB1_H_

#include "AbstractProductB.h"
#include <iostream>

class ConcreteProductB1 : public AbstractProductB
{
public:
	ConcreteProductB1() {}
	virtual ~ConcreteProductB1() {}

	virtual void printSelf(void)
	{
		std::cout << "I'm ConcreteProductB1." << std::endl;
	}
};

#endif /* ABSTRACTFACTORY_CONCRETEPRODUCTB1_H_ */
