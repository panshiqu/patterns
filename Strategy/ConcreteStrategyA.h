/*
 * ConcreteStrategyA.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef STRATEGY_CONCRETESTRATEGYA_H_
#define STRATEGY_CONCRETESTRATEGYA_H_

#include <iostream>
#include "Strategy.h"

namespace NS_STRATEGY {

class ConcreteStrategyA : public Strategy
{
public:
	ConcreteStrategyA() {}
	virtual ~ConcreteStrategyA() {}
	virtual void algorithmInterface(int a, int b)
	{
		std::cout << "a+b = " << a+b << std::endl;
	}
};

} /* namespace NS_STRATEGY */

#endif /* STRATEGY_CONCRETESTRATEGYA_H_ */
