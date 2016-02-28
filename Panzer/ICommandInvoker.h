#ifndef _ICOMMANDINVOKER_H_
#define _ICOMMANDINVOKER_H_

#include "ICommand.h"

class ICommandInvoker
{
public:
	virtual ICommand* Invoke() = 0;
};

#endif