// C++ Bangla Tutorials 91 : Function Templates With Multiple Parameters

#include <iostream>
using namespace std;

template <class MyTemplate1, class MyTemplate2> // -> Multiple Parameters
MyTemplate1 add(MyTemplate1 a, MyTemplate2 b)
{
    return a + b;
}

int main()
{

    // cout << add(10, 20) << endl;
    cout << add(10.5, 20) << endl;

    return 0;
}