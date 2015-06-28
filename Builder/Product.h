/*
 * Product.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef BUILDER_PRODUCT_H_
#define BUILDER_PRODUCT_H_

#include <iostream>

namespace NS_BUILDER {

class Product {
public:
	Product() : _color("none"), _size("none") {}
	virtual ~Product() {}

	void printSelf(void)
	{
		std::cout << "Build color: " << _color << " size: " << _size << std::endl;
	}

	void setColor(std::string color)	{ _color = color; }
	void setSize(std::string size)	{ _size = size; }

private:
	std::string _color;
	std::string _size;
};

} /* namespace NS_BUILDER */

#endif /* BUILDER_PRODUCT_H_ */
