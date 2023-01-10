#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str_1 = "Saiful islam";
    string str_2 = " Shanto";
    string str_3;

    str_3 = str_1;
    cout << "String 3 is : " << str_3 << endl;

    str_3 = str_1 + str_2;
    cout << "str_1 + str_2 : " << str_3 << endl;

    int len = str_1.size();
    cout << "Length of string 1 : " << len << endl;
    return 0;
}