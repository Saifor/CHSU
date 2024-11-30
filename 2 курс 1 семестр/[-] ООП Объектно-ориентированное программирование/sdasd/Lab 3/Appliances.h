#pragma once
#include <iostream>
#include <string>
using namespace std;

enum class Firm { Undefined, Samsung, Dexp, Huanan, Lada, Realme };

//Создание класса для бытовой техники
class Appliances {
public:
	Appliances(const char* name, Firm firm, string series, int price);
	Appliances(const Appliances& m);//копирующий конструктор
	~Appliances() { amount_product--; cout << "Calling the destructor" << this << endl << endl; delete[]name; }//delete для динамических

	void set_name(const char* name);
	void set_firm(Firm firm);
	void set_series(string series);
	void set_price(int price);

	char* get_name() const;
	Firm get_firm() const;
	string get_series() const;
	int get_price() const;//не меняет значения полей - const

	void print()const;//функция вывода

	//Перегрузка операторов
	Appliances &operator++() {
		test += 5;
		return *this;
	};
	Appliances &operator++(int) {
		Appliances copy{ *this };
		++(*this);
		return copy;
	};

//создание объектов класса
private:
	char* name;
	string series;
	int price;
	Firm firm;
	static int amount_product;
	int test;
};
