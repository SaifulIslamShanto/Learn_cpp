#include <iostream>
using namespace std;
// -> pointer and arrays
int main()
{
    int marks[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        cout << "The Value of Marks " << i << " is " << marks[i] << endl;
    }

    // pointer & arrays

    int *p = marks;
    for (int i = 0; i < p; *p++)
    {
        cout << "The value of *p is " << *p[i] << endl;
    }

    // cout << "The value of *p is " << *p << endl;
    // cout << "The value of *(p + 1) is " << *(p + 1) << endl;
    // cout << "The value of *(p + 2) is " << *(p + 2) << endl;
    // cout << "The value of *(p + 3) is " << *(p + 3) << endl;
    // cout << "The value of *(p + 4) is " << *(p + 4) << endl;
    return 0;
}