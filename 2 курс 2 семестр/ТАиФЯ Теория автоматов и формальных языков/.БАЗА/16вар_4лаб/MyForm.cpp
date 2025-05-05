#include "MyForm.h"
#include <math.h>
#include <Windows.h>
using namespace Project5; // Project1 - Ќазвание вышего проекта
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm); // MyForm - название вашей window Form
	return 0;
}


