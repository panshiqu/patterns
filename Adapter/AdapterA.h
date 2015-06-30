/*
 * AdapterA.h
 *
 *  Created on: 2015年6月30日
 *      Author: root
 */

#ifndef ADAPTER_ADAPTERA_H_
#define ADAPTER_ADAPTERA_H_

// 类适配器

#include "Target.h"
#include "Adaptee.h"

namespace NS_ADAPTER {

class AdapterA : public Target, private Adaptee
{
public:
	AdapterA() {}
	virtual ~AdapterA() {}
	virtual void Request(void)
	{
		SpecificRequest();
	}
};

} /* namespace NS_ADAPTER */

#endif /* ADAPTER_ADAPTERA_H_ */
