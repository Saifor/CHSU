#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

void main() {

	ifstream input("input.txt");
	setlocale(LC_ALL, "Russian");

	int i1, j1, i2, j2;
	cout << "Введите начальную клетку по вертикали i1="; //ввод 1 кледки
	cin >> i1;
	cout << "Введите начальную клетку по горизонтали j1=";
	cin >> j1;
	cout << "Введите конечную клетку по вертикали i2=";//ввод 2 клетки
	cin >> i2;
	cout << "Введите конечную клетку по горизонтали j2=";
	cin >> j2;

	int N1, N2; //инициализация размера массива
	input >> N1 >> N2;//чтение из файла
	if (N1 >= 20 && N2 >= 20) {
		int sum = 1;
		int** data = new int* [N1]; // создание массива
		for (int i = 0; i < N1; i++) {
			data[i] = new int[N2];
			for (int j = 0; j < N2; j++) {
				input >> data[i][j]; // 
				sum += data[i][j];// 
			}
		}

		int** sums = new int* [N1];//подсчет пути
		for (int i = 0; i < N1; i++) {
			sums[i] = new int[N2];
			for (int j = 0; j < N2; j++) {
				sums[i][j] = sum;
			}
		}
		sums[i1][j1] = data[i1][j1];//

		char** way = new char* [N1];// будем присваивать метки в этот массив
		for (int i = 0; i < N1; i++) {//(путь)
			way[i] = new char[N2];
			for (int j = 0; j < N2; j++) {
				way[i][j] = '0';// присваиваем 0
			}
		}

		bool IsChanged = true; // флаг. прошли ли вершину
		while (IsChanged == true) {
			IsChanged = false;			//присваиваем стрелочки(присваиваем) ищем минимальный элемент среди соседних

			for (int i = 0; i < N1; i++) {		// находим веса
				for (int j = 0; j < N2; j++) {  //идем по массиву
					if (!(i == i1 && j == j1) && data[i][j] != 0 && data[i][j] > 0) {
						if (j - 1 >= 0) {// 
							if (data[i][j] + sums[i][j - 1] < sums[i][j]) {
								sums[i][j] = data[i][j] + sums[i][j - 1];// присваиваем значение соседней клетки
								way[i][j] = '<';// присваиваем элементу массива значение <
								IsChanged = true;// массив изменен
							}
						}

						if (i - 1 >= 0) {//
							if (data[i][j] + sums[i - 1][j] < sums[i][j]) {//
								sums[i][j] = data[i][j] + sums[i - 1][j];// присваиваем значение соседней клетки
								way[i][j] = '^';// присваиваем элементу массива значение ^
								IsChanged = true;// массив изменен
							}
						}

						if (j + 1 < N2) {//
							if (data[i][j] + sums[i][j + 1] < sums[i][j]) {//если соседняя клетка меньше sums
								sums[i][j] = data[i][j] + sums[i][j + 1];// присваиваем значение соседней клетки
								way[i][j] = '>';// присваиваем элементу массива значение >
								IsChanged = true;// массив изменен
							}
						}

						if (i + 1 < N1) {//
							if (data[i][j] + sums[i + 1][j] < sums[i][j]) {//если соседняя клетка меньше sums
								sums[i][j] = data[i][j] + sums[i + 1][j];// присваиваем значение соседней клетки
								way[i][j] = 'v';// присваиваем элементу массива значение v
								IsChanged = true;// массив изменен
							}
						}
					}
				}
			}
		}

		bool** color = new bool* [N1];   //массив цветов
		for (int i = 0; i < N1; i++) {
			color[i] = new bool[N2];
			for (int j = 0; j < N2; j++) {
				color[i][j] = false;// пройден
			}
		}

		int i_way = i2;//элементы матрицы стрелочек(меток)
		int j_way = j2;
		while (!(i_way == i1 && j_way == j1)) {// идем обратно - ищем путь
			color[i_way][j_way] = true;// присваиваем метке цвета значение true
			if (way[i_way][j_way] == '<') {// если знак < то идем на клетку меньше j_way--
				j_way--;
			}
			else if (way[i_way][j_way] == '^') {// если знак ^ то идем на клетку меньше i_way--
				i_way--;
			}
			else if (way[i_way][j_way] == '>') {// если знак > то идем на клетку больше j_way++
				j_way++;
			}
			else if (way[i_way][j_way] == 'v') {// если знак v то идем на клетку больше i_way++
				i_way++;
			}
		}
		color[i_way][j_way] = true;// присваиваем метке цвета значение true
		int ko = 0;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		cout << endl;
		for (int i = 0; i < N1; i++) {     //двигаемся по массиву
			for (int j = 0; j < N2; j++) {
				if (color[i][j] == true) {//если элемент тот, что нам нужен, то закрашиваем
					SetConsoleTextAttribute(hConsole, 12);// изменение цвета
					cout << data[i][j] << " ";//выводим закрашенный элемент
					ko += data[i][j];
					SetConsoleTextAttribute(hConsole, 7);// изменение цвета в белый
				}
				else {//иначе просто выводим элемент клетки
					cout << data[i][j] << " ";
				}
			}
			cout << endl;

		}
		cout << "Сумма подсчитанных элементов:" << endl;
		cout << ko << endl;
	}
	else 
	cout << "Матрица больше 20!" << endl;
	
	system("pause");
}
