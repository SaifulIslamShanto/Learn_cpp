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
};

int main()
{
    Student shanto, liza;
    shanto.setValue(101, 3.4);
    shanto.display();

    liza.setValue(103, 3.8);
    liza.display();

    return 0;
}