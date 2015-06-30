/*
 * Implementor.h
 *
 *  Created on: 2015年6月30日
 *      Author: root
 */

#ifndef BRIDGE_IMPLEMENTOR_H_
#define BRIDGE_IMPLEMENTOR_H_

namespace NS_BRIDGE {

class Implementor {
public:
	Implementor() {}
	virtual ~Implementor() {}
	virtual void operationImp(void) = 0;
};

} /* namespace NS_BRIDGE */

#endif /* BRIDGE_IMPLEMENTOR_H_ */
