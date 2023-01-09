#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    double gpa;

    void display() //-> function without peramiter
    {
        cout << id << " is Id & Gpa " << gpa << endl;
    }

    void setValue(int x, double y) //-> function with peramiter
    {
        id = x;
        gpa = y;
    }

    Student(int x, double y) //-> Constructor
    {
        id = x;
        gpa = y;
    }

    Student() //-> Default Constructor
    {
        cout << "Default Constructor" << endl;
    };
};

int main()
{
    Student ob; //-> Default Constructor
    Student shanto(101, 3.4);
    // shanto.setValue(101, 3.4);
    shanto.display();

    Student liza(103, 3.8);
    // liza.setValue(103, 3.8);
    liza.display();

    return 0;
}