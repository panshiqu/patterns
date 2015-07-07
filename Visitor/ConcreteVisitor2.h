/*
 * ConcreteVisitor2.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef VISITOR_CONCRETEVISITOR2_H_
#define VISITOR_CONCRETEVISITOR2_H_

#include "Visitor.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

namespace NS_VISITOR {

class ConcreteVisitor2 : public Visitor
{
public:
	ConcreteVisitor2() : _total(0) {}
	virtual ~ConcreteVisitor2() {}
	virtual void visitConcreteElementA(ConcreteElementA *cea)
	{
		_total += cea->getPrice();
	}
	virtual void visitConcreteElementB(ConcreteElementB *ceb)
	{
		_total += ceb->getPrice();
	}
	int getTotal(void)	{ return _total; }

private:
	int _total;
};

} /* namespace NS_VISITOR */

#endif /* VISITOR_CONCRETEVISITOR2_H_ */
