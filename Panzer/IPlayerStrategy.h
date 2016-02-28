#ifndef _IPLAYERSTRATEGY_H_
#define _IPLAYERSTRATEGY_H_

#include <vector>

#include "IGameItem.h"
#include "IRemoteControl.h"

using std::vector;

class IPlayerStrategy
{
public:
	virtual void step(
		vector<IGameItem*> const& items, 
		vector<IRemoteControl*> const& controls
	) = 0;
	virtual string name() const = 0;
};

#endif