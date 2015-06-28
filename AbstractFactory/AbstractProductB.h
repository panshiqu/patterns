/*
 * AbstractProductB.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef ABSTRACTFACTORY_ABSTRACTPRODUCTB_H_
#define ABSTRACTFACTORY_ABSTRACTPRODUCTB_H_

namespace NS_ABSTRACT_FACTORY {

class AbstractProductB {
public:
	AbstractProductB() {}
	virtual ~AbstractProductB() {}

	virtual void printSelf(void) = 0;
};

} /* namespace NS_ABSTRACT_FACTORY */

#endif /* ABSTRACTFACTORY_ABSTRACTPRODUCTB_H_ */
