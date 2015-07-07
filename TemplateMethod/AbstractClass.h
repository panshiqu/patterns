/*
 * AbstractClass.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef TEMPLATEMETHOD_ABSTRACTCLASS_H_
#define TEMPLATEMETHOD_ABSTRACTCLASS_H_

#include <iostream>

namespace NS_TEMPLATEMETHOD {

class AbstractClass {
public:
	AbstractClass() {}
	virtual ~AbstractClass() {}
	void templateMethod(void)
	{
		begin();
		primitiveOperation();
		end();
	}

	void begin(void)	{ std::cout << "This is a popular calculator." << std::endl; }
	void end(void)		{ std::cout << "Bye-bye." << std::endl; }

protected:	// 只被模板方法调用
	virtual void primitiveOperation(void) {}
};

} /* namespace NS_TEMPLATEMETHOD */

#endif /* TEMPLATEMETHOD_ABSTRACTCLASS_H_ */
