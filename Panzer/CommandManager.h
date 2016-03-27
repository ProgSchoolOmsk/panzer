#ifndef _COMMANDMANGER_H_
#define _COMMANDMANGER_H_

#include "ICommandInvoker.h"
#include "IRemoteControl.h"
#include "IPlayerStrategy.h"

class CommandManager: public ICommandInvoker, public IRemoteControl
{
	ICommand *command;
	string playerName;
public:
	CommandManager(string const& _playerName)
		: playerName(_playerName)
	{
	}
	bool IsMine(
		IPlayerStrategy const& strategy
		) const 
	{
		return playerName == strategy.name();		
	}
    
	virtual void send(ICommand* command);
	virtual ICommand* Invoke();
};

#endif