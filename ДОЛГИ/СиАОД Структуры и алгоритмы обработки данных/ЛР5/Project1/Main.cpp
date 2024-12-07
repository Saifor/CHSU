#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

int main() {
	ifstream input("input.txt");
	if (!input.is_open()) {
		cout << "�� ������� ������� ���� input.txt" << endl;
		return 1;
	}

	// ������ ��������� � �������� ���������
	int i1, j1, i2, j2;
	cout << "i1 = ";
	cin >> i1;
	cout << "j1 = ";
	cin >> j1;
	cout << "i2 = ";
	cin >> i2;
	cout << "j2 = ";
	cin >> j2;

	int N1, N2; //������������� ������� �������
	input >> N1 >> N2;
	if (N1 > 20 || N2 > 20) {
		cout << "������� ������� �� ������ ��������� 20!" << endl;
		return 1;
	}

	int sum = 1;
	int** data = new int* [N1];
	for (int i = 0; i < N1; i++) {
		data[i] = new int[N2];
		for (int j = 0; j < N2; j++) {
			input >> data[i][j];
			sum += data[i][j];
		}
	}

	int** sums = new int* [N1];
	for (int i = 0; i < N1; i++) {
		sums[i] = new int[N2];
		for (int j = 0; j < N2; j++) {
			sums[i][j] = sum;
		}
	}
	sums[i1][j1] = data[i1][j1]; // ��������� �����

	char** way = new char* [N1];
	for (int i = 0; i < N1; i++) {
		way[i] = new char[N2];
		for (int j = 0; j < N2; j++) {
			way[i][j] = '0';
		}
	}

	bool IsChanged = true; //���� ��������� (������ �� �������)
	while (IsChanged == true) {
		IsChanged = false;

		for (int i = 0; i < N1; i++) {
			for (int j = 0; j < N2; j++) {
				if (!(i == i1 && j == j1) && data[i][j] != 0) {
					if (j - 1 >= 0) {
						if (data[i][j] + sums[i][j - 1] < sums[i][j]) { // ���� �������� ����� ������ ������ sums
							sums[i][j] = data[i][j] + sums[i][j - 1];
							way[i][j] = '<';
							IsChanged = true;
						}
					}

					if (i - 1 >= 0) {
						if (data[i][j] + sums[i - 1][j] < sums[i][j]) { // ���� �������� ������� ������ ������ sums
							sums[i][j] = data[i][j] + sums[i - 1][j];
							way[i][j] = '^';
							IsChanged = true;
						}
					}

					if (j + 1 < N2) {
						if (data[i][j] + sums[i][j + 1] < sums[i][j]) { //���� �������� ������ ������ ������ sums
							sums[i][j] = data[i][j] + sums[i][j + 1];
							way[i][j] = '>';
							IsChanged = true;
						}
					}

					if (i + 1 < N1) {
						if (data[i][j] + sums[i + 1][j] < sums[i][j]) { // ���� �������� ������ ������ ������ sums
							sums[i][j] = data[i][j] + sums[i + 1][j];
							way[i][j] = 'v';
							IsChanged = true;
						}
					}
				}
			}
		}
	}

	bool** color = new bool* [N1]; // ������ ������
	for (int i = 0; i < N1; i++) {
		color[i] = new bool[N2];
		for (int j = 0; j < N2; j++) {
			color[i][j] = false; // �������
		}
	}

	int x = i2; // �������� ������� ��������� (�����)
	int y = j2;
	while (x != i1 || y != j1) { // ���� ������� - ���� ����
		color[x][y] = true;
		if (way[x][y] == '<') {
			y--;
		}
		else if (way[x][y] == '^') {
			x--;
		}
		else if (way[x][y] == '>') {
			y++;
		}
		else if (way[x][y] == 'v') {
			x++;
		}
	}
	color[x][y] = true;
	int ko = 0;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < N2; j++) {
			if (color[i][j] == true) { // ���� ������� ���, ��� ��� �����, �� �����������
				SetConsoleTextAttribute(hConsole, 12);// ��������� �����
				cout << data[i][j] << " "; // ������� ����������� �������
				ko += data[i][j];
				SetConsoleTextAttribute(hConsole, 7);// ��������� ����� � �����
			}
			else {//����� ������ ������� ������� ������
				cout << data[i][j] << " ";
			}
		}
		cout << endl;

	}
	cout << "Sum: " << ko << endl << endl;

	system("pause");
	return 0;
}
