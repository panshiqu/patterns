/*
 * ConcreteFactory2.cpp
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#include "ConcreteFactory2.h"
#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

namespace NS_ABSTRACT_FACTORY {

AbstractProductA *ConcreteFactory2::createProductA()
{
	return new ConcreteProductA2();
}

AbstractProductB *ConcreteFactory2::createProductB()
{
	return new ConcreteProductB2();
}

} /* namespace NS_ABSTRACT_FACTORY */

