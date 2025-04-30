#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <time.h>
#include <iomanip>
#include <chrono>

using namespace std;

void m_shell(int* m, int n)
{
	int step = n / 2;
	while (step > 0){
		for (int i = 0; i < n - step; i++){
			int j = i;
			while (j >= 0 && m[j] > m[j + step]){
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
	while ((root * 2 + 1 <= bottom) && !done){
		if (root * 2 + 1 == bottom) maxChild = root * 2 + 1;
		//след-й эл-т последний 
		else if (m[2 * root + 1] > m[2 * root + 2]) maxChild = root * 2 + 1;
		// левый > правый 
		else maxChild = root * 2 + 2;
		// правый > левый 

		if (m[root] < m[maxChild]){
			swap(m[root], m[maxChild]);
			root = maxChild;
		}
		else done = 1;
	}
}

void heapSort(int* m, int n)
{
	for (int i = n / 2 - 1; i >= 0; i--) {
		pushDown(m, i, n - 1);
	}
	for (int i = n - 1; i >= 1; i--){
		swap(m[0], m[i]);
		pushDown(m, 0, i - 1);
	}
}

void qsort(int* m, int left, int right)
{
	int i = left, j = right, key = m[(left + right) / 2];
	do{
		while (m[i] < key) i++;
		while (m[j] > key) j--;

		if (i <= j){
			swap(m[i], m[j]);
			i++;
			j--;
		}
	} while (i <= j);
	if (i < right) qsort(m, i, right);
	if (j > left) qsort(m, left, j);
}

void quickSort(int* m, int n)
{
	qsort(m, 0, n - 1);
}

void createmas(int* r, int* s, int* u, int n)
{
	for (int i = 0; i < n; i++) r[i] = rand() % 99;
	for (int i = 0; i < n; i++) s[i] = rand() % 99;
	sort(s, s + n);
	for (int i = 0; i < n; i++) u[i] = rand() % 99;
	sort(u, u + n);
	reverse(u, u + n);
}

void showArr(int* r, int* s, int* u, int n)
{
	cout << "--------"; for (int i = 0; i < 3 * n; i++) cout << "-"; cout << endl;
	cout << " Random | ";
	for (int i = 0; i < n; i++)	cout << r[i] << " ";
	cout << endl << " Sort   | ";
	for (int i = 0; i < n; i++)	cout << s[i] << " ";
	cout << endl << " RSort  | ";
	for (int i = 0; i < n; i++)	cout << u[i] << " ";
	cout << endl << "--------"; for (int i = 0; i < 3 * n; i++)cout << "-";
	cout << endl << endl;
}

double Whith_Time(void (*func)(int*, int), int* m, int n)
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
	int* Rdarr = new int[n];
	int* Srarr = new int[n];
	int* Rsarr = new int[n];

	createmas(Rdarr, Srarr, Rsarr, n);
	showArr(Rdarr, Srarr, Rsarr, n);

	cout << " Shell sort" << endl;
	m_shell(Rdarr, n);
	m_shell(Srarr, n);
	m_shell(Rsarr, n);
	showArr(Rdarr, Srarr, Rsarr, n);

	createmas(Rdarr, Srarr, Rsarr, n);
	showArr(Rdarr, Srarr, Rsarr, n);

	cout << " Heap sort" << endl;
	heapSort(Rdarr, n);
	heapSort(Srarr, n);
	heapSort(Rsarr, n);
	showArr(Rdarr, Srarr, Rsarr, n);

	createmas(Rdarr, Srarr, Rsarr, n);
	showArr(Rdarr, Srarr, Rsarr, n);

	cout << " Quick sort" << endl;
	quickSort(Rdarr, n);
	quickSort(Srarr, n);
	quickSort(Rsarr, n);
	showArr(Rdarr, Srarr, Rsarr, n);

	int N; 
	cout << "N = "; cin >> N; 

	int* RandomArr = new int[N];
	int* SortArr = new int[N];
	int* RSortArr = new int[N];

	createmas(RandomArr, SortArr, RSortArr, N);

	cout << "---------------------------------------------------------" << endl;
	cout << "|        | Shell \t| Heap  \t| Quick \t|" << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "| Random | " << Whith_Time(m_shell, RandomArr, N) << "ms \t|" << Whith_Time(heapSort, RandomArr, N) << "ms  \t|" << Whith_Time(quickSort, RandomArr, N) << "ms \t|" << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "| Sort   | " << Whith_Time(m_shell, SortArr, N) << "ms \t|" << Whith_Time(heapSort, SortArr, N) << "ms  \t|" << Whith_Time(quickSort, SortArr, N) << "ms \t|" << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "| Rsort  | " << Whith_Time(m_shell, RSortArr, N) << "ms \t|" << Whith_Time(heapSort, RSortArr, N) << "ms  \t|" << Whith_Time(quickSort, RSortArr, N) << "ms \t|" << endl;
	cout << "---------------------------------------------------------" << endl;

	system("pause");
	return 0;
}