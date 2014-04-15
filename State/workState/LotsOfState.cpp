#include "AfternoonState.h"
#include "EveningState.h"
#include "ForenoonState.h"
#include "NoonState.h"
#include "ResetState.h"
#include "ResetState.h"
#include "SleepState.h"
#include "Work.h"

void ForenoonState::WriteProgram(Work& w)
{
	if(w.getHour() < 12)
	{
		cout << "當前時間" << w.getHour() << "點 上午工作 精神百倍" << endl;
	}
	else
	{
		w.setState(new NoonState());
		w.WriteProgram();
	}
}

void NoonState::WriteProgram(Work& w)
{
	if(w.getHour() < 13)
	{
		cout << "當前時間" << w.getHour() << "點 餓了，午飯；覺得睏，午休" << endl;
	}
	else
	{
		w.setState(new AfternoonState());
		w.WriteProgram();
	}
}

void AfternoonState::WriteProgram(Work& w)
{
	if(w.getHour() < 17)
	{
		cout << "當前時間" << w.getHour() << "點 下午狀態還不錯，繼續努力" << endl;
	}
	else
	{
		w.setState(new EveningState());
		w.WriteProgram();
	}
}

void EveningState::WriteProgram(Work& w)
{
	if(w.IsTaskFinished())
	{
		w.setState(new ResetState());
		w.WriteProgram();
	}
	else
	{
		if (w.getHour() < 21)
			cout << "當前時間" << w.getHour() << "點 加班哦，疲累至極" << endl;
		else
		{
			w.setState(new SleepingState());
			w.WriteProgram();
		}
		
	}
}

void ResetState::WriteProgram(Work& w)
{
	cout << "當前時間" << w.getHour() << "點 下班回家了" << endl;
}

void SleepingState::WriteProgram(Work& w)
{
	cout << "當前時間" << w.getHour() << "點 不行了，睡著了。" << endl;
}