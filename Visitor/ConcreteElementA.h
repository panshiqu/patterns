/*
 * ConcreteElementA.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef VISITOR_CONCRETEELEMENTA_H_
#define VISITOR_CONCRETEELEMENTA_H_

#include "Visitor.h"
#include "Element.h"

namespace NS_VISITOR {

class Visitor;
class ConcreteElementA : public Element
{
public:
	ConcreteElementA(int type, int price) : Element(type, price) {}
	virtual ~ConcreteElementA() {}
	virtual void accept(Visitor *visitor)
	{
		visitor->visitConcreteElementA(this);
	}
};

} /* namespace NS_VISITOR */

#endif /* VISITOR_CONCRETEELEMENTA_H_ */
