#include <iostream>
using namespace std;


class Person Template {
private:
    string fullName;
    int age;
 
public:
    Person();
    Person(string name, int a);
    string move();
    string talk();
};

Person::Person() {
    fullName = "NoName";
    age = 0;
}

Person::Person(string name, int a) {
    fullName = name;
}

string Person::move() {
    return fullName;
}

string Person::talk() {
    return fullName;
}

int main()
{
    //char* s = "exam"
    Person p1;
    Person p2("sad", 2);
    cout << p1.move() << " ";

    cout << p2.talk() << endl;

}
