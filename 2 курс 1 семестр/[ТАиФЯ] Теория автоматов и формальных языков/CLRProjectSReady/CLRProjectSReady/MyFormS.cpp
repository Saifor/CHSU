#include "MyFormS.h"
#include <iostream>
#include <string>

using namespace System;
using namespace System::Windows::Forms;

int calculate(std::string& expression) {
	int result = 0;
	try {
		result = std::eval(expression);
	}
}

int main(array<String^> ^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CLRProjectSReady::MyFormS form;
	Application::Run(%form);

	String^ expression = "";
}
