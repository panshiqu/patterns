/*
 * ConcreteDecoratorA.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef DECORATOR_CONCRETEDECORATORA_H_
#define DECORATOR_CONCRETEDECORATORA_H_

#include "Decorator.h"
#include <iostream>

namespace NS_DECORATOR {

class ConcreteDecoratorA : public Decorator
{
public:
	ConcreteDecoratorA(Component *component) : Decorator(component) {}
	virtual ~ConcreteDecoratorA() {}
	virtual void operation(void)
	{
		Decorator::operation();
		addBehavior();
	}
	void addBehavior(void)
	{
		std::cout << "Jump" << std::endl;
	}
};

} /* namespace NS_DECORATOR */

#endif /* DECORATOR_CONCRETEDECORATORA_H_ */
