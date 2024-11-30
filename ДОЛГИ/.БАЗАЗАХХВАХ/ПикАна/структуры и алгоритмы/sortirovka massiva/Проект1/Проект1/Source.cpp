#include <iostream>
#include<time.h>
#include<random>
#include <chrono>
#include <algorithm>
using namespace std;

class sortirovka_1 {
public:
	void pryamoi(int* mas, int n) {
		for (int i = 0; i < n - 1; i++) {
			int min = mas[i], index = i;
			for (int j = i + 1; j < n; j++)
				if (mas[j] < min) {
					min = mas[j];
					index = j;
				}
			mas[index] = mas[i];
			mas[i] = min;

		}

	}
};
class sortirovka_2 {
public:
	void heapify(int arr[], int n, int i)
	{
		int largest = i;
		// Инициализируем наибольший элемент как корень
		int l = 2 * i + 1; // левый = 2*i + 1
		int r = 2 * i + 2; // правый = 2*i + 2

						   // Если левый дочерний элемент больше корня
		if (l < n && arr[l] > arr[largest])
			largest = l;

		// Если правый дочерний элемент больше, чем самый большой элемент на данный момент
		if (r < n && arr[r] > arr[largest])
			largest = r;

		// Если самый большой элемент не корень
		if (largest != i)
		{
			swap(arr[i], arr[largest]);

			// Рекурсивно преобразуем в двоичную кучу затронутое поддерево
			heapify(arr, n, largest);
		}
	}

	// Основная функция, выполняющая пирамидальную сортировку
	void heapSort(int arr[], int n)
	{
		// Построение кучи (перегруппируем массив)
		for (int i = n / 2 - 1; i >= 0; i--)
			heapify(arr, n, i);

		// Один за другим извлекаем элементы из кучи
		for (int i = n - 1; i >= 0; i--)
		{
			// Перемещаем текущий корень в конец
			swap(arr[0], arr[i]);

			// вызываем процедуру heapify на уменьшенной куче
			heapify(arr, i, 0);
		}
	}
};
class sortirovka_3 {
public:
	void qSort(int* mas, int first, int last) {
		int i = first, j = last, key = mas[(first + last) / 2];
		do {
			while (mas[i] < key) i++;
			while (mas[j] > key) j--;
			if (i <= j)
			{
				swap(mas[i], mas[j]);
				i++; j--;
			}
		} while (i <= j);
		if (i < last)qSort(mas, i, last);
		if (j > first)qSort(mas, first, j);
	}
	void quickSort(int* mas, int n) {
		qSort(mas, 0, n - 1);
	}

};

class sortirovka_4 {
public:
	void bobble(int* mas, int n1) {

		for (int i = 0; i < n1 - 1; i++) {
			for (int j = n1 - 1; j>i; j--)
				if (mas[j] > mas[j + 1]) {
					swap(mas[j], mas[j + 1]);
				}
		}
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	double time;
	int n = 10, n1, i, time1 = 0, time2 = 0, time3 = 0;
	int *mas1 = new int[n];
	int* mas2 = new int[n];
	int* mas3 = new int[n];
	cout << "\tрандомный массив:       \t";
	for (i = 0; i < n; i++)
		mas1[i] = 1 + rand() % 50;
	for (i = 0; i < n; i++)
		cout << mas1[i] << " "; cout << endl;

	cout << "\tметод прямого выбора:    \t";
	for (i = 0; i < n; i++)
		copy_n(mas1, n, mas2);
	sortirovka_1 m;
	m.pryamoi(mas2, n);
	for (i = 0; i < n; i++)
		cout << mas2[i] << " "; cout << endl;

	cout << "\tпирамидальная сортировка: \t";
	for (i = 0; i < n; i++)
		copy_n(mas1, n, mas2);
	sortirovka_2 met;
	met.heapSort(mas2, n);
	for (i = 0; i < n; i++)
		cout << mas2[i] << " "; cout << endl;

	cout << "\tбыстрая сортировка:      \t";
	for (i = 0; i < n; i++)
		copy_n(mas1, n, mas3);
	sortirovka_3 meta;
	meta.quickSort(mas2, n);
	for (i = 0; i < n; i++)
		cout << mas2[i] << " "; cout << endl; cout << endl;


	cout << "Сколько элементов в массиве? -" << endl;
	cin >> n1;
	int* a = new int[n1];
	int* b = new int[n1];
	int* c = new int[n1];
	//int* massiv = new int[n1];
	//int* massiv1 = new int[n1];
	//int* massiv2 = new int[n1];
	//int* massiv3 = new int[n1];
	for (int i = 0; i < n1; i++)
	{
		a[i] = rand() % 50;
		b[i] = i;
		c[i] = n1 - i - 1;
	}

	int l;
	//ранд
	for (l = 0; l < n1; l++)
		a[l] = 1 + rand() % 50;
	for (l = 0; l < n1; l++)
		cout << a[l] << " "; cout << endl;
	//отсортированный
	for (l = 0; l < n1; l++)
		copy_n(a, n1, b);
	sortirovka_1 v;
	v.pryamoi(b, n1);
	for (l = 0; l < n1; l++)
		cout << b[l] << " "; cout << endl;
	//обратно
	for (l = 0; l < n1; l++)
		copy_n(a, n1, c);

	sortirovka_4 vor;
	vor.bobble(c, n1);
	for (l = 0; l < n1; l++)
		cout << c[l] << " "; cout << endl;

	cout << "1_______pryamoi" << endl;
	cout << "\t\t\t" "mas1\t\t""mas2\t\t""mas3"; cout << endl;

	time = clock();
	sortirovka_1 q, w, e;
	q.pryamoi(mas1, n1); cout << "\t\t\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
	w.pryamoi(mas2, n1); cout << "\t\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
	e.pryamoi(mas3, n1); cout << "\t\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
	cout << endl;
	//cout << time1 << (clock() - time) / CLOCKS_PER_SEC << " сек";
	//cout << endl;

	cout << "2_______heapSort";
	time = clock();
	sortirovka_2 r, t, y;
	r.heapSort(mas1, n1); cout << "\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
	t.heapSort(mas2, n1); cout << "\t\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
	y.heapSort(mas3, n1); cout << "\t\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
	cout << endl;
	// cout << time2 << (clock() - time) / CLOCKS_PER_SEC << " сек" << endl;

	cout << "3_______quickSort";
	time = clock();
	sortirovka_3 u, p, o;
	u.quickSort(mas1, n1); cout << "\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
	p.quickSort(mas2, n1); cout << "\t\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
	o.quickSort(mas3, n1); cout << "\t\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
	cout << endl;
	//cout << time3 << (clock() - time) / CLOCKS_PER_SEC << " сек" << endl;
	//cout << endl;


	system("pause");
	return 0;
}