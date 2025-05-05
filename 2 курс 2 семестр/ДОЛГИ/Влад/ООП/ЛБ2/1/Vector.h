#pragma once
class Vector {
	struct Node
	{
		EVM data;
		Node *next, *prev;
	};
	Node* first, * last;
	int count;
	int size;
public:
	Vector(int size);
	void push_back(EVM val);
	void at(int i);
	void pop_back();
	void find(double a);
};
Vector::Vector(int size) {
	this->size = size;
	if (size == 0) {
		first = NULL;
		last == NULL;
	}
	else {
		first = new Node;
		last = first;
		last->next = NULL;
		for (int i = 0; i < size; i++) {
			last->prev = last;
			last->next = new Node;
			last = last->next;
			last->next = NULL;
		}
		last = NULL;
	}
	count = 0;
}
void Vector::push_back(EVM val) {
	if (count < size) {
		count++;
	}
	else { 
		cout << "Vector ovwerflow" << endl; 
		return;
	}
	if (last == NULL) {
		last = first;
	}
	else {
		last->prev = last;
		last = last->next;
	}
	last->data = val;
}

void Vector::at(int i) {
	if (i >= count) {
		cout << "Vector âñ¸" << endl;
		return;
	}
	Node* tmp = first;
	for (int i = 0; i < i; i++) {
		tmp = tmp->next;
	}
	tmp->data.print();
	delete tmp;
}
void Vector::pop_back() {
	if (count != 0) {
		count--;
	}
	else {
		return;
	}
	last = last->prev;
	if (last != NULL) {
		last->next = NULL;
	}
	else {
		first = NULL;
	}
}

void Vector::find(double chast) {
	Node* tmp = first;
	while (tmp->next != NULL) {
		if (tmp->data.GetChast() == chast) {
			tmp->data.print();
		}
		tmp = tmp->next;
	}
	delete tmp;
}