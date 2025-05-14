#pragma once
#include "Monitors.h"

class Stack {
	struct Node {
		Monitors* Data;
		Node* Next;

		Node(Monitors* data) {
			Data = data;
			Next = NULL;
		}
	};
private:
	Node* top = NULL;
public:
	~Stack();

	void push(Monitors* monitor);
	Monitors* pop();

	void print() const;
	void find(int diagonal) const;
	void sortByDiagonal();
};