template <typename T>
Stack<T>::Stack(int size) {
	content = new T [size];
	this->size = size;
	top = -1;
}

template <typename T>
Stack<T>::~Stack() {
	Clear();
}

template <typename T>
T Stack<T>::Top() {
	if(IsEmpty()) {
		std::cout << "Erro: pilha vazia!" << std::endl;
		exit(1);
	}

	return content[top];
}

template <typename T>
void Stack<T>::Push(T content) {
	if(IsFull())
		std::cout << "Erro: pilha cheia!" << std::endl;
	else 
		this->content[++top] = content;
}

template <typename T>
T Stack<T>::Pop() {
	if(IsEmpty()) {
		std::cout << "Erro: pilha vazia!" << std::endl;
		exit(1);
	}

	T aux = Top();
	top--;
	return aux;
}

template <typename T>
void Stack<T>::Clear() {
	delete [] content;
	top = -1;
}

template <typename T>
bool Stack<T>::IsEmpty() {
	return top == -1;
}

template <typename T>
bool Stack<T>::IsFull() {
	return top == size-1;
}

template <typename T>
void Stack<T>::Print() {
	for(int i = top; i > -1; i--)
		std::cout << content[i] << " ";
	
	std::cout << std::endl;
}


