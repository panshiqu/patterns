/*
 * Adaptee.h
 *
 *  Created on: 2015年6月30日
 *      Author: root
 */

#ifndef ADAPTER_ADAPTEE_H_
#define ADAPTER_ADAPTEE_H_

#include <iostream>

namespace NS_ADAPTER {

class Adaptee {
public:
	Adaptee() {}
	virtual ~Adaptee() {}
	void SpecificRequest(void)
	{
		std::cout << "SpecificRequest." << std::endl;
	}
};

} /* namespace NS_ADAPTER */

#endif /* ADAPTER_ADAPTEE_H_ */
