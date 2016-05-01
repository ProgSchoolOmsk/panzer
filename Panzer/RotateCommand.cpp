<<<<<<< HEAD
#include <stdexcept>

#include "Boxing.h"
#include "RotateCommand.h"
#include "Unboxing.h"

RotateCommand::RotateCommand(IGameItem *item, int direction)
{
	if(direction != -1 && direction != 1)
	{
		throw std::runtime_error("Direction should be -1 or 1.");
	}
	this->direction = direction;

	this->item = item;
}

void RotateCommand::Do()
{
	int spriteNumber =
		Unboxing<int>(
			item->getValue("spriteNumber")
		);

	int spriteNumbers =
		Unboxing<int>(
			item->getValue("spriteNumbers")
		);
	
	spriteNumber = (spriteNumber + direction) % spriteNumbers;

	item -> setValue(
		"spriteNumber", 
		Boxing<int>(spriteNumber)
	);

}
=======
#include <stdexcept>

#include "Boxing.h"
#include "RotateCommand.h"
#include "Unboxing.h"

RotateCommand::RotateCommand(IGameItem *item, int direction)
{
	if(direction != -1 && direction != 1)
	{
		throw std::runtime_error("Direction should be -1 or 1.");
	}
	this->direction = direction;

	this->item = item;
}

void RotateCommand::Do()
{
	int spriteNumber =
		Unboxing<int>(
			item->getValue("spriteNumber")
		);

	int spriteNumbers =
		Unboxing<int>(
			item->getValue("spriteNumbers")
		);
	
	spriteNumber = (spriteNumber + direction) % spriteNumbers;

	item -> setValue(
		"spriteNumber", 
		Boxing<int>(spriteNumber)
	);

}
>>>>>>> 8741c33791b00aaaeb1340fcbb4448af72ca9d88
