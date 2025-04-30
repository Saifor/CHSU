#pragma once
#include "IEVM.h"
class Server: public IEVM {
	static int count;
	string* nameOfCompany;
	int jadra;
	double chast;
	int MaxUser;
public:
	Server();
	Server(string NameOfCompany, int jadra, double chast, int MaxUser);
	void SetNameOfCorpus(string nameOfCompany) override;
	string GetNameOfCorpus() override;
	void SetJadra(int jadra) override;
	int GetJadra() override;
	void SetChast(double chast) override;
	double GetChast() override;
	void SetUser(int MaxUser);
	int GetUser();
	void print() override;
	~Server();
};
int Server::count = 0;
Server::Server() {
	count++;
}
Server::Server(string NameOfCompany, int jadra, double chast, int MaxUser) {
	count++;
	this->nameOfCompany = new string(NameOfCompany);
	this->jadra = jadra;
	this->chast = chast;
	this->MaxUser = MaxUser;
}
void Server::SetJadra(int jadra) {
	this->jadra = jadra;
}
int Server::GetJadra() {
	return jadra;
}
void Server::SetNameOfCorpus(string nameOfCompany) {
	this->nameOfCompany = new string(nameOfCompany);
}
string Server::GetNameOfCorpus() {
	return *nameOfCompany;
}
void Server::SetChast(double chast) {
	this->chast = chast;
}
double Server::GetChast() {
	return chast;
}
void Server::SetUser(int MaxUser) {
	this->MaxUser = MaxUser;
}
int Server::GetUser() {
	return MaxUser;
}
void Server::print() {
	cout << "Server:" << endl;
	cout << "Название компании: " << *nameOfCompany << endl;
	cout << "Кол-во ядер: " << jadra << endl;
	cout << "Частота: " << chast << endl;
	cout << "Максимальное кол-во пользователей: " << MaxUser << endl;
}
Server::~Server() {
	delete nameOfCompany;
}