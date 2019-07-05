#include "LLStack.h"
template<typename T>
LLStack<T>::LLStack()
{
	top = nullptr;
}

template<typename T>
void LLStack<T>::push(T val)
{
	LLNode<T> *temp;
	temp = new LLNode<T>(val);
	if (top != nullptr)
		temp->next = top;
	top = temp;
}

template<typename T>
T LLStack<T>::pop()
{
	if (top == nullptr)
		return -1;
	LLNode<T> *temp;
	temp = top;
	top = top->next;
	return temp->data;
	delete temp;
}
/*template<typename T>
LLStack<T>::LLStack(const LLStack<T> &ref)
{
capacity = ref.capacity;
top = ref.top;
data = new T[capacity];
for (int i = 0; i < capacity; i++)
data[i] = ref.data[i];
}
template<typename T>
LLStack<T>& LLStack<T> ::operator = (const LLStack<T> &ref)
{
capacity = ref.capacity;
top = ref.top;
data = new T[capacity];
for (int i = 0; i < capacity; i++)
data[i] = ref.data[i];
return (*this);
}
*/
template<typename T>
LLStack<T>::~LLStack()
{
}
template LLStack<int>;