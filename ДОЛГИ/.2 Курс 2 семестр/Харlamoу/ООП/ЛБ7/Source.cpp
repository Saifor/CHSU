#pragma once
#include "Statistics.h"
#include "SpiralHeater.h"
#include "UnsealedHeater.h"
#include "SealedHeater.h"

int main()
{
	TemplateLister<IHeater> st1;
	Statistics d;

	SpiralHeater bat( "Home", Color::red, 65, 3256.356, 128.2, 1, "steel", 60);
	SealedHeater Pic("heater", Color::green, 30, 19.36, 26.5);
	UnsealedHeater Opa("teapot", Color::blue, 70, 3.96, 200, "titan", 20);
	st1.ad(&bat);
	st1.ad(&Pic);
	st1.ad(&Opa);
	st1.printList();

	system("pause");
	return 0;
}

