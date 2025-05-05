#pragma once
#include "EVM.h"
#include <iostream>
using namespace std;
class Stack {
private:
	struct Node
	{
		EVM data;
		Node* next;
		Node* prev;
	};
	int size;
	Node* first;
	Node* last;
	int count;
public:
	Stack(int size);
	void push_back(EVM &val);
	void at(int index);
	void pop_back();
	void find(double a);
};


Stack::Stack(int size) {
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

void Stack::push_back(EVM &val) {
	if (count < size) {
		count++;
	}
	else { 
		cout << "Vector overflow" << endl;
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

void Stack::at(int index) {
	if (index >= count) {
		cout << "Index out of range" << endl;
		return;
	}
	Node *tmp = first;
	for (int i = 0; i < index; i++) {
		tmp = tmp->next;
	}
	tmp->data.print();
}
void Stack::pop_back() {
	if(count > 0){
		count--;
	}
	if (!last) {
		cout << "âñ¸" << endl;
		return;
	}
	Node* tmp = last;
	last = last->prev;
	if (last) {
		last->next = nullptr;
	}
	else {
		first = nullptr;
	}
 }
void Stack::find(double ch) {
	Node* tmp = first;
	for (int i = 0; i < count; i++) {
		if (tmp->data.GetChast() == ch) {
			tmp->data.print();
		}
		tmp = tmp->next;
	}
	delete tmp;
}