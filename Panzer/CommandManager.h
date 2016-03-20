#ifndef _COMMANDMANGER_H_
#define _COMMANDMANGER_H_

#include "ICommandInvoker.h"
#include "IRemoteControl.h"
#include "IPlayerStrategy.h"

class CommandManager: public ICommandInvoker, public IRemoteControl
{
public:
	bool IsMine(
		IPlayerStrategy const& strategy
		) const {return false;}
};

#endif