#ifndef _IREMOTECONTROL_H_
#define _IREMOTECONTROL_H_

#include "ICommand.h"

class IRemoteControl
{
public:
	virtual void send(ICommand const& command) = 0;
};

#endif