/*
 * FlyweightFactory.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef FLYWEIGHT_FLYWEIGHTFACTORY_H_
#define FLYWEIGHT_FLYWEIGHTFACTORY_H_

#include "ConcreteFlyweight.h"
#include <map>

namespace NS_FLYWEIGHT {

class FlyweightFactory {
public:
	FlyweightFactory() {}
	virtual ~FlyweightFactory()
	{
		std::map<int, Flyweight *>::iterator itr = _flyweights.begin();
		for (; itr != _flyweights.end(); itr++)
			delete itr->second;

		_flyweights.clear();
	}
	Flyweight *getFlyweight(int key)
	{
		std::map<int, Flyweight *>::iterator itr = _flyweights.find(key);
		if (itr != _flyweights.end()) return itr->second;

		ConcreteFlyweight *flyweight = new ConcreteFlyweight();
		flyweight->setIntrinsicState(key);

		_flyweights.insert(std::make_pair(key, flyweight));
		return flyweight;
	}

private:
	std::map<int, Flyweight *> _flyweights;
};

} /* namespace NS_FLYWEIGHT */

#endif /* FLYWEIGHT_FLYWEIGHTFACTORY_H_ */
