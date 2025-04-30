#pragma once
#include "Laptop.h"
#include "Personal.h"
#include "Server.h"
#include "Smaphone.h"
using namespace std;
template <typename T>
class Stack {
	struct Node
	{
		T data;
		Node* next;
		Node* prev;
	};
	int size;
	Node* first;
	Node* last;
	int count;
public:
	Stack(int size);
	void push_back(T& val);
	void at(int index);
	void pop_back();
	void find(double ch);
};
template<typename T>
Stack<T>::Stack(int size) {
	this->size = size;
	if (size == 0) {
		first = NULL;
		last = NULL;
	}
	else {
		first = new Node;
		last = first;
		last->next = NULL;
		for (int i = 1; i < size; i++) {
			last->prev = last;
			last->next = new Node;
			last = last->next;
			last->next = NULL;
		}
		last = NULL;
	}
	count = 0;
}
template<typename T>
void Stack<T>::push_back(T& val) {
	if (count < size) {
		count++;
	}
	else {
		cout << "stack overflow" << endl;
		return;
	}
	if (last == NULL) {
		last = first;
		last->prev = NULL;
	}
	else {
		last->prev = last;
		last = last->next;
	}
	last->data = val;
}
template<typename T>
void Stack<T>::at(int index) {
	if (index >= count) {
		cout << "Index out of range" << endl;
		return;
	}
	Node* tmp = first;
	for (int i = 0; i < index; i++) {
		tmp = tmp->next;
	}
	tmp->data.print();
}
template<typename T>
void Stack<T>::pop_back() {
	if (count > 0) {
		count--;
	}
	if (!last) {
		cout << "âñ¸" << endl;
		return;
	}
	last = last->prev;
	if (last) {
		last->next = nullptr;
	}
	else {
		first = nullptr;
	}
}
template<typename T>
void Stack<T>::find(double ch) {
	Node* tmp = first;
	for (int i = 0; i < count; i++) {
		if (tmp->data.GetChast() == ch) {
			tmp->data.print();
		}
		tmp = tmp->next;
	}
}