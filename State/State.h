/*
 * State.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef STATE_STATE_H_
#define STATE_STATE_H_

#include "Context.h"

namespace NS_STATE {

class State {
public:
	State() {}
	virtual ~State() {}
	virtual void handle(Context *context) = 0;

protected:
	void changeState(Context *context, State *state)
	{
		context->changeState(state);
	}
};

} /* namespace NS_STATE */

#endif /* STATE_STATE_H_ */
