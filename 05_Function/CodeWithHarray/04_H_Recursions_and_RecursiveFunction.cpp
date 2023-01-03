#include <iostream>
using namespace std;
/* int factorial(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return n * factorial(n - 1);

    //-> How its work factorial [if input is 4]
    //-> factorial(4) = 4 * factorial(3);
    //-> factorial(4) = 4 * 3 * factorial(2);
    //-> factorial(4) = 4 * 3 * 2 * factorial(1);
    //-> factorial(4) = 4 * 3 * 2 * 1;
    //-> factorial(4) = 24;
}
int main()
{
    int a;
    cout << "Enter a number : ";
    cin >> a;

    cout << "The factorial of " << a << " is :  " << factorial(a) << endl;
    return 0;
} */

// -> Fibonacci Series

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);

    //-> fib(5)
    //-> fib(4) + fib(3)
    //-> fib(4) + fib(3) + fib(2) + fib(3)
}

int main()
{
    int a;
    cout << "Enter a number : ";
    cin >> a;

    cout << "The Fibonacci sequence at position of " << a << " is :  " << fib(a) << endl;
    return 0;
}