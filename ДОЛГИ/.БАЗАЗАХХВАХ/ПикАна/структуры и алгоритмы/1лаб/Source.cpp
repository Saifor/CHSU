#include <locale.h>
#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////////��������
struct Stack2 {
    int top; int* data; //top - ������ �������� �������� �����, data - ��������� �� ������� �������
};
void InitStack2(Stack2& st, int capacity) {
    st.data = new int[capacity];
    st.top = -1;
}
void push2(Stack2& st, int value) {//���������� � ����
    st.data[++st.top] = value;
}
int pop2(Stack2& st) {//�������� �� �����
    return st.data[st.top--];
}
void nullStack2(Stack2& st) {//��������� �����
    st.top = -1;
}
bool empty2(Stack2& st) {//�������� �� �������
    return st.top == -1;
}
void printstack2(Stack2& st) {//����� ����� � ������������
    if (!empty2(st)) {
        int i = st.top;
        while (i >= 0) {
            cout << st.data[i--] << " ";
        } cout << endl;
    }
    else cout << " �����" << endl;
}
struct Queue2 {
    int head, tail, size; // head - ����, ��� �������� ������� ������� ���������, tail - ����������, size - ������ �������
    int* data; // ��������� �� ������ ������� �������
};
void nullQueue2(Queue2& q) {
    q.head = 0;
    q.tail = q.size - 1;
}
void InitQueue2(Queue2& q, int capacity) {// ��������� ������� �������
    q.size = capacity + 1;
    q.data = new int[q.size];
    nullQueue2(q);
}
int next2(Queue2& q, int n) { // �������, ������������ �������� ���������� ��������
    return (n + 1) % q.size;
}
bool empty2(Queue2& q) {// �������, ����������� ������� �� �������
    return next2(q, q.tail) == q.head;
}
void add2(Queue2& q, int value) {// ���������� � ������� ���������
    if (next2(q, next2(q, q.tail)) == q.head)// �������� �� ������������
    {
        cout << "������� �����������" << endl;
    }
    else {
        q.tail = next2(q, q.tail);
        q.data[q.tail] = value;
    }
}
int del2(Queue2& q) { //����� ������ �������
    if (empty2(q)) { cout << "������� �����" << endl; return 0; }
    else {
        int d = q.data[q.head];
        q.head = next2(q, q.head);
        return d;
    }
}
void printqueue2(Queue2& q) { // ����� �������
    if (empty2(q)) { cout << "������� �����" << endl; }
    else {
        int i = q.head;
        while (i != q.tail + 1) {
            cout << q.data[i] << " ";
            i = next2(q, i);
        } cout << endl;
    }
}
//////////////////////////////////////////////////������������ �������
//������� ���� ������������ �������
struct Stack {
    int data; Stack* next;// data -  ����, ��� ��������� ������, next - ��������� �� �������� ������� ������
};
void InitStack(Stack*& top) {
    top = NULL;
}
void push(Stack*& top, int value) {//���������� �������� � ����
    Stack* tmp = new Stack;
    tmp->next = top;
    top = tmp;
    top->data = value;
}
int pop(Stack*& top) {//�������� �������� �� �����
    Stack* tmp = top;
    int d = top->data;
    top = top->next;
    return d;
}
bool empty(Stack*& top) {// �������� ����� �� �������
    return top == NULL;
}
void nullStack(Stack*& top) {//��������� �����
    Stack* tmp;
    while (!empty(top)) {
        tmp = top;
        top = top->next;
        delete(tmp);
    }
}
void printstack(Stack*& top) {// ����� ����� � ��������� �����
    Stack* tmp = top;
    if (tmp == NULL) cout << "�����������." << endl;
    while (!tmp == NULL) {
        int d = tmp->data;
        tmp = tmp->next;
        cout << d << " ";
    } delete (tmp);
}
void search(Stack*& top, int n) {//���������� ���������� ���������
    Stack* tmp = top;
    do {
        if (n == pop(tmp))
            break;
        if (empty(tmp))
            push(top, n);
    } while (!empty(tmp));
}
//������� ������� ������������ �������
class Queue {
private:
    struct Queue1 {
        int data;// ����, ��� ��������� ������ 
        Queue1* next;//��������� �� �������� ������� ������
    };
    Queue1* head, * tail;// ��������� �� ������ ������ � �����
public:
    Queue() { head = NULL; tail = NULL; }

    bool empty() {
        return head == NULL;
    }

    void add(int value) {//���������� ��������� � �������
        if (empty()) {
            head = new Queue1;
            head->data = value;
            head->next = NULL;
            tail = head;
        }// � �������� ������� ����, ������ ������� � ����� � ������. 
        else {
            tail->next = new Queue1;
            tail = tail->next;
            tail->data = value;
            tail->next = NULL;
        }
    }

    int del() {//�������� �������� �������
        if (empty()) {
            cout << "������� �����" << endl;
            return 0;
        }
        else {
            int d = head->data;
            Queue1* tmp = head;
            head = head->next;
            delete(tmp);
            return d;
        }
    }
    int next() {//������� � ���������� �������� �������
        if (empty()) {
            cout << "������� �����" << endl;
            return 0;
        }
        else {
            int d = head->data;
            Queue1* tmp = head;
            head = head->next;
            return d;
        }
    }
    void nullQueue() {//��������� �������
        Queue1* tmp;
        while (!empty()) {
            tmp = head;
            head = head->next;
            delete(tmp);
        }
    }
    void printqueue() {//����� �������
        Queue1* tmp;
        tmp = head;
        while (!tmp == NULL) {
            int d = tmp->data;
            tmp = tmp->next;
            cout << d << " ";
        } delete(tmp);
    }
    int search(int n1) {//���������� ���������� ���������
        Queue1* tmp = head;
        while (!empty()) {
            int n2 = next();
            if (n1 == n2) {
                head = tmp;
                return n2;
            }
        }
        head = tmp;
        return -1;
    }
};
int main() {
    setlocale(LC_ALL, "rus");
    srand(time(0));
    cout << endl;
    //���������� ��������
    Queue2 q2;// ���������� �������� ��������� Queue
    Stack2 s1, s2;// ���������� �������� ��������� Stack2
    int size_s1 = rand() % 10 + 1, size_q2 = rand() % 10 + 1;// ������� ��������
    cout << "������ ����� : " << size_s1 << "\n" << "������ �������: " << size_q2 << endl;
    if (size_s1 != 0 && size_q2 != 0)
    {
        InitStack2(s1, size_s1);//� ������� ������� ��������� ������ ����� s1
        InitQueue2(q2, size_q2);//� ������� ������� ��������� ������ ������� q2
        InitStack2(s2, size_s1);//� ������� ������� ��������� ������ ����� s1
        for (int i = 0; i < size_s1; i++) {// ���������� ��������� � ����
            int j = rand() % 10;
            push2(s1, j);
        }
        for (int i = 0; i < size_q2; i++) {// ���������� ��������� � �������
            int j = rand() % 10;
            add2(q2, j);
        }
        cout << "����: ";
        if (!empty2(s1)) printstack2(s1);//����� ����� s1
        else cout << "�����" << endl;
        cout << "�������: ";
        if (!empty2(q2)) printqueue2(q2);//����� ������� q2
        else cout << "�����" << endl;
        cout << "����� ��������: ";
        while (!empty2(s1)) {
            int n1 = pop2(s1); // � n1 ���������� ����
            while (!empty2(q2)) {
                int n2 = del2(q2);// � n2 ���������� �������
                if (n1 == n2) { //���� ������� ����� ����� ��. �������
                    if (empty2(s2)) {
                        push2(s2, n2);
                    }
                    else { // ���� 2 ���� �� ����, ���������, ��� �� ������ ��������
                        for (int i = s2.top; i >= 0; i--) {
                            if (n2 == s2.data[i])
                                break;
                            if (i == 0)
                                push2(s2, n2); // ���������
                        }
                    }
                    break;
                }
            }
            q2.head = 0;
        }
        if (!empty2(s2)) printstack2(s2);//  ������� ����� ����
        else cout << "�����������." << endl;
    }
    cout << endl << endl;
    //������������ ������
    Queue qu2;
    Stack* st1, * st2;
    InitStack(st2);
    InitStack(st1);
    int size_st1 = rand() % 10 + 1, size_qu2 = rand() % 10 + 1;// ����������� ������� ��������
    if (size_st1 != 0 && size_qu2 != 0) {
        cout << "������ �����: " << size_st1 << "\n" << "������ �������: " << size_qu2 << endl;
        for (int i = 0; i < size_st1; i++) {
            int j = rand() % 10;
            push(st1, j); // ����������� ����
        }
        for (int i = 0; i < size_qu2; i++) {
            int j = rand() % 10;
            qu2.add(j);// ����������� �������
        }
        cout << "����: ";
        if (!empty(st1)) { printstack(st1); cout << endl; } //������� ������������ ����
        else cout << "�����" << endl;
        cout << "�������: ";
        if (!qu2.empty()) { qu2.printqueue(); cout << endl; }// ������� ������������ �������
        else cout << "�����" << endl;
        cout << "����� ��������: ";
        while (!empty(st1))// ���� ���� �� ����
        {
            int n2 = qu2.search(pop(st1));//���� ������� �������
            if (n2 >= 0) {
                if (empty(st2))
                    push(st2, n2);// ���������
                else
                    search(st2, n2);//���������� ������
            }
        }
    }
    printstack(st2);// ������� ����� ����
    system("pause");
    return 0;
}
