template <typename T>
LinkedList<T>::LinkedList() {
	head = new struct node<T>;
	head->next = nullptr;

	tail = new struct node<T>;
	tail->next = nullptr;

	length = 0;
}

template <typename T>
LinkedList<T>::~LinkedList() {

}

template <typename T>
bool LinkedList<T>::IsEmpty() {
	return length == 0;
}

template <typename T>
void LinkedList<T>::PushFront(T content) {
	struct node<T> * newNode = new struct node<T>;
	newNode->content = content;
	
	if(IsEmpty()) {
		tail->next = newNode;
		newNode->next = newNode;	
	}
	else {
		newNode->next = head->next;	
		tail->next->next = newNode;
	}
	head->next = newNode;

	length++;
}

template <typename T>
void LinkedList<T>::PushBack(T content) {
	if(IsEmpty()) {
		PushFront(content);
		return;
	}

	struct node<T> * newNode = new struct node<T>;
	newNode->content = content;
	newNode->next = tail->next->next;
	tail->next->next = newNode;
	tail->next = newNode;

	length++;
}

template <typename T>
void LinkedList<T>::Print() {
	struct node<T> * aux = head->next;

	for(int i = 0; i < length; i++) {
		std::cout << aux->content << " ";
		aux = aux->next;
	}

	std::cout << std::endl;
}

template <typename T>
void LinkedList<T>::Remove(int index) {
	if(index < 0 || index >= length) {
		std::cout << "Erro: índice inválido!" << std::endl;
		return;
	}

	struct node<T> * aux = head->next;
	for(int i = 0; i < index-1; i++) {
		aux = aux->next;
	}

	struct node<T> * aux2 = aux->next;

	aux->next = aux2->next;

	delete aux2;	

	length--;
}