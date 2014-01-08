#ifndef OPERATOION_H
#define OPERATOION_H

class Operation
{
public:
	void SetA(double n){ m_numberA = n; }
	void SetB(double n){ m_numberB = n; }	
	double GetA(){ return m_numberA; }
	double GetB(){ return m_numberB; }
	virtual double GetResult()
	{
		double result = 0;
		return result;
	}
protected:
	double m_numberA;
	double m_numberB;
};


#endif