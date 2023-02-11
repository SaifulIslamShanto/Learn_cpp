#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    void display1()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

// => Inheritance Process

class Student : public person
{
public:
    int Id;
    void display2()
    {
        cout << "ID : " << Id << endl;
        display1();
    }
};

int main()
{

    // => Creating Object

    Student s1;

    s1.Id = 101;
    s1.name = "Shanto";
    s1.age = 22;

    s1.display2();

    return 0;
}