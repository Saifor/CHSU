#include <iostream>
#include <time.h>
#include "Stack.h"
using namespace std;

Stack::~Stack()
{
	Node* tmp = top;
	while (top) {
		tmp = top;
		top = top->Next;
		delete tmp;
	}
}

void Stack::push(Monitors * monitor)
{
	Node* tmp = new Node(monitor);

	if (top) {
		tmp->Next = top;
	}
	top = tmp;
}

Monitors * Stack::pop()
{
	if (!top)
		return NULL;
	Node* tmp = top;
	top = top->Next;
	Monitors* monitor = top->Data;
	delete tmp;
	return monitor;
}

void Stack::print() const
{
	for (Node* tmp = top; tmp; tmp = tmp->Next)
	{
		//tmp->Data->print();
		cout << *tmp->Data;
	}
}

void Stack::find(int diagonal) const
{
	for (Node* tmp = top; tmp; tmp = tmp->Next)
	{
		if (*tmp->Data == diagonal)
			cout << *tmp->Data;
	}
}

void Stack::sortByDiagonal()
{
	for (Node* tmp1 = top; tmp1; tmp1 = tmp1->Next)
	{

		for (Node* tmp2 = top; tmp2; tmp2 = tmp2->Next) {
			if (*tmp1->Data < *tmp2->Data)
				swap(tmp1->Data, tmp2->Data);

		}
		
	}
}
