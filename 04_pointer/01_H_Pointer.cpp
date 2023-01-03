#include <iostream>
using namespace std;

/* int main()
{
    int a = 10;
    int *b;
    b = &a;

    // -> & --> Address of operator
    cout << "Address of & a " << &a << endl;
    cout << "Address of & b " << b << endl;

    // -> * --> (value at) Dereference operator
    cout << "value at Address of & b is " << *b << endl;

    // -> ** --> Pointer to pointer
    int **c = &b;
    cout << "Address of b is " << &b << endl;                                     // -> Address of b is 0x61ff04
    cout << "Address of b is " << c << endl;                                      //-> Address of b is 0x61ff04
    cout << "The value at Address of C is [pointer address of b] " << *c << endl; //-> The value at Address of C is 0x61ff08
    cout << "The value at Address Value_at(Value_at(c)) Is " << **c << endl;      //-> The value at Address Value_at(Value_at(c)) Is 10

    return 0;
} */

int main()
{

    int x = 10;
    int *y = &x;
    cout << "Value of X => " << x << endl;
    cout << "Address of X => " << &x << endl;
    cout << "(*y)copy (&x) Address & show the x value X => " << *y << endl;
}