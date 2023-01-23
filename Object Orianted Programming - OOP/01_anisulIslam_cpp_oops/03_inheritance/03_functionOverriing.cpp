#include <iostream>
using namespace std;
/*
    -> Multilavel Inheritance
    -> Function Overriding
 */

class person
{
public:
    void display()
    {
        cout << "i'm a Person" << endl;
    }
};

class Student : public person
{
public:
    void display()
    {
        cout << "I'm a Student" << endl;
    }
};

class Teacher : public person
{
public:
    void display()
    {
        cout << "I'm a Teacher" << endl;
    }
};

int main()
{
    person p;
    p.display();

    Student s;
    s.display();

    Teacher t;
    t.display();

    return 0;
}
