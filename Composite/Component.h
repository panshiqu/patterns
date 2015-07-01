/*
 * Component.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef COMPOSITE_COMPONENT_H_
#define COMPOSITE_COMPONENT_H_

#include <iostream>

namespace NS_COMPOSITE {

class Component {
public:
	Component(std::string name) : _name(name) {}
	virtual ~Component() {}
	virtual void operation(void)
	{
		std::cout << _name << std::endl;
	}
	virtual void add(Component *component) {}
	virtual void remove(Component *component) {}

private:
	std::string _name;
};

} /* namespace NS_COMPOSITE */

#endif /* COMPOSITE_COMPONENT_H_ */
