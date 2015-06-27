/*
 * AbstractProductA.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef ABSTRACTFACTORY_ABSTRACTPRODUCTA_H_
#define ABSTRACTFACTORY_ABSTRACTPRODUCTA_H_

class AbstractProductA {
public:
	AbstractProductA() {}
	virtual ~AbstractProductA() {}

	virtual void printSelf(void) = 0;
};

#endif /* ABSTRACTFACTORY_ABSTRACTPRODUCTA_H_ */
