/*
 * ConcreteImplementorB.h
 *
 *  Created on: 2015年6月30日
 *      Author: root
 */

#ifndef BRIDGE_CONCRETEIMPLEMENTORB_H_
#define BRIDGE_CONCRETEIMPLEMENTORB_H_

#include "Implementor.h"
#include <iostream>

namespace NS_BRIDGE {

class ConcreteImplementorB : public Implementor
{
public:
	ConcreteImplementorB() {}
	virtual ~ConcreteImplementorB() {}
	virtual void operationImp(void)
	{
		std::cout << "ConcreteImplementorB" << std::endl;
	}
};

} /* namespace NS_BRIDGE */

#endif /* BRIDGE_CONCRETEIMPLEMENTORB_H_ */
