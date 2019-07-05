#ifndef LLSTACK_H
#define LLSTACK_H
#include"LLNode.h"
template <typename T>
class LLStack
{
	LLNode<T>*top;
public:
	LLStack();
	//LLStack(const LLStack<T> &);
	//LLStack& operator = (const LLStack<T> &);
	void push(const T);
	T pop();
	~LLStack();
};

#endif