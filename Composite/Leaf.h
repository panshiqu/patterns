/*
 * Leaf.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef COMPOSITE_LEAF_H_
#define COMPOSITE_LEAF_H_

#include "Component.h"

namespace NS_COMPOSITE {

class Leaf : public Component
{
public:
	Leaf(std::string name) : Component(name) {}
	virtual ~Leaf() {}
	virtual void operation(void)
	{
		Component::operation();
	}
};

} /* namespace NS_COMPOSITE */

#endif /* COMPOSITE_LEAF_H_ */
