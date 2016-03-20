#ifndef _GAMEITEM_H_
#define _GAMEITEM_H_

#include <map>

#include "IGameItem.h"

using std::map;

class GameItem: public IGameItem
{
	map<string, void*> body;
public:

	virtual void* getValue(string const& name) const;
	virtual void setValue(string const& name, void *value);
};

#endif