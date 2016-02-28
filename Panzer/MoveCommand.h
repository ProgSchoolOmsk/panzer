#ifndef _MOVECOMMAND_H_
#define _MOVECOMMAND_H_

#include <vector>

#include "ICommand.h"
#include "IGameItem.h"

using std::vector;

class MoveCommand: public ICommand
{
	IGameItem *item;
	vector<double> speed;
public:
	MoveCommand(
		IGameItem *_item, 
		vector<double> const& _speed
	);
	virtual void Do();
};

#endif