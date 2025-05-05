#include <iostream>
using namespace std;

void main() {
	// инициализируем переменные
	int d = 21;
	int ds = 13;
	double s = 54.32;
	double ss = 2.1;
	float a = 2.3e+1;
	float f = 4.3e-1;
	// выводим их значение на экран
	for (int i = 0; i < 3; i++) {
		switch (i)
		{
		case 0:
			cout << d << endl;
			cout << d + ds << endl;
			break;
		case 1:
			cout << s << endl;
			cout << s + ss << endl;
			break;
		case 2:
			cout << a << endl;
			cout << a + f << endl;
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	}
}