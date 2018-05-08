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
	newNode->next = head->next;
	head->next = newNode;

	if(IsEmpty())
		tail->next = newNode;

	length++;
}

template <typename T>
void LinkedList<T>::PushBack(T content) {
	struct node<T> * newNode = new struct node<T>;
	newNode->content = content;
	newNode->next = nullptr;

	if(!IsEmpty())
		tail->next->next = newNode;
	
	tail->next = newNode;

	if(IsEmpty())
		head->next = newNode;

	length++;
}

template <typename T>
void LinkedList<T>::Print() {
	struct node<T> * aux = head->next;

	while(aux != nullptr) {
		std::cout << aux->content << " ";
		aux = aux->next;
	}

	std::cout << std::endl;
}