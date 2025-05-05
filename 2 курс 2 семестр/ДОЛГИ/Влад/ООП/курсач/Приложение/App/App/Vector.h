#pragma once
#include "Laptop.h"
#include "Personal.h"
#include "Server.h"
#include "Smartphone.h"
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
	try
	{
		if (size < 0) {
			throw invalid_argument("Stack size cannot be negative");
		}
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
	catch (const std::exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
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
	try
	{
		if (index >= count || index < 0 || count < index) {
			throw invalid_argument("Index out of range");
			/*cout << "Index out of range" << endl;
			return;*/
		}
	}
	catch (const std::exception& e)
	{
		cout << "Error: " << e.what() << endl;
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
	try
	{
		if (!last) {
			throw invalid_argument("Больше нечего удалять");
			/*cout << "всё" << endl;
			return;*/
		}
	}
	catch (const std::exception& d)
	{
		cout << "Error: " << d.what() << endl;
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