#ifndef RESUME
#define RESUME

class Resume
{
protected:
public:
	char* m_name;
public:
	Resume(){}
	virtual ~Resume(){}
	virtual Resume* Clone() { return 0; }
	virtual void Set(char *n) {}
	virtual void Show() {}
};

#endif