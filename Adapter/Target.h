/*
 * Target.h
 *
 *  Created on: 2015年6月30日
 *      Author: root
 */

#ifndef ADAPTER_TARGET_H_
#define ADAPTER_TARGET_H_

#include <iostream>

namespace NS_ADAPTER {

class Target {
public:
	Target() {}
	virtual ~Target() {}
	virtual void Request(void)
	{
		std::cout << "Request." << std::endl;
	}
};

} /* namespace NS_ADAPTER */

#endif /* ADAPTER_TARGET_H_ */
