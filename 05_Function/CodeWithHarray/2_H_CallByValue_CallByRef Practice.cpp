/*

 -> Call By vAlue
#include <iostream>
using namespace std;

void swapping(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 4, y = 5;
    cout << "after swapping of x is " << x << " and " << y << " is Y value" << endl;
    swapping(x, y);
    cout << "Before swapping of x is " << x << " and " << y << " is Y value" << endl;

    return 1;
} */

/* // -> Call by Pointer reference
#include <iostream>
using namespace std;

void swapping(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 4, y = 5;
    cout << "after swapping of x is " << x << " and " << y << " is Y value" << endl;
    swapping(&x, &y);
    cout << "Before swapping of x is " << x << " and " << y << " is Y value" << endl;

    return 1;
} */

/* // -> Call by reference using c++ reference variable
#include <iostream>
using namespace std;

void swappingRefVar(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 4, y = 5;
    cout << "after swapping of x is " << x << " and " << y << " is Y value" << endl;
    swappingRefVar(x, y);
    cout << "Before swapping of x is " << x << " and " << y << " is Y value" << endl;

    return 0;
} */

// -> Call by reference using c++ reference variable
#include <iostream>
using namespace std;

int &swappingRefVar(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;

    return x;
}

int main()
{
    int x = 4, y = 5;
    cout << "after swapping of x is " << x << " and " << y << " is Y value" << endl;
    swappingRefVar(x, y) = 766;
    cout << "Before swapping of x is " << x << " and " << y << " is Y value" << endl;

    return 0;
}