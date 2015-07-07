/*
 * ConcreteStateB.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef STATE_CONCRETESTATEB_H_
#define STATE_CONCRETESTATEB_H_

#include "State.h"
#include <iostream>

namespace NS_STATE {

class ConcreteStateB : public State
{
public:
	ConcreteStateB() {}
	virtual ~ConcreteStateB() {}
	static ConcreteStateB *getInstance(void)
	{
		static ConcreteStateB instance;
		return &instance;
	}
	virtual void handle(Context *context)
	{
		std::cout << "ConcreteStateB." << std::endl;
	}
};

} /* namespace NS_STATE */

#endif /* STATE_CONCRETESTATEB_H_ */
