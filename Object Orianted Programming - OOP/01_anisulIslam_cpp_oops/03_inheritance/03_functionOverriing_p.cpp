#include <iostream>
using namespace std;

class person
{
public:
    void display()
    {
        cout << "i'm a person" << endl;
    }
};

class Student : public person
{
public:
    void display() //-> Function Overriding
    {
        cout << "I'm a student" << endl;
    }
};

class Teacher : public person
{
    void display() //-> Function Overriding
    {
        cout << "I'm a Teacher" << endl;
    }
};

int main()
{

    return 0;
}
