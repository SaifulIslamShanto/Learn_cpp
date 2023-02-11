/* #include <iostream>
using namespace std;

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
        cout << "i'm a Student" << endl;
    }
};

class Teacher : public person
{
public:
    void display()
    {
        cout << "i'm a Teacher" << endl;
    }
};

int main()
{
    person p;
    Student s;
    Teacher t;

    p.display();
    s.display();
    t.display();

    return 0;
} */

//-> Polymorphism

#include <iostream>
using namespace std;

class person
{
public:
    virtual void display() //=>1
    {
        cout << "i'm a Person" << endl;
    }
};

class Student : public person
{
public:
    void display()
    {
        cout << "i'm a Student" << endl;
    }
};

class Teacher : public person
{
public:
    void display()
    {
        cout << "i'm a Teacher" << endl;
    }
};

int main()
{
    person *p; //=>2
    Student s;
    Teacher t;

    p = &s;       //=>3
    p->display(); //=> 4

    p = &t;
    p->display();

    return 0;
}