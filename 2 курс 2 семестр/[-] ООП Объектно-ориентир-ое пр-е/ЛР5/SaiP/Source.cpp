#pragma once
#include <iostream>
#include <string>
#include "Monitors.h"
#include "Stack.h"
#include "TemlatedStack.h"

using namespace std;

int main() {

	Monitors ob1("2c", Model::Philips, "TN", "16:9", 32, 1);
	Monitors ob2("sad", Model::AMD, "IPS", "16:9", 24, 0);
	Monitors ob3("1d", Model::AMD, "IPS", "16:9", 23, 0);
	Monitors ob4("2c", Model::Philips, "TN", "16:9", 26, 1);
	Monitors ob5("2c", Model::Philips, "TN", "16:9", 30, 1);
	Monitors ob6("2c", Model::Philips, "TN", "16:9", 14, 1);
	
	Stack stack;
	stack.push(&ob1);
	stack.push(&ob2);
	stack.push(&ob3);
	stack.push(&ob4);
	stack.push(&ob5);
	stack.push(&ob6);

	stack.find(32);
	stack.sortByDiagonal();

	stack.print();

	cout << "\n\n";

	TemplatedStack<Monitors> tstack;
	tstack.push(&ob1);
	tstack.push(&ob2);
	tstack.push(&ob3);
	tstack.push(&ob4);
	tstack.push(&ob5);
	tstack.push(&ob6);

	tstack.find(32);
	tstack.sortByDiagonal();

	tstack.print();

	cout << "\n\n";

	int k = ob1.get_diagonal();

	TemplatedStack<int> istack;
	istack.push(&k);
	k = ob2.get_diagonal();
	istack.push(&k);
	k = ob3.get_diagonal();
	istack.push(&k);
	k = ob4.get_diagonal();
	istack.push(&k);
	k = ob5.get_diagonal();
	istack.push(&k);
	k = ob6.get_diagonal();
	istack.push(&k);

	istack.find(32);
	cout << "\n";
	istack.sortByDiagonal();
	cout << "\n";
	istack.print();

	system("pause");
	return 0;
}