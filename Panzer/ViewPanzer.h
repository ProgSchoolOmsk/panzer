#ifndef _VIEW_PANZER_
#define _VIEW_PANZER_

#include "IGameItem.h"
#include "IViewGameItem.h"

class ViewPanzer: public IViewGameItem
{
	IGameItem* item;
public:
	ViewPanzer(IGameItem *item);
	virtual void Paint() const;
private:
	void PaintSprite(int x, int y, char sprite[3][3]) const;
};

#endif