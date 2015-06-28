/*
 * Creator.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef FACTORYMETHOD_CREATOR_H_
#define FACTORYMETHOD_CREATOR_H_

namespace NS_FACTORY_METHOD {

class Product;
class Creator {
public:
	Creator() {}
	virtual ~Creator() {}
	virtual Product *createProduct(void) = 0;
};

template <class TheProduct>
class StandardCreator : public Creator {
public:
	StandardCreator() {}
	virtual ~StandardCreator() {}
	virtual Product *createProduct(void);
};

template <class TheProduct>
Product *StandardCreator<TheProduct>::createProduct(void) {
	return new TheProduct;
}

} /* namespace NS_FACTORY_METHOD */

#endif /* FACTORYMETHOD_CREATOR_H_ */
