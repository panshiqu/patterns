/*
 * ConcreteProduct.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef FACTORYMETHOD_CONCRETEPRODUCT_H_
#define FACTORYMETHOD_CONCRETEPRODUCT_H_

#include <iostream>

#include "Creator.h"
#include "Product.h"

namespace NS_FACTORY_METHOD {

class ConcreteProduct : public Product
{
public:
	ConcreteProduct() {}
	virtual ~ConcreteProduct() {}
	virtual void printSelf(void)
	{
		std::cout << "ConcreteProduct" << std::endl;
	}
};

StandardCreator<ConcreteProduct> ConcreteCreator;

} /* namespace NS_FACTORY_METHOD */

#endif /* FACTORYMETHOD_CONCRETEPRODUCT_H_ */
