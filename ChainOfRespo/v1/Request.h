#ifndef REQUEST_H
#define REQUEST_H
#include <string>

class Request
{
private:
	std::string m_requestType;
public:
	void SetRequestType(const std::string& requestType)
	{ m_requestType = requestType; }
	const std::string GetRequestType() const
	{ return m_requestType; }

private:
	std::string m_requestContent;
public:
	void SetRequestContent(const std::string& requestContent)
	{ m_requestContent = requestContent; }
	const std::string GetRequestContent() const
	{ return m_requestContent; }

private:
	int m_number;
public:
	void SetNumber(const int& number)
	{ m_number = number; }
	const int GetNumber() const
	{ return m_number; }
};
#endif