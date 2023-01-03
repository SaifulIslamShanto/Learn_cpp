#include <iostream>
using namespace std;

int main()
{
    /*     int x = 5;
        // -> Value Of X
        cout << "The Value Of X : " << x << endl;

        //-> Address OF X
        cout << "The Address Of X : " << &x << endl; */

    /*     int x = 10;
        int *p;

        p = &x;

        cout << "*p = " << *p << endl;
        cout << "Value Of P Is : " << p << endl; */

    //-> Sum of 2 digits using pointer

    int num1 = 10;
    int num2 = 20;

    int *p1, *p2;

    p1 = &num1;
    p2 = &num2;

    int sum = *p1 + *p2;
    cout << sum << endl;
}