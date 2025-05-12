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

    void add(Heater* obj); //���������� ���������
    void remove(Heater* obj); //�������� ^
    void printList(); //����� 
    void sortList(); //���������� �� �������� ����
    void searchList(int price); //����� �� ����
    ~Lister(); //����������
};