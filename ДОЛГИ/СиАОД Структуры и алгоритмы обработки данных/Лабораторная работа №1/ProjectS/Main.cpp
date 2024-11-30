#include <iostream>
#include <time.h>
using namespace std;

// Описание стека

struct Stack1 {
	int top;
	int* data;
	int stackStart;
};

void InitStack(Stack1& st) {
	st.data = new int[100];
	st.top = -1;
	st.stackStart = st.top;
}

void push(Stack1& st, int value) {
	st.data[++st.top] = value;
	st.stackStart = st.top;
}

int print(Stack1& st) {
	return st.data[st.top--];
}

void nullStack(Stack1& st) {
	st.top = -1;
	st.stackStart = st.top;
}

bool empty(Stack1& st) {
	return st.top == -1;
}

void backToTheRoots(Stack1& st) {
	st.top = st.stackStart;
}


// Описание очереди массивом
struct Queue1 {
	int head, tail, size;
	int* data;
	int queueStart;
};

void nullQueue(Queue1 &q) {
	q.head = 0;
	q.queueStart = q.head;
	q.tail = q.size - 1;
}

void InitQueue(Queue1 &q, int capacity) {
	q.size = capacity + 1;
	q.data = new int[q.size];
	nullQueue(q);
}

int next(Queue1& q, int n) {
	return (n + 1) % q.size;
}

bool empty(Queue1 &q) {
	return next(q, q.tail) == q.head;
}

void add(Queue1& q, int value) {
	if (next(q, next(q, q.tail)) == q.head)
		cout << "Queue overflow" << endl;
	else {
		q.tail = next(q, q.tail);
		q.data[q.tail] = value;
	}
}

int print(Queue1& q) {
	if (empty(q)) {
		cout << "Queue is empty" << endl;
		return 0;
	}
	else {
		int d = q.data[q.head];
		q.head = next(q, q.head);
		return d;
	}
}

void backToTheHead(Queue1& q) {
	q.head = q.queueStart;
}



void main() {
	srand(time(0));

	// Создание очереди 1
	Queue1 q1;
	int k = rand() % 50 + 1;
	InitQueue(q1, k);
	for (int i = 0; i < k; i++) {
		int n = rand() % 100;
		add(q1, n);
	}

	// Создание очереди 2
	Queue1 q2;
	k = rand() % 50 + 1;
	InitQueue(q2, k);
	for (int i = 0; i < k; i++) {
		int n = rand() % 30;
		add(q2, n);
	}

	// Чтение очереди 1
	cout << "Queue #1:" << endl;
	while (!empty(q1)) {
		int x;
		x = print(q1);
		cout << x << " ";
	}
	backToTheHead(q1);
	cout << endl;

	cout << "Queue #2:" << endl;
	// Чтение очереди 2
	while (!empty(q2)) {
		int x;
		x = print(q2);
		cout << x << " ";
	}
	backToTheHead(q2);
	cout << endl;
	
	// Максимум Queue2
	int maxQ = 0;
	while (!empty(q2)) {
		int x;
		x = print(q2);
		if (x > maxQ)
			maxQ = x;
	}
	backToTheHead(q2);
	cout << "\nMaximum of Queue2: " << maxQ << endl;


	//Создание стека
	Stack1 st;
	InitStack(st);
	while (!empty(q1)) {
		int x;
		x = print(q1);
		if (x % maxQ == 0)
			push(st, x);
	}
	backToTheHead(q1);
	cout << endl;

	// Чтение стека
	cout << "Stack values: " << endl;
	while (!empty(st)) {
		int x;
		x = print(st);
		cout << x << " ";
	}
	backToTheRoots(st);
	cout << endl << endl;

	system("pause");
}
