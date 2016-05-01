<<<<<<< HEAD
#include <iostream>
#include <vector>

#include <windows.h>

#include "Boxing.h"
#include "Game.h"
#include "GameItem.h"
#include "FirstStrategy.h"
#include "MoveCommand.h"
#include "RotateCommand.h"

#include "Sqrt.h"

#include "Unboxing.h"
#include "ViewBullet.h"
#include "ViewPanzer.h"


using namespace std;


int main(void)
{
	vector<IPlayerStrategy*> strategies;
	strategies.push_back(new FirstStrategy());

	Game game(strategies);

	

	game.Play();
	


	/*IGameItem *item = new GameItem();
	vector<double> point(2);
	point[0] = 1;
	point[1] = 5;

	item->setValue(
		"coordinate", 
		Boxing<vector<double> >(point)
	);

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

	ViewPanzer panzer(item1);

	IViewGameItem *viewItem = &panzer;

	vector<double> speed;
	speed.push_back(1);
	speed.push_back(0);
	
	ICommand *command;
	
	system("cls");

	command = new MoveCommand(item1, speed);
	command -> Do();
	viewItem ->Paint();

	system("cls");

	command = new RotateCommand(item1, 1);
	command -> Do();
	viewItem ->Paint();

	system("cls");
	
	speed[0] = 1;
	speed[1] = 1;

	command = new MoveCommand(item1, speed);
	command -> Do();
	viewItem ->Paint();

	system("cls");
	
	speed[0] = 1;
	speed[1] = 1;

	command = new MoveCommand(item1, speed);
	command -> Do();
	viewItem ->Paint();

	system("cls");

	command = new RotateCommand(item1, -1);
	command -> Do();
	viewItem ->Paint();

	system("cls");
	
	speed[0] = 1;
	speed[1] = 0;

	command = new MoveCommand(item1, speed);
	command -> Do();
	viewItem ->Paint();

	system("cls");
	
	speed[0] = 1;
	speed[1] = 0;

	command = new MoveCommand(item1, speed);
	command -> Do();
	viewItem ->Paint();
	*/
	
	return 0;
=======
#include <iostream>
#include <vector>

#include <windows.h>

#include "Boxing.h"
#include "GameItem.h"

#include "MoveCommand.h"
#include "RotateCommand.h"
#include "Unboxing.h"
#include "ViewBullet.h"
#include "ViewPanzer.h"


using namespace std;


int main(void)
{
	
	IGameItem *item = new GameItem();
	vector<double> point(2);
	point[0] = 1;
	point[1] = 5;

	item->setValue(
		"coordinate", 
		Boxing<vector<double> >(point)
	);

	IGameItem *item1 = new GameItem();
	vector<double> point1(2);
	point1[0] = 3;
	point1[1] = 3;

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

	ViewPanzer panzer(item1);

	IViewGameItem *viewItem = &panzer;

	vector<double> speed;
	speed.push_back(1);
	speed.push_back(0);
	
	ICommand *command;
	
	system("cls");

		command = new RotateCommand(item1, 1);
		command -> Do();
		viewItem ->Paint();

		system("cls");

	/*for(int i = 0; i < 70; ++i)
	{
		command = new MoveCommand(item1, speed);
		command -> Do();
		viewItem ->Paint();

		system("cls");
	}
	for (int i = 0; i < 2; ++i)
	{
		command = new RotateCommand(item1, 1);
		command -> Do();
		viewItem ->Paint();

		system("cls");
	}

	speed[0] = 0;
	speed[1] = 1;

	for (int i = 0; i < 3; ++i)
	{
		command = new MoveCommand(item1, speed);
		command -> Do();
		viewItem ->Paint();

		system("cls");
	}*/
	/*
	speed[0] = 1;
	speed[1] = 1;

	command = new MoveCommand(item1, speed);
	command -> Do();
	viewItem ->Paint();

	system("cls");

	command = new RotateCommand(item1, -1);
	command -> Do();
	viewItem ->Paint();

	system("cls");
	
	speed[0] = 1;
	speed[1] = 0;

	command = new MoveCommand(item1, speed);
	command -> Do();
	viewItem ->Paint();

	system("cls");
	
	speed[0] = 1;
	speed[1] = 0;

	command = new MoveCommand(item1, speed);
	command -> Do();
	viewItem ->Paint();*/
	
	return 0;
>>>>>>> 8741c33791b00aaaeb1340fcbb4448af72ca9d88
}