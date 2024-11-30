#include <iostream>
#include <string>
#include "Appliances.h"
using namespace std;


void main() {

	Appliances *array[7];

	Appliances object1("Microwave", Firm::Dexp, "X", 9900);
	array[0] = &object1;

	Appliances object2("name", Firm::Undefined, "none", 0);
	object2.set_name("Iron");
	object2.set_firm(Firm::Huanan);
	object2.set_series("Huanangy");
	object2.set_price(1200);
	array[1] = &object2;

	Appliances object3(object2);
	object3.set_firm(Firm::Samsung);
	object3.set_series("Galaxy GL6116");
	array[2] = &object3;

	Appliances object4("Car", Firm::Lada, "Niva Legend Bronto", 1303900);
	array[3] = &object4;

	Appliances object5("Smartphone", Firm::Realme, "Realme GT2 Master Exploration Edition", 100000);
	array[4] = &object5;

	Appliances object6("Smartphone", Firm::Samsung, "Samsung Galaxy A54 5G", 32000);
	array[5] = &object6;

	Appliances object7("Washer", Firm::Dexp, "WD-F10715DMA", 60000);
	array[6] = &object7;

	cout << "Samsung products" << endl << endl;
	for (int i = 0; i < 7; i++) {
		array[i]->get_firm() == Firm::Samsung ? array[i]->print() : "";
	}

	cout << "Price > 70000" << endl << endl;
	for (int i = 0; i < 7; i++) {
		array[i]->get_price() > 70000 ? array[i]->print() : "";
	}

	cout << "Smartphones" << endl << endl;
	for (int i = 0; i < 7; i++) {
		string s(array[i]->get_name());
		s == "Smartphone" ? array[i]->print() : "";
	}

	system("pause");
}