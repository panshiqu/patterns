/*
 * AdapterB.h
 *
 *  Created on: 2015年6月30日
 *      Author: root
 */

#ifndef ADAPTER_ADAPTERB_H_
#define ADAPTER_ADAPTERB_H_

// 对象适配器

#include "Target.h"
#include "Adaptee.h"

namespace NS_ADAPTER {

class AdapterB : public Target
{
public:
	AdapterB(Adaptee *adaptee) : _adaptee(adaptee) {}
	virtual ~AdapterB() {}
	virtual void Request(void)
	{
		_adaptee->SpecificRequest();
	}

private:
	Adaptee *_adaptee;
};

} /* namespace NS_ADAPTER */

#endif /* ADAPTER_ADAPTERB_H_ */
