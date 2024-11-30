#include <locale.h>
#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////////массивом
struct Stack2 {
    int top; int* data; //top - индекс верхнего элемента стека, data - указатель на элемент массива
};
void InitStack2(Stack2& st, int capacity) {
    st.data = new int[capacity];
    st.top = -1;
}
void push2(Stack2& st, int value) {//добавление в стек
    st.data[++st.top] = value;
}
int pop2(Stack2& st) {//удаление из стека
    return st.data[st.top--];
}
void nullStack2(Stack2& st) {//обнуление стека
    st.top = -1;
}
bool empty2(Stack2& st) {//проверка на пустоту
    return st.top == -1;
}
void printstack2(Stack2& st) {//вывод стека с опустошением
    if (!empty2(st)) {
        int i = st.top;
        while (i >= 0) {
            cout << st.data[i--] << " ";
        } cout << endl;
    }
    else cout << " пусто" << endl;
}
struct Queue2 {
    int head, tail, size; // head - поле, где хранится позиция первого элеменета, tail - последнего, size - размер массива
    int* data; // указатель на первый элемент массива
};
void nullQueue2(Queue2& q) {
    q.head = 0;
    q.tail = q.size - 1;
}
void InitQueue2(Queue2& q, int capacity) {// установка размера очереди
    q.size = capacity + 1;
    q.data = new int[q.size];
    nullQueue2(q);
}
int next2(Queue2& q, int n) { // функция, возвращающая значение следующего элементу
    return (n + 1) % q.size;
}
bool empty2(Queue2& q) {// функция, проверяющая очередь на пустоту
    return next2(q, q.tail) == q.head;
}
void add2(Queue2& q, int value) {// добавление в очередь элементов
    if (next2(q, next2(q, q.tail)) == q.head)// проверка на переполнение
    {
        cout << "Очередь переполнена" << endl;
    }
    else {
        q.tail = next2(q, q.tail);
        q.data[q.tail] = value;
    }
}
int del2(Queue2& q) { //вывод головы очереди
    if (empty2(q)) { cout << "Очередь пуста" << endl; return 0; }
    else {
        int d = q.data[q.head];
        q.head = next2(q, q.head);
        return d;
    }
}
void printqueue2(Queue2& q) { // вывод очереди
    if (empty2(q)) { cout << "Очередь пуста" << endl; }
    else {
        int i = q.head;
        while (i != q.tail + 1) {
            cout << q.data[i] << " ";
            i = next2(q, i);
        } cout << endl;
    }
}
//////////////////////////////////////////////////динамическим списком
//создаем стек динамическим списком
struct Stack {
    int data; Stack* next;// data -  поле, где храниться данные, next - указатель на следущий элемент списка
};
void InitStack(Stack*& top) {
    top = NULL;
}
void push(Stack*& top, int value) {//добавление элемента в стек
    Stack* tmp = new Stack;
    tmp->next = top;
    top = tmp;
    top->data = value;
}
int pop(Stack*& top) {//удаление элемента из стека
    Stack* tmp = top;
    int d = top->data;
    top = top->next;
    return d;
}
bool empty(Stack*& top) {// проверка стека на пустоту
    return top == NULL;
}
void nullStack(Stack*& top) {//обнуление стека
    Stack* tmp;
    while (!empty(top)) {
        tmp = top;
        top = top->next;
        delete(tmp);
    }
}
void printstack(Stack*& top) {// вывод стека с очищением стека
    Stack* tmp = top;
    if (tmp == NULL) cout << "Отсутствуют." << endl;
    while (!tmp == NULL) {
        int d = tmp->data;
        tmp = tmp->next;
        cout << d << " ";
    } delete (tmp);
}
void search(Stack*& top, int n) {//нахождение одинаковых элементов
    Stack* tmp = top;
    do {
        if (n == pop(tmp))
            break;
        if (empty(tmp))
            push(top, n);
    } while (!empty(tmp));
}
//создаем очередь динамическим списком
class Queue {
private:
    struct Queue1 {
        int data;// поле, где храниться данные 
        Queue1* next;//указатель на следущий элемент списка
    };
    Queue1* head, * tail;// указатель на начало списка и конец
public:
    Queue() { head = NULL; tail = NULL; }

    bool empty() {
        return head == NULL;
    }

    void add(int value) {//добавление элементов в очередь
        if (empty()) {
            head = new Queue1;
            head->data = value;
            head->next = NULL;
            tail = head;
        }// в создании первого узла, первый элемент и хвост и голова. 
        else {
            tail->next = new Queue1;
            tail = tail->next;
            tail->data = value;
            tail->next = NULL;
        }
    }

    int del() {//удаление элемента очереди
        if (empty()) {
            cout << "Очередь пуста" << endl;
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
    int next() {//переход к следующему элементу очереди
        if (empty()) {
            cout << "Очередь пуста" << endl;
            return 0;
        }
        else {
            int d = head->data;
            Queue1* tmp = head;
            head = head->next;
            return d;
        }
    }
    void nullQueue() {//обнуление очереди
        Queue1* tmp;
        while (!empty()) {
            tmp = head;
            head = head->next;
            delete(tmp);
        }
    }
    void printqueue() {//вывод очереди
        Queue1* tmp;
        tmp = head;
        while (!tmp == NULL) {
            int d = tmp->data;
            tmp = tmp->next;
            cout << d << " ";
        } delete(tmp);
    }
    int search(int n1) {//нахождение одинаковых элементов
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
    //Реализация массивом
    Queue2 q2;// объявление объектов структуры Queue
    Stack2 s1, s2;// объявление объектов структуры Stack2
    int size_s1 = rand() % 10 + 1, size_q2 = rand() % 10 + 1;// размеры структур
    cout << "Размер стека : " << size_s1 << "\n" << "Размер очереди: " << size_q2 << endl;
    if (size_s1 != 0 && size_q2 != 0)
    {
        InitStack2(s1, size_s1);//с помощью функции установил размер стека s1
        InitQueue2(q2, size_q2);//с помощью функции установил размер очереди q2
        InitStack2(s2, size_s1);//с помощью функции установил размер стака s1
        for (int i = 0; i < size_s1; i++) {// добавление элементов в стек
            int j = rand() % 10;
            push2(s1, j);
        }
        for (int i = 0; i < size_q2; i++) {// добавление элементов в очередь
            int j = rand() % 10;
            add2(q2, j);
        }
        cout << "Стек: ";
        if (!empty2(s1)) printstack2(s1);//вывод стека s1
        else cout << "Пусто" << endl;
        cout << "Очередь: ";
        if (!empty2(q2)) printqueue2(q2);//вывод очереди q2
        else cout << "Пусто" << endl;
        cout << "Общие элементы: ";
        while (!empty2(s1)) {
            int n1 = pop2(s1); // в n1 записываем стек
            while (!empty2(q2)) {
                int n2 = del2(q2);// в n2 записываем очередь
                if (n1 == n2) { //если элемент стека равен эл. очереди
                    if (empty2(s2)) {
                        push2(s2, n2);
                    }
                    else { // если 2 стек не пуст, проверяет, нет ли такого элемента
                        for (int i = s2.top; i >= 0; i--) {
                            if (n2 == s2.data[i])
                                break;
                            if (i == 0)
                                push2(s2, n2); // вставляет
                        }
                    }
                    break;
                }
            }
            q2.head = 0;
        }
        if (!empty2(s2)) printstack2(s2);//  выводит новый стек
        else cout << "Отсутствуют." << endl;
    }
    cout << endl << endl;
    //динамический список
    Queue qu2;
    Stack* st1, * st2;
    InitStack(st2);
    InitStack(st1);
    int size_st1 = rand() % 10 + 1, size_qu2 = rand() % 10 + 1;// определение размера структур
    if (size_st1 != 0 && size_qu2 != 0) {
        cout << "Размер стека: " << size_st1 << "\n" << "Размер очереди: " << size_qu2 << endl;
        for (int i = 0; i < size_st1; i++) {
            int j = rand() % 10;
            push(st1, j); // заполняется стек
        }
        for (int i = 0; i < size_qu2; i++) {
            int j = rand() % 10;
            qu2.add(j);// заполняется очередь
        }
        cout << "Стек: ";
        if (!empty(st1)) { printstack(st1); cout << endl; } //выводит динамический стек
        else cout << "Пусто" << endl;
        cout << "Очередь: ";
        if (!qu2.empty()) { qu2.printqueue(); cout << endl; }// выводит динамическую очередь
        else cout << "Пусто" << endl;
        cout << "Общие элементы: ";
        while (!empty(st1))// пока стек не пуст
        {
            int n2 = qu2.search(pop(st1));//ищем похожий элемент
            if (n2 >= 0) {
                if (empty(st2))
                    push(st2, n2);// вставляем
                else
                    search(st2, n2);//продолжаем искать
            }
        }
    }
    printstack(st2);// выводим новый стек
    system("pause");
    return 0;
}
