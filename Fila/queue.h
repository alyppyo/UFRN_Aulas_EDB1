#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <cstdlib>

template <typename T>
class Queue {
	T * content;
	int back;
	int count;
	int front;
	int size;

public:
	Queue(int size);
	~Queue();

	void Clear();
	T Dequeue();
	void Enqueue(T content);
	T Front();
	bool IsEmpty();
	bool IsFull();
	void Print();
};

#include "queue.cpp"

#endif
