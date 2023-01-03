//=> Call by Value & Call by Reference in C++ | C++ Tutorials for Beginners #16

//  Call by Value
#include <iostream>
using namespace std;

int sum(int x, int y)
{
    int c = x + y;
    return c;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// -> Call by reference
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// -> Call by reference using c++ refrence variables
/* void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
} */

// -> Call by reference using c++ refrence variables
int &swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    return a;
}

int main()
{
    int a = 4, b = 5;
    cout << "The Value of a is " << a << " and The Value of b is " << b << endl;
    // swap(a, b);
    // swapPointer(&a, &b); // -> Call by reference
    // swapReferenceVar(a, b); // -> Call by reference
    swapReferenceVar(a, b) = 756; // -> Call by reference
    cout << "The Value of after swap is " << a << " and The Value of b is " << b << endl;
    return 0;
}