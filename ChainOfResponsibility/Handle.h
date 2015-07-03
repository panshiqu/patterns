/*
 * Handle.h
 *
 *  Created on: 2015年7月3日
 *      Author: root
 */

#ifndef CHAINOFRESPONSIBILITY_HANDLE_H_
#define CHAINOFRESPONSIBILITY_HANDLE_H_

namespace NS_CHAINOFRESPONSIBILITY {

class Handle {
public:
	Handle(Handle *successor) : _successor(successor) {}
	virtual ~Handle() {}
	virtual void HandleRequest(int request) = 0;

	Handle *getSuccessor(void)	{ return _successor; }

private:
	Handle *_successor;
};

} /* namespace NS_CHAINOFRESPONSIBILITY */

#endif /* CHAINOFRESPONSIBILITY_HANDLE_H_ */
