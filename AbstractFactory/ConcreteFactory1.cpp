/*
 * ConcreteFactory1.cpp
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#include "ConcreteFactory1.h"
#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"

namespace NS_ABSTRACT_FACTORY {

AbstractProductA *ConcreteFactory1::createProductA()
{
	return new ConcreteProductA1();
}

AbstractProductB *ConcreteFactory1::createProductB()
{
	return new ConcreteProductB1();
}

} /* namespace NS_ABSTRACT_FACTORY */

