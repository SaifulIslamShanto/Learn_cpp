#include <iostream>
using namespace std;

//-> function Overloding

void sum(int x, int y)
{
    int add = x + y;
    cout << add << endl;
}

void sum(int x, int y, int z)
{
    int add = x + y + z;
    cout << add << endl;
}

void sum(double x, double y)
{
    double add = x + y;
    cout << add << endl;
}

int main()
{
    sum(10, 20);
    sum(10, 20, 30);
    sum(2.5, 2.5);
}