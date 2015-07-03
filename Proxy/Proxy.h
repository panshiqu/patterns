/*
 * Proxy.h
 *
 *  Created on: 2015年7月3日
 *      Author: root
 */

#ifndef PROXY_PROXY_H_
#define PROXY_PROXY_H_

#include "RealSubject.h"

namespace NS_PROXY {

class Proxy {
public:
	Proxy() : _realSubject(0) {}
	virtual ~Proxy()
	{
		if (_realSubject != 0)
			delete _realSubject;
	}
	virtual void Request(void)
	{
		if (_realSubject == 0)
			_realSubject = new RealSubject();

		_realSubject->Request();
	}

private:
	RealSubject *_realSubject;
};

} /* namespace NS_PROXY */

#endif /* PROXY_PROXY_H_ */
