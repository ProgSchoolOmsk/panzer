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

	char sprite[][9] = {
		{
			 'X', 'X', 'X', 
			 '#', '1', '-',
			 'X', 'X', 'X'
		},
		{
			 '#', 'X', ' ',
			 'X', '1', 'X',
			 ' ', 'X', '\\'
		},
		{
			 'X', '#', 'X',
			 'X', '1', 'X',
			 'X', '|', 'X'
		},
		{
			 ' ', 'X', '#' ,
			 'X', '1', 'X' ,
			 '/', 'X', ' ' 
		},
		{
			 'X', 'X', 'X',
			 '-', '1', '#',
			 'X', 'X', 'X' 
		},
		{
			 '\\', 'X', ' ',
			 'X', '1', 'X',
			 ' ', 'X', '#'
		},
		{
			 'X', '|', 'X' ,
			 'X', '1', 'X' ,
			 'X', '#', 'X' 
		},
		{
			 ' ', 'X', '/',
			 'X', '1', 'X',
			 '#', 'X', ' ' 
		}
	};

	int spriteNumber =
		Unboxing<int>(
			item->getValue("spriteNumber")
		);

	int arraySize = 625;//sizeof(sprite[spriteNumber]);
	int charSize = sizeof(char);
	int arrayLength = arraySize / charSize;

	double size = sqrt(arrayLength);
	int s = (int) size;

	PaintSprite((int)coordinate[0], (int)coordinate[1], sprite[spriteNumber], (int)sqrt(sizeof(sprite[spriteNumber])/sizeof(char)));
	
}
 
void ViewPanzer::PaintSprite(int x, int y, char* sprite, int spriteSize) const
{
	for(int i=0; i< spriteSize; ++i)
	{
		COORD p = { x - spriteSize/2, y -spriteSize/2 + i };
        SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
		for(int j=0; j<spriteSize; ++j)
		{
			printf("%c", sprite[i*spriteSize + j]);
		}
	}
}