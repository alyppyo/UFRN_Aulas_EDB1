template <typename T>
Deque<T>::Deque(int size) {
	content = new T [size];
	this->size = size;
	front = 0;
	back = 0;
	count = 0;
}

template <typename T>
Deque<T>::~Deque() {
	Clear();
	delete [] content;
}

template <typename T>
T Deque<T>::Back() {
	if(IsEmpty()) {
		std::cout << "Erro: deque vazia!" << std::endl;
		exit(EXIT_FAILURE);
	}

	return content[back];
}

template <typename T>
T Deque<T>::Front() {
	if(IsEmpty()) {
		std::cout << "Erro: deque vazia!" << std::endl;
		exit(EXIT_FAILURE);
	}

	return content[front];
}

template <typename T>
void Deque<T>::PushFront(T content) {
	if(IsFull())
		std::cout << "Erro: deque cheia!" << std::endl;
	else {
		if(!IsEmpty()) {
			front = (front == 0) ? size-1 : front-1;
		}
		
		this->content[front] = content;
		count++;
	} 
}

template <typename T>
void Deque<T>::PushBack(T content) {
	if(IsFull())
		std::cout << "Erro: deque cheia!" << std::endl;
	else {
		if(!IsEmpty()) {
			back = (back+1)%size;
		}
		
		this->content[back] = content;
		count++;
	} 
}

template <typename T>
T Deque<T>::PopFront() {
	if(IsEmpty()) {
		std::cout << "Erro: deque vazia!" << std::endl;
		exit(EXIT_FAILURE);
	}

	T aux = Front();

	if(count > 1)
		front = (front+1)%size;
	
	count--;

	return aux;
}

template <typename T>
T Deque<T>::PopBack() {
	if(IsEmpty()) {
		std::cout << "Erro: deque vazia!" << std::endl;
		exit(EXIT_FAILURE);
	}

	T aux = Back();

	if(count > 1)
		back = (back == 0) ? size-1 : back-1;
	
	count--;
	
	return aux;
}

template <typename T>
void Deque<T>::Clear() {
	front = 0;
	back = 0;
	count = 0;
}

template <typename T>
bool Deque<T>::IsEmpty() {
	return count == 0;
}

template <typename T>
bool Deque<T>::IsFull() {
	return count == size;
}

template <typename T>
void Deque<T>::Print() {
	int aux = 0;
	while(aux < count) {
		std::cout << content[(front+aux)%size] << " ";
		aux++;
	}
	
	std::cout << std::endl;
}


