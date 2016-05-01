<<<<<<< HEAD
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

=======
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

>>>>>>> 8741c33791b00aaaeb1340fcbb4448af72ca9d88
#endif