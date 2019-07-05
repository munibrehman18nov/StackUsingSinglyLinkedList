#include<iostream>
using namespace std;
#include"LLStack.h"
int main()
{
	LLStack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	s.push(6);
	s.push(5);
	cout << s.pop() << endl;
}