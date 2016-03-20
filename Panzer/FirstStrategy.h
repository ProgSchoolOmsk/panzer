#ifndef _FIRST_STRATEGY_H_
#define _FIRST_STRATEGY_H_

#include "IPlayerStrategy.h"

class FirstStrategy: public IPlayerStrategy
{
	int i;
public:
	FirstStrategy(): i(0){}
	virtual void step(
		vector<IGameItem*> const& items, 
		vector<IRemoteControl*> const& controls
	);
	virtual string name() const;
};

#endif