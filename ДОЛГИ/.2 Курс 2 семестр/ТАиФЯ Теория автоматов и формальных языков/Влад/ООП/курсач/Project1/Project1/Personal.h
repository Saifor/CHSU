#pragma once
#include "IEVM.h"
using namespace std;
enum screenName {
	asus,
	lenovo,
	samsung,
	xiaomi
};
const string NameOfScreen[] = {
		"asus",
	"lenovo",
	"samsung",
	"xiaomi"
};
class Personal : public IEVM {
	screenName screen;
	static int count;
	string* nameOfCompany;
	int jadra;
	double chast;
public:
	Personal();
	Personal(string NameOfCompany, int jadra, double chast, int screen);
	void SetNameOfCorpus(string nameOfCompany) override;
	string GetNameOfCorpus() override;
	void SetJadra(int jadra) override;
	int GetJadra() override;
	void SetChast(double chast) override;
	double GetChast() override;
	void SetScreen(int screen);
	screenName GetScreen();
	void print() override;
	~Personal();
};
int Personal::count = 0;
Personal::Personal() {
	count++;
}
Personal::Personal(string NameOfCompany, int jadra, double chast, int screen) {
	count++;
	this->nameOfCompany = new string(NameOfCompany);
	this->jadra = jadra;
	this->chast = chast;
	switch (screen)
	{
	case 1:
		this->screen = screenName::asus;
		break;
	case 2:
		this->screen = screenName::lenovo;
		break;
	case 3:
		this->screen = screenName::samsung;
		break;
	case 4:
		this->screen = screenName::xiaomi;
		break;
	default:
		this->screen = screenName::samsung;
		break;
	}
}
void Personal::SetJadra(int jadra) {
	this->jadra = jadra;
}
int Personal::GetJadra() {
	return jadra;
}
void Personal::SetNameOfCorpus(string nameOfCompany) {
	this->nameOfCompany = new string(nameOfCompany);
}
string Personal::GetNameOfCorpus() {
	return *nameOfCompany;
}
void Personal::SetChast(double chast) {
	this->chast = chast;
}
double Personal::GetChast() {
	return chast;
}
void Personal::SetScreen(int screen) {
	switch (screen)
	{
	case 1:
		this->screen = screenName::asus;
		break;
	case 2:
		this->screen = screenName::lenovo;
		break;
	case 3:
		this->screen = screenName::samsung;
		break;
	case 4:
		this->screen = screenName::xiaomi;
		break;
	default:
		this->screen = screenName::samsung;
		break;
	}
}
screenName Personal::GetScreen() {
	return screen;
}
void Personal::print() {
	cout << "Personal:" << endl;
	cout << "Название компании: " << *nameOfCompany << endl;
	cout << "Кол-во ядер: " << jadra << endl;
	cout << "Частота: " << chast << endl;
	cout << "Монитор: " << NameOfScreen[screen] << endl;
}
Personal::~Personal() {
	//delete nameOfCompany;
}