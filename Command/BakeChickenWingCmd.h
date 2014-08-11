#ifndef BAKECHICKENWING_CMD_H
#define BAKECHICKENWING_CMD_H
#include "Command.h"

class BakeChickenWingCmd : public Command
{
public:
 	BakeChickenWingCmd(Barbecuer receiver)
 	{
 		m_receiver = receiver;
 	}
 	void ExcuteCommend(){ m_receiver.BakeChickenWing(); }
};
#endif