/*
 * ConcretePrototype2.h
 *
 *  Created on: 2015年6月28日
 *      Author: root
 */

#ifndef PROTOTYPE_CONCRETEPROTOTYPE2_H_
#define PROTOTYPE_CONCRETEPROTOTYPE2_H_

#include "Prototype.h"
#include <iostream>

namespace NS_PROTOTYPE {

class ConcretePrototype2 : public Prototype
{
public:
	ConcretePrototype2() : _index("zero") {}
	virtual ~ConcretePrototype2() {}
	virtual Prototype *clone(void)
	{
		ConcretePrototype2 *prototype = new ConcretePrototype2();
		prototype->setIndex(getIndex());
		return prototype;
	}
	virtual void printSelf(void)
	{
		std::cout << "index: " << _index << std::endl;
	}

	std::string getIndex(void)			{ return _index; }
	void setIndex(std::string index)	{ _index = index; }

private:
	std::string _index;
};

} /* namespace NS_PROTOTYPE */

#endif /* PROTOTYPE_CONCRETEPROTOTYPE2_H_ */
