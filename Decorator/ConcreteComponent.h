/*
 * ConcreteComponent.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef DECORATOR_CONCRETECOMPONENT_H_
#define DECORATOR_CONCRETECOMPONENT_H_

#include "Component.h"
#include <iostream>

namespace NS_DECORATOR {

class ConcreteComponent : public Component
{
public:
	ConcreteComponent() {}
	virtual ~ConcreteComponent() {}
	virtual void operation(void)
	{
		std::cout << "ConcreteComponent" << std::endl;
	}
};

} /* namespace NS_DECORATOR */

#endif /* DECORATOR_CONCRETECOMPONENT_H_ */
