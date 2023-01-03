#include <iostream>
using namespace std;

struct employee
{
    int eId;
    char favChar;
    float Salary;
};

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    struct employee shanto;
    union money shantoX;

    shantoX.rice = 34;
    shantoX.car = 'L';
    cout << shantoX.rice << endl;

    // shanto.eId = 1;
    // shanto.favChar = 's';
    // shanto.Salary = 12000.500;

    // cout << "The value is eId " << shanto.eId << endl;
    // cout << "The value is favChar " << shanto.favChar << endl;
    // cout << "The value is Salary " << shanto.Salary << endl;

    return 0;
}