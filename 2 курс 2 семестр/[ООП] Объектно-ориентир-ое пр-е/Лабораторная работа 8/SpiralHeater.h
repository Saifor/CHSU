#pragma once
#include "UnsealedHeater.h"

using namespace std;
class SpiralHeater : public UnsealedHeater
{
public:
	SpiralHeater(const char* name, Color clr, int price, double power, float lenght, bool el, string material, int durability) :UnsealedHeater(name, clr, price, power, lenght, material, durability)
	{
		setName(name);
		setPrice(price);
		setPower(power);
		setColor(clr);
		Material::setDurability(durability);
		Material::setMaterial(material);
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
};

