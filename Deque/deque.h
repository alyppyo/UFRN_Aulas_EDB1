#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
#include <cstdlib>

template <typename T>
class Deque {
	T * content;

	int back;
	int count;
	int front;
	int size;

public:
	Deque(int size);
	~Deque();

	T 	 Back();
	void Clear();
	T 	 Front();
	bool IsEmpty();
	bool IsFull();
	T 	 PopBack();
	T 	 PopFront();
	void Print();
	void PushBack(T content);
	void PushFront(T content);
};

#include "deque.cpp"

#endif
