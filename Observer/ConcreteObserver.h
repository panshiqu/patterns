/*
 * ConcreteObserver.h
 *
 *  Created on: 2015年7月6日
 *      Author: root
 */

#ifndef OBSERVER_CONCRETEOBSERVER_H_
#define OBSERVER_CONCRETEOBSERVER_H_

#include <iostream>
#include "Observer.h"
#include "ConcreteSubject.h"

namespace NS_OBSERVER {

class ConcreteObserver : public Observer
{
public:
	ConcreteObserver(ConcreteSubject *subject) : _observerState(false), _subject(subject)
	{
		_subject->attach(this);
	}

	virtual ~ConcreteObserver()
	{
		_subject->detach(this);
	}

	virtual void update(void)
	{
		_observerState = _subject->getSubjectState();
		std::cout << "State: " << _observerState << std::endl;
	}

private:
	bool _observerState;
	ConcreteSubject *_subject;
};

} /* namespace NS_OBSERVER */

#endif /* OBSERVER_CONCRETEOBSERVER_H_ */
