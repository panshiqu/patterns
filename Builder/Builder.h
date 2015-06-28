/*
 * Builder.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef BUILDER_BUILDER_H_
#define BUILDER_BUILDER_H_

#include <iostream>

namespace NS_BUILDER {

class Builder {
public:
	Builder() {}
	virtual ~Builder() {}

	virtual void setColor(std::string color) = 0;
	virtual void setSize(std::string size) = 0;
};

} /* namespace NS_BUILDER */

#endif /* BUILDER_BUILDER_H_ */
