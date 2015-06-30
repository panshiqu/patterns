/*
 * ConcreteImplementorA.h
 *
 *  Created on: 2015年6月30日
 *      Author: root
 */

#ifndef BRIDGE_CONCRETEIMPLEMENTORA_H_
#define BRIDGE_CONCRETEIMPLEMENTORA_H_

#include "Implementor.h"
#include <iostream>

namespace NS_BRIDGE {

class ConcreteImplementorA : public Implementor
{
public:
	ConcreteImplementorA() {}
	virtual ~ConcreteImplementorA() {}
	virtual void operationImp(void)
	{
		std::cout << "ConcreteImplementorA" << std::endl;
	}
};

} /* namespace NS_BRIDGE */

#endif /* BRIDGE_CONCRETEIMPLEMENTORA_H_ */
