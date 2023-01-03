#include <iostream>
using namespace std;

int main()
{
    int x[5] = {10, 20, 30, 40, 50};
    int i = 0;
    /*     for (int i = 0; i < 5; i++)
        {
            cout << "[" << i << "] => " << x[i] << endl;
        } */

    /*     do
        {
            cout << "[" << i << "] => " << x[i] << endl;
            i++;
        } while (i < 5); */

    while (i < 5)
    {

        cout << "[" << i << "] => " << x[i] << endl;
        i++;
    }

    return 0;
}