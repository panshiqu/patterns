/*
 * ConcretePrototype1.h
 *
 *  Created on: 2015年6月28日
 *      Author: root
 */

#ifndef PROTOTYPE_CONCRETEPROTOTYPE1_H_
#define PROTOTYPE_CONCRETEPROTOTYPE1_H_

#include "Prototype.h"
#include <iostream>

namespace NS_PROTOTYPE {

class ConcretePrototype1 : public Prototype
{
public:
	ConcretePrototype1() : _index(0) {}
	virtual ~ConcretePrototype1() {}
	virtual Prototype *clone(void)
	{
		ConcretePrototype1 *prototype = new ConcretePrototype1();
		prototype->setIndex(getIndex());
		return prototype;
	}
	virtual void printSelf(void)
	{
		std::cout << "index: " << _index << std::endl;
	}

	int getIndex(void)		{ return _index; }
	void setIndex(int index){ _index = index; }

private:
	int _index;
};

} /* namespace NS_PROTOTYPE */

#endif /* PROTOTYPE_CONCRETEPROTOTYPE1_H_ */
