/*
 * AbstractFactory.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef ABSTRACTFACTORY_ABSTRACTFACTORY_H_
#define ABSTRACTFACTORY_ABSTRACTFACTORY_H_

class AbstractProductA;
class AbstractProductB;
class AbstractFactory {
public:
	AbstractFactory() {}
	virtual ~AbstractFactory() {}

	enum FACTORY_TYPE {
		FACTORY_ONE,
		FACTORY_TWO,
	};

	static AbstractFactory *getFactory(int type);

	virtual AbstractProductA *createProductA() = 0;
	virtual AbstractProductB *createProductB() = 0;
};

#endif /* ABSTRACTFACTORY_ABSTRACTFACTORY_H_ */
