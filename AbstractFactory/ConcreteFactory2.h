/*
 * ConcreteFactory2.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef ABSTRACTFACTORY_CONCRETEFACTORY2_H_
#define ABSTRACTFACTORY_CONCRETEFACTORY2_H_

#include "AbstractFactory.h"

class ConcreteFactory2 : public AbstractFactory
{
public:
	ConcreteFactory2() {}
	virtual ~ConcreteFactory2() {}

	virtual AbstractProductA *createProductA();
	virtual AbstractProductB *createProductB();
};

#endif /* ABSTRACTFACTORY_CONCRETEFACTORY2_H_ */
