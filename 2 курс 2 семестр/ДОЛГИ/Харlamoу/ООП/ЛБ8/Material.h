#pragma once
#include <string>
#include <iostream>

using namespace std;
class Material {
private:
	string material;
	int durability;
public:
	Material(string material = "steel", int durability = 20);
	Material(const Material& other);
	~Material();

	void setmat(string mat);
	void setdur(int dur);
	string getmat() const;
	int getdur() const;

	virtual void print_info() const;
};

