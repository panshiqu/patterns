/*
 * RealSubject.h
 *
 *  Created on: 2015年7月3日
 *      Author: root
 */

#ifndef PROXY_REALSUBJECT_H_
#define PROXY_REALSUBJECT_H_

#include <iostream>

namespace NS_PROXY {

class RealSubject {
public:
	RealSubject() {}
	virtual ~RealSubject() {}
	virtual void Request(void)
	{
		std::cout << "Request RealSubject." << std::endl;
	}
};

} /* namespace NS_PROXY */

#endif /* PROXY_REALSUBJECT_H_ */
