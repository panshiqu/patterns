/*
 * AbstractList.h
 *
 *  Created on: 2015年7月4日
 *      Author: root
 */

#ifndef ITERATOR_ABSTRACTLIST_H_
#define ITERATOR_ABSTRACTLIST_H_

#include "Iterator.h"

namespace NS_ITERATOR {

template <class Item>
class AbstractList {
public:
	AbstractList() {}
	virtual ~AbstractList() {}
	virtual long getCount(void) const = 0;
	virtual Item getItem(long index) const = 0;
	virtual Iterator<Item> *createIterator(void) const = 0;
};

} /* namespace NS_ITERATOR */

#endif /* ITERATOR_ABSTRACTLIST_H_ */
