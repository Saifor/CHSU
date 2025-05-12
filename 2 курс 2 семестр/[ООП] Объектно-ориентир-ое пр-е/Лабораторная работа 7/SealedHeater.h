#pragma once
#include "Heater.h"

using namespace std;
class SealedHeater : public Heater
{
public:
	SealedHeater(const char* name, Color clr, int price, double power, double temperature):Heater(name, clr, price, power)
	{
		setName(name);
		setPrice(price);
		setPower(power);
		setColor(clr);
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

