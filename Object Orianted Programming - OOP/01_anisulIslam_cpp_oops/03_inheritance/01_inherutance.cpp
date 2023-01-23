#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "age : " << age << endl;
    }
};

class Student : public Person // -> inheritance
{
    // name age display();

public:
    int id;

    void display2()
    {
        cout << "Id : " << id << endl;
        // cout << "Name : " << name << endl;
        // cout << "age : " << age << endl;
        display();
    }
};

int main()
{
    Student s1;
    s1.id = 35;
    s1.name = "Shanto";
    s1.age = 23;

    // s1.display();
    s1.display2();

    return 0;
}