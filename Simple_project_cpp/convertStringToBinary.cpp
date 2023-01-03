
// => convertStringToBinary

#include <iostream>
#include <string>
#include <bitset>
using namespace std;
int main()
{

    string str = "c++";
    for (size_t i = 0; i < str.size(); i++)
    {

        cout << bitset<8>(str[i]) << " ";
    }

    return 0;
}