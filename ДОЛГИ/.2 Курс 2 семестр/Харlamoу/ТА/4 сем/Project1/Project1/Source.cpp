// 26; ��������   switch   �  for   ����� �++; �������� �.;
#include <iostream>
using namespace std;

// ���������� � ����� ����� n-������ �������������� ��� �������������� ����������;
void main() {
	int a, n;
	double q, c;
	cout << "Enter the arithmetic/geometric progression step = "; cin >> q; // ���� ���� ���������� �������������;
	cout << "Enter Enter the items to be counted = "; cin >> n; // ���� ���������� ��������� ��������� �������������;
	cout << "Enter number: 1 - arithmetic progression; 2 - geometric progression = "; cin >> a; 
	/*
	����� ������������ ������ ���������� ������������;
	*/
	switch (a){
	case 1: // ���� a = 1, �� ������������� ������� �������������� ����������;
		c = 0; // ����������� �������� �� ���������;
		for (int i = 0; i < n; i++) { // ������� ���-�� ��������� ��������;
			c = c + q; cout << c << endl; // ���������� �������� ���������� � ��� �����;
		}
		break;
	case 2:	// ���� a = 2, �� ������������� ������� ��������������� ����������;
		c = 1; // ����������� �������� �� ���������;
		for (int i = 0; i < n; i++) { // ������� ���-�� ��������� ��������;
			c = c * q; cout << c << endl;  // ���������� �������� ���������� � ��� �����;
		}
		break;
	default: // ���� ����� �������� ����� a;
		cout << "Error wrong number"; // ����� ��������� �� ������;
		break;
	}
	system("pause");
}