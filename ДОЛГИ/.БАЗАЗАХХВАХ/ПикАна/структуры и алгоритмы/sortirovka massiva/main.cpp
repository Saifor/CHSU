#include <iostream>
#include<time.h>
#include<random>
#include <chrono>
#include <algorithm>
#include <iomanip>

using namespace std;
using namespace std::chrono;
//pryamoy
void Selection(int* array, int n) {
	int min;
	for (int i = 0; i < n - 1; i++) {
		int k = i; min = array[i];
		for (int j = i + 1; j < n; j++)
			if (array[j] < min) {
				min = array[j]; k = j;
			}
		array[k] = array[i]; array[i] = min;
	}
}
//пирамидальная сортировка
void heapify(int* arr, int j, int bottom) {
	        int done = 0, maxChild, tmp;
	        while (j * 2 + 1<=bottom && done == 0) {
	            if (j * 2 + 1 == bottom)
	                maxChild = j * 2 + 1;
	            else
	                if (arr[j * 2 + 1] > arr[j * 2 + 2])
	                    maxChild = j * 2 + 1;
	                else maxChild = j * 2 + 2;
	            if (arr[j] < arr[maxChild]) {
	                swap(arr[j], arr[maxChild]);
	                j = maxChild;
	            }
	            else done = 1;
	
	
	
	        }
}
 // Основная функция, выполняющая пирамидальную сортировку
void heapSort(int *arr, int j)
	    {   
	        for (int i = j / 2 - 1; i >= 0; i--)
	            heapify(arr, i, j - 1);
	        for (int i = j - 1; i > 0; i--) {
	            swap(arr[0], arr[i]);
	            heapify(arr, 0, i - 1);
	        }
	
	    }

// быстрая сортировка
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

void main() {
	srand(time(0));
	setlocale(LC_ALL, "russian");
	int n,n1=10;
	    int* mas1 = new int[n1];
	    int* mas2 = new int[n1];
	    int* mas3 = new int[n1];
	    cout << "\tрандомный массив:       \t";
	    for (int i = 0; i < n1; i++)
	        mas1[i] = 1 + rand() % 50;
	    for (int i = 0; i < n1; i++)
	        cout << mas1[i] << " "; cout << endl;
	
	    cout << "\tметод прямого выбора:    \t";
	    for (int i = 0; i < n1; i++)
	        copy_n(mas1, n1, mas2);
		Selection(mas2, n1);
	    for (int i = 0; i < n1; i++)
	        cout << mas2[i] << " "; cout << endl;
	
	    cout << "\tпирамидальная сортировка: \t";
	    for (int i = 0; i < n1; i++)
	        copy_n(mas1, n1, mas2);
	    	    heapSort(mas2, n1);
	    for (int i = 0; i < n1; i++)
	        cout << mas2[i] << " "; cout << endl;
	
	    cout << "\tбыстрая сортировка:      \t";
	    for (int i = 0; i < n1; i++)
	        copy_n(mas1, n1, mas3);
		quickSort(mas2, n1);
	    for (int i = 0; i < n1; i++)
	        cout << mas2[i] << " "; cout << endl; cout << endl;


	cout << "   Задание массива" << endl;
	cout << "Задайте размер массива: ";
	cin >> n;
	cout << endl;
	int* array1 = new int[n];
	int* array2 = new int[n];
	int* array3 = new int[n];
	for (int i = 0; i < n; i++) {array1[i] = array2[i] = array3[i]  = rand() % 10; 1;}
	cout << "---Время работы в миллисекундах---" << endl << endl;


	high_resolution_clock::time_point start = high_resolution_clock::now();
	Selection(array1, n);
	high_resolution_clock::time_point end = high_resolution_clock::now();
	duration<double, milli> duration1 = end - start;
	start = high_resolution_clock::now();
	Selection(array1, n);
	end = high_resolution_clock::now();
	duration<double, milli> duration2 = end - start;
	reverse(&array1[0], &array1[n]);
	start = high_resolution_clock::now();
	Selection(array1, n);
	end = high_resolution_clock::now();
	duration<double, milli> duration3 = end - start;
	start = high_resolution_clock::now();

	heapSort(array2, n);
	end = high_resolution_clock::now();
	duration<double, milli> duration4 = end - start;
	start = high_resolution_clock::now();
	heapSort(array2, n);
	end = high_resolution_clock::now();
	duration<double, milli> duration5 = end - start;
	reverse(&array2[0], &array2[n]);
	start = high_resolution_clock::now();
	heapSort(array2, n);
	end = high_resolution_clock::now();
	duration<double, milli> duration6 = end - start;
	start = high_resolution_clock::now();

	quickSort(array3, n);
	end = high_resolution_clock::now();
	duration<double, milli> duration7 = end - start;
	start = high_resolution_clock::now();
	quickSort(array3, n);
	end = high_resolution_clock::now();
	duration<double, milli> duration8 = end - start;
	reverse(&array3[0], &array3[n]);
	start = high_resolution_clock::now();
	quickSort(array3, n);
	end = high_resolution_clock::now();
	duration<double, milli> duration9 = end - start;
	cout.width(20);

	cout << endl << fixed << setprecision(5);//точность
	cout << " __________________________________________________________________" << endl;
	cout << "|                  |   Рандомный   |     Прямой    |   Обратный    |" << endl;
	cout << "|__________________|_______________|_______________|_______________|" << endl;
	cout << "|  Прямого выбора  | " << duration1.count() << "       |       " << duration2.count() << " |     " << duration3.count() << "   |" << endl;
	cout << "|__________________|_______________|_______________|_______________|" << endl;
	cout << "|  Пирамидальная   | " << duration4.count() << "       |       " << duration5.count() << " |     " << duration6.count() << "   |" << endl;
	cout << "|__________________|_______________|_______________|_______________|" << endl;
	cout << "|Быстрая сортировка| " << duration7.count() << "       |       " << duration8.count() << " |     " << duration9.count() << "   |" << endl;
	cout << "|__________________|_______________|_______________|_______________|" << endl << endl;





	system("pause");
}




//class sortirovka_1 {
//public:
//    
//    void pryamoi(int* array, int n) {
//        int min;
//        for (int i = 0; i < n - 1; i++) {
//            int k = i; min = array[i];
//            for (int j = i + 1; j < n; j++)
//                if (array[j] < min) {
//                    min = array[j]; k = j;
//                }
//            array[k] = array[i]; array[i] = min;
//        }
//    }
//
//   /* void pryamoi(int* mas, int n) {
//        for (int i = 0; i < n - 1; i++) {
//            int min = mas[i], index = i;
//            for (int j = i + 1; j < n; j++)
//                if (mas[j] < min) {
//                    min = mas[j];
//                    index = j;
//                }
//            mas[index] = mas[i];
//            mas[i] = min;
//
//        }
//
//    }*/
//};
//class sortirovka_2 {
//public:
//    void heapify(int *arr, int j, int bottom){
//        int done = 0, maxChild, tmp;
//        while (j * 2 + 1<=bottom && done == 0) {
//            if (j * 2 + 1 == bottom)
//                maxChild = j * 2 + 1;
//            else
//                if (arr[j * 2 + 1] > arr[j * 2 + 2])
//                    maxChild = j * 2 + 1;
//                else maxChild = j * 2 + 2;
//            if (arr[j] < arr[maxChild]) {
//                swap(arr[j], arr[maxChild]);
//                j = maxChild;
//            }
//            else done = 1;
//
//
//
//        }
//   
//    }
//
//    // Основная функция, выполняющая пирамидальную сортировку
//    void heapSort(int *arr, int j)
//    {   
//        for (int i = j / 2 - 1; i >= 0; i--)
//            heapify(arr, i, j - 1);
//        for (int i = j - 1; i > 0; i--) {
//            swap(arr[0], arr[i]);
//            heapify(arr, 0, i - 1);
//        }
//
//    }
//};
//class sortirovka_3 {
//public:
//    void qSort(int* mas, int first, int last) {
//        int i = first, j = last, key = mas[(first + last) / 2];
//        do {
//            while (mas[i] < key) i++;
//            while (mas[j] > key) j--;
//            if (i <= j)
//            {
//                swap(mas[i], mas[j]);
//                i++; j--;
//            }
//        } while (i <= j);
//        if (i < last)qSort(mas, i, last);
//        if (j > first)qSort(mas, first, j);
//    }
//    void quickSort(int* mas, int n) {
//        qSort(mas, 0, n - 1);
//    }
//
//};
//class sortirovka_4 {
//public:
//    void bobble(int* mas, int n1) {
//
//        for (int i = 0; i < n1-1 ; i++) {
//           for (int j = n1-1; j>i ; j--)
//                if (mas[j] > mas[j-1]) {
//                    swap(mas[j], mas[j - 1]);
//                }
//        }
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    double time;
//    int n = 10, n1, i, time1 = 0, time2 = 0, time3 = 0;
//    int* mas1 = new int[n];
//    int* mas2 = new int[n];
//    int* mas3 = new int[n];
//    cout << "\tрандомный массив:       \t";
//    for (i = 0; i < n; i++)
//        mas1[i] = 1 + rand() % 50;
//    for (i = 0; i < n; i++)
//        cout << mas1[i] << " "; cout << endl;
//
//    cout << "\tметод прямого выбора:    \t";
//    for (i = 0; i < n; i++)
//        copy_n(mas1, n, mas2);
//    sortirovka_1 m;
//    m.pryamoi(mas2, n);
//    for (i = 0; i < n; i++)
//        cout << mas2[i] << " "; cout << endl;
//
//    cout << "\tпирамидальная сортировка: \t";
//    for (i = 0; i < n; i++)
//        copy_n(mas1, n, mas2);
//    sortirovka_2 met;
//    met.heapSort(mas2, n);
//    for (i = 0; i < n; i++)
//        cout << mas2[i] << " "; cout << endl;
//
//    cout << "\tбыстрая сортировка:      \t";
//    for (i = 0; i < n; i++)
//        copy_n(mas1, n, mas3);
//    sortirovka_3 meta;
//    meta.quickSort(mas2, n);
//    for (i = 0; i < n; i++)
//        cout << mas2[i] << " "; cout << endl; cout << endl;
//
//
//    cout << "Сколько элементов в массиве? -" << endl;
//    cin >> n1;
//    int* a = new int[n1];
//    int* b = new int[n1];
//    int* c = new int[n1];
//#pragma region MyRegion
//
//
//
//
//
//
//    //for (int i = 0; i < n1; i++)
//    //{
//    //    a[i] = rand() % 50;
//    //    b[i] = i;
//    //    c[i] = n1 - i - 1;
//    //}
//
//    //int* massiv1 = new int[n1];
//    //int* massiv2 = new int[n1];
//    //int* massiv3 = new int[n1];
//    //double results[9];
//
//    //copy_n(a, n, massiv1);
//    //copy_n(b, n, massiv2);
//    //copy_n(c, n, massiv3);
//    //sortirovka_1 q, w, e;
//    //clock_t start0 = clock();
//    //q.pryamoi(massiv1, n1);
//    //results[0] = (clock() - start0) / CLOCKS_PER_SEC;
//
//    //clock_t start1 = clock();
//    //w.pryamoi(massiv2, n1);
//    //results[1] = (clock() - start1) / CLOCKS_PER_SEC;
//
//    //clock_t start2 = clock();
//    //e.pryamoi(massiv3, n1);
//    //results[3] = (clock() - start2) / CLOCKS_PER_SEC;
//
//    //copy_n(a, n, massiv1);
//    //copy_n(b, n, massiv2);
//    //copy_n(c, n, massiv3);
//    //sortirovka_2 r, t, y;
//    //clock_t start3 = clock();
//    //r.heapSort(massiv1, n1);
//    //results[4] = (clock() - start3) / CLOCKS_PER_SEC;
//
//    //clock_t start4 = clock();
//    //t.heapSort(massiv2, n1);
//    //results[5] = (clock() - start4) / CLOCKS_PER_SEC;
//
//    //clock_t start5 = clock();
//    //y.heapSort(massiv3, n1);
//    //results[6] = (clock() - start5) / CLOCKS_PER_SEC;
//
//    //copy_n(a, n, massiv1);
//    //copy_n(b, n, massiv2);
//    //copy_n(c, n, massiv3);
//    //sortirovka_3 u, p, o;
//    //clock_t start6 = clock();
//    //u.quickSort(massiv1, n1);
//    //results[7] = (clock() - start6) / CLOCKS_PER_SEC;
//
//    //clock_t start7 = clock();
//    //p.quickSort(massiv2, n1);
//    //results[8] = (clock() - start7) / CLOCKS_PER_SEC;
//#pragma endregion
//
//
//            int l;
//            //ранд
//            for (l = 0; l < n1; l++)
//                a[l] = 1 + rand() % 500000;
//        //  for (l = 0; l < n1; l++)
//       //       cout << a[l] << " "; cout << endl;
//           //отсортированный
//            for (l = 0; l < n1; l++)
//                copy_n(a, n1, b);
//            sortirovka_1 v;
//            v.pryamoi(b, n1);
//         // for (l = 0; l < n1; l++)
//         //     cout << b[l] << " "; cout << endl;
//            //обратно
//            for (l = 0; l < n1; l++)
//                copy_n(a, n1, c);
//            
//            sortirovka_4 vor;
//            vor.bobble(c, n1);
//                //     for (l = 0; l < n1; l++)
//           //   cout << c[l] << " "; cout << endl;
//
//           cout << "данные о скорости работы";
//         cout << "\t\tРандомный массив\tОтсортированный массив\tОбратно отсортированный массив"; cout << endl;
//         cout << "Сортировка прямого выбора";
//                           
//       
//        sortirovka_1 q,w,e;
//        high_resolution_clock::time_point start = high_resolution_clock::now();
//        q.pryamoi(a, n1); 
//        high_resolution_clock::time_point end = high_resolution_clock::now();
//        duration<double, milli> duration1 = end - start;
//        start = high_resolution_clock::now();
//        w.pryamoi(b, n1); 
//        end = high_resolution_clock::now();
//        duration<double, milli> duration2 = end - start;
//        start = high_resolution_clock::now();
//        e.pryamoi(c, n1);
//        end = high_resolution_clock::now();
//        duration<double, milli> duration3 = end - start;
//        cout << "\t\t" << duration1.count() << " сек";
//        cout << "\t\t" << duration2.count() << " сек";
//        cout << "\t\t" << duration3.count() << " сек";
//        cout << endl;
//        //cout << time1 << (clock() - time) / CLOCKS_PER_SEC << " сек";
//        //cout << endl;
//        
//        cout << "Пирамидальная сортировка";
//        
//       // sortirovka_2 r,t,y;
//       // time = clock();
//       //  r.heapSort(a, n1); cout << "\t\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
//       //  time = clock();
//       //  t.heapSort(b, n1); cout << "\t\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
//       //  time = clock();
//       //  y.heapSort(c, n1); cout << "\t\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
//       // cout << endl;
//       //// cout << time2 << (clock() - time) / CLOCKS_PER_SEC << " сек" << endl;
//     
//       // cout << "Быстрая сортировка";
//       //
//       // sortirovka_3 u,p,o;
//       //  time = clock();
//       //  u.quickSort(a, n1); cout << "\t\t\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
//       //  time = clock();
//       //  p.quickSort(b, n1); cout << "\t\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
//       //  time = clock();
//       //  o.quickSort(c,n1); cout << "\t\t" << (clock() - time) / CLOCKS_PER_SEC << " сек";
//       //      cout << endl;
//        //cout << time3 << (clock() - time) / CLOCKS_PER_SEC << " сек" << endl;
//        //cout << endl;
// 
//
//	system("pause");
//	return 0;
//}