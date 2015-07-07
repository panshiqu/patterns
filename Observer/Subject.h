/*
 * Subject.h
 *
 *  Created on: 2015年7月6日
 *      Author: root
 */

#ifndef OBSERVER_SUBJECT_H_
#define OBSERVER_SUBJECT_H_

#include <list>
#include <iostream>
#include "Observer.h"

namespace NS_OBSERVER {

class Subject {
public:
	Subject() {}
	virtual ~Subject()
	{
		_observers.clear();
	}

	void attach(Observer *observer)
	{
		// 多线程这里的链表操作考虑加锁
		_observers.push_back(observer);
	}

	void detach(Observer *observer)
	{
		// 多线程这里的链表操作考虑加锁
		_observers.remove(observer);
	}

	void notify(void)
	{
		// 多线程这里的链表操作考虑加锁
		std::list<Observer *>::iterator itr = _observers.begin();
		for (; itr != _observers.end(); itr++)
		{
			(*itr)->update();
		}
	}

private:
	std::list<Observer *> _observers;
};

} /* namespace NS_OBSERVER */

#endif /* OBSERVER_SUBJECT_H_ */
