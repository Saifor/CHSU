#pragma once
#include "IEVM.h"

class Laptop: public IEVM {
	static int count;
	string* nameOfCompany;
	int jadra;
	double chast;
	int weight;
public:
	Laptop();
	Laptop(string NameOfCompany, int jadra, double chast, int weight);
	void SetWeight(int weight);
	int GetWeight();
	void SetNameOfCorpus(string nameOfCompany) override;
	string GetNameOfCorpus() override;
	void SetJadra(int jadra) override;
	int GetJadra() override;
	void SetChast(double chast) override;
	double GetChast() override;
	void print() override;
	~Laptop();
};
int Laptop::count = 0;
Laptop::Laptop() {
	count++;
}
Laptop::Laptop(string NameOfCompany, int jadra, double chast, int weight) {
	count++;
	this->nameOfCompany = new string(NameOfCompany);
	this->jadra = jadra;
	this->chast = chast;
	this->weight = weight;
}
void Laptop::SetWeight(int weight) {
	this->weight = weight;
}
int Laptop::GetWeight() {
	return weight;
}
void Laptop::SetJadra(int jadra)  {
	this->jadra = jadra;
}
int Laptop::GetJadra() {
	return jadra;
}
void Laptop::SetNameOfCorpus(string nameOfCompany) {
	this->nameOfCompany = new string(nameOfCompany);
}
string Laptop::GetNameOfCorpus() {
	return *nameOfCompany;
}
void Laptop::SetChast(double chast) {
	this->chast = chast;
}
double Laptop::GetChast() {
	return chast;
}
void Laptop::print() {
	cout << "Laptop:" << endl;
	cout << "Название компании: " << *nameOfCompany << endl;
	cout << "Кол-во ядер: " << jadra << endl;
	cout << "Частота: " << chast << endl;
	cout << "Вес: " << weight << endl;
}
Laptop::~Laptop() {
	delete nameOfCompany;
}