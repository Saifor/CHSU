#include "Laptop.h"
#include "Personal.h"
#include "Server.h"
#include "Smaphone.h"
#include "Vector.h"
#include "Test.h"

int main() {
	setlocale(LC_ALL, "rus");
	try
	{
		cout << 7 / 0;
	}
	catch (const std::exception&)
	{
		cout << "ты дурачок";
	}
	Laptop lp("dsds", 1, 1.1, 12);
	/*lp.print();*/
	/*cout << endl;*/
	Personal per("len", 4, 7.7, 20);
	/*per.print();*/
	/*cout << endl;*/
	Server ser("cvfdrt", 4, 2.3, 24);
	/*ser.print();*/
	/*cout << endl;*/
	Smartphone sm("samsung", 3, 4.4, true);
	//sm.print();
	/*cout << endl;*/
	Stack<Laptop> st(1);
	st.push_back(lp);
	st.at(0);
	st.at(1);
	//cout << endl;
	//st.pop_back();
	//st.at(0);
	//Stack<Personal> st2(100);
	//st2.push_back(per);
	//cout << endl;
	//st2.find(7.7);
	//Stack<Server> st3(100);
	//st3.push_back(ser);
	//cout << endl;
	//st3.at(0);
	//cout << endl;
	//Stack<Smartphone> st4(100);
	//st4.push_back(sm);
	//st4.at(0);
	//cout << "------------------------------------------------------------------------------" << endl;
	//test tes;
	//tes.SetItem1(1);
	//cout << tes.GetItem1() << endl;
	//tes.SetItem2("dsdscsaver");
	//cout << tes.GetItem2() << endl;
	//tes.print();
	//cout << "------------------------------------------------------------------------------" << endl;
	
}