#pragma once
#include "TemplateLister.h"
#include <map>

class Statistics
{
public:
    Statistics();
    // вывод создержимого словаря на экран
    void print() const;
    // добавление 1 объекта АТД
    void add(Heater* d);
    // добавление всех объектов АТД КК
    void add(TemplateLister<Heater>* d);
    //Занесение в словарь объектов АТД в нужном количестве из указанного КК.
    void ch_add(TemplateLister<Heater>* d);
    // удаление 1 объекта АТД
    void del(Heater* d);
    // удаление всех объектов АТД КК
    void del(TemplateLister<Heater>* d);
    // очистка словаря
    void clear();

private:
    // словарь
    map<Heater*, int> dic;
    // итоговая цена
    double tpr;
};