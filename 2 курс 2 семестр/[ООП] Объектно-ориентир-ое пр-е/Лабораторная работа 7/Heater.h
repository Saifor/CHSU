#pragma once
#include "string"
#include "iostream"
#include "Color.h"
using namespace std;


class Heater : public IHeater {
private:
	static int count;
	char* name = 0;
	Color clr;
	int price;
	double power;
protected:
	void print_header() const;
	void print_info() const = 0;
public:
	Heater(const char* name, Color clr, int price, double power);
	Heater(const Heater& name);
	~Heater();

	void setName(const char* name);
	string getName() const;

	void setColor(Color clr);
	string getColor() const;

	void setPrice(int rice);
	int getPrice() const;

	void setPower(double power);
	double getPower() const;

	void print() const;

	// перегрузка операторов
	bool operator == (int N);
	bool operator < (const Heater& obj);
	bool operator > (const Heater& obj);
	friend std::ostream& operator<< (std::ostream& cout, const Heater& obj);
};