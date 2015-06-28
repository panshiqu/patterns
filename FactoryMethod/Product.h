/*
 * Product.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef FACTORYMETHOD_PRODUCT_H_
#define FACTORYMETHOD_PRODUCT_H_

namespace NS_FACTORY_METHOD {

class Product {
public:
	Product() {}
	virtual ~Product() {}
	virtual void printSelf(void) = 0;
};

} /* namespace NS_FACTORY_METHOD */

#endif /* FACTORYMETHOD_PRODUCT_H_ */
