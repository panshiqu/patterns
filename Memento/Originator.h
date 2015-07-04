/*
 * Originator.h
 *
 *  Created on: 2015年7月4日
 *      Author: root
 */

#ifndef MEMENTO_ORIGINATOR_H_
#define MEMENTO_ORIGINATOR_H_

#include "Memento.h"

namespace NS_MEMENTO {

class Originator {
public:
	Originator() : _state(false) {}
	virtual ~Originator() {}
	Memento *createMemento(void)
	{
		Memento *m = new Memento();
		m->setState(_state);
		return m;
	}
	void setMemento(Memento *m)
	{
		setState(m->getState());
	}

	bool getState(void)	{ return _state; }
	void setState(bool state)	{ _state = state; }

private:
	bool _state;
};

} /* namespace NS_MEMENTO */

#endif /* MEMENTO_ORIGINATOR_H_ */
