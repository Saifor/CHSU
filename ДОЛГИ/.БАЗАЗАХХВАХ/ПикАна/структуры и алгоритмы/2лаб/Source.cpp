#include <iostream>
#include <time.h>
using namespace std;

class Tree {
private:
	struct Node {
		int data; //поле данных
		Node* left, * right; //указатель на левый и правый потомок
	};
	Node* root; //указатель на узел
	void show_tree_Pr(Node* node) { //прямой обход
		if (node != NULL) { //Пока не встретится пустой узел
			cout << node->data << " ";//Отображаем корень дерева
			show_tree_Pr(node->left); //Рекурсивная функция для левого поддерева
			show_tree_Pr(node->right);//Рекурсивная функция для правого поддерева
		}
	}
	void show_tree_Obr(Node* node) {//обратный обход
		if (node != NULL) {//Пока не встретится пустой узел
			show_tree_Obr(node->left);//Рекурсивная функция для левого поддерева
			show_tree_Obr(node->right);//Рекурсивная функция для правого поддерева
			cout << node->data << " ";//Отображаем корень дерева
		}
	}
	void show_tree_Sim(Node* node) {//симметричный обход
		if (node != NULL) {//Пока не встретится пустой узел
			show_tree_Sim(node->left);//Рекурсивная функция для левого поддерева
			cout << node->data << " ";//Отображаем корень дерева
			show_tree_Sim(node->right);//Рекурсивная функция для правого поддерева
		}
	}
public:
	Tree() {// функция 
		root = NULL;//root присвоить NULL
	}
	void add(Node*& root, int value) {//Добавление узлов в дерево
		if (root == NULL) {// Если дерева нет, то формируем корень
			root = new Node;// память под узел
			root->data = value;// поле данных
			root->left = NULL;    // ветви инициализируем пустотой
			root->right = NULL;   //
		}
		else {
			if (rand() % 2) {// условие добавление левого потомка
				//cout << " l";
				add(root->left, value);
			}
			else {// условие добавление правого потомка
				//cout << " r";
				add(root->right, value);
			}
		}
	}

	void add(int value) {
		add(root, value);
	}

	void show_Pr() {
		show_tree_Pr(root);
		cout << endl;
	}

	void show_Obr() {
		show_tree_Obr(root);
		cout << endl;
	}

	void show_Sim() {
		show_tree_Sim(root);
		cout << endl;
	}

	bool DeleteElement(Node* node) { //удаление элемента поддерева
		if (node != NULL) {

			if (node->left != NULL) {
				node->data = node->left->data;
				if (DeleteElement(node->left)) {
					node->left = NULL;
				}
			}
			else if (node->right != NULL) {
				node->data = node->right->data;
				if (DeleteElement(node->right)) {
					node->right = NULL;
				}
			}
			else {
				delete node;
				return true;
			}
		}
		return false;
	}

	bool DeleteEven(Node* node) {
		if (node != NULL) {
			if (DeleteEven(node->left)) {//если идем в лево - удаляем
				node->left = NULL;
			}
			if (DeleteEven(node->right)) {//если идем в право - удаляем
				node->right = NULL;
			}
			if (node->data % 2 == 0) {//если элемент четный, то мы его удаляем
				if (DeleteElement(node)) {
					return true;
				}
			}
		}
		return false;
	}

	void DeleteEven() {
		DeleteEven(root);
	}
};

void main() {
	srand(time(0));
	int TreeSize = rand() % 5 + 10;
	Tree tree;
	for (int i = 0; i < TreeSize; i++) {
		int v = rand() % 1000;
		cout << v;
		tree.add(v);
		cout << endl;
	}

	cout << "Pre-order" << endl;
	tree.show_Pr();//вывод прямого обхода
	cout << "Post-order" << endl;
	tree.show_Obr();//вывод обратного обхода
	cout << "In-order" << endl;
	tree.show_Sim();//вывод симметричного обхода

	tree.DeleteEven();//удаление четных элементов

	cout << "Pre-order" << endl;
	tree.show_Pr();//вывод нового дерева

	system("pause");
}

