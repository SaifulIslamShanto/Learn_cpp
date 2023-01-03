#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float Salary;
} ep;

int main()
{
    ep liza;
    struct employee shanto;

    shanto.eId = 1;
    shanto.favChar = 's';
    shanto.Salary = 12000.500;

    liza.eId = 12;
    liza.favChar = 'L';
    liza.Salary = 12500.500;

    cout << "The value is eId " << shanto.eId << endl;
    cout << "The value is favChar " << shanto.favChar << endl;
    cout << "The value is Salary " << shanto.Salary << endl;
    cout << endl;

    cout << "The value is eId " << liza.eId << endl;
    cout << "The value is favChar " << liza.favChar << endl;
    cout << "The value is Salary " << liza.Salary << endl;

    return 0;
}