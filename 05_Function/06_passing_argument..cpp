#include <iostream>
using namespace std;

//-> Passing Arguments in c++

/* // -> Pass by Value

void display(int num) //-> Formal Perameter
{
    num = 20;
}

int main()
{
    int x = 10;
    cout << "Before Calling The function x = " << x << endl;

    display(x); //-> Acutual Perameter / Argument
    cout << "After Calling The function x = " << x << endl;
} */

// -> Pass by Reference

void display(int *num) //-> Formal Perameter
{
    *num = 20;
}

int main()
{
    int x = 10;
    cout << "Before Calling The function x = " << x << endl;

    display(&x); //-> Acutual Perameter / Argument
    cout << "After Calling The function x = " << x << endl;
}

// => https://www.tutorialspoint.com/cplusplus/cpp_functions.htm