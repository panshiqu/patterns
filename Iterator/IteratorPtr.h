/*
 * IteratorPtr.h
 *
 *  Created on: 2015年7月4日
 *      Author: root
 */

#ifndef ITERATOR_ITERATORPTR_H_
#define ITERATOR_ITERATORPTR_H_

#include "Iterator.h"

namespace NS_ITERATOR {

template <class Item>
class IteratorPtr {
public:
	IteratorPtr(Iterator<Item> *i) : _i(i) {}
	virtual ~IteratorPtr() { delete _i; }
	Iterator<Item> *operator->()	{ return _i; }

private:
	Iterator<Item> *_i;
};

} /* namespace NS_ITERATOR */

#endif /* ITERATOR_ITERATORPTR_H_ */
