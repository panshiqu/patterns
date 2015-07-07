/*
 * Strategy.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef STRATEGY_STRATEGY_H_
#define STRATEGY_STRATEGY_H_

namespace NS_STRATEGY {

class Strategy {
public:
	Strategy() {}
	virtual ~Strategy() {}
	virtual void algorithmInterface(int a, int b) = 0;
};

} /* namespace NS_STRATEGY */

#endif /* STRATEGY_STRATEGY_H_ */
