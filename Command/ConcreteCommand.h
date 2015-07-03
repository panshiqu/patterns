/*
 * ConcreteCommand.h
 *
 *  Created on: 2015年7月3日
 *      Author: root
 */

#ifndef COMMAND_CONCRETECOMMAND_H_
#define COMMAND_CONCRETECOMMAND_H_

#include "Receiver.h"

namespace NS_COMMAND {

class ConcreteCommand {
public:
	ConcreteCommand(Receiver *receiver) : _receiver(receiver) {}
	virtual ~ConcreteCommand() {}
	virtual void execute(void)
	{
		_receiver->action();
	}

private:
	Receiver *_receiver;
};

} /* namespace NS_COMMAND */

#endif /* COMMAND_CONCRETECOMMAND_H_ */
