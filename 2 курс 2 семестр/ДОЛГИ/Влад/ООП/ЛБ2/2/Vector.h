#pragma once
#include "EVM.h"
#include <iostream>
using namespace std;
class StatickVector {

	EVM arr[99];
	static int size;
	int id;
public:
	StatickVector() {}
	void Push_back(EVM &a);
	void at(int i);
	int getSize();
	void findChast(double chast);
};
int	StatickVector::size = 0;
void StatickVector::Push_back(EVM &a) {
	arr[size].SetNameOfCorpus(a.GetNameOfCorpus());
	arr[size].SetChast(a.GetChast());
	arr[size].SetJadra(a.GetJadra());
	this->size++;
	id = size;
}
int StatickVector::getSize() {
	return size;
}
void StatickVector::at(int i) {
	cout << "////////////////////////////////////////////////////////////////////////////" << endl;
	cout << "ID:" << id << endl;
	cout << "Название корпуса:" << arr[i].GetNameOfCorpus() << endl;
	cout << "Частота:" << arr[i].GetChast() << endl;
	cout << "Ядра:" << arr[i].GetJadra() << endl;
	cout << "////////////////////////////////////////////////////////////////////////////" << endl;
}
void StatickVector::findChast(double ch) {
	int flag = 0;
	cout << "////////////////////////////////////////////////////////////////////////////" << endl;
	cout << "Поиск частоты равной " << ch << endl;
	for (int i = 0; i < size; i++) {
		if (arr[i].GetChast() == ch) {
			at(i);
			flag++;
		}
	}
	if (flag == 0) {
		cout << "таких нет" << endl;
	}
	cout << "////////////////////////////////////////////////////////////////////////////" << endl;
}