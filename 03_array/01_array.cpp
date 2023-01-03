#include <iostream>
using namespace std;

// -> 1D Array

int main()
{
    /*     int num[] = {1, 2, 5, 4, 6, 4};

        for (int i = 0; i < 6; i++)
        {
            cout << i << " => " << num[i] << endl;
        } */

    /*    char c[5] = {'H', 'E', 'L', 'L', 'O'};
       for (int i = 0; i < 5; i++)
       {
           cout << i << " => " << c[i] << endl;
       } */

    //=> input In array

    int a[5];
    cout << "Input The Number : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << " => ";
        cin >> a[i];
    }
    cout << endl;

    cout << "Output Of The Number : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << " => " << a[i] << endl;
    }
}