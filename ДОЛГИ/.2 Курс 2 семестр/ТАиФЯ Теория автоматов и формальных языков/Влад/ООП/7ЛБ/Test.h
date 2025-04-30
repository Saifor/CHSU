#pragma once
#include "IGetSet.h"
#include "IPrint.h"

class test : public IGetSet, public IPrint {
	int item1;
	string* item2;
public:
	test();
	test(int Item1, string Item2);
	void SetItem1(int Item1) override;
	int GetItem1() override;
	void SetItem2(string Item2) override;
	string GetItem2() override;
	void print() override;
	~test();
};
test::test(){}
test::test(int Item1, string Item2) {
	item1 = Item1;
	item2 = new string(Item2);
}
int test::GetItem1() {
	return item1;
}
void test::SetItem1(int Item1) {
	item1 = Item1;
}
void test::SetItem2(string Item2) {
	item2 = new string(Item2);
}
string test::GetItem2() {
	return *item2;
}
void test::print() {
	cout << "Item1: " << item1 << endl;
	cout << "Item2: " << *item2 << endl;
}
test::~test() {
	delete item2;
}