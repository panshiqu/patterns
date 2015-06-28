/*
 * ConcreteProductB2.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef ABSTRACTFACTORY_CONCRETEPRODUCTB2_H_
#define ABSTRACTFACTORY_CONCRETEPRODUCTB2_H_

#include "AbstractProductB.h"
#include <iostream>

namespace NS_ABSTRACT_FACTORY {

class ConcreteProductB2 : public AbstractProductB
{
public:
	ConcreteProductB2() {}
	virtual ~ConcreteProductB2() {}

	virtual void printSelf(void)
	{
		std::cout << "I'm ConcreteProductB2." << std::endl;
	}
};

} /* namespace NS_ABSTRACT_FACTORY */

#endif /* ABSTRACTFACTORY_CONCRETEPRODUCTB2_H_ */
