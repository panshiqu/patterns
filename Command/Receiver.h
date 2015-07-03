/*
 * Receiver.h
 *
 *  Created on: 2015年7月3日
 *      Author: root
 */

#ifndef COMMAND_RECEIVER_H_
#define COMMAND_RECEIVER_H_

#include <iostream>

namespace NS_COMMAND {

class Receiver {
public:
	Receiver() {}
	virtual ~Receiver() {}
	void action(void)
	{
		std::cout << "Receiver Action." << std::endl;
	}
};

} /* namespace NS_COMMAND */

#endif /* COMMAND_RECEIVER_H_ */
