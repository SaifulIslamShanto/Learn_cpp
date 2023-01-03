#include <iostream>
using namespace std;

// -> C++ Data Type

/*
    -> Primitive Type
        => Boolean - True / False
        => Character - 'a' / 'e'
        => integer - 20 , -20
        => Floating point -1.5 , 1.5
        => Double - 1.25451
        => Valueless/Void - Null

    -> Derived -> Derived From Built in type
    => Array


    -> Modifiers
        => Signed
        => Unsigned
        => long
        => Short
 */

int main()
{
    /*     int a = 56;
        float f = 5.6;
        double d= 5.66664;
        char ch = 'a';
        bool a = true;
        cout << a << endl; */

    cout << "Size Of Funamental DataType : \n";
    cout << "===================================\n";
    cout << "This Sie of (char) : \t \t " << sizeof(char) << " bytes \n";
    cout << "This Sie of (short) : \t \t " << sizeof(short) << " bytes \n";
    cout << "This Sie of (int) : \t \t " << sizeof(int) << " bytes \n";
    cout << "This Sie of (long) : \t \t " << sizeof(long) << " bytes \n";
    cout << "This Sie of (long long) : \t " << sizeof(long long) << " bytes \n";
    cout << "This Sie of (float) : \t \t " << sizeof(float) << " bytes \n";
    cout << "This Sie of (double) : \t \t " << sizeof(double) << " bytes \n";
    cout << "This Sie of (long double) : \t " << sizeof(long double) << " bytes \n";
    cout << "This Sie of (bool) : \t \t " << sizeof(bool) << " bytes \n";
}