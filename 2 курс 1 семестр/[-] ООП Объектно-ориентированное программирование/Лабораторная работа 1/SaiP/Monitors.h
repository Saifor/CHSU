#include <iostream>
#include <string>

enum class Model {
	Samsung,
	AMD,
	Philips
};

class Monitors {
	static int amount;
private:
	char* code;
	Model model;
	std::string matrix, permission;
	int diagonal;
	bool curved;
	std::string get_model_str() const;
public:
	Monitors(const char* code, Model model, std::string matrix, std::string permission, int diagonal, bool curved);
	Monitors(const Monitors&) = delete; //конструктор
	//  Set
	void set_code(const char* code);
	void set_model(Model model);
	void set_matrix(std::string matrix);
	void set_permission(std::string permission);
	void set_curved(bool curved);
	void set_diagonal(int diagonal);
	void print() const;
	// Get
	const char * get_code() const;
	Model get_model() const;
	std::string get_matrix() const;
	std::string get_permission() const;
	int get_diagonal() const;
	bool get_curved() const;
	~Monitors();
};