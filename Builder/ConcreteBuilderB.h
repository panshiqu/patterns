/*
 * ConcreteBuilderB.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef BUILDER_CONCRETEBUILDERB_H_
#define BUILDER_CONCRETEBUILDERB_H_

#include "Product.h"
#include "Builder.h"

namespace NS_BUILDER {

class ConcreteBuilderB : public Builder
{
public:
	ConcreteBuilderB()
	{
		_product = new Product();
	}
	virtual ~ConcreteBuilderB() {}

	virtual void setColor(std::string color)
	{
		_product->setColor(color);
	}
	virtual void setSize(std::string size)
	{
		_product->setSize(size);
	}
	Product *getCareColorProduct(void)
	{
		return _product;
	}

private:
	Product *_product;
};

} /* namespace NS_BUILDER */

#endif /* BUILDER_CONCRETEBUILDERB_H_ */
