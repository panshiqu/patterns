/*
 * Builder.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef BUILDER_BUILDER_H_
#define BUILDER_BUILDER_H_

#include <iostream>

class Builder {
public:
	Builder() {}
	virtual ~Builder() {}

	virtual void setColor(std::string color) = 0;
	virtual void setSize(std::string size) = 0;
};

#endif /* BUILDER_BUILDER_H_ */
