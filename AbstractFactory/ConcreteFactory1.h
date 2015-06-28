/*
 * ConcreteFactory1.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef ABSTRACTFACTORY_CONCRETEFACTORY1_H_
#define ABSTRACTFACTORY_CONCRETEFACTORY1_H_

#include "AbstractFactory.h"

namespace NS_ABSTRACT_FACTORY {

class ConcreteFactory1 : public AbstractFactory
{
public:
	ConcreteFactory1() {}
	virtual ~ConcreteFactory1() {}

	virtual AbstractProductA *createProductA();
	virtual AbstractProductB *createProductB();
};

} /* namespace NS_ABSTRACT_FACTORY */

#endif /* ABSTRACTFACTORY_CONCRETEFACTORY1_H_ */
