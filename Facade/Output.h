/*
 * Output.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef FACADE_OUTPUT_H_
#define FACADE_OUTPUT_H_

#include <iostream>

namespace NS_FACADE {

class Output {
public:
	Output() {}
	virtual ~Output() {}
	void outputStr(std::string str)
	{
		std::cout << str << std::endl;
	}
};

} /* namespace NS_FACADE */

#endif /* FACADE_OUTPUT_H_ */
