/*
 * Creator.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef FACTORYMETHOD_CREATOR_H_
#define FACTORYMETHOD_CREATOR_H_

namespace NS_FACTORY_METHOD {

class Creator {
public:
	Creator() {}
	virtual ~Creator() {}
	virtual void createProduct(void) = 0;
};

template <class TheProduct>
class StandardCreator : public Creator {
	virtual void createProduct(void);
};

template <class TheProduct>
Product *StandardCreator<TheProduct>::CreateProduct(void) {
	return new TheProduct;
}

} /* namespace NS_FACTORY_METHOD */

#endif /* FACTORYMETHOD_CREATOR_H_ */
