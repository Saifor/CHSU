#pragma once
#include "Appliances.h"

int Appliances::amount_product = 0;

//Конструктор
Appliances::Appliances(const char* name, Firm firm, string series, int price)
	: series(series), firm(firm), price(price)
{
	set_name(name);
	++Appliances::amount_product;
	test=0;
	(++test)++;
}

//Копирующий конструктор
Appliances::Appliances(const Appliances& pt)
	: Appliances(pt.name, pt.firm, pt.series, pt.price) {}

//Сеттеры
void Appliances::set_name(const char* name)
{
	int x = strlen(name) + 1;           
	delete[] this->name;
	this->name = new char[x];
	strcpy_s(this->name, x, name);
}
void Appliances::set_firm(Firm firm) { this->firm = firm; }
void Appliances::set_series(string series) { this->series = series; }
void Appliances::set_price(int price) { this->price = price; }

//Геттеры
char* Appliances::get_name()const { return name; }
Firm Appliances::get_firm()const { return firm; }
string Appliances::get_series()const { return series; }
int Appliances::get_price()const { return price; }

//Перегрузка операторов


//Функция вывода
void Appliances::print()const {
	cout << "Total amount of product: " << Appliances::amount_product << endl;
	cout << "Product name: " << get_name();
	cout << ", series: " << get_series() << endl;
	cout << "Price: " << get_price() << endl;
	cout << "Company code: " << static_cast<int>(get_firm()) << endl << endl;
	cout << "Test: " << test << endl << endl;
}