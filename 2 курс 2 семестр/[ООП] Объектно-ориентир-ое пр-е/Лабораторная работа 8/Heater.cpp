#include "Heater.h"

Heater::Heater(const char* name, Color clr, int price, double power)
{
	setName(name);
	setColor(clr);
	setPrice(price);
	setPower(power);
	count++;
}

Heater::Heater(const Heater& name)
	:Heater(name.name, name.clr, name.price, name.power)
{}
Heater::~Heater()
{
	count--;
	delete[] name;
}

void Heater::setName(const char* newname)
{
	if (strlen(newname) == 0)
		throw exception("ERROR #0!!! Enter name.\n");
	delete[]name;
	name = new char[strlen(newname) + 1];
	strcpy_s(name, strlen(newname) + 1, newname);
}

string Heater::getName() const
{
	return name;
}

void Heater::setColor(Color color)
{
	clr = color;
}

string Heater::getColor() const
{
	switch (clr) {
	case Color::red: return "red"; break;
	case Color::green: return "green"; break;
	case Color::blue: return "blue"; break;
	case Color::white: return "white"; break;
	}
}

void Heater::setPrice(int newprice)
{
	if (newprice < 0)
		throw out_of_range("ERROR #2!!! Price must be >= 0.\n");
	price = newprice;
}

int Heater::getPrice() const
{
	return price;
}

void Heater::setPower(double p)
{
	if (p < 0)
		throw out_of_range("ERROR #3!!! Power must be >= 0.\n");
	power = p;
}

double Heater::getPower() const
{
	return power;
}

void Heater::print() const
{
	print_header();
	cout << "Name: " << getName() << endl;
	cout << "Color: " << getColor() << endl;
	cout << "Price: " << getPrice() << endl;
	cout << "Power: " << getPower() << endl;
	print_info();
}

void Heater::print_header() const
{
	cout << endl << "Heater " << endl;
}

bool Heater::operator==(int N)
{
	return price == N;
}

bool Heater::operator<(const Heater& obj)
{
	return price < obj.getPrice();
}

bool Heater::operator>(const Heater& obj)
{
	return price > obj.getPrice();
}

std::ostream& operator<<(std::ostream& cout, const Heater& obj)
{
	obj.getPrice();
	return cout;
}
int Heater::count = 0;
