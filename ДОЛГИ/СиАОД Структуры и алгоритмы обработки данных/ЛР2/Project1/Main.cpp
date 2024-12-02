#include<iostream>
using namespace std;

//� ���� ��������� ���������� ��� ���� : data ��� �������� �������� ���� � ��������� left � right ��� ����� � ����� � ������ ��������.
struct Node {
	int data;
	Node* left, * right;
};

// ������� add �������� �� ���������� ������ ���� � �������� ������.
// ���� ���������� ���� node ����� NULL, ��������� ����� ���� � ������� x � ����������� �� ��������,
// ����� ������� ��������� ������� ��������, ��������� ����� ���� � ����� ��� ������ �����, � ���������� �������� ���� ��� ���������������� ���������.
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

// � ������ ������� ������������ ��������� �������� ������ ��������� ������� size.
// ��� ������� ���� � ����� ������������ ��������� �������� randomValue �� 0 �� 100, � ����� ��� �������� ����������� � ������ � ������� ������ ������� add.
void buildRandomTree(Node*& root, int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		int randomValue = rand() % 100; // ��������� ���������� ����� �� 0 �� 99
		add(randomValue, root);
	}
}

// ������ �����:
// ������� straightPrintTree ������� �������� ����� ������ � ������� ������� ������: 
// ������� ������� ����, ����� ����� ��������� � ������ ���������. 
// ���������� �������������� ����� � ������ ����������.
void straightPrintTree(Node* node) {
	if (node != NULL) {
		cout << node->data << " ";
		straightPrintTree(node->left);
		straightPrintTree(node->right);
	}
}
// �������� �����:
// � ������� reversePrintTree �������� ����� ��������� � �������� ������� ������: 
// ������� ����� ���������, ����� ������ ��������� � ������� ����. 
// ���������� �������������� ����� � ������ ����������.
void reversePrintTree(Node* node) {
	if (node != 0) {
		reversePrintTree(node->left);
		reversePrintTree(node->right);
		cout << node->data << " ";
	}
}
// C����������� �����:
// ������� symmetricalPrintTree ������������ ������������ ����� ������, ������ �������� ����� � �������:
// ����� ���������, ������� ����, ������ ���������.
// ���������� �������������� ����� � ������ ����������.
void symmetricalPrintTree(Node* node)
{
	if (node != 0) {
		symmetricalPrintTree(node->left);
		cout << node->data << " ";
		symmetricalPrintTree(node->right);
	}
}

// ���������� ������� � ������:
// ���� ���� ����� NULL, ������������ 0.
// ���� ���� �������� �������� (�� ����� ��������), ������������ 1.
// ����� ���������� ���������� ��� ������ � ������� ���������, � ������������ �� �����.
int countLeaves(Node* node) {
	if (node == NULL) return 0;
	else if (node->left == NULL && node->right == NULL)
		return 1;
	return countLeaves(node->left) + countLeaves(node->right);
}

// ������� ������ � ������:
// ���� ���� �������� �������� (�� ����� ��������), ��������� �������� ����.
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

	// ������ �����
	cout << "straightPrintTree: "; 
	straightPrintTree(root);
	cout << endl;

	// �������� �����
	cout << "reversePrintTree: "; 
	reversePrintTree(root);
	cout << endl;

	// ������������ �����
	cout << "symmetricalPrintTree: "; 
	symmetricalPrintTree(root);
	cout << endl << endl;

	// ������� ���������� ������� � ������:
	int leaves = countLeaves(root);
	cout << "Count of leaves: " << leaves << endl;
	
	// ������� ������ ������� � ������:
	cout << "Leaves: ";
	printLeaves(root);
	cout << endl;
	system("pause");

}
