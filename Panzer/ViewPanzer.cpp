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

	char sprite[][5][5] = {
		{
			{' ', ' ', ' ', ' ', ' '},
			{' ', 'X', 'X', 'X', ' '},
			{' ', '#', '1', '-', '-'},
			{' ', 'X', 'X', 'X', ' '},
			{' ', ' ', ' ', ' ', ' '}
		},
		{
			{' ', ' ', 'X', ' ', ' '},
			{' ', '#', ' ', 'X', ' '},
			{'X', ' ', '1', ' ', 'X'},
			{' ', 'X', ' ', '\\', ' '},
			{' ', ' ', 'X', ' ', '\\'}
		},
		{
			{' ', ' ', ' ', ' ', ' '},
			{' ', 'X', '#', 'X', ' '},
			{' ', 'X', '1', 'X', ' '},
			{' ', 'X', '|', 'X', ' '},
			{' ', ' ', '|', ' ', ' '}
		},
		{
			{' ', ' ', 'X', ' ', ' '},
			{' ', 'X', ' ', '#', ' '},
			{'X', ' ', '1', ' ', 'X'},
			{' ', '//', ' ', 'X', ' '},
			{'//', ' ', 'X', ' ', ' '}
		},
		{
			{' ', ' ', ' ', ' ', ' '},
			{' ', 'X', 'X', 'X', ' '},
			{'-', '-', '1', '#', ' '},
			{' ', 'X', 'O', 'X', ' '},
			{' ', 'X', 'X', 'X', ' '}
		},
		{
			{'\\', ' ', 'X', ' ', ' '},
			{' ', '\\', ' ', 'X', ' '},
			{'X', ' ', '1', ' ', 'X'},
			{' ', 'X', ' ', '#', ' '},
			{' ', ' ', 'X', ' ', ' '}
		},
		{
			{' ', ' ', '|', ' ', ' '},
			{' ', 'X', '|', 'X', ' '},
			{' ', 'X', '1', 'X', ' '},
			{' ', 'X', '#', 'X', ' '},
			{' ', ' ', ' ', ' ', ' '}
		},
		{
			{' ', ' ', 'X', ' ', '//'},
			{' ', 'X', ' ', '//', ' '},
			{'X', ' ', '1', ' ', 'X'},
			{' ', '#', ' ', 'X', ' '},
			{' ', ' ', 'X', ' ', ' '}
		}
	};

	int spriteNumber =
		Unboxing<int>(
			item->getValue("spriteNumber")
		);

	PaintSprite(coordinate[0]-2, coordinate[1]-2, sprite[spriteNumber]);
	
}
 
void ViewPanzer::PaintSprite(int x, int y, char sprite[5][5]) const
{
	for(int i=0; i< 5; ++i)
	{
		COORD p = { x, y + i };
        SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
		for(int j=0; j<5; ++j)
		{
			printf("%c", sprite[i][j]);
		}
	}
}