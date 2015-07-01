/*
 * Input.h
 *
 *  Created on: 2015年7月1日
 *      Author: root
 */

#ifndef FACADE_INPUT_H_
#define FACADE_INPUT_H_

#include <iostream>

namespace NS_FACADE {

class Input {
public:
	Input() {}
	virtual ~Input() {}
	std::string inputStr(void)
	{
		std::string str;
		std::cin >> str;
		return str;
	}
};

} /* namespace NS_FACADE */

#endif /* FACADE_INPUT_H_ */
