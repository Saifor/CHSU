#include "Header.h"

void main() {
	setlocale(LC_ALL, "rus");
	EVM a("ds", 21, 8.1);
	EVM b("ds1", 211, 8.2);
	a.print();
	a = b;
	a.print();
}