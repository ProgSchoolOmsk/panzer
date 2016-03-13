#ifndef _VIEW_BULLET_
#define _VIEW_BULLET_

#include "IGameItem.h"
#include "IViewGameItem.h"

class ViewBullet: public IViewGameItem
{
	IGameItem* item;
public:
	ViewBullet(IGameItem *item);
	virtual void Paint() const;
};

#endif