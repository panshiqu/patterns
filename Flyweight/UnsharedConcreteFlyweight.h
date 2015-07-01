/*
 * UnsharedConcreteFlyweight.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef FLYWEIGHT_UNSHAREDCONCRETEFLYWEIGHT_H_
#define FLYWEIGHT_UNSHAREDCONCRETEFLYWEIGHT_H_

#include "Flyweight.h"
#include <map>

namespace NS_FLYWEIGHT {

class UnsharedConcreteFlyweight {
public:
	UnsharedConcreteFlyweight() {}
	virtual ~UnsharedConcreteFlyweight() {}
	virtual void operation(void)
	{
		std::multimap<Flyweight *, std::string>::iterator itr = _flyweights.begin();
		for (; itr != _flyweights.end(); itr++)
		{
			itr->first->operation(itr->second);
		}
	}
	virtual void add(Flyweight *flyweight, std::string extrinsicState)
	{
		_flyweights.insert(make_pair(flyweight, extrinsicState));
	}
	virtual void remove(Flyweight *flyweight)
	{
		// do remove
	}

private:
	std::multimap<Flyweight *, std::string> _flyweights;
};

} /* namespace NS_FLYWEIGHT */

#endif /* FLYWEIGHT_UNSHAREDCONCRETEFLYWEIGHT_H_ */
