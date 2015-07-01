/*
 * ConcreteFlyweight.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef FLYWEIGHT_CONCRETEFLYWEIGHT_H_
#define FLYWEIGHT_CONCRETEFLYWEIGHT_H_

#include "Flyweight.h"

namespace NS_FLYWEIGHT {

class ConcreteFlyweight : public Flyweight
{
public:
	ConcreteFlyweight() : _intrinsicState(0) {}
	virtual ~ConcreteFlyweight() {}
	virtual void operation(std::string extrinsicState)
	{
		std::cout << extrinsicState << " ConcreteFlyweight - " << _intrinsicState << std::endl;
	}

	void setIntrinsicState(int intrinsicState)	{ _intrinsicState = intrinsicState; }

private:
	int _intrinsicState;
};

} /* namespace NS_FLYWEIGHT */

#endif /* FLYWEIGHT_CONCRETEFLYWEIGHT_H_ */
