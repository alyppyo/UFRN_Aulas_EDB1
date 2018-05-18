#include <iostream>
#include "deque.h"

using namespace std;

int main() {
	const int tam = 10;
	Deque<int> deque(tam);

	int valor;
	for(int i = 0; i < tam; i++) {
		valor = (i+1)*10;
		
		if(i%2 == 0)
			deque.PushBack(valor);
		else 
			deque.PushFront(valor);

		cout << "+ Inserindo valor " << valor << endl;
		cout << "> Conteúdo da fila: ";
		deque.Print();
		cout << endl;
	}
	
	// Quebrando a fila
	//fila.Enqueue(0);

	for(int i = 0; i < tam; i++) {
		cout << "- Removendo valor ";
		if(i%2 == 0)
			cout << deque.PopFront();
		else		
			cout << deque.PopBack();

		cout << endl << "> Conteúdo da deque: ";
		deque.Print();
		cout << endl;
	}

	// Quebrando a fila
	//fila.Dequeue();


	return EXIT_SUCCESS;
}