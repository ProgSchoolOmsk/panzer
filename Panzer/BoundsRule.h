#ifndef _BOUNDSRULE_H_
#define _BOUNDSRULE_H_

#include "IGameRule.h"
#include "Unboxing.h"

class BoundsRule: public IGameRule
{
public:
	virtual void check(IGameItem* item) const
	{
		int type = Unboxing<int>(item->getValue("type"));
		switch(type)
		{
		case 1: //это танк
			vector<double> center = 
				Unboxing<vector<double> >(item->getValue("coordinate"));
			if(center[0] > (80 - 1) - 1 - 3/2)
				center[0] = 77;
			if(center[0] < 1 - 1 + 1 + 1 )
				center[0] = 2;
			if(center[1] < 2)
				center[1] = 2;
			if(center[1] > 22)
				center[1] = 22;
			item->setValue("coordinate", Boxing<vector<double> >(center));
			break;
		}
	}
};

#endif