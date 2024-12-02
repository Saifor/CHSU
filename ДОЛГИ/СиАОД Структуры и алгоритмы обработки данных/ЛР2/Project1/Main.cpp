#include<iostream>
using namespace std;

//В этой структуре определены три поля : data для хранения значения узла и указатели left и right для связи с левым и правым потомком.
struct Node {
	int data;
	Node* left, * right;
};

// Функция add отвечает за добавление нового узла в бинарное дерево.
// Если переданный узел node равен NULL, создается новый узел с данными x и указателями на потомков,
// иначе функция случайным образом выбирает, добавлять новый узел в левую или правую ветвь, и рекурсивно вызывает себя для соответствующего поддерева.
void add(int x, Node*& node) {
	if (node == NULL) {
		node = new Node;
		node->data = x;
		node->left = NULL;
		node->right = NULL;
	} else {
		int rand_branch = rand() % 2;
		if (rand_branch)
			add(x, node->right);
		else
			add(x, node->left);
	}
}

// В данной функции генерируется случайное бинарное дерево заданного размера size.
// Для каждого узла в цикле генерируется случайное значение randomValue от 0 до 100, и затем это значение добавляется в дерево с помощью вызова функции add.
void buildRandomTree(Node*& root, int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		int randomValue = rand() % 100; // Генерация случайного числа от 0 до 99
		add(randomValue, root);
	}
}

// Прямой обход:
// Функция straightPrintTree выводит значения узлов дерева в порядке прямого обхода: 
// сначала текущий узел, затем левое поддерево и правое поддерево. 
// Рекурсивно обрабатываются левое и правое поддеревья.
void straightPrintTree(Node* node) {
	if (node != NULL) {
		cout << node->data << " ";
		straightPrintTree(node->left);
		straightPrintTree(node->right);
	}
}
// Обратный обход:
// В функции reversePrintTree значения узлов выводятся в обратном порядке обхода: 
// сначала левое поддерево, затем правое поддерево и текущий узел. 
// Рекурсивно обрабатываются левое и правое поддеревья.
void reversePrintTree(Node* node) {
	if (node != 0) {
		reversePrintTree(node->left);
		reversePrintTree(node->right);
		cout << node->data << " ";
	}
}
// Cимметричный обход:
// Функция symmetricalPrintTree осуществляет симметричный обход дерева, выводя значения узлов в порядке:
// левое поддерево, текущий узел, правое поддерево.
// Рекурсивно обрабатываются левое и правое поддеревья.
void symmetricalPrintTree(Node* node)
{
	if (node != 0) {
		symmetricalPrintTree(node->left);
		cout << node->data << " ";
		symmetricalPrintTree(node->right);
	}
}

// Количество листьев в дереве:
// Если узел равен NULL, возвращается 0.
// Если узел является листовым (не имеет потомков), возвращается 1.
// Иначе рекурсивно вызывается для левого и правого поддерева, и возвращается их сумма.
int countLeaves(Node* node) {
	if (node == NULL) return 0;
	else if (node->left == NULL && node->right == NULL)
		return 1;
	return countLeaves(node->left) + countLeaves(node->right);
}

// Вывести листья в дереве:
// Если узел является листовым (не имеет потомков), выводится значение узла.
void printLeaves(Node* node) {
	if (node != NULL) {
		if (node->left == NULL && node->right == NULL)
			cout << node->data << " ";
		else {
			printLeaves(node->left);
			printLeaves(node->right);
		}
	}
}

int main()
{
	srand(time(0));
	Node* root = NULL;
	int elements = rand() % 10 + 1;
	buildRandomTree(root, elements);

	// Прямой обход
	cout << "straightPrintTree: "; 
	straightPrintTree(root);
	cout << endl;

	// Обратный обход
	cout << "reversePrintTree: "; 
	reversePrintTree(root);
	cout << endl;

	// Симметричный обход
	cout << "symmetricalPrintTree: "; 
	symmetricalPrintTree(root);
	cout << endl << endl;

	// Функция количества листьев в дереве:
	int leaves = countLeaves(root);
	cout << "Count of leaves: " << leaves << endl;
	
	// Функция вывода листьев в дереве:
	cout << "Leaves: ";
	printLeaves(root);
	cout << endl;
	system("pause");

}
