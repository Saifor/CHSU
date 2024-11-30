#include <Windows.h>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Node {
	string word;
	int k;
	Node* left, * right;
};

void formTree(Node*& node, string word) {
	if (node == NULL) {
		node = new Node;
		node->word = word;
		node->k = 1;
		node->left = NULL;
		node->right = NULL;
	}
	else
		if (word < node->word)
			formTree(node->left, word);
		else
			if (word > node->word)
				formTree(node->right, word);
			else node->k++;
}

void printTree(Node* node, ofstream& file) {
	if (node != NULL)
	{
		printTree(node->left,file);
		file << node->word << " - " << node->k << endl;
		printTree(node->right,file);
	}
}
int FindMax(Node* node, int max) {
	if (node != NULL)
	{
		if (node->k > max) max = node->k;
		max = FindMax(node->left, max);
		max = FindMax(node->right, max);
	}
	return max;
}
int PrintMax(Node* node, int* firstmax, int* secondmax, ofstream& file) {
	if (node != NULL)
	{
		if (node->k == *firstmax) {
			file << node->word << " - " << node->k << endl;
		}
		else if (node->k < *firstmax && node->k > *secondmax) {
			*secondmax = node->k;
		}
		PrintMax(node->left, firstmax, secondmax, file);
		PrintMax(node->right, firstmax, secondmax, file);
	}
	return *secondmax;
}
void printTree2(Node* node, ofstream &file) {

	int firstmax = FindMax(node, 0);
	int secondmax = 0;
	while (PrintMax(node, &firstmax, &secondmax, file) != 0) {
		firstmax = secondmax;
		secondmax = 0;
	}
}
void writeBySize(Node* node, int size, ofstream& file) {
	if (node != NULL) {

		if (node->word.size() == size)
			file << node->word << " - " << node->k << endl;
		writeBySize(node->left, size, file);
		writeBySize(node->right, size, file);
	}
}
void FindWord(Node* node, string word) {
	if (node != NULL) {
		if (node->word == word) {
			cout << node->word << " - " << node->k << endl;
			return;
		}
		FindWord(node->left, word);
		FindWord(node->right, word);
	}
}
void main() {

	SetConsoleCP(1251);
	setlocale(LC_ALL, "ru");
	ifstream file;
	string word, filename;
	Node* root = NULL;
	char c;

	cout << "Введите имя файла" << endl;
	//cin >> filename;
	file.open("ви.txt");
	while (file.read((char*)&c, sizeof(c))) {
		if (!((c >= 'А' && c <= 'я') || (c >= 'A' && c <= 'Z') || c=='ё' || c == 'Ё' || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))) {
			if (word != "") {
				formTree(root, word);
				word = "";
			}
		}
		else {
			word += c;
		}
	}
	if (word != "") formTree(root, word);
	file.close();
	while (true) {
		int choise;
		cout << "Выберите действие" << endl;
		cout << "1 - Вывести слова по алфавиту" << endl << "2 - Вывести слова по частоте" << endl << "3 - Поиск слова" << endl << "4 - Фильтрация по длине" << endl << "5 - Завершить работу" << endl;
		cin >> choise;
		if (choise == 1) {
			cout << "Введите имя файла" << endl;
			cin >> filename;
			ofstream file2(filename);
			printTree(root, file2);
			file2.close();
		}
		else if (choise == 2) {
			cout << "Введите имя файла" << endl;
			cin >> filename;
			ofstream file2(filename);
			printTree2(root, file2);
			file2.close();
		}
		else if (choise == 3) {
			cout << "Введите слово" << endl;
			cin >> word;
			FindWord(root, word);
		}
		else if (choise == 4) {
			cout << "Введите длину" << endl;
			int len;
			cout << "Введите имя файла" << endl;
			cin >> filename;
			ofstream file2(filename);
			cin >> len;
			writeBySize(root, len, file2);
			file2.close();
		}
		else break;
	}
	system("pause");
}
