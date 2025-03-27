#pragma once
#include "UnsealedHeater.h"

using namespace std;
class SpiralHeater : public UnsealedHeater
{
public:
	SpiralHeater(const char* name, Color cl, int price, double power, float lenght, bool el, string material, int durability) :UnsealedHeater(name, cl, price, power, lenght, material, durability)
	{
		setname(name);
		setprice(price);
		setpower(power);
		setcolor(cl);
		Material::setdur(durability);
		Material::setmat(material);
		UnsealedHeater::setlenght(lenght);
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

