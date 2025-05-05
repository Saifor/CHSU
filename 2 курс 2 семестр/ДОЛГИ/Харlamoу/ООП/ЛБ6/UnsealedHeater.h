#pragma once
#include "Heater.h"

class UnsealedHeater : public Heater
{
public:
	UnsealedHeater(const char* name, Color cl, int price, double power, float lenght) :Heater(name, cl, price, power)
	{
		setname(name);
		setprice(price);
		setpower(power);
		setcolor(cl);
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

