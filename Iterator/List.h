/*
 * List.h
 *
 *  Created on: 2015年7月4日
 *      Author: root
 */

#ifndef ITERATOR_LIST_H_
#define ITERATOR_LIST_H_

#include "AbstractList.h"
#include "ListIterator.h"

namespace NS_ITERATOR {

template <class Item>
class List : public AbstractList<Item> {
public:
	List()
	{
		for (int i = 0; i < 10; i++)
			_items[i] = i;
	}
	virtual ~List() {}
	virtual long getCount(void) const;
	virtual Item getItem(long index) const;
	virtual Iterator<Item> *createIterator(void) const;

private:
	Item _items[10];
};

template <class Item>
long List<Item>::getCount(void) const {
	return 10;
}

template <class Item>
Item List<Item>::getItem(long index) const {
	return _items[index];
}

template <class Item>
Iterator<Item> *List<Item>::createIterator(void) const {
	return new ListIterator<Item>(this);
}

} /* namespace NS_ITERATOR */

#endif /* ITERATOR_LIST_H_ */
