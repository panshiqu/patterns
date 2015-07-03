/*
 * AbstractExpression.h
 *
 *  Created on: 2015年7月3日
 *      Author: root
 */

#ifndef INTERPRETER_ABSTRACTEXPRESSION_H_
#define INTERPRETER_ABSTRACTEXPRESSION_H_

namespace NS_INTERPRETER {

class AbstractExpression {
public:
	AbstractExpression() {}
	virtual ~AbstractExpression() {}
	virtual bool interpret(bool status) = 0;
};

} /* namespace NS_INTERPRETER */

#endif /* INTERPRETER_ABSTRACTEXPRESSION_H_ */
