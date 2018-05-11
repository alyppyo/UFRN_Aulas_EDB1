#include "listaEncadeada.h"

int main() {
	LinkedList<int> list;

	list.PushBack(50);
	list.PushBack(60);
	list.PushBack(70);
	list.PushBack(80);
	list.PushFront(10);
	list.PushFront(20);
	list.PushFront(30);
	list.PushFront(40);

	for(int i = 0; i < 5; i++)
		list.Remove(4);

	
	list.Print();

	return 0;
}