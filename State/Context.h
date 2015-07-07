/*
 * Context.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef STATE_CONTEXT_H_
#define STATE_CONTEXT_H_

namespace NS_STATE {

class State;
class Context {
public:
	Context(State *state) : _state(state) {}
	virtual ~Context() {}
	void request(void);

private:
	friend class State;
	void changeState(State *state);

private:
	State *_state;
};

} /* namespace NS_STATE */

#endif /* STATE_CONTEXT_H_ */
