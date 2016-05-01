<<<<<<< HEAD
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

=======
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

>>>>>>> 8741c33791b00aaaeb1340fcbb4448af72ca9d88
#endif