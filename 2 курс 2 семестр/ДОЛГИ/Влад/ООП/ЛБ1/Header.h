#pragma once
#include <iostream>
#include <string>

using namespace std;

	enum Power
	{
		slabost,
		Mosh,
		Sred
	};
class EVM {
	static int count;
	Power Powerful;
	string* nameOfCorpus;
	int jadra;
	double chast;
	void GetPower(Power power);
	int id;
public:
	EVM();
	EVM(string nameOfCorpus, int jadra, double chast);
	~EVM();
	void SetNameOfCorpus(string nameOfCorpus);
	string GetNameOfCorpus();
	void SetJadra(int jadra);
	int GetJadra();
	void SetChast(double chast);
	double GetChast();
	void print();
};

int EVM::count = 0;
EVM::EVM() {
	count++;
	id = count;
}
EVM::EVM(string nameOfCorpus, int jadra, double chast) {
	count++;
	this->nameOfCorpus = new string(nameOfCorpus);
	this->jadra = jadra;
	this->chast = chast;
	id = count;
}
void EVM::SetNameOfCorpus(string nameOfCorpus) {
	this->nameOfCorpus = new string(nameOfCorpus);
}
string EVM::GetNameOfCorpus() {
	return *nameOfCorpus;
}
void EVM::SetJadra(int jadra) {
	this->jadra = jadra;
}
int EVM::GetJadra() {
	return jadra;
}
void EVM::SetChast(double chast) {
	this->chast = chast;
}
double EVM::GetChast() {
	return chast;
}
void EVM::print() {
	cout << "№" << id << endl;
	if (chast >= 8.0) {
		Powerful = Power::Mosh;
	}
	else if (chast >= 5.0) {
		Powerful = Power::Sred;
	}
	else Powerful = Power::slabost;
	GetPower(Powerful);
	cout << *nameOfCorpus << endl;
	cout << jadra << endl;
	cout << chast << endl;
}
void EVM::GetPower(Power power) {
	switch (power)
	{
	case slabost:
		cout << "Слабый" << endl;
		break;
	case Mosh:
		cout << "Мощный" << endl;
		break;
	case Sred:
		cout << "Средний" << endl;
		break;
	default:
		break;
	}
}
EVM::~EVM() {
	cout << "Дис" << endl;
	delete nameOfCorpus;
}
