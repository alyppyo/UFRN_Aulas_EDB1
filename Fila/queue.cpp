template <typename T>
Queue<T>::Queue(int size) {
	content = new T [size];
	this->size = size;
	front = 0;
	back = 0;
	count = 0;
}

template <typename T>
Queue<T>::~Queue() {
	Clear();
}

template <typename T>
T Queue<T>::Front() {
	if(IsEmpty()) {
		std::cout << "Erro: fila vazia!" << std::endl;
		exit(EXIT_FAILURE);
	}

	return content[front];
}

template <typename T>
void Queue<T>::Enqueue(T content) {
	if(IsFull())
		std::cout << "Erro: fila cheia!" << std::endl;
	else {
		this->content[back] = content;
		
		// > Operação módulo para definição de índice <
		// Ao chegar no final do vetor, o índice será size-1, onde
		// size é o tamanho do vetor. Ao ser adicionado em uma unidade,
		// o novo índice seria inválido. Logo, ao adicionar uma unidade,
		// aplicamos o operador módulo para fazê-lo retornar a zero.
		back = (back+1)%size;
		count++;
	}
}

template <typename T>
T Queue<T>::Dequeue() {
	if(IsEmpty()) {
		std::cout << "Erro: fila vazia!" << std::endl;
		exit(EXIT_FAILURE);
	}

	T aux = Front();
	front = (front+1)%size;
	count--;
	return aux;
}

template <typename T>
void Queue<T>::Clear() {
	front = 0;
	back = 0;
	count = 0;
}

template <typename T>
bool Queue<T>::IsEmpty() {
	return count == 0;
}

template <typename T>
bool Queue<T>::IsFull() {
	return count == size;
}

template <typename T>
void Queue<T>::Print() {
	int aux = 0;
	while(aux < count) {
		std::cout << content[(front+aux)%size] << " ";
		aux++;
	}
	
	std::cout << std::endl;
}


