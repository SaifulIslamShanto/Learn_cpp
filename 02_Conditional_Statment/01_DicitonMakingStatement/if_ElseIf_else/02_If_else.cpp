#include <iostream>
using namespace std;

int main()
{
    int a = 350;
    int b = 30;

    if (a < b) //=> False -> 30 < 350
    {
        cout << a << " Is Less Then " << b << endl;
    }
    else //=> True ->  350 > 30
    {
        cout << a << " Is Greater Then " << b << endl;
    }
}