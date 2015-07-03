/*
 * Command.h
 *
 *  Created on: 2015年7月3日
 *      Author: root
 */

#ifndef COMMAND_COMMAND_H_
#define COMMAND_COMMAND_H_

namespace NS_COMMAND {

class Command {
public:
	Command() {}
	virtual ~Command() {}
	virtual void execute(void) = 0;
};

template <class TReceiver>
class SimpleCommand : public Command {
public:
	typedef void (TReceiver:: *Action)();
	SimpleCommand(TReceiver *tr, Action act) : _treceiver(tr), _action(act) {}
	virtual void execute(void);
private:
	TReceiver *_treceiver;
	Action _action;
};

template <class TReceiver>
void SimpleCommand<TReceiver>::execute() {
	(_treceiver->*_action)();
}

} /* namespace NS_COMMAND */

#endif /* COMMAND_COMMAND_H_ */
