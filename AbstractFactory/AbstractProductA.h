/*
 * AbstractProductA.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef ABSTRACTFACTORY_ABSTRACTPRODUCTA_H_
#define ABSTRACTFACTORY_ABSTRACTPRODUCTA_H_

namespace NS_ABSTRACT_FACTORY {

class AbstractProductA {
public:
	AbstractProductA() {}
	virtual ~AbstractProductA() {}

	virtual void printSelf(void) = 0;
};

} /* namespace NS_ABSTRACT_FACTORY */

#endif /* ABSTRACTFACTORY_ABSTRACTPRODUCTA_H_ */
