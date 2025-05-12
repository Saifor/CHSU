#include "Material.h"

Material::Material(string material, int durability)
{
	setMaterial(material);
	setDurability(durability);
}

Material::Material(const Material& ot) : Material(ot.material, ot.durability)
{}

Material::~Material()
{
}

void Material::setMaterial(string mat)
{
	material = mat;
}

void Material::setDurability(int dur)
{
	durability = dur;
}

string Material::getMaterial() const
{
	return material;
}

int Material::getDurability() const
{
	return durability;
}

void Material::print_info() const
{
	cout << "This material - " << getMaterial() << " ,has durability: " << getDurability() << endl;
}
