#include "Header.h"

void main() {
	setlocale(LC_ALL, "rus");
	EVM a("ds", 21, 8.1);
	a.print();
	EVM b;
	b.SetNameOfCorpus("ar");
	b.SetChast(1.1);
	b.SetJadra(2);
	b.print();
}