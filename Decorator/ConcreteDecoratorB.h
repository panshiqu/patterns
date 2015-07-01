/*
 * ConcreteDecoratorB.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef DECORATOR_CONCRETEDECORATORB_H_
#define DECORATOR_CONCRETEDECORATORB_H_

#include "Decorator.h"
#include <iostream>

namespace NS_DECORATOR {

class ConcreteDecoratorB : public Decorator
{
public:
	ConcreteDecoratorB(Component *component) : Decorator(component) {}
	virtual ~ConcreteDecoratorB() {}
	virtual void operation(void)
	{
		Decorator::operation();
		addBehavior();
	}
	void addBehavior(void)
	{
		std::cout << "Move" << std::endl;
	}
};

} /* namespace NS_DECORATOR */

#endif /* DECORATOR_CONCRETEDECORATORB_H_ */
