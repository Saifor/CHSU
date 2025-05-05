#pragma once
#include "Heater.h"

using namespace std;
class SealedHeater : public Heater
{
public:
	SealedHeater(const char* name, Color cl, int price, double power, double temperature):Heater(name, cl, price, power)
	{
		setname(name);
		setprice(price);
		setpower(power);
		setcolor(cl);
		settp(temperature);
		gettp();
	};

	void settp(double tp)
	{
		temperature = tp;
	}
	double gettp() const
	{
		return temperature;
	}
	void print_header() const{
		cout << endl << "Sealed Heater " << endl;
	}
	void print_info() const{
		cout << "Heater max temperature: " << gettp();
	}

private:
	double temperature;
public:

};

