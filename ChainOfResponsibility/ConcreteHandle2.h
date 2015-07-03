/*
 * ConcreteHandle2.h
 *
 *  Created on: 2015年7月3日
 *      Author: root
 */

#ifndef CHAINOFRESPONSIBILITY_CONCRETEHANDLE2_H_
#define CHAINOFRESPONSIBILITY_CONCRETEHANDLE2_H_

#include <iostream>
#include "Handle.h"

namespace NS_CHAINOFRESPONSIBILITY {

class ConcreteHandle2 : public Handle
{
public:
	ConcreteHandle2(Handle *successor) : Handle(successor) {}
	virtual ~ConcreteHandle2() {}
	virtual void HandleRequest(int request)
	{
		if (request == 100)
		{
			std::cout << "Handle 100 Request." << std::endl;
		}
		else
		{
			if (getSuccessor())
				getSuccessor()->HandleRequest(request);
		}
	}
};

} /* namespace NS_CHAINOFRESPONSIBILITY */

#endif /* CHAINOFRESPONSIBILITY_CONCRETEHANDLE2_H_ */
