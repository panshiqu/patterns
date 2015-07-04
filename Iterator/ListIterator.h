/*
 * ListIterator.h
 *
 *  Created on: 2015年7月4日
 *      Author: root
 */

#ifndef ITERATOR_LISTITERATOR_H_
#define ITERATOR_LISTITERATOR_H_

#include "Iterator.h"
#include "AbstractList.h"

namespace NS_ITERATOR {

template <class Item>
class ListIterator : public Iterator<Item> {
public:
	ListIterator(const AbstractList<Item> *aList);
	virtual ~ListIterator() {}
	virtual void first(void);
	virtual void next(void);
	virtual bool isDone(void) const;
	virtual Item currentItem(void) const;

private:
	const AbstractList<Item> *_list;
	long _current;
};

template <class Item>
ListIterator<Item>::ListIterator(const AbstractList<Item> *aList) : _list(aList), _current(0) {}

template <class Item>
void ListIterator<Item>::first(void) {
	_current = 0;
}

template <class Item>
void ListIterator<Item>::next(void) {
	_current++;
}

template <class Item>
bool ListIterator<Item>::isDone(void) const {
	return _current >= _list->getCount();
}

template <class Item>
Item ListIterator<Item>::currentItem(void) const {
	return _list->getItem(_current);
}

} /* namespace NS_ITERATOR */

#endif /* ITERATOR_LISTITERATOR_H_ */
