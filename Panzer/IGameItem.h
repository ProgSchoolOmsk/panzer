#ifndef _IGAMEITEM_H_
#define _IGAMEITEM_H_

#include <string>

using std::string;

class IGameItem
{
public:
	virtual void* getValue(string const& name) const  = 0;
	virtual void setValue(string const& name, void *value) = 0;
};

#endif