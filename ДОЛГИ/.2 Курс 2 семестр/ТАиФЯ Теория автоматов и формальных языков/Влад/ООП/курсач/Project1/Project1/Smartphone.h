#pragma once
#include "IEVM.h"
class Smartphone : public IEVM {
	static int count;
	string* nameOfCompany;
	int jadra;
	double chast;
	bool stelus;
public:
	Smartphone();
	Smartphone(string NameOfCompany, int jadra, double chast, bool stelus);
	void SetNameOfCorpus(string nameOfCompany) override;
	string GetNameOfCorpus() override;
	void SetJadra(int jadra) override;
	int GetJadra() override;
	void SetChast(double chast) override;
	double GetChast() override;
	void SetStelus(bool stelus);
	bool GetStelus();
	void print() override;
	~Smartphone();
};
int Smartphone::count = 0;
Smartphone::Smartphone() {
	count++;
}
Smartphone::Smartphone(string NameOfCompany, int jadra, double chast, bool stelus) {
	count++;
	this->nameOfCompany = new string(NameOfCompany);
	this->jadra = jadra;
	this->chast = chast;
	this->stelus = stelus;
}
void Smartphone::SetJadra(int jadra) {
	this->jadra = jadra;
}
int Smartphone::GetJadra() {
	return jadra;
}
void Smartphone::SetNameOfCorpus(string nameOfCompany) {
	this->nameOfCompany = new string(nameOfCompany);
}
string Smartphone::GetNameOfCorpus() {
	return *nameOfCompany;
}
void Smartphone::SetChast(double chast) {
	this->chast = chast;
}
double Smartphone::GetChast() {
	return chast;
}
void Smartphone::SetStelus(bool stelus) {
	this->stelus = stelus;
}
bool Smartphone::GetStelus() {
	return stelus;
}
void Smartphone::print() {
	cout << "Smartphone:" << endl;
	cout << "Название компании: " << *nameOfCompany << endl;
	cout << "Кол-во ядер: " << jadra << endl;
	cout << "Частота: " << chast << endl;
	cout << "Поддерживает ли телефон стилус: ";
	if (stelus) {
		cout << "Да" << endl;
	}
	else {
		cout << "Нет" << endl;
	}
}
Smartphone::~Smartphone() {
	//delete nameOfCompany;
}