#ifndef BAKEMUTTON_CMD_H
#define BAKEMUTTON_CMD_H
#include "Command.h"

class BakeMuttonCmd : public Command
{
public:
 	BakeMuttonCmd(Barbecuer receiver)
 	{
 		m_receiver = receiver;
 	}
 	
 	void ExcuteCommend(){ m_receiver.BakeMutton(); }
};
#endif