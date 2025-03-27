#pragma once
#include "Lister.h"

template <class T>
class TemplateLister {
private:
    struct Node {
        T* data;
        Node* next;
    };
public:

    Node* head = nullptr;

    void ad(T* obj); //добавление элементов
    void remove(T* obj); //удаление ^
    void printList(); //вывод 
    void sortList(); //сортировка по убыванию цены
    void searchList(int price); //поиск по цене
    ~TemplateLister(); //деструктор

    T* take() {
        Node* current = head;
        return current->data;
    }

};

template<class T>
inline void TemplateLister<T>::ad(T* obj)
{
    Node* newNode = new Node;
    newNode->data = obj;
    newNode->next = nullptr;

    if (head == nullptr)
        head = newNode;
    else {
        Node* tmp = head;
        while (tmp->next != nullptr) {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}

template<class T>
inline void TemplateLister<T>::remove(T* obj)
{
    Node* current = head;
    Node* prev = nullptr;

    while (current != nullptr && current->data != obj) {
        prev = current;
        current = current->next;
    }
    if (current == nullptr) return;
    if (prev == nullptr)
        head = current->next;
    else {
        prev->next = current->next;
    }

    delete current;
}

template<class T>
inline void TemplateLister<T>::printList()
{
    Node* current = head;
    while (current != nullptr) {
        current->data->print();
        cout << endl;
        current = current->next;
    }
}

template<class T>
inline void TemplateLister<T>::sortList()
{
    Node* current = head;
    while (current != nullptr) {
        Node* prev = head;
        while (prev != nullptr) {
            if (*current->data > *prev->data) swap(current->data, prev->data);
            prev = prev->next;
        }
        current = current->next;
    }
}

template<class T>
inline void TemplateLister<T>::searchList(int price)
{
    Node* current = head;
    while (current != nullptr) {
        if (*current->data == price) {
            current->data->print(); 
            cout << *current->data << endl;
        }
        current = current->next;
    }
}

template<class T>
inline TemplateLister<T>::~TemplateLister()
{
    Node* current = head;
    while (current != nullptr) {
        head = current->next;
        delete (current);
        current = head;
    }
    delete (head);
}
