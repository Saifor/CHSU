// 26; Оператор   switch   и  for   языка С++; Харламов Д.;
#include <iostream>
using namespace std;

// Вычисление и вывод суммы n-членов геометрической или арифметической прогрессии;
void main() {
	int a, n;
	double q, c;
	cout << "Enter the arithmetic/geometric progression step = "; cin >> q; // Ввод шага прогрессии пользователем;
	cout << "Enter Enter the items to be counted = "; cin >> n; // Ввод количества выводимых элементов пользователем;
	cout << "Enter number: 1 - arithmetic progression; 2 - geometric progression = "; cin >> a; 
	/*
	Выбор пользователя каккую прогрессию использовать;
	*/
	switch (a){
	case 1: // если a = 1, то исполуйзуются формула арифметической прогрессии;
		c = 0; // Выставления значения по умолчанию;
		for (int i = 0; i < n; i++) { // Счетчик кол-во элементов выведено;
			c = c + q; cout << c << endl; // Вычисление элемента прогрессии и его вывод;
		}
		break;
	case 2:	// если a = 2, то исполуйзуются формула агеометрической прогрессии;
		c = 1; // Выставления значения по умолчанию;
		for (int i = 0; i < n; i++) { // Счетчик кол-во элементов выведено;
			c = c * q; cout << c << endl;  // Вычисление элемента прогрессии и его вывод;
		}
		break;
	default: // Если ввели неверное число a;
		cout << "Error wrong number"; // Вывод сообщения об ошибке;
		break;
	}
	system("pause");
}