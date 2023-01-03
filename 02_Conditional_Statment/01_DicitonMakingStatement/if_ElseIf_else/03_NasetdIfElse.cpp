#include <iostream>
using namespace std;

int main()
{
    int a = 30;
    int b = 30;
    int c = 50;

    /*     if (a > b)
        {
            if (a > c)
            {
                cout << "A Is Greater";
            }
        }
        else
        {
            if (b > c)
            {
                cout << "B Is Greatest";
            }
            else
            {
                cout << "C IS Greatest";
            }
        } */

    if ((a > b) && (a > c))
    {
        cout << "A is Greatest";
    }
    else if ((b > a) && (b > c))
    {
        cout << "B is Greatest";
    }
    else
    {

        cout << "C is Greatest";
    }
}