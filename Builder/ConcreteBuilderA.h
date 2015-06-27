/*
 * ConcreteBuilderA.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef BUILDER_CONCRETEBUILDERA_H_
#define BUILDER_CONCRETEBUILDERA_H_

#include "Product.h"
#include "Builder.h"

class ConcreteBuilderA : public Builder
{
public:
	ConcreteBuilderA()
	{
		_product = new Product();
	}
	virtual ~ConcreteBuilderA() {}

	virtual void setColor(std::string color)
	{
		// do nothing
	}
	virtual void setSize(std::string size)
	{
		_product->setSize(size);
	}
	Product *getIgnoreColorProduct(void)
	{
		return _product;
	}

private:
	Product *_product;
};

#endif /* BUILDER_CONCRETEBUILDERA_H_ */
