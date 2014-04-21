#ifndef GAMEROLE_H
#define GAMEROLE_H
#include <iostream>

using namespace std;

class GameRole
{
	//生命力
private:
	int m_vit;
public:
	void setVitality(const int& v)
	{ m_vit = v; }
	const int getVitality() const
	{ return m_vit; }

	//攻擊力
private:
	int m_atk;
public:
	void setAttack(const int& atk)
	{ m_atk = atk; }
	const int getAttack() const
	{ return m_atk; }

	//防禦力
private:
	int m_def;
public:
	void setDefense(const int& def)
	{ m_def = def; }
	const int getDefense() const
	{ return m_def; }

	//狀態顯示
public:
	void stateDisplay()
	{
		cout << "角色當前狀態:" << endl;
		cout << "體力:" << m_vit << endl;
		cout << "攻擊力:" << m_atk << endl;
		cout << "防禦力:" << m_def << endl;
		cout << endl;
	}

	//獲得初始狀態 
public:
	void getInitState()
	{
		m_vit = 100;
		m_atk = 100;
		m_def = 100;
	}

	//戰鬥
	void fight()
	{
		m_vit = 0;
		m_atk = 0;
		m_def = 0;
	}

};
#endif