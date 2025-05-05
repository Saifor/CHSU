#pragma once
#include "TemplateLister.h"
#include <map>

class Statistics
{
public:
    Statistics();
    // ����� ������������ ������� �� �����
    void print() const;
    // ���������� 1 ������� ���
    void add(Heater* d);
    // ���������� ���� �������� ��� ��
    void add(TemplateLister<Heater>* d);
    //��������� � ������� �������� ��� � ������ ���������� �� ���������� ��.
    void ch_add(TemplateLister<Heater>* d);
    // �������� 1 ������� ���
    void del(Heater* d);
    // �������� ���� �������� ��� ��
    void del(TemplateLister<Heater>* d);
    // ������� �������
    void clear();

private:
    // �������
    map<Heater*, int> dic;
    // �������� ����
    double tpr;
};