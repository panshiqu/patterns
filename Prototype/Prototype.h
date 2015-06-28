/*
 * Prototype.h
 *
 *  Created on: 2015年6月28日
 *      Author: root
 */

#ifndef PROTOTYPE_PROTOTYPE_H_
#define PROTOTYPE_PROTOTYPE_H_

namespace NS_PROTOTYPE {

class Prototype {
public:
	Prototype() {}
	virtual ~Prototype() {}
	virtual Prototype *clone(void) = 0;
	virtual void printSelf(void) = 0;
};

} /* namespace NS_PROTOTYPE */

#endif /* PROTOTYPE_PROTOTYPE_H_ */
