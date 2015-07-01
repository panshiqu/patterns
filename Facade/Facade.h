/*
 * Facade.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef FACADE_FACADE_H_
#define FACADE_FACADE_H_

#include "Input.h"
#include "Output.h"

namespace NS_FACADE {

class Facade {
public:
	Facade() {}
	virtual ~Facade() {}
	void inputAndOutput(void)
	{
		Input in;
		Output out;
		out.outputStr(in.inputStr());
	}
};

} /* namespace NS_FACADE */

#endif /* FACADE_FACADE_H_ */
