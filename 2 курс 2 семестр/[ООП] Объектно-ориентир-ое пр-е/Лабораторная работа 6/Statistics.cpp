#include "Statistics.h"

Statistics::Statistics()
{
	dictionary = {};
	totalprice = 0;
}

void Statistics::print() const
{
	if (!dictionary.empty())
	{
		for (const auto element : dictionary) {
			element.first->print();
			cout << "Count: " << element.second << endl << endl;
		}
	}
	else
	{
		cout << "Empty!";
	}
	cout << "Total price: " << totalprice << endl << endl;
}

void Statistics::add(Heater* d)
{
	if (dictionary.count(d)) {
		dictionary[d]++;
	}
	else {
		dictionary.insert({ d,1 });
	}
	totalprice += d->getPrice();
}

void Statistics::add(TemplateLister<Heater>* d)
{
	TemplateLister<Heater>* tmp = new TemplateLister<Heater>;
	tmp->head = d->head;
	while (d->head != nullptr) {
		add(d->head->data);
		d->head = d->head->next;
	}
	d->head = tmp->head;
}

void Statistics::ch_add(TemplateLister<Heater>* d)
{
	string str;
	int c;
	TemplateLister<Heater>* tmp = d;
	tmp->printList();
	cout << "Name: "; cin >> str;
	cout << "Count: "; cin >> c;
	cout << endl;
	while (tmp->head != nullptr) {
		if (tmp->head->data->getName() == str) {
			for (int i = 1; i < c; i++) add(tmp->head->data);
		}
		tmp->head = tmp->head->next;
	}

}

void Statistics::del(Heater* d)
{
	totalprice -= d->getPrice();
	dictionary.erase(d);
}

void Statistics::del(TemplateLister<Heater>* d)
{
	TemplateLister<Heater>* tmp = nullptr;
	while (tmp != nullptr) {
		del(tmp->take());
		tmp->head = tmp->head->next;
	}
}

void Statistics::clear()
{
	totalprice = 0;
	dictionary.clear();
}

