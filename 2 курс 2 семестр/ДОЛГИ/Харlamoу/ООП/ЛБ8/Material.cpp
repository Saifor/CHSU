#include "Material.h"

Material::Material(string material, int durability)
{
	setmat(material);
	setdur(durability);
}

Material::Material(const Material& ot) : Material(ot.material, ot.durability)
{}

Material::~Material()
{
}

void Material::setmat(string mat)
{
	material = mat;
}

void Material::setdur(int dur)
{
	durability = dur;
}

string Material::getmat() const
{
	return material;
}

int Material::getdur() const
{
	return durability;
}

void Material::print_info() const
{
	cout << "This material - " << getmat() << ", has durability: " << getdur() << endl;
}
