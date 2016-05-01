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
<<<<<<< HEAD
	void PaintSprite(int x, int y, char* sprite, int spriteSize) const;
=======
	void PaintSprite(int x, int y, char sprite[5][5]) const;
>>>>>>> 8741c33791b00aaaeb1340fcbb4448af72ca9d88
};

#endif