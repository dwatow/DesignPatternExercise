
#ifndef WORK_H
#define WORK_H
#include <iostream>

using namespace std;
class Work
{
public:
	Work()
	:m_finish(false)
	{}
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
	void setTaskFinished(const bool& taskfinished)
	{ m_TaskFinished = taskfinished; }
	const bool getTaskFinished() const
	{ return m_TaskFinished; }

	void WriteProgram()
	{
		if (m_hour < 12)
			cout << "目前時間: " << m_hour << "點 上午工作 精神百倍" << endl;
		else if (m_hour < 13)
			cout << "目前時間: " << m_hour << "點 餓了，午飯；覺得睏，午休。" << endl;
		else if (m_hour < 17)
			cout << "目前時間: " << m_hour << "點 下午狀態還不錯，繼續努力" << endl;
		else
			if (m_TaskFinished)
				cout << "目前時間: " << m_hour << "點 下班回家了" << endl;
			else
				if (m_hour < 21)
					cout << "目前時間: " << m_hour << "點 加班，疲累至極" << endl;
				else
					cout << "目前時間: " << m_hour << "點 不行了，睡著了。" << endl;
	}
};
#endif