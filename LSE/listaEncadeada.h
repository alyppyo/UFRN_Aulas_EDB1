#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

template <typename T>
struct node {
	T content;
	struct node * next;
};

// List with head
template <typename T>
class LinkedList {
	struct node<T> * head;
	struct node<T> * tail;
	int length;

public:
	LinkedList();
	~LinkedList();

	void PushBack(T content);
	void PushFront(T content);
	int  Search(T content);
	T    GetElement(int index);
	void Remove(int index);
	void Erase();
	int  Length();
	bool IsEmpty();
	void Print();
};

#include "listaEncadeada.cpp"

#endif