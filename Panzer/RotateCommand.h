#ifndef _ROTATECOMMAND_H_
#define _ROTATECOMMAND_H_

#include "ICommand.h"
#include "IGameItem.h"

class RotateCommand: public ICommand
{
	IGameItem *item;
	int direction;
public:
	RotateCommand(IGameItem *item, int direction);
	virtual void Do();
};

#endif