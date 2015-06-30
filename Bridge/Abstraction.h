/*
 * Abstraction.h
 *
 *  Created on: 2015年6月30日
 *      Author: root
 */

#ifndef BRIDGE_ABSTRACTION_H_
#define BRIDGE_ABSTRACTION_H_

#include "Implementor.h"

namespace NS_BRIDGE {

class Abstraction {
public:
	Abstraction(Implementor *imp) : _imp(imp) {}
	virtual ~Abstraction() {}
	virtual void operation(void)
	{
		_imp->operationImp();
	}

private:
	Implementor *_imp;
};

} /* namespace NS_BRIDGE */

#endif /* BRIDGE_ABSTRACTION_H_ */
