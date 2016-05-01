<<<<<<< HEAD
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

=======
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

>>>>>>> 8741c33791b00aaaeb1340fcbb4448af72ca9d88
#endif