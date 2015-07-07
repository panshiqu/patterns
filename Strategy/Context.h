/*
 * Context.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef STRATEGY_CONTEXT_H_
#define STRATEGY_CONTEXT_H_

#include <iostream>
#include "Strategy.h"

namespace NS_STRATEGY {

class Context {
public:
	Context() : _strategy(0) {}
	virtual ~Context() {}
	void contextInterface(void)
	{
		int a, b;
		std::cout << "a=";
		std::cin >> a;
		std::cout << "b=";
		std::cin >> b;

		if (_strategy)
			_strategy->algorithmInterface(a, b);
	}

	void setStrategy(Strategy *strategy)
	{
		_strategy = strategy;
	}

private:
	Strategy *_strategy;
};

} /* namespace NS_STRATEGY */

#endif /* STRATEGY_CONTEXT_H_ */
