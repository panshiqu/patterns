/*
 * Memento.h
 *
 *  Created on: 2015年7月4日
 *      Author: root
 */

#ifndef MEMENTO_MEMENTO_H_
#define MEMENTO_MEMENTO_H_

namespace NS_MEMENTO {

class Memento {
public:
	virtual ~Memento() {}

private:
	friend class Originator;
	Memento() : _state(false) {}
	bool getState(void)	{ return _state; }
	void setState(bool state)	{ _state = state; }

private:
	bool _state;
};

} /* namespace NS_MEMENTO */

#endif /* MEMENTO_MEMENTO_H_ */
