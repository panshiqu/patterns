/*
 * ConcreteClass.h
 *
 *  Created on: 2015年7月7日
 *      Author: root
 */

#ifndef TEMPLATEMETHOD_CONCRETECLASS_H_
#define TEMPLATEMETHOD_CONCRETECLASS_H_

#include "AbstractClass.h"

namespace NS_TEMPLATEMETHOD {

class ConcreteClass : public AbstractClass
{
public:
	ConcreteClass() {}
	virtual ~ConcreteClass() {}

	// 若不实现将使用父类方法
	virtual void primitiveOperation(void)
	{
		int a, b;
		std::cin >> a;std::cin >> b;
		std::cout << "a+b = " << a+b << std::endl;
	}
};

} /* namespace NS_TEMPLATEMETHOD */

#endif /* TEMPLATEMETHOD_CONCRETECLASS_H_ */
