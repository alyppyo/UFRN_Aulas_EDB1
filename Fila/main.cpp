#include <iostream>
#include "queue.h"

using namespace std;

int main() {
	const int tam = 10;
	Queue<int> fila(tam);

	int valor;
	for(int i = 0; i < tam; i++) {
		valor = (i+1)*10;
		fila.Enqueue(valor);

		cout << "+ Inserindo valor " << valor << endl;
		cout << "> Conteúdo da fila: ";
		fila.Print();
		cout << endl;
	}

	// Quebrando a fila
	fila.Enqueue(0);

	for(int i = 0; i < tam; i++) {
		cout << "- Removendo valor " << fila.Dequeue() << endl;

		cout << "> Conteúdo da fila: ";
		fila.Print();
		cout << endl;
	}

	// Quebrando a fila
	fila.Dequeue();

	return EXIT_SUCCESS;
}