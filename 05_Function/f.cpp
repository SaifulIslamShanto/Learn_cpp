#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a - b;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << sum(x, y) << endl;
    cout << sum(5.5, 6.5) << endl;
}