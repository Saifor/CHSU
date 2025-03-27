#pragma once
#include "Heater.h"
#include "Material.h"

class UnsealedHeater : 
	public Heater, public Material
{
public:
	UnsealedHeater(const char* name, Color cl, int price, double power, float lenght, string material, int durability) :Heater(name, cl, price, power), Material(material, durability)
	{
		setname(name);
		setprice(price);
		setpower(power);
		setcolor(cl);
		Material::setdur(durability);
		Material::setmat(material);
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
public:

};

