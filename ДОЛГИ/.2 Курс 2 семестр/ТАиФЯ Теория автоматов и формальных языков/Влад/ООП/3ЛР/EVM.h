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
	int getCount();
	friend class StatickVector;
	bool operator == (const EVM& others);
	void operator = (const EVM& others);
	EVM operator + (const EVM& others);
	EVM& operator ++(int val);
	EVM& operator ++();
};

int EVM::count = 0;
EVM::EVM() {
	count++;
}
EVM::EVM(string nameOfCorpus, int jadra, double chast) {
	count++;
	this->nameOfCorpus = new string(nameOfCorpus);
	this->jadra = jadra;
	this->chast = chast;
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
	cout << "////////////////////////////////////////////////////////////////////////////" << endl;
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
	cout << "////////////////////////////////////////////////////////////////////////////" << endl;
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
int EVM::getCount(){
	return count;
}
bool EVM::operator == (const EVM& others) {
	if ((this->chast == others.chast) && (this->jadra == others.jadra) && (*this->nameOfCorpus == *others.nameOfCorpus)) {
		return true;
	}
	else {
		return false;
	}
}
void EVM::operator = (const EVM& others) {
	this->chast = others.chast;
	this->jadra = others.jadra;
	this->nameOfCorpus = others.nameOfCorpus;
}
EVM EVM::operator + (const EVM& others) {
	this->chast = this->chast + others.chast;
	this->jadra = this->jadra + others.jadra;
	return *this;
}
EVM& EVM::operator ++(int val) {
	jadra++;
	chast++;
	return *this;
}
EVM& EVM::operator ++() {
	++jadra;
	++chast;
	return *this;
}
EVM::~EVM() {
}