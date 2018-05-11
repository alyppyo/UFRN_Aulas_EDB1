#include <iostream>
#include "stack.h"

using namespace std;

int main() {
	const int tam = 10;
	Stack<int> pilha(tam);

	int valor;
	for(int i = 0; i < tam; i++) {
		valor = (i+1)*10;
		pilha.Push(valor);

		cout << "+ Inserindo valor " << valor << endl;
		cout << "> Conteúdo da pilha: ";
		pilha.Print();
		cout << endl;
	}

	// Quebrando a pilha
	pilha.Push(0);

	for(int i = 0; i < tam; i++) {
		cout << "- Removendo valor " << pilha.Pop() << endl;

		cout << "> Conteúdo da pilha: ";
		pilha.Print();
		cout << endl;
	}

	// Quebrando a pilha
	pilha.Pop();
}