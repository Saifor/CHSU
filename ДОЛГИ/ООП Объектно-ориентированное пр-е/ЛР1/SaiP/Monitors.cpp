#include "Monitors.h"

int Monitors::amount = 0;

std::string Monitors::get_model_str() const
{
	if (model == Model::AMD)
		return "AMD";
	else if (model == Model::Philips)
		return "Philips";
	else if (model == Model::Samsung)
		return "Samsung";
	return std::string();
}

Monitors::Monitors(const char* code, Model model, std::string matrix, std::string permission, int diagonal, bool curved)
{
	set_code(code);
	Monitors::amount++;
	set_model(model);
	set_matrix(matrix);
	set_permission(permission);
	set_curved(curved);
}

int Monitors::get_diagonal() const
{
	return this->diagonal;
}

bool Monitors::get_curved() const
{
	return curved;
}

const char * Monitors::get_code() const
{
	return code;
}

Model Monitors::get_model() const
{
	return model;
}

std::string Monitors::get_matrix() const
{
	return matrix;
}

std::string Monitors::get_permission() const
{
	return permission;
}

void Monitors::set_code(const char * code)
{
	int x = strlen(code) + 1;
	delete[] this->code;
	this->code = new char[x];
	strcpy_s(this->code, x, code);
}

void Monitors::set_model(Model model)
{
	this->model = model;
}

void Monitors::set_matrix(std::string matrix)
{
	this->matrix = matrix;
}

void Monitors::set_permission(std::string permission)
{
	this->permission = permission;
}

void Monitors::set_curved(bool curved)
{
	this->curved = curved;
}

void Monitors::set_diagonal(int diagonal)
{
	this->diagonal = diagonal;
}

void Monitors::print() const
{
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "Amount: " << Monitors::amount << std::endl;
	std::cout << "Model: " << get_model_str() << std::endl;
	std::cout << "Matrix: " << get_matrix() << std::endl;
	std::cout << "Permission: " << get_permission() << std::endl;
	std::cout << "Curved: " << get_curved() << std::endl;
	std::cout << "---------------------------------------" << std::endl;
}

Monitors::~Monitors()
{
	delete[] this->code;
	amount--;
}



