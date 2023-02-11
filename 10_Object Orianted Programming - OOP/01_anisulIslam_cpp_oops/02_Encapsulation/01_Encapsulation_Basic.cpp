// Encapsulation
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;

public:
    void setName(string x) //-> Read Value
    {
        name = x;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    Student s1;
    s1.setName("Saiful");
    cout << s1.getName()
         << endl;

    return 0;
}