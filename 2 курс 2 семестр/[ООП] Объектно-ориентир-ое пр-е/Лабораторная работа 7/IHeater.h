#pragma once
#include <string>
using namespace std;
class IHeater{
protected:
	virtual void print_header() const = 0;
	virtual void print_info() const = 0;
public:
	virtual void setName(const char* name) = 0;
	virtual void setPrice(int price) = 0;
	virtual void setPower(double power) = 0;
	virtual string getName() const = 0;
	virtual int getPrice() const = 0;
	virtual string getColor() const = 0;
	virtual double getPower() const = 0;
	virtual void print() const = 0;
};