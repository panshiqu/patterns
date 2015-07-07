/*
 * Visitor.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef VISITOR_VISITOR_H_
#define VISITOR_VISITOR_H_

namespace NS_VISITOR {

class ConcreteElementA;
class ConcreteElementB;
class Visitor {
public:
	Visitor() {}
	virtual ~Visitor() {}
	virtual void visitConcreteElementA(ConcreteElementA *cea) = 0;
	virtual void visitConcreteElementB(ConcreteElementB *ceb) = 0;
};

} /* namespace NS_VISITOR */

#endif /* VISITOR_VISITOR_H_ */
