#include "Heater.h"

Heater::Heater(const char* name, Color cl, int price, double power)
{
	setname(name);
	setcolor(cl);
	setprice(price);
	setpower(power);
	count++;
}

Heater::Heater(const Heater& name)
	:Heater(name.name, name.cl, name.price, name.power)
{}
Heater::~Heater()
{
	count--;
	delete[] name;
}

void Heater::setname(const char* newname)
{
	delete[]name;
	name = new char[strlen(newname) + 1];
	strcpy_s(name, strlen(newname) + 1, newname);
}

string Heater::getname() const
{
	return name;
}

void Heater::setcolor(Color color)
{
	cl = color;
}

string Heater::getcolor() const
{
	switch (cl) {
	case Color::red: return "red"; break;
	case Color::green: return "green"; break;
	case Color::blue: return "blue"; break;
	case Color::white: return "white"; break;
	}
}

void Heater::setprice(int newprice)
{
	price = newprice;
}

int Heater::getprice() const
{
	return price;
}

void Heater::setpower(double p)
{
	power = p;
}

double Heater::getpower() const
{
	return power;
}

void Heater::print() const
{
	print_header();
	cout << "Name: " << getname() << endl;
	cout << "Color: " << getcolor() << endl;
	cout << "Price: " << getprice() << endl;
	cout << "Power: " << getpower() << endl;
//	cout << "Total: " << count << endl;
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
	return price < obj.getprice();
}

bool Heater::operator>(const Heater& obj)
{
	return price > obj.getprice();
}

std::ostream& operator<<(std::ostream& cout, const Heater& obj)
{
	obj.getprice();
	return cout;
}
int Heater::count = 0;
