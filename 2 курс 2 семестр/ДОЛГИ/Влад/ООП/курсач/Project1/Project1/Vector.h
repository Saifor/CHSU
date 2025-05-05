#pragma once
#include "Laptop.h"
#include "Personal.h"
#include "Server.h"
#include "Smartphone.h"
using namespace std;

template <typename T>
class Stack {
    struct Node {
        T data;
        Node* next;
        Node* prev;
        Node(const T& val) : data(val), next(nullptr), prev(nullptr) {}
    };

    int capacity;
    Node* first;
    Node* last;

public:
    int count;

    Stack(int size) : capacity(size), count(0), first(nullptr), last(nullptr) {
        if (size <= 0) {
            throw invalid_argument("Stack size must be positive");
        }
    }

    ~Stack() {
        while (first) {
            Node* temp = first;
            first = first->next;
            delete temp;
        }
    }

    void push_back(const T& val) {
        try {
            if (count >= capacity) {
                cout << "Stack overflow" << endl;
                return;
            }

            Node* newNode = new Node(val);
            if (!last) {
                first = last = newNode;
            }
            else {
                last->next = newNode;
                newNode->prev = last;
                last = newNode;
            }
            count++;
        }
        catch (const bad_alloc& e) {
            cout << "Memory allocation failed: " << e.what() << endl;
        }
    }

    void at(int index) const {
        try {
            if (index < 0 || index >= count) {
                throw out_of_range("Index out of range");
            }

            Node* current = first;
            for (int i = 0; i < index; ++i) {
                current = current->next;
            }
            current->data.print();
        }
        catch (const out_of_range& e) {
            cout << "Error: " << e.what() << endl;
        }
    }

    void pop_back() {
        try {
            if (count == 0) {
                cout << "Stack is empty!" << endl;
                return;
            }

            Node* toDelete = last;
            if (last == first) {
                first = last = nullptr;
            }
            else {
                last = last->prev;
                last->next = nullptr;
            }

            delete toDelete;
            count--;
        }
        catch (const exception& e) {
            cout << "Error occurred during pop operation: " << e.what() << endl;
        }
    }

    void find(double targetFrequency) {
        try {
            if (count == 0) {
                cout << "Stack is empty!" << endl;
                return;
            }

            Node* current = first;
            bool found = false;

            while (current != nullptr) {
                if (current->data.GetChast() == targetFrequency) {
                    current->data.print();
                    found = true;
                }
                current = current->next;
            }

            if (!found) {
                cout << "No elements with frequency " << targetFrequency << " found." << endl;
            }
        }
        catch (const exception& e) {
            cout << "Error occurred during find operation: " << e.what() << endl;
        }
    }
};
