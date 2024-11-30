#include <iostream>
using namespace std;


bool chisla(char znak) {
	char m[10] = { '1','2','3','4','5','6','7','8','9','0' };
	for (int i = 0; i < 10; i++)
	{
		if (znak == m[i]) {
			return 1;
			break;
		}
	}
	return 0;
}

bool znaki(char znak) {
	char m[4] = { '*','/','+','-' };
	for (int i = 0; i < 4; i++)
	{
		if (znak == m[i]) {
			return 1;
			break;
		}
	}
	return 0;
}

void print(int* a, int* b, int* c, char* ss, int s) {

	cout << "X: ";
	for (int i = 0; i < s; i++)
	{
		cout << ss[i] << " ";
	}cout << "\nX: ";
	for (int i = 0; i < s; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\nS: ";
	for (int i = 0; i < s + 1; i++)
	{
		cout << b[i] << " ";
	}
	cout << "\nY: ";
	for (int i = 0; i < s; i++)
	{
		cout << c[i] << " ";
	}
	cout << "\n";
}

void main() {
	char vvod; //ввод числа
	char actualznak = '=';//знак равно
	int left = 0, right = 0, sost = 0;//состояние
	int schet = 0;
	char MassC[100];
	int MassS[100];
	int MassX[100];
	int MassY[100];
	MassS[0] = 0;// присваиваем нулевому состояние значение ноль

	while (true) {
		//cout << "vvedite chislo\n";
		cout << "Vvedite chislo:";
		cin >> vvod;//ввод числа
		switch (sost)//определяет состояния
		{
		case 0:
			//начальное состояние
			if (chisla(vvod)) { //передает функции значение введенного чила
				/*int chislo = int(vvod - '0');
				left = left * 10 + chislo;*/
				sost = 1;
				MassC[schet] = vvod;
				MassX[schet] = 1;
				MassS[schet + 1] = 1;
				MassY[schet] = 1;
				schet++;
			}
			else cout << "error case 0";
			break;
		case 1:
			if (chisla(vvod)) {
				/*int chislo = int(vvod - '0');
				left = left * 10 + chislo;*/
				sost = 1;
				MassC[schet] = vvod;
				MassX[schet] = 1;
				MassS[schet + 1] = 1;
				MassY[schet] = 1;
				schet++;
			}
			else if (znaki(vvod)) {
				actualznak = vvod;
				sost = 2;
				MassC[schet] = vvod;
				MassX[schet] = 2;
				MassS[schet + 1] = 2;
				MassY[schet] = 2;
				schet++;
			}
			else cout << "error case 1";
			break;
		case 2:
			if (chisla(vvod)) {
				/*int chislo = int(vvod - '0');
				right = right * 10 + chislo;*/
				sost = 3;
				MassC[schet] = vvod;
				MassX[schet] = 1;
				MassS[schet + 1] = 3;
				MassY[schet] = 5;
				schet++;
			}
			else cout << "error case 2";
			break;
		case 3:
			if (chisla(vvod)) {
				/*int chislo = int(vvod - '0');
				right = right * 10 + chislo;*/
				sost = 3;
				MassC[schet] = vvod;
				MassX[schet] = 1;
				MassS[schet + 1] = 3;
				MassY[schet] = 5;
				schet++;
			}
			else if (znaki(vvod)) {
				if (actualznak == '+') left += right;
				if (actualznak == '-') left -= right;
				if (actualznak == '*') left *= right;
				if (actualznak == '/') left /= right;
				actualznak = vvod;
				sost = 2;
				right = 0;
				MassC[schet] = vvod;
				MassX[schet] = 2;
				MassS[schet + 1] = 2;
				MassY[schet] = 3;
				schet++;
			}
			else if (vvod == '=') {
				if (actualznak == '+') left += right;
				if (actualznak == '-') left -= right;
				if (actualznak == '*') left *= right;
				if (actualznak == '/') left /= right;
				sost = 0;
				right = 0;
				cout << "\notvet: " << left << "\n";
				left = 0;
				MassC[schet] = vvod;
				MassX[schet] = 3;
				MassS[schet + 1] = 0;
				MassY[schet] = 4;
				schet++;
				print(MassX, MassS, MassY, MassC, schet);
			}
			else cout << "error case 3";
			break;

		}
		cout << left << actualznak << right << "\n";
	}
}