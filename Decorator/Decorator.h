/*
 * Decorator.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef DECORATOR_DECORATOR_H_
#define DECORATOR_DECORATOR_H_

#include "Component.h"

namespace NS_DECORATOR {

class Decorator : public Component
{
public:
	Decorator(Component *component) : _component(component) {}
	virtual ~Decorator() {}
	virtual void operation(void)
	{
		_component->operation();
	}

private:
	Component *_component;
};

} /* namespace NS_DECORATOR */

#endif /* DECORATOR_DECORATOR_H_ */
