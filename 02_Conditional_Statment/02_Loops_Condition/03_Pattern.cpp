#include <iostream>
using namespace std;

// -> pattan

/* int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    { // -> OuterLoop
        for (int j = 1; j < i; j++)
        { // -> InnerLoop
            // cout << "*";
            cout << j << " ";
        }
        cout << endl;
    }
}
 */

/* int main()
{
    int num;
    cin >> num;

    for (int i = num; i >= 0; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
} */

//-> Peramid Pattan

int main()
{
    for (int i = 1, k = 0; i <= 5; i++, k = 0)
    {
        for (int j = 1; j <= 5 - i; ++j)
        {
            cout << " ";
        }
        while (k != 2 * i - 1)
        {
            cout << "*";
            ++k;
        }
        cout << endl;
    }
}