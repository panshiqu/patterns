/*
 * Observer.h
 *
 *  Created on: 2015年7月6日
 *      Author: root
 */

#ifndef OBSERVER_OBSERVER_H_
#define OBSERVER_OBSERVER_H_

namespace NS_OBSERVER {

class Observer {
public:
	Observer() {}
	virtual ~Observer() {}
	virtual void update(void) = 0;
};

} /* namespace NS_OBSERVER */

#endif /* OBSERVER_OBSERVER_H_ */
