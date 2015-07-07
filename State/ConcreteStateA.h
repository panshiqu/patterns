/*
 * ConcreteStateA.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef STATE_CONCRETESTATEA_H_
#define STATE_CONCRETESTATEA_H_

#include "State.h"
#include "ConcreteStateB.h"
#include <iostream>

namespace NS_STATE {

class ConcreteStateA : public State
{
public:
	ConcreteStateA() {}
	virtual ~ConcreteStateA() {}
	virtual void handle(Context *context)
	{
		std::cout << "ConcreteStateA." << std::endl;
		changeState(context, ConcreteStateB::getInstance());
	}
};

} /* namespace NS_STATE */

#endif /* STATE_CONCRETESTATEA_H_ */
