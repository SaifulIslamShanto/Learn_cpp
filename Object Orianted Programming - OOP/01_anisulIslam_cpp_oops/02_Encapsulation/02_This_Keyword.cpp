#include <iostream>
using namespace std;

/* class Student
{
public:
    string name;

    Student(string x) //-> Local Variable
    {
        name = x;
    }

    void display()
    {
        cout << name << endl;
    }
}; */

class Student
{
public:
    string name;

    Student(string name) //-> Local Variable
    {
        this->name = name;
    }

    void display()
    {
        cout << name << endl;
    }
};
int main()
{
    Student s1("shanto");
    s1.display();

    return 0;
}
