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

	void setMaterial(string material);
	void setDurability(int durability);
	string getMaterial() const;
	int getDurability() const;

	virtual void print_info() const;
};

