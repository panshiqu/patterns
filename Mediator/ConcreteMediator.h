/*
 * ConcreteMediator.h
 *
 *  Created on: 2015年7月4日
 *      Author: root
 */

#ifndef MEDIATOR_CONCRETEMEDIATOR_H_
#define MEDIATOR_CONCRETEMEDIATOR_H_

#include "ConcreteColleague1.h"
#include "ConcreteColleague2.h"

namespace NS_MEDIATOR {

class ConcreteMediator {
public:
	ConcreteMediator()
	{
		cc1 = new ConcreteColleague1();
		cc2 = new ConcreteColleague2();
	}
	virtual ~ConcreteMediator()
	{
		delete cc1;
		delete cc2;
	}
	void doSomething(void)
	{
		if (cc1->needPrint())
			cc2->printSelf();
	}

private:
	ConcreteColleague1 *cc1;
	ConcreteColleague2 *cc2;
};

} /* namespace NS_MEDIATOR */

#endif /* MEDIATOR_CONCRETEMEDIATOR_H_ */
