#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

void main() {

	ifstream input("input.txt");
	setlocale(LC_ALL, "Russian");

	int i1, j1, i2, j2;
	cout << "������� ��������� ������ �� ��������� i1="; //���� 1 ������
	cin >> i1;
	cout << "������� ��������� ������ �� ����������� j1=";
	cin >> j1;
	cout << "������� �������� ������ �� ��������� i2=";//���� 2 ������
	cin >> i2;
	cout << "������� �������� ������ �� ����������� j2=";
	cin >> j2;

	int N1, N2; //������������� ������� �������
	input >> N1 >> N2;//������ �� �����
	if (N1 >= 20 && N2 >= 20) {
		int sum = 1;
		int** data = new int* [N1]; // �������� �������
		for (int i = 0; i < N1; i++) {
			data[i] = new int[N2];
			for (int j = 0; j < N2; j++) {
				input >> data[i][j]; // 
				sum += data[i][j];// 
			}
		}

		int** sums = new int* [N1];//������� ����
		for (int i = 0; i < N1; i++) {
			sums[i] = new int[N2];
			for (int j = 0; j < N2; j++) {
				sums[i][j] = sum;
			}
		}
		sums[i1][j1] = data[i1][j1];//

		char** way = new char* [N1];// ����� ����������� ����� � ���� ������
		for (int i = 0; i < N1; i++) {//(����)
			way[i] = new char[N2];
			for (int j = 0; j < N2; j++) {
				way[i][j] = '0';// ����������� 0
			}
		}

		bool IsChanged = true; // ����. ������ �� �������
		while (IsChanged == true) {
			IsChanged = false;			//����������� ���������(�����������) ���� ����������� ������� ����� ��������

			for (int i = 0; i < N1; i++) {		// ������� ����
				for (int j = 0; j < N2; j++) {  //���� �� �������
					if (!(i == i1 && j == j1) && data[i][j] != 0 && data[i][j] > 0) {
						if (j - 1 >= 0) {// 
							if (data[i][j] + sums[i][j - 1] < sums[i][j]) {
								sums[i][j] = data[i][j] + sums[i][j - 1];// ����������� �������� �������� ������
								way[i][j] = '<';// ����������� �������� ������� �������� <
								IsChanged = true;// ������ �������
							}
						}

						if (i - 1 >= 0) {//
							if (data[i][j] + sums[i - 1][j] < sums[i][j]) {//
								sums[i][j] = data[i][j] + sums[i - 1][j];// ����������� �������� �������� ������
								way[i][j] = '^';// ����������� �������� ������� �������� ^
								IsChanged = true;// ������ �������
							}
						}

						if (j + 1 < N2) {//
							if (data[i][j] + sums[i][j + 1] < sums[i][j]) {//���� �������� ������ ������ sums
								sums[i][j] = data[i][j] + sums[i][j + 1];// ����������� �������� �������� ������
								way[i][j] = '>';// ����������� �������� ������� �������� >
								IsChanged = true;// ������ �������
							}
						}

						if (i + 1 < N1) {//
							if (data[i][j] + sums[i + 1][j] < sums[i][j]) {//���� �������� ������ ������ sums
								sums[i][j] = data[i][j] + sums[i + 1][j];// ����������� �������� �������� ������
								way[i][j] = 'v';// ����������� �������� ������� �������� v
								IsChanged = true;// ������ �������
							}
						}
					}
				}
			}
		}

		bool** color = new bool* [N1];   //������ ������
		for (int i = 0; i < N1; i++) {
			color[i] = new bool[N2];
			for (int j = 0; j < N2; j++) {
				color[i][j] = false;// �������
			}
		}

		int i_way = i2;//�������� ������� ���������(�����)
		int j_way = j2;
		while (!(i_way == i1 && j_way == j1)) {// ���� ������� - ���� ����
			color[i_way][j_way] = true;// ����������� ����� ����� �������� true
			if (way[i_way][j_way] == '<') {// ���� ���� < �� ���� �� ������ ������ j_way--
				j_way--;
			}
			else if (way[i_way][j_way] == '^') {// ���� ���� ^ �� ���� �� ������ ������ i_way--
				i_way--;
			}
			else if (way[i_way][j_way] == '>') {// ���� ���� > �� ���� �� ������ ������ j_way++
				j_way++;
			}
			else if (way[i_way][j_way] == 'v') {// ���� ���� v �� ���� �� ������ ������ i_way++
				i_way++;
			}
		}
		color[i_way][j_way] = true;// ����������� ����� ����� �������� true
		int ko = 0;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		cout << endl;
		for (int i = 0; i < N1; i++) {     //��������� �� �������
			for (int j = 0; j < N2; j++) {
				if (color[i][j] == true) {//���� ������� ���, ��� ��� �����, �� �����������
					SetConsoleTextAttribute(hConsole, 12);// ��������� �����
					cout << data[i][j] << " ";//������� ����������� �������
					ko += data[i][j];
					SetConsoleTextAttribute(hConsole, 7);// ��������� ����� � �����
				}
				else {//����� ������ ������� ������� ������
					cout << data[i][j] << " ";
				}
			}
			cout << endl;

		}
		cout << "����� ������������ ���������:" << endl;
		cout << ko << endl;
	}
	else 
	cout << "������� ������ 20!" << endl;
	
	system("pause");
}
