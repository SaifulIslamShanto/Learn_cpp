// -> Function Overloading with Examples

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "using function with 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "using function with 3 arguments" << endl;
    return a + b + c;
}

// Calculate the value of cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// Calculate the value of cube
int volume(int a)
{
    return (a * a * a);
}

// Calculate the value of Rectangle box
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    // cout << "The sum of 3 and 6 is " << sum(3, 6) << endl;
    // cout << "The sum of 3 , 7 and 6 is " << sum(3, 7, 6);

    cout << "The Volume of cuboid of 3,7, & 6 is " << volume(3, 7, 6) << endl;
    cout << "The Volume of cylinder 3 & Height 6  is " << volume(3, 6) << endl;
    cout << "The Volume of cube is " << volume(3) << endl;
    return 0;
}