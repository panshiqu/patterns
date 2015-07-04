/*
 * ConcreteColleague2.h
 *
 *  Created on: 2015年7月4日
 *      Author: root
 */

#ifndef MEDIATOR_CONCRETECOLLEAGUE2_H_
#define MEDIATOR_CONCRETECOLLEAGUE2_H_

#include <iostream>

namespace NS_MEDIATOR {

class ConcreteColleague2 {
public:
	ConcreteColleague2() {}
	virtual ~ConcreteColleague2() {}
	void printSelf(void)
	{
		std::cout << "ConcreteColleague2" << std::endl;
	}
};

} /* namespace NS_MEDIATOR */

#endif /* MEDIATOR_CONCRETECOLLEAGUE2_H_ */
