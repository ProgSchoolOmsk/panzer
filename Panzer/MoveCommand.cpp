<<<<<<< HEAD
#include "Boxing.h"
#include "MoveCommand.h"
#include "Unboxing.h"

MoveCommand::MoveCommand(
	IGameItem *_item, 
	vector<double> const& _speed
):
item(_item), speed(_speed)
{
}

void MoveCommand::Do()
{
	vector<double> coordinate =
		Unboxing<vector<double> >(
			item->getValue("coordinate")
		);

	//if(coordinate != 0)
	{
		for(int i = 0; i < coordinate.size(); ++i)
		{
			coordinate[i] += speed[i];
		}
	}

	item -> setValue(
		"coordinate", 
		Boxing<vector<double> >(coordinate)
	);
=======
#include "Boxing.h"
#include "MoveCommand.h"
#include "Unboxing.h"

MoveCommand::MoveCommand(
	IGameItem *_item, 
	vector<double> const& _speed
):
item(_item), speed(_speed)
{
}

void MoveCommand::Do()
{
	vector<double> coordinate =
		Unboxing<vector<double> >(
			item->getValue("coordinate")
		);

	//if(coordinate != 0)
	{
		for(int i = 0; i < coordinate.size(); ++i)
		{
			coordinate[i] += speed[i];
		}
	}

	item -> setValue(
		"coordinate", 
		Boxing<vector<double> >(coordinate)
	);
>>>>>>> 8741c33791b00aaaeb1340fcbb4448af72ca9d88
}