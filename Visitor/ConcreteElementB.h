/*
 * ConcreteElementB.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef VISITOR_CONCRETEELEMENTB_H_
#define VISITOR_CONCRETEELEMENTB_H_

#include "Visitor.h"
#include "Element.h"

namespace NS_VISITOR {

class Visitor;
class ConcreteElementB : public Element
{
public:
	ConcreteElementB(int type, int price) : Element(type, price) {}
	virtual ~ConcreteElementB() {}
	virtual void accept(Visitor *visitor)
	{
		visitor->visitConcreteElementB(this);
	}
};

} /* namespace NS_VISITOR */

#endif /* VISITOR_CONCRETEELEMENTB_H_ */
