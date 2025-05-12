#pragma once
#include "Heater.h"

class UnsealedHeater : public Heater
{
public:
	UnsealedHeater(const char* name, Color clr, int price, double power, float lenght) :Heater(name, clr, price, power)
	{
		setName(name);
		setPrice(price);
		setPower(power);
		setColor(clr);
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
		cout << "Heater lenght: " << getlenght() << endl;
	}

private:
	float lenght;
public:

};

