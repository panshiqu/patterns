/*
 * Director.cpp
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#include "Director.h"
#include "Builder.h"

namespace NS_BUILDER {

void Director::Build(void)
{
	// 可能配置中读出来的属性
	_builder->setColor("red");
	_builder->setSize("big");
}

} /* namespace NS_BUILDER */

