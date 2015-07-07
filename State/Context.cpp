/*
 * Context.cpp
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#include "Context.h"
#include "State.h"

namespace NS_STATE {

void Context::request(void)
{
	_state->handle(this);
}

void Context::changeState(State *state)
{
	_state = state;
}

} /* namespace NS_STATE */
