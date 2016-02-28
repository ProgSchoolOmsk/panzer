#include <iostream>
#include <vector>

#include "Boxing.h"
#include "GameItem.h"
#include "MoveCommand.h"
#include "Unboxing.h"

using namespace std;


int main(void)
{
	IGameItem *item = new GameItem();
	vector<double> point;
	point.push_back(1);
	point.push_back(-3);

	item->setValue(
		"coordinate", 
		Boxing<vector<double> >(point)
	);

	vector<double> speed;
	speed.push_back(0);
	speed.push_back(1);
	ICommand *command = new MoveCommand(item, speed);

	command->Do();
	command->Do();
	command->Do();

	vector<double> newPoint = Unboxing<vector<double> >(
		item->getValue("coordinate")
	);

	cout << " x = " << newPoint[0] 
	     << " y = " << newPoint[1];

	return 0;
}