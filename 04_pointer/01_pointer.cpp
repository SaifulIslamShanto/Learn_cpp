#include <iostream>
#include <string>
using namespace std;
int main()
{
    //-> A Variable of Type Sting
    string Name = "Shanto";
    //-> A pointer Variable, with the Name ptr, that store the address of Name
    string *ptr = &Name;

    // ->Output The Value of Name
    cout << "Value Of Variable : " << Name << endl;
    // ->Output The Memory Address of Name
    cout << "Address of Variable : " << &Name << endl;
    // ->Output The Memory Address of Name with Pointer
    cout << "Address of Variable : " << ptr << endl;

    cout << "Value of Pointer : " << *ptr << endl;
}