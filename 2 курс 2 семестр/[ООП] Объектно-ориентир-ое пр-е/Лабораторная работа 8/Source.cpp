#pragma once
#include "Statistics.h"
#include "SpiralHeater.h"
#include "UnsealedHeater.h"
#include "SealedHeater.h"

int main()
{
	TemplateLister<IHeater> st1;
	Statistics d;
	SpiralHeater bat("123", Color::red, 100, 3256.35, 128.2, 1, "steel", 60);
	SealedHeater Pic("heater", Color::green, 30, 19.36, 26.5);
	UnsealedHeater Opa("teapot", Color::blue, 70, 3.96, 200, "titan", 20);
	
	try {
		bat.setName("");
	}
	catch (exception& ex) {
		cout << ex.what();
	}

	try {
		Pic.setPower(-2000);
	}
	catch (out_of_range& ex) {
		cout << ex.what();
	}

	try {
		Pic.setPrice(-2000);
	}
	catch (out_of_range& ex) {
		cout << ex.what();
	}
	catch (exception& ex) {
		cout << ex.what();
	}

	try {
		st1.printList();
	}
	catch (exception& ex) {
		cout << ex.what();
	}
	catch (...) {
		cout << "Unknow error";
	}

	st1.add(&bat);
	st1.add(&Pic);
	st1.add(&Opa);
	//	st1.printList();


	system("pause");
	return 0;
}

