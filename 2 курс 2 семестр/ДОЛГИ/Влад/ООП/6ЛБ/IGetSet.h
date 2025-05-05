#pragma once
#include <iostream>
#include <string>
using namespace std;

class IGetSet {
protected:
	virtual void SetItem1(int Item1) = 0;
	virtual int GetItem1() = 0;
	virtual void SetItem2(string Item2) = 0;
	virtual string GetItem2() = 0;
};