#include "ViewPanzer.h"

#include <vector>
#include <windows.h>
#include "Unboxing.h"

ViewPanzer::ViewPanzer(IGameItem *item)
{
	this->item = item;
}

void ViewPanzer::Paint() const
{
	using namespace std;

	vector<double> coordinate =
		Unboxing<vector<double> >(
			item->getValue("coordinate")
		);

	char sprite[][3][3] = {
		{
			{'X', 'X', 'X'},
			{'#', '1', '-'},
			{'X', 'X', 'X'}
		},
		{
			{'#', 'X', ' '},
			{'X', '1', 'X'},
			{' ', 'X', '\\'}
		},
		{
			{'X', '#', 'X'},
			{'X', '1', 'X'},
			{'X', '|', 'X'}
		},
		{
			{' ', 'X', '#'},
			{'X', '1', 'X'},
			{'/', 'X', ' '}
		},
		{
			{'X', 'X', 'X'},
			{'-', '1', '#'},
			{'X', 'X', 'X'}
		},
		{
			{'\\', 'X', ' '},
			{'X', '1', 'X'},
			{' ', 'X', '#'}
		},
		{
			{'X', '|', 'X'},
			{'X', '1', 'X'},
			{'X', '#', 'X'}
		},
		{
			{' ', 'X', '/'},
			{'X', '1', 'X'},
			{'#', 'X', ' '}
		}
	};

	int spriteNumber =
		Unboxing<int>(
			item->getValue("spriteNumber")
		);

	PaintSprite(coordinate[0]-1, coordinate[1]-1, sprite[spriteNumber]);
	
}
 
void ViewPanzer::PaintSprite(int x, int y, char sprite[3][3]) const
{
	for(int i=0; i< 3; ++i)
	{
		COORD p = { x, y + i };
        SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
		for(int j=0; j<3; ++j)
		{
			printf("%c", sprite[i][j]);
		}
	}
}