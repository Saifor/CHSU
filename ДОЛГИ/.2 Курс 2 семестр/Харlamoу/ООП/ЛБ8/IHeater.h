#pragma once
#include <string>
using namespace std;
class IHeater{
protected:
	virtual void print_header() const = 0;
	virtual void print_info() const = 0;
public:
	virtual void setname(const char* name) = 0;
	virtual void setprice(int price) = 0;
	virtual void setpower(double power) = 0;
	virtual string getname() const = 0;
	virtual int getprice() const = 0;
	virtual string getcolor() const = 0;
	virtual double getpower() const = 0;
	virtual void print() const = 0;
};