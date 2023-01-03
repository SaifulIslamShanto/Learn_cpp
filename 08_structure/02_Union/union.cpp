#include <iostream>
using namespace std;

union test
{
    int x, y;
};

int main()
{
    union test t1;
    t1.x = 10;

    cout << "t1.x Value is : " << t1.x << endl;
    cout << "t1.y Value is : " << t1.y << endl;

    t1.y = 20;
    cout << "t1.x Value is : " << t1.x << endl;
    cout << "t1.y Value is : " << t1.y << endl;

    return 0;
}