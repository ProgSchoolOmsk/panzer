<<<<<<< HEAD
﻿#include "Boxing.h"
#include "Game.h"

#include "BoundsRule.h"
#include "GameItem.h"
#include "ViewBullet.h"
#include "ViewPanzer.h"
#include "Unboxing.h"

Game::Game(vector<IPlayerStrategy*>const& _strategies)
	: strategies(_strategies)
{
	IGameItem *item1 = new GameItem();
	vector<double> point1(2);
	point1[0] = 1;
	point1[1] = 1;

	item1->setValue(
		"type", 
		Boxing<int >(1) //1 - это тип танка
	);

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
		// просим игроков совершить ход
		for(size_t i = 0; i < strategies.size(); ++i)
		{
			vector<IRemoteControl*> controls = 
				chooseRemoteControls(managers, *strategies[i]);
			strategies[i] -> step(items, controls);
		}

		// выполняем команды, поступмвшие от игроков
		for(size_t i = 0; i < managers.size(); ++i)
		{
			ICommand * command = managers[i]->Invoke();
			if(command != 0)
			{
				command->Do();
			}
		}

		BoundsRule rule;
		//проверяем, что правила игры не нарушены
		for(size_t i = 0; i < items.size(); ++i)
		{
			rule.check(items[i]);
		}

		// отображаем состояние игрового поля
		//ShowGameField();
		system("cls");
		for(size_t i = 0; i < items.size(); ++i)
		{
			int type = Unboxing<int>(items[i] -> getValue("type"));

			switch(type)
			{
			case 1: // это танк
				{
					ViewPanzer itemView(items[i]);
					itemView.Paint();
				}
				break;
			default:
				//?????????
				;
			}
		}

		//getchar();
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
=======
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
>>>>>>> 8741c33791b00aaaeb1340fcbb4448af72ca9d88
}