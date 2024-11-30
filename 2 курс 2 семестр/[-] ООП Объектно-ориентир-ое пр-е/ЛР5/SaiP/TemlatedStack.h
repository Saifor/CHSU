#pragma once
#include <iostream>

template <class T>
class TemplatedStack {
	struct Node {
		T* Data;
		Node* Next;

		Node(T* data) {
			Data = data;
			Next = NULL;
		}
	};
private:
	Node* top = NULL;
public:
	~TemplatedStack() {
		Node* tmp = top;
		while (top) {
			tmp = top;
			top = top->Next;
			delete tmp;
		}
	}

	void push(T* monitor);
	T* pop();

	void print() const;
	void find(int diagonal) const;
	void sortByDiagonal();
};

template <class T>
void TemplatedStack<T>::push(T * monitor)
{
	Node* tmp = new Node(monitor);

	if (top) {
		tmp->Next = top;
	}
	top = tmp;
}

template <class T>
T * TemplatedStack<T>::pop()
{
	if (!top)
		return NULL;
	Node* tmp = top;
	top = top->Next;
	T* monitor = top->Data;
	delete tmp;
	return monitor;
}

template <class T>
void TemplatedStack<T>::print() const
{
	for (Node* tmp = top; tmp; tmp = tmp->Next)
	{
		//tmp->Data->print();
		cout << *tmp->Data << " ";
	}
}

template <class T>
void TemplatedStack<T>::find(int diagonal) const
{
	for (Node* tmp = top; tmp; tmp = tmp->Next)
	{
		if (*tmp->Data == diagonal)
			cout << *tmp->Data;
	}
}

template <class T>
void TemplatedStack<T>::sortByDiagonal()
{
	for (Node* tmp1 = top; tmp1; tmp1 = tmp1->Next)
	{
		for (Node* tmp2 = top; tmp2; tmp2 = tmp2->Next) {
			if (*tmp1->Data < *tmp2->Data)
				swap(tmp1->Data, tmp2->Data);
		}
	}
}
