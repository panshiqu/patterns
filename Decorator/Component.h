/*
 * Component.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef DECORATOR_COMPONENT_H_
#define DECORATOR_COMPONENT_H_

namespace NS_DECORATOR {

class Component {
public:
	Component() {}
	virtual ~Component() {}
	virtual void operation(void) = 0;
};

} /* namespace NS_DECORATOR */

#endif /* DECORATOR_COMPONENT_H_ */
