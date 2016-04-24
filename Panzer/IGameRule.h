#ifndef _IGAMERULE_H_
#define _IGAMERULE_H_

#include "IGameItem.h"

class IGameRule
{
public:
	virtual void check(IGameItem* item) const = 0;
};


#endif