#include <iostream>
using namespace std;

//-> Struct

/* struct employee
{
    int Id;
    char favChar;
    float salary;
};

int main()
{
    struct employee Shanto;

    Shanto.Id = 1;
    Shanto.favChar = 's';
    Shanto.salary = 25000;

    cout << "The Value Is Id " << Shanto.Id << endl;
    cout << "The Value Is favChar " << Shanto.favChar << endl;
    cout << "The Value Is salary " << Shanto.salary << endl;

    return 0;
} */

//-> TypeDef

typedef struct employee
{
    int Id;
    char favChar;
    float salary;
} emp;

int main()
{
    emp Shanto0;

    Shanto0.Id = 5;
    Shanto0.favChar = 'ss';
    Shanto0.salary = 250000;

    struct employee Shanto;
    Shanto.Id = 1;
    Shanto.favChar = 's';
    Shanto.salary = 25000;

    cout << "The Value Is Id " << Shanto.Id << endl;
    cout << "The Value Is favChar " << Shanto.favChar << endl;
    cout << "The Value Is salary " << Shanto.salary << endl;
    cout << endl
         << endl;
    cout << "The Value Is Id " << Shanto0.Id << endl;
    cout << "The Value Is favChar " << Shanto0.favChar << endl;
    cout << "The Value Is salary " << Shanto0.salary << endl;

    return 0;
}