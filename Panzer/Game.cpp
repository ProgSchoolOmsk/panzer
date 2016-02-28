#include "Game.h"

Game::Game(vector<IPlayerStrategy*>const& _strategies)
	: strategies(_strategies)
{
}

void Game::Play()
{
	while(CanFinish())
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

bool Game::CanFinish() const
{
	return false;
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