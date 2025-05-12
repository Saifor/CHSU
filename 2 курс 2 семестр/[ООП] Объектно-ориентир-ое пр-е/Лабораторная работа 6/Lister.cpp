#include "Lister.h"

void Lister::add(Heater* obj)
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

void Lister::remove(Heater* obj)
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

void Lister::printList()
{
    Node* current = head;
    while (current != nullptr) {
        current->data->print();
        cout << endl;
        current = current->next;
    }
}

void Lister::sortList()
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

void Lister::searchList(int price)
{
    Node* current = head;
    while (current != nullptr) {
        if (*current->data == price) {
            //current->data->printProp(); 
            cout << *current->data << endl;
        }
        current = current->next;
    }
}

Lister::~Lister()
{
    Node* current = head;
    while (current != nullptr) {
        head = current->next;
        delete (current);
        current = head;
    }
    delete (head);
}