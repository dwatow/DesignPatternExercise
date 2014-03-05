#ifndef OBSERVER_H
#define OBSERVER_H

 //抽象觀察者，提供更新方法
struct Observer
{
	virtual void Update() = 0;
	//virtual bool operator==(const Observer& ) = 0;
};
#endif