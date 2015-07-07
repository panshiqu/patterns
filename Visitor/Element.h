/*
 * Element.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef VISITOR_ELEMENT_H_
#define VISITOR_ELEMENT_H_

namespace NS_VISITOR {

class Visitor;
class Element {
public:
	enum ELEMENT_TYPE {
		COMMON,
		SPECIAL,
	};

	Element(int type, int price) : _type(type), _price(price) {}
	virtual ~Element() {}
	virtual void accept(Visitor *visitor) = 0;

	int getType(void)		{ return _type; }
	int getPrice(void)	{ return _price; }

private:
	int _type;
	int _price;
};

} /* namespace NS_VISITOR */

#endif /* VISITOR_ELEMENT_H_ */
