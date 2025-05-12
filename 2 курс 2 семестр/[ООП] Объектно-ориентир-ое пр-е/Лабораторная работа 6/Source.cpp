#pragma once
#include "Statistics.h"
#include "SpiralHeater.h"
#include "UnsealedHeater.h"
#include "SealedHeater.h"

int main()
{
	TemplateLister<IHeater> ll;
	Statistics d;

	SpiralHeater bat("Home", Color::red, 65, 3256.356, 128.2, 1);
	SealedHeater Pic("heater", Color::green, 30, 19.36, 26.5);
	UnsealedHeater Opa("teapot", Color::blue, 70, 3.96, 200);
	ll.add(&bat);
	ll.add(&Pic);
	ll.add(&Opa);
	ll.printList();

	system("pause");
	return 0;
}

