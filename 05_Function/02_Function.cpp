#include <iostream>
using namespace std;

/* void Addition(int a, int b)
{
    int sum = a + b;
    cout << sum << endl;
}

int main()
{
    Addition(10, 20);
} */

// -> DefaultPerameters

void display(int a = 10, int b = 20)
{
    cout << a << endl;
    cout << b << endl;
}

int main()
{
    display();
    display(15, 30);
}