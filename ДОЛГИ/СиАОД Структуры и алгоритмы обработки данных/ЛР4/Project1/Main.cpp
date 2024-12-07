#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

// Функция для преобразования строки к нижнему регистру
void ToLowerCase(string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

// Функция для удаления пробелов из строки
void RemoveSpaces(string& str) {
    string result;
    for (char c : str) {
        if (c != ' ') {
            result += c;
        }
    }
    str = result;
}

// Функция для генерации всех возможных комбинаций
void GenerateCombinations(int n, string firstLine, string secondLine, ofstream& outputFile) {
    int totalCombinations = pow(2, n); // Общее количество комбинаций

    for (int i = 0; i < totalCombinations; i++) {
        string modifiedLine = firstLine;
        int indices[20]; // Массив для хранения индексов символов, которые будут вычеркнуты
        int count = 0;

        // Перебираем биты числа i
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                indices[count++] = j; // Сохраняем индекс вычеркиваемого символа
            }
        }

        // Вычеркиваем символы по номерам из массива индексов, перебирая его в обратном порядке
        for (int j = count - 1; j >= 0; j--) {
            modifiedLine.erase(modifiedLine.begin() + indices[j]);
        }

        // Если полученная строка равна второй строке, записываем комбинацию в текстовый файл
        if (modifiedLine == secondLine) {
            for (int j = 0; j < count; j++) {
                outputFile << (indices[j] + 1) << " "; // +1 для записи номера символа
            }
            outputFile << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    // Чтение текстового файла
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cout << "Не удается открыть файл input.txt" << endl;
        return 1;
    }

    string firstLine, secondLine;
    getline(inputFile, firstLine);
    getline(inputFile, secondLine);
    inputFile.close();

    if (firstLine.empty() || secondLine.empty()) {
        cout << "Должно быть 2 строки" << endl;
        return 1;
    }

    // Приведение строк к нижнему регистру и удаление пробелов
    ToLowerCase(firstLine);
    RemoveSpaces(firstLine);

    ToLowerCase(secondLine);
    RemoveSpaces(secondLine);

    // Проверка на равенство строк
    if (firstLine == secondLine) {
        cout << "Строки изначально равны" << endl;
        return 0;
    }

    if (firstLine.length() < secondLine.length()) {
        cout << "Невозможно привести к одинаковому виду" << endl;
        return 1;
    }

    int n = firstLine.length();
    if (n > 20) {
        cout << "Ошибка выполнения, элементов должно быть меньше или равно 20" << endl;
        return 1;
    }

    // Генерация всех возможных комбинаций вычеркнутых символов
    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        cout << "Не удается открыть файл output.txt" << endl;
        return 1;
    }

    GenerateCombinations(n, firstLine, secondLine, outputFile);
    outputFile.close();

    return 0;
}