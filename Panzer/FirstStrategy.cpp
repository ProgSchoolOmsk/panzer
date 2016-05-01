#include "FirstStrategy.h"

#include <vector>

#include "MoveCommand.h"

string FirstStrategy::name() const
{
	return "1";
}

void FirstStrategy::step(
	vector<IGameItem*> const& items, 
	vector<IRemoteControl*> const& controls
)
{
	++i;
<<<<<<< HEAD
	if(i < 10)
	{
		std::vector<double> speed(2);
		speed[0] = -1;
		speed[1] = -1;

		ICommand *command = new MoveCommand(items[0], speed); 
		controls[0]->send(command);
	}
}
=======
	if(i < 70)
	{
		std::vector<double> speed(2);
		speed[0] = 1;
		speed[1] = 0;

		ICommand *command = new MoveCommand(items[0], speed); 
		controls[0]->send(*command);
	}
}
>>>>>>> 8741c33791b00aaaeb1340fcbb4448af72ca9d88
