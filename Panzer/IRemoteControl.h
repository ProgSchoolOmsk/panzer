<<<<<<< HEAD
#ifndef _IREMOTECONTROL_H_
#define _IREMOTECONTROL_H_

#include "ICommand.h"

class IRemoteControl
{
public:
	virtual void send(ICommand* command) = 0;
};

=======
#ifndef _IREMOTECONTROL_H_
#define _IREMOTECONTROL_H_

#include "ICommand.h"

class IRemoteControl
{
public:
	virtual void send(ICommand const& command) = 0;
};

>>>>>>> 8741c33791b00aaaeb1340fcbb4448af72ca9d88
#endif