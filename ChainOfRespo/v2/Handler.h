#ifndef HANDLER_H
#define HANDLER_H

class Handler
{
protected:
	Handler* m_successor;
public:
	void SetSuccessor(Handler* successor)
	{ m_successor = successor; }
	virtual void HandleRequest(int request) = 0;
};
#endif