#pragma once
#include "UnsealedHeater.h"

using namespace std;
class SpiralHeater : public UnsealedHeater
{
public:
	SpiralHeater(const char* name, Color clr, int price, double power, float lenght, bool el) :UnsealedHeater(name, clr, price, power, lenght)
	{
		setName(name);
		setPrice(price);
		setPower(power);
		setColor(clr);
		setel(elongated);
	};

	void setel(bool el)
	{
		elongated = el;
	}
	void print_header() const{
		cout << endl << "Spiral Heater " << endl;
	}
	void print_info() const {
		UnsealedHeater::print_info();
		cout << "Heater elongated: " << (elongated ? "True" : "False") << endl;

	}

private:
	bool elongated;
public:

};

