#include <iostream>
#include <string>
#include "Monitors.h"

using namespace std;

int main() {
	Monitors ob2("sad", Model::AMD, "IPS", "16:9", 24, 0);
	ob2.print();

	ob2.set_model(Model::Philips);
	ob2.set_matrix("VA");
	ob2.set_permission("4:3");
	ob2.set_diagonal(18);
	ob2.print();

	for (size_t i = 0; i < 100000000; i++)
	{
		Monitors ob6("sad", Model::AMD, "IPS", "16:9", 24, 0);
	}

	system("pause");
	return 0;
}