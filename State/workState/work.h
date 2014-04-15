
#ifndef WORK_H
#define WORK_H
#include <iostream>
#include "AfternoonState.h"
#include "EveningState.h"
#include "ForenoonState.h"
#include "NoonState.h"
#include "ResetState.h"
#include "ResetState.h"
#include "SleepState.h"

using namespace std;

class Work
{
public:
	Work()
	:m_finish(false)
	{
		m_pState = new ForenoonState();
	}

private:
	int m_hour;
public:
	void setHour(const int& hour)
	{ m_hour = hour; }
	const int getHour() const
	{ return m_hour; }

private:
	bool m_finish;
	bool m_TaskFinished;
public:
	void TaskFinished(const bool& taskfinished)
	{ m_TaskFinished = taskfinished; }
	const bool IsTaskFinished() const
	{ return m_TaskFinished; }

private:
	State* m_pState;
public:
	void setState(State* state)
	{ m_pState = state; }
	//const State* getState() const
	//{ return m_pState; }

	void WriteProgram()
	{
		//將work中長長的...判斷狀態的if-else改成一個又一個的狀態，利用動態連結的方式組成。
		m_pState->WriteProgram(*this);  //change State
		
		//if (m_hour < 12)
		//	cout << "目前時間: " << m_hour << "點 上午工作 精神百倍" << endl;
		//else if (m_hour < 13)
		//	cout << "目前時間: " << m_hour << "點 餓了，午飯；覺得睏，午休。" << endl;
		//else if (m_hour < 17)
		//	cout << "目前時間: " << m_hour << "點 下午狀態還不錯，繼續努力" << endl;
		//else
		//	if (m_TaskFinished)
		//		cout << "目前時間: " << m_hour << "點 下班回家了" << endl;
		//	else
		//		if (m_hour < 21)
		//			cout << "目前時間: " << m_hour << "點 加班，疲累至極" << endl;
		//		else
		//			cout << "目前時間: " << m_hour << "點 不行了，睡著了。" << endl;
	}
};
#endif