#include "Vector.h"
#include "Laptop.h"
#include "Personal.h"
#include "Server.h"
#include "Smartphone.h"

void main() {
	string name;
	int jad;
	double ch;
	setlocale(LC_ALL, "rus");
	int d = 1;
	int select, select1, index;
	int size;
	bool flag = 1;
	//Laptop a[2];
	//a[0] = Laptop("1", 1, 1, 1);
	//a[1] = Laptop("2", 2, 2, 2);
	//Stack<Laptop> st(2);
	//st.push_back(a[0]);
	//st.push_back(a[1]);
	//st.pop_back();
	cout << "1 - ������� Laptop, 2 - ������� Personal, 3 - ������� Server, 4 - ������� Smartphone, ������ - �����" << endl;
	cin >> select;
	cout << endl;
	
	switch (select)
	{
	case 1: {
		int wei;
		cout << "������� ������ ������: "; cin >> size; cout << endl;
		int index1 = 0;
		Stack<Laptop> st(size);
		Laptop* arr = new Laptop[size + 1];
		while (flag) {
			cout << "������� �������� ��������: "; cin >> name;
			cout << endl << "������� ���-�� ����: ";
			cin >> jad; cout << endl << "������� �������: ";
			cin >> ch; cout << endl << "������� ���: ";
			cin >> wei; cout << endl;
			arr[index1] = Laptop(name, jad, ch, wei);
			st.push_back(arr[index1]);
			index1++;
			cout << "0 - ��������� ����������, 1 - ����������" << endl;
			cin >> flag;
			cout << endl;
		}
		flag = 1;
		while (flag) {
			cout << "1 - �����, 2 - �������, 3 - ������� �� �������, 4 - ������� ��" << endl;
			cin >> select1; cout << endl;
			if (select1 == 1) {
				double fn;
				cout << "������� �������: "; cin >> fn; cout << endl;
				st.find(fn);
				cout << endl;
			}
			else if (select1 == 2) {
				st.pop_back();
				cout << endl;
			}
			else if (select1 == 3) {
				cout << "������� ������ ��������: "; cin >> index; cout << endl;
				st.at(index);
				cout << endl;
			}
			else {
				for (int i = 0; i < st.count; i++) {
					st.at(i);
					cout << endl;
				}
			}
			cout << "������ ���������?(0 - ��, 1 - ���)" << endl; cin >> flag; cout << endl;
		}
		break;
	}
	case 2: {
		int wei;
		cout << "������� ������ ������: "; cin >> size; cout << endl;
		int index1 = 0;
		Stack<Personal> st(size);
		Personal* arr = new Personal[size + 1];
		while (flag) {
			cout << "������� �������� ��������: "; cin >> name;
			cout << endl << "������� ���-�� ����: ";
			cin >> jad; cout << endl << "������� �������: ";
			cin >> ch; cout << endl << "������� ����� ��������: ";
			cin >> wei; cout << endl;
			arr[index1] = Personal(name, jad, ch, wei);
			st.push_back(arr[index1]);
			index1++;
			cout << "0 - ��������� ����������, 1 - ����������" << endl;
			cin >> flag;
			cout << endl;
		}
		flag = 1;
		while (flag) {
			cout << "1 - �����, 2 - �������, 3 - ������� �� �������, 4 - ������� ��" << endl;
			cin >> select1; cout << endl;
			if (select1 == 1) {
				double fn;
				cout << "������� �������: "; cin >> fn; cout << endl;
				st.find(fn);
				cout << endl;
			}
			else if (select1 == 2) {
				st.pop_back();
				cout << endl;
			}
			else if (select1 == 3) {
				cout << "������� ������ ��������: "; cin >> index; cout << endl;
				st.at(index);
				cout << endl;
			}
			else {
				for (int i = 0; i < st.count; i++) {
					st.at(i);
					cout << endl;
				}
			}
			cout << "������ ���������?(0 - ��, 1 - ���)" << endl; cin >> flag; cout << endl;
		}
		break;
	}
	case 3: {
		int wei;
		cout << "������� ������ ������: "; cin >> size; cout << endl;
		int index1 = 0;
		Stack<Server> st(size);
		Server* arr = new Server[size + 1];
		while (flag) {
			cout << "������� �������� ��������: "; cin >> name;
			cout << endl << "������� ���-�� ����: ";
			cin >> jad; cout << endl << "������� �������: ";
			cin >> ch; cout << endl << "������� ������������ ���-�� �������������: ";
			cin >> wei; cout << endl;
			arr[index1] = Server(name, jad, ch, wei);
			st.push_back(arr[index1]);
			index1++;
			cout << "0 - ��������� ����������, 1 - ����������" << endl;
			cin >> flag;
			cout << endl;
		}
		flag = 1;
		while (flag) {
			cout << "1 - �����, 2 - �������, 3 - ������� �� �������, 4 - ������� ��" << endl;
			cin >> select1; cout << endl;
			if (select1 == 1) {
				double fn;
				cout << "������� �������: "; cin >> fn; cout << endl;
				st.find(fn);
				cout << endl;
			}
			else if (select1 == 2) {
				st.pop_back();
				cout << endl;
			}
			else if (select1 == 3) {
				cout << "������� ������ �������� "; cin >> index; cout << endl;
				st.at(index);
				cout << endl;
			}
			else {
				for (int i = 0; i < st.count; i++) {
					st.at(i);
					cout << endl;
				}
			}
			cout << "������ ���������?(0 - ��, 1 - ���)" << endl; cin >> flag; cout << endl;
		}
		break;
	}
	case 4: {
		int wei;
		cout << "������� ������ ������: "; cin >> size; cout << endl;
		int index1 = 0;
		Stack<Smartphone> st(size);
		Smartphone* arr = new Smartphone[size + 1];
		while (flag) {
			cout << "������� �������� ��������: "; cin >> name;
			cout << endl << "������� ���-�� ����: ";
			cin >> jad; cout << endl << "������� �������: ";
			cin >> ch; cout << endl << "���� �� ������(1 - ��, 0 - ���): ";
			cin >> wei; cout << endl;
			arr[index1] = Smartphone(name, jad, ch, wei);
			st.push_back(arr[index1]);
			index1++;
			cout << "0 - ��������� ����������, 1 - ����������" << endl;
			cin >> flag;
			cout << endl;
		}
		flag = 1;
		while (flag) {
			cout << "1 - �����, 2 - �������, 3 - ������� �� �������, 4 - ������� ��" << endl;
			cin >> select1; cout << endl;
			if (select1 == 1) {
				double fn;
				cout << "������� �������: "; cin >> fn; cout << endl;
				st.find(fn);
				cout << endl;
			}
			else if (select1 == 2) {
				st.pop_back();
				cout << endl;
			}
			else if (select1 == 3) {
				cout << "������� ������ �������� "; cin >> index; cout << endl;
				st.at(index);
				cout << endl;
			}
			else {
				for (int i = 0; i < st.count; i++) {
					st.at(i);
					cout << endl;
				}
			}
			cout << "������ ���������?(0 - ��, 1 - ���)" << endl; cin >> flag; cout << endl;
		}
		break;
	}
	default:
		break;
	}
}