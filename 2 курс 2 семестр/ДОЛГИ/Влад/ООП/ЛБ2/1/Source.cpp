#include "EVM.h"
#include "Vector.h"
void main() {
	setlocale(LC_ALL, "rus");
	EVM a("ds", 21, 8.1);
	EVM b("ds1", 21, 8.2);
	EVM c("ds2", 21, 8.3);
	EVM d("ds3", 21, 8.4);
	EVM e("ds4", 21, 8.5);
	Vector v(10);
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);
	v.push_back(e);
	v.at(0);
	v.at(2);
	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.at(3);
	v.find(8.1);
}