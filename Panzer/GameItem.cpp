#include "GameItem.h"

void* GameItem::getValue(string const& name) const
{
	return body.at(name);
}

void GameItem::setValue(string const& name, void* value)
{
	body[name] = value;
}