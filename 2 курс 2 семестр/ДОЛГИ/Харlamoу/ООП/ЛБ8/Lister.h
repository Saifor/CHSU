#pragma once
#include "Heater.h"

using namespace std;
class Lister {
private:
    struct Node {
        Heater* data;
        Node* next;
    };

public:
    Node* head = nullptr;

    void add(Heater* obj); //добавление элементов
    void remove(Heater* obj); //удаление ^
    void printList(); //вывод 
    void sortList(); //сортировка по убыванию цены
    void searchList(int price); //поиск по цене
    ~Lister(); //деструктор
};