#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string Line;

    ifstream file("hello.txt");
    while (getline(file, Line))
    {
        cout << Line << endl;
    };

    file.close();
    return 0;
}
