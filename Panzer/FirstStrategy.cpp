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
	if(i < 10)
	{
		std::vector<double> speed(2);
		speed[0] = -1;
		speed[1] = -1;

		ICommand *command = new MoveCommand(items[0], speed); 
		controls[0]->send(command);
	}
}