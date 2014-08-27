#ifndef HANDLER_H
#define HANDLER_H

class Handler
{
protected:
	Handler* m_successor;
	std::string m_Name;
public:
	const std::string GetType() const
	{ return m_Name; }
	void SetSuccessor(Handler* successor)
	{ m_successor = successor; }
	virtual void HandleRequest(int request) = 0;
};
#endif