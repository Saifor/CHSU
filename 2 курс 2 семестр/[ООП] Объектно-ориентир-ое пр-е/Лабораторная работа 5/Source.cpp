#pragma once
#include "Statistics.h"

int main()
{
	Heater Batt("battery", Color::red, 50, 126.0);
	Heater Pic("heater", Color::green, 30, 19.36);
	Heater Opa("teapot", Color::blue, 70, 3.96);
	Heater Dis("fan", Color::white, 90, 1.8);

	TemplateLister<Heater> st1;
	st1.add(&Batt);
	st1.add(&Pic);
	st1.add(&Opa);
	st1.add(&Dis);
	
	Statistics d;
	d.add(&Batt);
	d.add(&st1);
	d.add(&st1);
	d.add(&st1);
	d.ch_add(&st1);
	d.print();

	system("pause");
	return 0;
}

