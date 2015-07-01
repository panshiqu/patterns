/*
 * Composite.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef COMPOSITE_COMPOSITE_H_
#define COMPOSITE_COMPOSITE_H_

#include "Component.h"
#include <list>

namespace NS_COMPOSITE {

class Composite : public Component
{
public:
	Composite(std::string name) : Component(name) {}
	virtual ~Composite() {}
	virtual void operation(void)
	{
		Component::operation();
		std::list<Component *>::iterator itr = _components.begin();
		for (; itr != _components.end(); itr++)
		{
			(*itr)->operation();
		}
	}
	virtual void add(Component *component)
	{
		_components.push_back(component);
	}
	virtual void remove(Component *component)
	{
		// do remove
	}

private:
	std::list<Component *> _components;
};

} /* namespace NS_COMPOSITE */

#endif /* COMPOSITE_COMPOSITE_H_ */
