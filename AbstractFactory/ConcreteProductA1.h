/*
 * ConcreteProductA1.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef ABSTRACTFACTORY_CONCRETEPRODUCTA1_H_
#define ABSTRACTFACTORY_CONCRETEPRODUCTA1_H_

#include "AbstractProductA.h"
#include <iostream>

namespace NS_ABSTRACT_FACTORY {

class ConcreteProductA1 : public AbstractProductA
{
public:
	ConcreteProductA1() {}
	virtual ~ConcreteProductA1() {}

	virtual void printSelf(void)
	{
		std::cout << "I'm ConcreteProductA1." << std::endl;
	}
};

} /* namespace NS_ABSTRACT_FACTORY */

#endif /* ABSTRACTFACTORY_CONCRETEPRODUCTA1_H_ */
