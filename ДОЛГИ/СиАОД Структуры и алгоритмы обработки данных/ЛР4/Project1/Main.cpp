#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

// ������� ��� �������������� ������ � ������� ��������
void ToLowerCase(string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

// ������� ��� �������� �������� �� ������
void RemoveSpaces(string& str) {
    string result;
    for (char c : str) {
        if (c != ' ') {
            result += c;
        }
    }
    str = result;
}

// ������� ��� ��������� ���� ��������� ����������
void GenerateCombinations(int n, string firstLine, string secondLine, ofstream& outputFile) {
    int totalCombinations = pow(2, n); // ����� ���������� ����������

    for (int i = 0; i < totalCombinations; i++) {
        string modifiedLine = firstLine;
        int indices[20]; // ������ ��� �������� �������� ��������, ������� ����� ����������
        int count = 0;

        // ���������� ���� ����� i
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                indices[count++] = j; // ��������� ������ �������������� �������
            }
        }

        // ����������� ������� �� ������� �� ������� ��������, ��������� ��� � �������� �������
        for (int j = count - 1; j >= 0; j--) {
            modifiedLine.erase(modifiedLine.begin() + indices[j]);
        }

        // ���� ���������� ������ ����� ������ ������, ���������� ���������� � ��������� ����
        if (modifiedLine == secondLine) {
            for (int j = 0; j < count; j++) {
                outputFile << (indices[j] + 1) << " "; // +1 ��� ������ ������ �������
            }
            outputFile << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    // ������ ���������� �����
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cout << "�� ������� ������� ���� input.txt" << endl;
        return 1;
    }

    string firstLine, secondLine;
    getline(inputFile, firstLine);
    getline(inputFile, secondLine);
    inputFile.close();

    if (firstLine.empty() || secondLine.empty()) {
        cout << "������ ���� 2 ������" << endl;
        return 1;
    }

    // ���������� ����� � ������� �������� � �������� ��������
    ToLowerCase(firstLine);
    RemoveSpaces(firstLine);

    ToLowerCase(secondLine);
    RemoveSpaces(secondLine);

    // �������� �� ��������� �����
    if (firstLine == secondLine) {
        cout << "������ ���������� �����" << endl;
        return 0;
    }

    if (firstLine.length() < secondLine.length()) {
        cout << "���������� �������� � ����������� ����" << endl;
        return 1;
    }

    int n = firstLine.length();
    if (n > 20) {
        cout << "������ ����������, ��������� ������ ���� ������ ��� ����� 20" << endl;
        return 1;
    }

    // ��������� ���� ��������� ���������� ����������� ��������
    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        cout << "�� ������� ������� ���� output.txt" << endl;
        return 1;
    }

    GenerateCombinations(n, firstLine, secondLine, outputFile);
    outputFile.close();

    return 0;
}