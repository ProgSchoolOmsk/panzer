#include "ViewBullet.h"

#include <vector>
#include <windows.h>
#include "Unboxing.h"

ViewBullet::ViewBullet(IGameItem *item)
{
	this->item = item;
}

void ViewBullet::Paint() const
{
	using namespace std;

	vector<double> coordinate =
		Unboxing<vector<double> >(
			item->getValue("coordinate")
		);

	COORD p = { coordinate[0], coordinate[1] };
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
	printf("o");
}