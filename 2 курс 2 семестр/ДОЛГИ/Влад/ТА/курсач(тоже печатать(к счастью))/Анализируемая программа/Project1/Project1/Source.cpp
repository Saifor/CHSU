#include <iostream>
using namespace std;
void main() {
	// инициализируем переменные
	int a = 150;
	double b = 2.3;
	float c = 2.3e+12;
	int n = 4;
	// открываем цикл for
	for (int i = 0; i < n; i++) {
		// запускаем switch
		switch (i)
		{
		// выводим на экран переменные типа int, а затем их сумму
		case 0:
			cout << a << endl;
			break;
		// выводим на экран переменные типа double, а затем их сумму
		case 1:
			cout << b << endl;
			break;
		// выводим на экран переменные типа float, а затем их сумму
		case 2:
			cout << c << endl;
		// если выходим из диапозона, то выводим информацию об ошибке
		default:
			cout << "Index out of range";
			break;
		}
	}
}