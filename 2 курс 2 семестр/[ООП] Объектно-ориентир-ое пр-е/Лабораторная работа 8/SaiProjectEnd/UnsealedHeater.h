#pragma once
#include "Heater.h"
#include "Material.h"

class UnsealedHeater :
	public Heater, public Material
{
public:
	UnsealedHeater(const char* name, Color clr, int price, double power, float lenght, string material, int durability) :Heater(name, clr, price, power), Material(material, durability)
	{
		setName(name);
		setPrice(price);
		setPower(power);
		setColor(clr);
		Material::setDurability(durability);
		Material::setMaterial(material);
		setlenght(lenght);
		getlenght();
	};

	void setlenght(float len)
	{
		lenght = len;
	}
	float getlenght() const
	{
		return lenght;
	}
	void print_header() const{
		cout << endl << "Unsealed Heater " << endl;
	}
	void print_info() const{
		Material::print_info();
		cout << "Heater lenght: " << getlenght() << endl;
	}

private:
	float lenght;
};

