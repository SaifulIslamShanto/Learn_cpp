#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int rendNumber = rand() % 5 + 1;
        cout << "Rendom Number is : " << rendNumber << endl;
    }
}