#pragma once
#include "string"
#include "iostream"
#include "Color.h"
using namespace std;


class Heater {
	static int count;
private:
	char* name = 0;
	Color cl;
	int price;
	double power;
public:
	Heater(const char* name, Color cl, int price, double power);
	Heater(const Heater& name);
	~Heater();

	void setname(const char* name);
	const char* getname() const;

	void setcolor(Color cl);
	const char* getcolor() const;

	void setprice(int rice);
	int getprice() const;

	void setpower(double power);
	double getpower() const;

	void print() const;

	//перегрузка операторов
	bool operator == (int N);
	bool operator < (const Heater& obj);
	bool operator > (const Heater& obj);
	friend std::ostream& operator<< (std::ostream& cout, const Heater& obj);
};