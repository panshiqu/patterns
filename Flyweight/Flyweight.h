/*
 * Flyweight.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef FLYWEIGHT_FLYWEIGHT_H_
#define FLYWEIGHT_FLYWEIGHT_H_

#include <iostream>

namespace NS_FLYWEIGHT {

class Flyweight {
public:
	Flyweight() {}
	virtual ~Flyweight() {}
	virtual void operation(std::string extrinsicState) = 0;
};

} /* namespace NS_FLYWEIGHT */

#endif /* FLYWEIGHT_FLYWEIGHT_H_ */
