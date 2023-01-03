#include <iostream>
using namespace std;

/* int x = 10; //-> Global Variable

int main()
{
    int x = 50; //-> First Priyority Local Variable
    cout << ::x << endl; //-> Calling Global Variable
} */

int x = 10; //-> Global Variable

int main()
{
    int x = 50;
    ::x = 20; // => Change Global Variable value
    cout << ::x << endl;
}