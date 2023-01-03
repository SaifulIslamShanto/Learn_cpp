#include <iostream>
using namespace std;

struct employee
{
    int eId;
    char favChar;
    float Salary;
};

int main()
{
    struct employee shanto;

    shanto.eId = 1;
    shanto.favChar = 's';
    shanto.Salary = 12000.500;

    cout << "The value is eId " << shanto.eId << endl;
    cout << "The value is favChar " << shanto.favChar << endl;
    cout << "The value is Salary " << shanto.Salary << endl;

    return 0;
}