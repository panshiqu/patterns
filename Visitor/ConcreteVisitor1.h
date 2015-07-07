/*
 * ConcreteVisitor1.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef VISITOR_CONCRETEVISITOR1_H_
#define VISITOR_CONCRETEVISITOR1_H_

#include "Visitor.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

namespace NS_VISITOR {

class ConcreteVisitor1 : public Visitor
{
public:
	ConcreteVisitor1() : _total(0) {}
	virtual ~ConcreteVisitor1() {}
	virtual void visitConcreteElementA(ConcreteElementA *cea)
	{
		if (cea->getType())
			_total += cea->getPrice();
	}
	virtual void visitConcreteElementB(ConcreteElementB *ceb)
	{
		if (ceb->getType())
			_total += ceb->getPrice();
	}
	int getTotal(void)	{ return _total; }

private:
	int _total;
};

} /* namespace NS_VISITOR */

#endif /* VISITOR_CONCRETEVISITOR1_H_ */
