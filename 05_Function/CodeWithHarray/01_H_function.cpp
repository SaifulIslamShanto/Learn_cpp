#include <iostream>
using namespace std;

// int makeSum(int a, int b);
int makeSum(int, int);

// void greatting(void);
void greatting();

int main()
{
    int x, y;
    cout << "Enter Two Number for sum : ";
    cin >> x >> y;

    cout << makeSum(x, y); //-> x,y => Actual Perameters

    greatting();
    return 0;
}

int makeSum(int a, int b) //-> a,b => Formal Perameters
{
    return a + b;
}

void greatting()
{
    cout << "\nThank you!" << endl;
}