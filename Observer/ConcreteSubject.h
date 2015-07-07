/*
 * ConcreteSubject.h
 *
 *  Created on: 2015年7月6日
 *      Author: root
 */

#ifndef OBSERVER_CONCRETESUBJECT_H_
#define OBSERVER_CONCRETESUBJECT_H_

#include "Subject.h"

namespace NS_OBSERVER {

class ConcreteSubject : public Subject
{
public:
	ConcreteSubject() : _subjectState(true) {}
	virtual ~ConcreteSubject() {}

	bool getSubjectState(void)		{ return _subjectState; }
	void setSubjectState(bool subjectState)	{ _subjectState = subjectState; }

private:
	bool _subjectState;
};

} /* namespace NS_OBSERVER */

#endif /* OBSERVER_CONCRETESUBJECT_H_ */
