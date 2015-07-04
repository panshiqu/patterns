/*
 * ConcreteColleague1.h
 *
 *  Created on: 2015年7月4日
 *      Author: root
 */

#ifndef MEDIATOR_CONCRETECOLLEAGUE1_H_
#define MEDIATOR_CONCRETECOLLEAGUE1_H_

namespace NS_MEDIATOR {

class ConcreteColleague1 {
public:
	ConcreteColleague1() {}
	virtual ~ConcreteColleague1() {}
	bool needPrint(void) { return true; }
};

} /* namespace NS_MEDIATOR */

#endif /* MEDIATOR_CONCRETECOLLEAGUE1_H_ */
