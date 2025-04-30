#include "EVM.h"
#include "Vector.h"
void main() {
	setlocale(LC_ALL, "rus");
	EVM a("ds", 21, 8.1);
	a.print();
	EVM b;
	b.SetNameOfCorpus("ar");
	b.SetChast(1.1);
	b.SetJadra(2);
	b.print();
	StatickVector v;
	v.Push_back(a);
	v.Push_back(b);
	for (int i = 0; i < v.getSize(); i++) {
		v.at(i);
		cout << endl;
	}
	v.findChast(8.1);
}