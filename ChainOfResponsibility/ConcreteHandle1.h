/*
 * ConcreteHandle1.h
 *
 *  Created on: 2015年7月3日
 *      Author: root
 */

#ifndef CHAINOFRESPONSIBILITY_CONCRETEHANDLE1_H_
#define CHAINOFRESPONSIBILITY_CONCRETEHANDLE1_H_

#include <iostream>
#include "Handle.h"

namespace NS_CHAINOFRESPONSIBILITY {

class ConcreteHandle1 : public Handle
{
public:
	ConcreteHandle1(Handle *successor) : Handle(successor) {}
	virtual ~ConcreteHandle1() {}
	virtual void HandleRequest(int request)
	{
		std::cout << "HandleRequest: " << request << std::endl;
	}
};

} /* namespace NS_CHAINOFRESPONSIBILITY */

#endif /* CHAINOFRESPONSIBILITY_CONCRETEHANDLE1_H_ */
