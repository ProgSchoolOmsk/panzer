#include "CommandManager.h"

void CommandManager::send(ICommand* command)
{
	this->command = command;
}

ICommand* CommandManager::Invoke()
{
	return command;
}