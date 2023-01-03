#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    while (1)
    {
        int gessNumber, randNumber;
        cout << "Enter Your Guess Between 1 to 5 : ";
        cin >> gessNumber;

        randNumber = rand() % 5 + 1;
        if (gessNumber == randNumber)
        {
            cout << "You Have Win!\n";
        }
        else
        {
            cout << "You Loss!\n";
            cout << "Random Number Was : " << randNumber << endl;
        }
    }
}