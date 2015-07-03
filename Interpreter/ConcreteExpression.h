/*
 * ConcreteExpression.h
 *
 *  Created on: 2015年7月3日
 *      Author: root
 */

#ifndef INTERPRETER_CONCRETEEXPRESSION_H_
#define INTERPRETER_CONCRETEEXPRESSION_H_

#include "AbstractExpression.h"

namespace NS_INTERPRETER {

class ConcreteExpression : public AbstractExpression
{
public:
	ConcreteExpression() {}
	virtual ~ConcreteExpression() {}
	virtual bool interpret(bool status)
	{
		// 可能存在多个这样的子类
		// 传参可能也不止BOOL类型这样简单
		// 这里只是想表达这个子类可以按照自己的方式解释这个参数
		return !status;
	}
};

} /* namespace NS_INTERPRETER */

#endif /* INTERPRETER_CONCRETEEXPRESSION_H_ */
