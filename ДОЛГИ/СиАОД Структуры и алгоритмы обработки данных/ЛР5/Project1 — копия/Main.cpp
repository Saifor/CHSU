#include <iostream>
#include <fstream>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    ifstream input("input.txt");
    if (!input.is_open()) {
        cout << "Не удается открыть файл input.txt" << endl;
        return 1;
    }

    int N1, N2;
    input >> N1 >> N2;
    if (N1 > 20 || N2 > 20) {
        cout << "Размеры массива не должны превышать 20!" << endl;
        return 2;
    }
    else if (N1 < 0 || N2 < 0) {
        cout << "Размеры массива не могут быть меньше 0!" << endl;
        return 3;
    }
    else {
        cout << "N1 = " << N1 << ", N2 = " << N2 << endl << endl;
    }

    int i1, j1, i2, j2;
    cout << "Введите координаты первой точки:\nx = ";
    cin >> i1;
    cout << "y = ";
    cin >> j1;
    cout << "Введите координаты второй точки:\nx = ";
    cin >> i2;
    cout << "y = ";
    cin >> j2;
    cout << endl;

    if (i1 >= N1 || j1 >= N1 || j1 < 0 || i1 < 0 ) {
        cout << "Координаты первой клетки не должны выходить за пределы числового массива!" << endl;
        return 4;
    }
    if (i2 < 0 || j2 < 0 || i2 >= N2 || j2 >= N2) {
        cout << "Координаты второй клетки не должны выходить за пределы числового массива!" << endl;
        return 5;
    }

    int** data = new int* [N1];
    for (int i = 0; i < N1; i++) {
        data[i] = new int[N2];
        for (int j = 0; j < N2; j++) {
            input >> data[i][j];
        }
    }
    
    if (!data[i1][j1]) {
        cout << "Клетка начальных координат с нулём. В клетки с нулями заходить нельзя." << endl;
    } else if(!data[i2][j2]) {
        cout << "Клетка конечных координат с нулём. В клетки с нулями заходить нельзя." << endl;
    }

    int** minSum = new int* [N1];
    for (int i = 0; i < N1; i++) {
        minSum[i] = new int[N2];
        for (int j = 0; j < N2; j++) {
            minSum[i][j] = 1e9; // Инициализация большим значением
        }
    }
    minSum[i1][j1] = data[i1][j1];

    char** way = new char* [N1];
    for (int i = 0; i < N1; i++) {
        way[i] = new char[N2];
        for (int j = 0; j < N2; j++) {
            way[i][j] = '0';
        }
    }

    bool IsChanged = true;
    while (IsChanged) {
        IsChanged = false;
        for (int i = 0; i < N1; i++) {
            for (int j = 0; j < N2; j++) {
                int dx[] = { -1, 0, 1, 0 };
                int dy[] = { 0, 1, 0, -1 };
                char dir[] = { '^', '>', 'v', '<' };

                for (int k = 0; k < 4; ++k) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if (ni >= 0 && ni < N1 && nj >= 0 && nj < N2) { // Не граница ли
                        if (data[ni][nj] != 0) { // Не 0 ли
                            if (data[i][j] + minSum[ni][nj] < minSum[i][j]) { // Минимальный ли
                                minSum[i][j] = data[i][j] + minSum[ni][nj];
                                way[i][j] = dir[k];
                                IsChanged = true;
                            }
                        }
                    }
                }
            }
        }
    }

    bool** color = new bool* [N1];
    for (int i = 0; i < N1; i++) {
        color[i] = new bool[N2];
        for (int j = 0; j < N2; j++) {
            color[i][j] = false;
        }
    }

    int x = i2;
    int y = j2;
    if (minSum[x][y] == 1e9) {
        cout << "Пути между координатами нет!" << endl;
        return 6;
    }

    while (x != i1 || y != j1) {
        color[x][y] = true;
        if (way[x][y] == '<') y--;
        else if (way[x][y] == '^') x--;
        else if (way[x][y] == '>') y++;
        else if (way[x][y] == 'v') x++;
    }
    color[x][y] = true;

    int totalSum = 0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    for (int i = 0; i < N1; i++) {
        for (int j = 0; j < N2; j++) {
            if (color[i][j]) {
                SetConsoleTextAttribute(hConsole, 12);
                cout << setw(2) << data[i][j];
                cout << " ";
                totalSum += data[i][j];
                SetConsoleTextAttribute(hConsole, 7);
            }
            else {
                cout << setw(2) << data[i][j] << " ";
            }
        }
        cout << endl;
    }

    cout << endl << "Минимальная сумма чисел пути: " << totalSum << endl << endl;
    system("pause");
    return 0;
}
