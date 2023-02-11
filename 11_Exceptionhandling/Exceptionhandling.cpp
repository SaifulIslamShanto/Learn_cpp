#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        try
        {
            int x, y;
            cout << "Enter 1st Number : ";
            cin >> x;

            cout << "Enter 2nd Number : ";
            cin >> y;

            if (y == 0)
            {
                throw -1;
            }

            double result = (double)x / y;
            cout << "Result : " << result << endl;
        }
        // catch (int N)
        catch (...)
        {
            cout << "Devide by Zero Is not posible" << endl;
        }
    }
}

/*
    Enter 1st Number : 10
    Enter 2nd Number : 0
    Result : inf
*/