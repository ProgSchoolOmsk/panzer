#include "Boxing.h"
#include "Game.h"

#include "GameItem.h"

Game::Game(vector<IPlayerStrategy*>const& _strategies)
	: strategies(_strategies)
{
	IGameItem *item1 = new GameItem();
	vector<double> point1(2);
	point1[0] = 1;
	point1[1] = 1;

	item1->setValue(
		"coordinate", 
		Boxing<vector<double> >(point1)
	);

	item1->setValue(
		"spriteNumber", 
		Boxing<int >(0)
	);

	item1->setValue(
		"spriteNumbers", 
		Boxing<int >(8)
	);

	items.push_back(item1);

	CommandManager* manager = new CommandManager(strategies[0]->name());
	managers.push_back(manager);
}

void Game::Play()
{
	while(CantFinish())
	{
		for(size_t i = 0; i < strategies.size(); ++i)
		{
			vector<IRemoteControl*> controls = 
				chooseRemoteControls(managers, *strategies[i]);
			strategies[i] -> step(items, controls);
		}

		for(size_t i = 0; i < managers.size(); ++i)
		{
			ICommand * command = managers[i]->Invoke();
			if(command != 0)
			{
				command->Do();
			}
		}

	}
}

bool Game::CantFinish() const
{
	return true;
}

vector<IRemoteControl*> Game::chooseRemoteControls(
	vector<CommandManager*> & managers,
	IPlayerStrategy const& strategy
)
{
	vector<IRemoteControl*> result;
	for(size_t i = 0; i < managers.size(); ++i)
	{
		if(managers[i]->IsMine(strategy))
		{
			result.push_back(managers[i]);
		}
	}
	return result;
}