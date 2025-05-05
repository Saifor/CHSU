#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <time.h>
#include <iomanip>
#include <chrono>

using namespace std;

// Метод Шелла
void shellSort(int* m, int n)
{
	int step = n / 2;
	while (step > 0) {
		for (int i = 0; i < n - step; i++) {
			int j = i;
			while (j >= 0 && m[j] > m[j + step]) {
				swap(m[j], m[j + step]);
				j -= step;
			}
		}
		step /= 2;
	}
}

void pushDown(int* m, int root, int bottom)
{
	int done = 0, maxChild;
	while ((root * 2 + 1 <= bottom) && !done) {
		if (root * 2 + 1 == bottom)
			maxChild = root * 2 + 1;
		//следний элемент последний 
		else if (m[2 * root + 1] > m[2 * root + 2])
			maxChild = root * 2 + 1;
		// левый > правый 
		else
			maxChild = root * 2 + 2;
		// правый > левый 

		if (m[root] < m[maxChild]) {
			swap(m[root], m[maxChild]);
			root = maxChild;
		}
		else done = 1;
	}
}

// Пирамидальная сортировка
void heapSort(int* m, int n)
{
	for (int i = n / 2 - 1; i >= 0; i--) {
		pushDown(m, i, n - 1);
	}

	for (int i = n - 1; i >= 1; i--) {
		swap(m[0], m[i]);
		pushDown(m, 0, i - 1);
	}
}

// Метод прямого обмена
void bubbleSort(int* m, int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--)
		{
			if (m[j] < m[j - 1])
				swap(m[j], m[j - 1]);
		}
	}
}

// Заполнение массива [случайными] числами
void initArrays(int* r, int* s, int* u, int n)
{
	for (int i = 0; i < n; i++)
		r[i] = -9 + rand() % 109;

	for (int i = 0; i < n; i++)
		s[i] = -9 + rand() % 109;
	sort(s, s + n);

	for (int i = 0; i < n; i++)
		u[i] = -9 + rand() % 109;
	sort(u, u + n);
	reverse(u, u + n);
}

void printArrays(int* r, int* s, int* u, int n)
{
	// Вывод верхней границы
	printf("\033[1;33m");
	cout << " - - - - - - - - - ";
	for (int i = 0; i < n; i++)
		cout << "- ";
	cout << endl;
	printf("\033[0m");

	// Вывод массивов
	cout << " Random | ";
	for (int i = 0; i < n; i++)
		cout << r[i] << " ";
	cout << endl << " Sort   | ";
	for (int i = 0; i < n; i++)
		cout << s[i] << " ";
	cout << endl << " RSort  | ";
	for (int i = 0; i < n; i++)
		cout << u[i] << " ";

	// Вывод нижней границы
	printf("\033[1;33m");
	cout << endl << " - - - - - - - - - ";
	for (int i = 0; i < n; i++)
		cout << "- ";
	printf("\033[0m");
	cout << endl << endl;
}

double WhithTime(void (*func)(int*, int), int* m, int n)
{
	auto start = chrono::high_resolution_clock::now();
	func(m, n);
	auto end = chrono::high_resolution_clock::now();
	chrono::duration<double, milli> duration = end - start;
	return duration.count();
}

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "ru");

	int n = 10;
	int* randArray = new int[n];
	int* sortedArray = new int[n];
	int* rSortedArray = new int[n];

	initArrays(randArray, sortedArray, rSortedArray, n);
	printArrays(randArray, sortedArray, rSortedArray, n);

	printf("\033[1;31m Shell sort (метод Шелла)\033[0m\n");
	shellSort(randArray, n);
	shellSort(sortedArray, n);
	shellSort(rSortedArray, n);
	printArrays(randArray, sortedArray, rSortedArray, n);

	printf("\033[1;31m Heap sort (Пирамидальная сортировка)\033[0m\n");
	heapSort(randArray, n);
	heapSort(sortedArray, n);
	heapSort(rSortedArray, n);
	printArrays(randArray, sortedArray, rSortedArray, n);

	printf("\033[1;31m Bubble sort (Метод прямого обмена)\033[0m\n");
	bubbleSort(randArray, n);
	bubbleSort(sortedArray, n);
	bubbleSort(rSortedArray, n);
	printArrays(randArray, sortedArray, rSortedArray, n);

	int N;
	cout << "Задайте N: ";
	cin >> N;

	int* randArrayN = new int[N];
	int* sortArrayN = new int[N];
	int* rSortArrayN = new int[N];

	initArrays(randArrayN, sortArrayN, rSortArrayN, N);

	printf("\033[1;32m");
	cout << "---------------------------------------------------------" << endl;
	cout << "|        | Shell \t| Heap  \t| Bubble \t|" << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "| Random | " << WhithTime(shellSort, randArrayN, N) << "ms \t|" << WhithTime(heapSort, randArrayN, N) << "ms  \t|" << WhithTime(bubbleSort, randArrayN, N) << "ms \t|" << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "| Sort   | " << WhithTime(shellSort, sortArrayN, N) << "ms \t|" << WhithTime(heapSort, sortArrayN, N) << "ms  \t|" << WhithTime(bubbleSort, sortArrayN, N) << "ms \t|" << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "| Rsort  | " << WhithTime(shellSort, rSortArrayN, N) << "ms \t|" << WhithTime(heapSort, rSortArrayN, N) << "ms  \t|" << WhithTime(bubbleSort, rSortArrayN, N) << "ms \t|" << endl;
	cout << "---------------------------------------------------------" << endl;
	printf("\033[0m");

	system("pause");
	return 0;
}
