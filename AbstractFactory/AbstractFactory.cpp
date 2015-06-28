/*
 * AbstractFactory.cpp
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#include "AbstractFactory.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

namespace NS_ABSTRACT_FACTORY {

AbstractFactory *AbstractFactory::getFactory(int type)
{
	if (FACTORY_ONE == type)
		return new ConcreteFactory1();
	else if (FACTORY_TWO == type)
		return new ConcreteFactory2();
	else return 0;
}

} /* namespace NS_ABSTRACT_FACTORY */

