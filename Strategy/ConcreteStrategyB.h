/*
 * ConcreteStrategyB.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef STRATEGY_CONCRETESTRATEGYB_H_
#define STRATEGY_CONCRETESTRATEGYB_H_

#include <iostream>
#include "Strategy.h"

namespace NS_STRATEGY {

class ConcreteStrategyB : public Strategy
{
public:
	ConcreteStrategyB() {}
	virtual ~ConcreteStrategyB() {}
	virtual void algorithmInterface(int a, int b)
	{
		std::cout << "a-b = " << a-b << std::endl;
	}
};

} /* namespace NS_STRATEGY */

#endif /* STRATEGY_CONCRETESTRATEGYB_H_ */
