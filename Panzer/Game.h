#ifndef _GAME_H_
#define _GAME_H_

#include <vector>

#include "CommandManager.h"
#include "IGameItem.h"
#include "IPlayerStrategy.h"

using std::vector;

class Game
{
	vector<IPlayerStrategy*> strategies;
	vector<IGameItem*> items;
	vector<CommandManager*> managers;
public:
	Game(vector<IPlayerStrategy*>const& _strategies);

	void Play();
private:
	bool CanFinish() const;
	vector<IRemoteControl*> chooseRemoteControls(
		vector<CommandManager*> & managers,
		IPlayerStrategy const& strategy
	);
};







#endif