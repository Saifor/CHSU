#include <iostream>
using namespace std;
void main() {
	// �������������� ����������
	int a = 150;
	double b = 2.3;
	float c = 2.3e+12;
	int n = 4;
	// ��������� ���� for
	for (int i = 0; i < n; i++) {
		// ��������� switch
		switch (i)
		{
		// ������� �� ����� ���������� ���� int, � ����� �� �����
		case 0:
			cout << a << endl;
			break;
		// ������� �� ����� ���������� ���� double, � ����� �� �����
		case 1:
			cout << b << endl;
			break;
		// ������� �� ����� ���������� ���� float, � ����� �� �����
		case 2:
			cout << c << endl;
		// ���� ������� �� ���������, �� ������� ���������� �� ������
		default:
			cout << "Index out of range";
			break;
		}
	}
}