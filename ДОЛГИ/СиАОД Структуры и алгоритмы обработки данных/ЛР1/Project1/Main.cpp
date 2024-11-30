#include <iostream>
#include <time.h>
using namespace std;

// Описание стека
struct Node {
	int data;
	Node* next;
};
void InitStack(Node*& top) {
	top = NULL;
}

void push(Node*& top, int value) {
	Node* tmp = new Node;
	tmp->next = top;
	top = tmp;
	top->data = value;
}

bool empty(Node*& top) {
	return top == NULL;
}

int del(Node*& top) {
	Node* tmp = top;
	int d = top->data;
	top = top->next;
	delete(tmp);
	return d;
}

void nullStack(Node*& top) {
	Node* tmp;
	while (!empty(top)) {
		tmp = top;
		top = top->next;
		delete(tmp);
	}
}


// Описание очереди
class Queue {
private:
	struct Node {
		int data;
		Node* next;
	};
	Node* head, * tail, * top;

public:
	Queue() {
		head = NULL;
		tail = NULL;
		top = NULL;
	}

	bool empty() {
		return head == NULL;
	}

	void add(int value) {
		if (empty()) {
			head = new Node;
			head->data = value;
			head->next = NULL;
			tail = head;
			top = head;
		}
		else {
			tail->next = new Node;
			tail = tail->next;
			tail->data = value;
			tail->next = NULL;
		}
	}

	int del() {
		if (empty()) {
			cout << "Queue is empty" << endl;
			return 0;
		}
		else {
			int d = head->data;
			Node* tmp = head;
			head = head->next;
			delete(tmp);
			return d;
		}
	}

	void nullQueue() {
		Node* tmp;
		while (!empty()) {
			tmp = head;
			head = head->next;
			delete(tmp);
		}
	}

	void printQueue() {
		if (empty()) {
			cout << "Queue is empty" << endl;
		}
		else {
			while (!empty()) {
				int d = head->data;
				head = head->next;
				cout << d << " ";
			}
			cout << endl;
		}
		head = top;
	}
};


void main() {
	srand(time(0));

	// Создание очереди 1 и 2
	Queue q1, q2;

	int k = rand() % 50 + 1;
	for (int i = 0; i < k; i++) {
		int n = rand() % 100;
		q1.add(n);
	}

	k = rand() % 50 + 1;
	for (int i = 0; i < k; i++) {
		int n = rand() % 30;
		q2.add(n);
	}

	// Вывод очередей
	cout << "Queue #1:" << endl;
	q1.printQueue();
	cout << "Queue #2:" << endl;
	q2.printQueue();

	// Максимум Queue2
	int maxQ = 0;
	while (!q2.empty()) {
		int x;
		x = q2.del();
		if (x > maxQ)
			maxQ = x;
	}

	cout << "\nMaximum of Queue2: " << maxQ << endl;


	// Создание стека из ПЕРВОЙ очереди, кратных максимуму второй очереди
	Node* stack;
	InitStack(stack);
	while (!q1.empty()) {
		int x = q1.del();
		if (x % maxQ == 0)
			push(stack, x);
	}

	cout << endl;

	// Чтение стека
	cout << "Stack values: ";

	if (!empty(stack))
		while (!empty(stack))
			cout << del(stack) << " ";
	else cout << "Stack is empty" << endl;

	cout << endl;
	system("pause");
}
