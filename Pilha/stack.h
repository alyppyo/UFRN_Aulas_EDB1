#ifndef STACK_H
#define STACK_H

#include <iostream>

template <typename T>
class Stack {
	T * content;
	int size;
	int top;

public:
	Stack(int size);
	~Stack();

	void Clear();
	bool IsEmpty();
	bool IsFull();
	T Pop();
	void Print();
	void Push(T content);
	T Top();
};

#include "stack.cpp"

#endif
