/*
 * Iterator.h
 *
 *  Created on: 2015年7月4日
 *      Author: root
 */

#ifndef ITERATOR_ITERATOR_H_
#define ITERATOR_ITERATOR_H_

namespace NS_ITERATOR {

template <class Item>
class Iterator {
public:
	Iterator() {}
	virtual ~Iterator() {}
	virtual void first(void) = 0;
	virtual void next(void) = 0;
	virtual bool isDone(void) const = 0;
	virtual Item currentItem(void) const = 0;
};

} /* namespace NS_ITERATOR */

#endif /* ITERATOR_ITERATOR_H_ */
