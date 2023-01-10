#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    /*     char message1[6] = {'h', 'e', 'l', 'l', 'o', '1'};
        for (int i = 0; i < 6; i++)
        {
            cout << message1[i];
        }
        cout << endl;

        char message2[] = {'h', 'e', 'l', 'l', 'o', '2', '\0'};
        for (int i = 0; i < 6; i++)
        {
            cout << message2[i];
        }
        cout << endl;

        char message3[] = "Hello_3";
        for (int i = 0; i < 7; i++)
        {
            cout << message3[i];
        } */

    char name[30];
    cout << "Enter Your Name : ";
    gets(name);

    cout << "Welcome " << name << endl;

    return 0;
}
