<<<<<<< HEAD
#include "GameItem.h"

void* GameItem::getValue(string const& name) const
{
	return body.at(name);
}

void GameItem::setValue(string const& name, void* value)
{
	body[name] = value;
=======
#include "GameItem.h"

void* GameItem::getValue(string const& name) const
{
	return body.at(name);
}

void GameItem::setValue(string const& name, void* value)
{
	body[name] = value;
>>>>>>> 8741c33791b00aaaeb1340fcbb4448af72ca9d88
}